
#include "wiced.h"
#include "Logan.h"
#include "TCP_Client_Persistent.h"
#include "Utils/Utils.h"
#include "Protocol.h"
#include "Globals.h"
#include "BytePacketFactory.h"
#include "LengthFieldBasedFrameDecoder.h"
#include "FirewallHandler.h"
#include "HandshakeHandler.h"
#include "Network/Utils/NetworkUtils.h"
#include "LoganFS/LoganFS.h"

authentication_status_t authenticate();
uint8_t validateDownload(uint8_t* Received_Message_Data);
void SendDownloadAccepted();
void sendDownloadFileDataReceived();
void SendUploadInit();
void SendGetUtcTimeMs();
void SendUploadFileData(uint32_t chunkN, uint8_t* data, uint16_t length);
wiced_result_t restart(void);
void SendAsk( void* arg );
void Process_SET_UTC_TIME_MS(void);
void Process_DOWNLOAD_INIT(void);
void Process_DOWNLOAD_FILE_DATA(void);
void Process_UPLOAD_FILE_DATA_RECEIVED(void);
void Process_UPLOAD_ACCEPTED(void);

wiced_timer_t   timerSendAsk;
//const wiced_ip_address_t INITIALISER_IPV4_ADDRESS( server_ip_address, TCP_SERVER_IP_ADDRESS );
static wiced_tcp_socket_t  tcp_client_socket;
wiced_queue_t SendQueue;

connection_status_t Connection_Status=Unconnected;
authentication_status_t Authentication_Status=Unauthenticated;

uint8_t     Send_Message_Buffer[SEND_MESSAGE_BUFFER_LENGTH+4];
uint32_t    Send_Message_Buffer_Length;

wiced_timed_event_t    event_object;

static download_file_t          FileDownload;
static upload_file_t            FileUpload;


uint8_t                 FileReadBuffer[UPLOAD_CHUNK_SIZE*1024];

Message_ID_t GetUtcTimeMsGetID;
static wiced_utc_time_ms_t UtcTimeMs;

static  Send_Message_t          MessageToSend;
static  Audio_Codec_Message_t   AudioCodecMessage;
static  uint8_t                 dwSendPin[6]={0};
static  uint8_t                 upDestPin[6]={0};
static  uint64_t                dwID=0;
static  uint8_t                 dwAliveCount=0;
static  uint64_t                upID=0;
static  uint32_t                chunkN=0;
static  uint16_t                uploadChunksize=0;
static LoganFS_result_t         LoganFS_result;

wiced_result_t establishConnection( void* arg )
{
    wiced_result_t              WicedResult;
    logan_result_t              LoganResult;
    pipeline_result_t           pipeline_result;
    wiced_packet_t*             tcp_receive_packet;
    uint16_t                    receiveTimeOutCount=0;
    wiced_ip_address_t          server_ip_address;

    wiced_rtos_register_timed_event( &event_object, LOGAN_CheckAlive_WORKER_THREAD, &CheckAlive, 2000, 0);

  //  wiced_rtos_register_timed_event( &event_object, LOGAN_DownloadTimeout_WORKER_THREAD, &CheckDownloadAlive, 1000, 0);

    WicedResult=wiced_tcp_create_socket(&tcp_client_socket, WICED_STA_INTERFACE);
    if ( WicedResult!= WICED_SUCCESS)
    {
        Logan_Restart(Logan_Network_Error_Restart);
    }
    WicedResult=wiced_tcp_bind( &tcp_client_socket, TCP_SERVER_PORT );
    if ( WicedResult!= WICED_SUCCESS)
    {
        Logan_Restart(Logan_Network_Error_Restart);
    }
    while(1)
    {
        Authentication_Status=Unauthenticated;
        LoganResult = Logan_Hostname_Lookup(TCP_SERVER_HOST_NAME, &server_ip_address, HOST_NAME_LOOKUP_RETRIES_N);
        if (LoganResult==Logan_Success)
        {

        }else{
            SAFE_PRINTF(("ERROR: Logan_Hostname_Lookup %d\n", LoganResult));
            break;
        }
        LoganResult = Logan_TCP_Connect(&tcp_client_socket, &server_ip_address, TCP_SERVER_PORT, TCP_CONNECT_RETRIES_N);
        if (LoganResult==Logan_Success)
        {
            Connection_Status=Connected;
        }else{
            SAFE_PRINTF(("ERROR: Logan_TCP_Connect %d\n", LoganResult));
            break;
        }
        while(1)
        {
            if (Authentication_Status!=Authenticated)
            {
                Authentication_Status=authenticate();
                if (Authentication_Status==Authenticated)
                {
                    SendGetUtcTimeMs();
                }
            }else{
                WicedResult = wiced_tcp_receive( &tcp_client_socket, &tcp_receive_packet, TCP_CLIENT_RECEIVE_TIMEOUT );
                    if( WicedResult == WICED_SUCCESS)
                    {
                        pipeline_result = LengthFieldBasedFrameDecoder (tcp_receive_packet);
                        if (pipeline_result==pipe_Propagate)
                        {
                            wiced_packet_delete(tcp_receive_packet);
                            pipeline_result=FirewallHandler(Received_Message, Received_Message_Length);
                            switch(pipeline_result)
                            {
                            case pipe_Authenticated:

                                break;
                            case pipe_Propagate:
                                switch (Received_Message[1])
                                {
                                case REPLY_ALIVE:
                                    uint8_t_TO_uint64_t(Received_Message, &LastALIVE, 2);
                                    break;
                                case DOWNLOAD_INIT:
                                    Process_DOWNLOAD_INIT();
                                    break;
                                case DOWNLOAD_FILE_DATA:
                                    Process_DOWNLOAD_FILE_DATA();
                                    break;
                                case UPLOAD_ACCEPTED:
                                    Process_UPLOAD_ACCEPTED();
                                    break;
                                case UPLOAD_FILE_DATA_RECEIVED:
                                    Process_UPLOAD_FILE_DATA_RECEIVED();
                                    break;
                                case SET_UTC_TIME_MS:
                                    Process_SET_UTC_TIME_MS();
                                    break;
                                default:
                                    SAFE_PRINTF(("PAQUETE no interpretado!!!!!!!!!!!!!!!!!!1\n"));
                                    break;
                                }
                                break;
                           default:
                                SAFE_PRINTF(("PIPELINE RESULT no interpretado!!!!!!!!!!!!!!!!!!1\n"));
                                break;
                           }
                        }
                    }else{
                        if (WicedResult!=WICED_TIMEOUT)
                        {
                            SAFE_PRINTF(("Error en escucha de canal %d\n", WicedResult));
                            break;
                        }else{
                            PRINTF_DATE_TIME();
                            if (FileUpload.InProgress == 0 && wiced_rtos_is_queue_empty(&SendQueue)!=WICED_SUCCESS)
                            {
                                wiced_rtos_pop_from_queue(&SendQueue, &MessageToSend, WICED_NO_WAIT);
                                SAFE_PRINTF(("INICIO UPLOAD\n"));
                                FileUpload.FileLength=MessageToSend.File.fileSize;
                                FileUpload.ID=MessageToSend.File.fileName;
                                memcpy(&FileUpload.destPin[0], &MessageToSend.DESTPIN[0], 6);
                                FileUpload.Type=MessageToSend.File.fileExt;

                                TickTock_Start();

                                SendUploadInit();
                            }
                            receiveTimeOutCount++;
                            if (receiveTimeOutCount==TCP_CLIENT_CHECK_SERVER_CONN)
                            {
                                SendAsk(0);
                                receiveTimeOutCount=0;
                            }

                        }
                    }

                }

            }
            SAFE_PRINTF(("Fin de while de comunicacion \n"));
    }
    Logan_Restart(Logan_Network_Error_Restart);

    return WICED_SUCCESS;
}

void Process_SET_UTC_TIME_MS(void)
{
    uint8_t_TO_uint64_t(Received_Message, &GetUtcTimeMsGetID.Now, 8);
    if (GetUtcTimeMsGetID.Last==GetUtcTimeMsGetID.Now)
    {
    uint8_t_TO_uint64_t(Received_Message, &UtcTimeMs, 16);
    wiced_time_set_utc_time_ms(&UtcTimeMs);
    }
}
void Process_DOWNLOAD_INIT(void)
{
    if (validateDownload(Received_Message)==Download_FileFirst)
       {
           LoganFS_result=OpenFileWrite(Message_Block, FileDownload.DownloadFileLength, FileDownload.downloadID, FileDownload.fileType, FileDownload.downloadSenderPin);
           if (LoganFS_result==LoganFS_Success)
           {
               SendDownloadAccepted();
               SAFE_PRINTF(("INICIO DOWNLOAD\n"));
               TickTock_Start();
               FileDownload.downloadInProgress=1;
           }
       }
}
void Process_DOWNLOAD_FILE_DATA(void)
{
    uint8_t_TO_PIN(Received_Message, dwSendPin, 2);
    uint8_t_TO_uint64_t(Received_Message, &dwID, 16);
    uint8_t_TO_uint32_t(Received_Message, &chunkN, 10);
    if (FileDownload.ReceivedChunksN==chunkN)
    {
        if (memcmp(dwSendPin, FileDownload.downloadSenderPin, 6) == 0 && FileDownload.downloadID==dwID)
        {
            FileWrite(Message_Block, &Received_Message[32], Received_Message_Length-32);
            sendDownloadFileDataReceived();
            FileDownload.ReceivedChunksN++;
            if (FileDownload.ReceivedChunksN==FileDownload.ChunksN)
            {
                CloseFileWrite(Message_Block);
                AudioCodecMessage.Command=Play;
                AudioCodecMessage.File=SetLoganFile(Message_Block, FileDownload.downloadID, 0, FileDownload.fileType);
                wiced_rtos_push_to_queue(&AudioCodecQueue, &AudioCodecMessage, WICED_NO_WAIT);
                SAFE_PRINTF(("FIN DOWNLOAD: %lu\n", TickTock_Stop()));
                FileDownload.ReceivedChunksN=0;
                FileDownload.downloadInProgress=0;
            }
        }
    }
}

void Process_UPLOAD_FILE_DATA_RECEIVED(void)
{
    //SAFE_PRINTF(("transmittedBytes: %lu\n",FileUpload.transmittedBytes));
    //SAFE_PRINTF(("FileLength: %lu\n",FileUpload.FileLength));
    if (FileUpload.transmittedBytes<FileUpload.FileLength){
        FileUpload.readbytes=FileRead(Recording_Block, UPLOAD_CHUNK_SIZE*1024, FileReadBuffer);
        SendUploadFileData(FileUpload.transmittedChunksN, FileReadBuffer, FileUpload.readbytes);
        FileUpload.transmittedBytes+=FileUpload.readbytes;

        //SAFE_PRINTF(("FileUpload.readbytes: %lu\n",FileUpload.readbytes));

        FileUpload.transmittedChunksN++;
    }else{
        FileUpload.InProgress=0;
        CloseFileRead(Recording_Block);
        SetProcessingFinished(Recording_Block, FileUpload.ID);
        FileUpload.transmittedBytes=0;
        FileUpload.transmittedChunksN=0;

        SAFE_PRINTF(("FIN UPLOAD: %lu\n",TickTock_Stop()));

        EraseFile(Recording_Block, FileUpload.ID);
        SAFE_PRINTF(("ARCHIVO GRABADO SUBIDO AL SERVIDOR BORRADO\n"));
    }
}
void Process_UPLOAD_ACCEPTED(void)
{
    SAFE_PRINTF(("UPLOAD_ACCEPTED \n"));
    uint8_t_TO_uint32_t(Received_Message, &FileUpload.transmittedChunksN, 12);
    if (FileUpload.transmittedChunksN!=0xFFFFFFFF)
    {
        uint8_t_TO_PIN(Received_Message, upDestPin, 2);
        uint8_t_TO_uint64_t(Received_Message, &upID, 16);
        uint8_t_TO_uint16_t(Received_Message, &uploadChunksize, 10);
        if (uploadChunksize==0 && memcmp(upDestPin, FileUpload.destPin, 6)==0 && FileUpload.ID==upID)
        {
            FileUpload.InProgress=1;

            OpenFileRead(Recording_Block, FileUpload.ID);
            Skip(Recording_Block, FileUpload.transmittedChunksN*UPLOAD_CHUNK_SIZE*1024);
            //FileUpload.transmittedBytes=FileUpload.transmittedChunksN*UPLOAD_CHUNK_SIZE*1024;

            FileUpload.readbytes=FileRead(Recording_Block, UPLOAD_CHUNK_SIZE*1024, FileReadBuffer);

            SetProcessingStarted(Recording_Block, FileUpload.ID);

            SendUploadFileData(FileUpload.transmittedChunksN, FileReadBuffer, FileUpload.readbytes);

            SAFE_PRINTF(("SendedUploadFileData \n"));

            FileUpload.transmittedBytes+=FileUpload.readbytes;
            FileUpload.transmittedChunksN++;
        }else{
            SAFE_PRINTF(("ERROR UPLOAD_ACCEPTED \n"));
        }
    }else{
        FileUpload.InProgress=0;
        SetProcessingFinished(Recording_Block, FileUpload.ID);
        FileUpload.transmittedBytes=0;
        FileUpload.transmittedChunksN=0;
        SAFE_PRINTF(("FIN UPLOAD: %lu\n",TickTock_Stop()));
        EraseFile(Recording_Block, FileUpload.ID);
        SAFE_PRINTF(("ARCHIVO GRABADO QUE YA ESTABA SUBIDO AL SERVIDOR BORRADO\n"));
    }
}

authentication_status_t authenticate(){
    wiced_result_t              result;
    pipeline_result_t           pipeline_result;
    wiced_packet_t*          tcp_receive_packet;

//get_DCT_Authentication_Hash(&Authentication_Hash[64]);
    authenticate_user_password(Send_Message_Buffer, Authentication_Hash);
//    PRINTF_ARRAY(Send_Message_Buffer, Send_Message_Buffer_Length);

while(Authentication_Status!=Authenticated)
{
    result = wiced_tcp_send_buffer (&tcp_client_socket, Send_Message_Buffer,  Send_Message_Buffer_Length);
    if( result == WICED_SUCCESS)
    {
        result = wiced_tcp_receive( &tcp_client_socket, &tcp_receive_packet, WICED_NEVER_TIMEOUT );
        if( result == WICED_SUCCESS)
        {
            pipeline_result = LengthFieldBasedFrameDecoder (tcp_receive_packet);
            wiced_packet_delete(tcp_receive_packet);
            if (pipeline_result==pipe_Propagate)
            {
                pipeline_result = FirewallHandler(Received_Message, Received_Message_Length);
                if (pipeline_result==pipe_Authenticated)
                {
                    return Authenticated;
                }
            }
        }else{
            if (Connection_Status==Unconnected)
            {
                return Error_Unconnected;
            }
        }
    }else{
        if (Connection_Status==Unconnected)
        {
            return Error_Unconnected;
        }else{
            wiced_rtos_delay_milliseconds(5000);
        }
    }
}

return Error_Unconnected;
}

void SendAsk( void* arg ){
    wiced_result_t      result;
    uint32_t            Length=10;
    uint8_t             Send_Ask_Buffer[Length+4];
    Send_Ask_Buffer[0] = Length >> 24;
    Send_Ask_Buffer[1] = Length >> 16;
    Send_Ask_Buffer[2] = Length >> 8;
    Send_Ask_Buffer[3] = Length;
    Send_Ask_Buffer[4] = V001;
    Send_Ask_Buffer[5] = ASK_ALIVE;
    wiced_time_get_utc_time_ms (&LastASK);
    Send_Ask_Buffer[6] = LastASK >> 56;
    Send_Ask_Buffer[7] = LastASK >> 48;
    Send_Ask_Buffer[8] = LastASK >> 40;
    Send_Ask_Buffer[9] = LastASK >> 32;
    Send_Ask_Buffer[10] = LastASK >> 24;
    Send_Ask_Buffer[11] = LastASK >> 16;
    Send_Ask_Buffer[12] = LastASK >> 8;
    Send_Ask_Buffer[13] = LastASK;
    result = wiced_tcp_send_buffer (&tcp_client_socket, Send_Ask_Buffer,  14);
   // HandshakeHandler_Start();
    if( result == WICED_SUCCESS)
    {
        SAFE_PRINTF(("ASK enviado correctamente\n"));
    }else{
        SAFE_PRINTF(("Error al enviar ASK: %d\n",result));
    }
}

void SendDownloadAccepted()
{
    wiced_result_t  result;
    download_accepted(Send_Message_Buffer, &Send_Message_Buffer_Length, FileDownload.downloadSenderPin, DOWNLOAD_CHUNK_SIZE, FileDownload.ReceivedChunksN, FileDownload.downloadID);
    result = wiced_tcp_send_buffer (&tcp_client_socket, Send_Message_Buffer,  Send_Message_Buffer_Length);
    if( result != WICED_SUCCESS)
    {
        SAFE_PRINTF(("Error al enviar SendDownloadAccepted: %d\n",result));
    }
}

void sendDownloadFileDataReceived(){
    wiced_result_t  result;
    download_file_data_received(Send_Message_Buffer, &Send_Message_Buffer_Length, FileDownload.downloadSenderPin, FileDownload.ReceivedChunksN, FileDownload.downloadID);
    result = wiced_tcp_send_buffer (&tcp_client_socket, Send_Message_Buffer,  Send_Message_Buffer_Length);
    if( result != WICED_SUCCESS)
    {
        SAFE_PRINTF(("sendDownloadFileDataReceived: %d\n",result));
    }
}

void SendUploadInit()
{
    wiced_result_t  result;
    upload_init(Send_Message_Buffer, &Send_Message_Buffer_Length, FileUpload.destPin, FileUpload.Type, FileUpload.FileLength, FileUpload.ID, UPLOAD_CHUNK_SIZE);
    result = wiced_tcp_send_buffer (&tcp_client_socket, Send_Message_Buffer,  Send_Message_Buffer_Length);
    if( result != WICED_SUCCESS)
    {
        SAFE_PRINTF(("Error al enviar SendUploadInit: %d\n",result));
    }
}
void SendUploadFileData(uint32_t chunkN, uint8_t* data, uint16_t length)
{
    wiced_result_t  result;
    upload_file_data(Send_Message_Buffer, &Send_Message_Buffer_Length, FileUpload.destPin, chunkN, FileUpload.ID,  data, length);
    result = wiced_tcp_send_buffer (&tcp_client_socket, Send_Message_Buffer,  Send_Message_Buffer_Length);
    if( result != WICED_SUCCESS)
    {
        SAFE_PRINTF(("Error al enviar SendUploadFileData: %d\n",result));
    }
}
void SendGetUtcTimeMs()
{
    wiced_result_t  result;
    GetUtcTimeMsGetID.Last=Rand64();
    get_utc_time_ms(Send_Message_Buffer, &Send_Message_Buffer_Length, GetUtcTimeMsGetID.Last);
    result = wiced_tcp_send_buffer (&tcp_client_socket, Send_Message_Buffer,  Send_Message_Buffer_Length);
    if( result != WICED_SUCCESS)
    {
        SAFE_PRINTF(("Error al enviar SendGetUtcTimeMs: %d\n",result));
    }
}


download_result_t validateDownload(uint8_t* Received_Message_Data)
{
    download_result_t   res;
    uint8_t             DownloadFileID=0;
    uint32_t            chunkSizeBytes=0;
    uint32_t            existDownloadFileLength=0;
    uint8_t             FileStatus=0;
    uint8_t             FileProgress=0;
    LoganFS_result_t    FileExistsResult;

    // verificar si el PIN origen puede enviarnos mensajes
    if (FileDownload.downloadInProgress==1){
        res=1;
    }else{
        uint8_t_TO_PIN(Received_Message_Data, FileDownload.downloadSenderPin, 2);
        FileDownload.fileType=Received_Message_Data[10];
        SAFE_PRINTF(("FileDownload.fileType: 0x%02x  ", FileDownload.fileType));
        uint8_t_TO_uint32_t(Received_Message_Data, &FileDownload.DownloadFileLength, 11);
        uint8_t_TO_uint64_t(Received_Message_Data, &FileDownload.downloadID, 16);
        chunkSizeBytes=DOWNLOAD_CHUNK_SIZE*1024;
        FileDownload.ChunksN = (FileDownload.DownloadFileLength + chunkSizeBytes - 1) / chunkSizeBytes;
        FileExistsResult = FileExists(Message_Block, FileDownload.downloadID, &DownloadFileID);
        if(FileExistsResult==LoganFS_FileExists) {
            FileStatus=GetStatus(DownloadFileID);
            FileProgress=GetWriteProgress(DownloadFileID);
                if (FileStatus==0x1F) {
                    // Ya existe el archivo y esta completo
                    res=Download_FileAlreadyExists;
                }else if(FileStatus==0x3F){
                    // Ya existe el archivo y esta incompleto
                    existDownloadFileLength=((float)FileProgress/(float)64)*FileDownload.DownloadFileLength;
                    FileDownload.ReceivedChunksN=existDownloadFileLength/chunkSizeBytes;
                    res=Download_FileAppend;
                }
        }else{
            res=Download_FileFirst;
        }
    }
    return res;
}

wiced_result_t CheckDownloadAlive( void* arg )
{
    if (FileDownload.downloadInProgress==1 && dwAliveCount==TCP_DOWNLOAD_FILE_TIMEOUT_S)
    {
        SAFE_PRINTF(("DOWNLOAD TIMEOUT\n"));
        FileDownload.downloadInProgress=0;
        dwAliveCount=0;
        FS_Check();
    }else{
        dwAliveCount++;
    }
   return WICED_SUCCESS;
}






