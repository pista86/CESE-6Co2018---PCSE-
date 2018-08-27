
#include "wiced.h"
#include "BytePacketFactory.h"
#include "Protocol.h"


void authenticate_user_password(uint8_t* Send_Message_Buffer_Data, uint8_t* Authentication_Hash)
{
    uint32_t    Length=80;
    Send_Message_Buffer_Data[0] = Length >> 24;
    Send_Message_Buffer_Data[1] = Length >> 16;
    Send_Message_Buffer_Data[2] = Length >> 8;
    Send_Message_Buffer_Data[3] = Length;
    Send_Message_Buffer_Data[4] = V001;
    Send_Message_Buffer_Data[5] = AUTHENTICATE_USER_PASSWORD;
    memset(&Send_Message_Buffer_Data[6],0,14);
    memcpy(&Send_Message_Buffer_Data[20], &Authentication_Hash[0], 64);


}

void download_accepted(uint8_t* Send_Message_Buffer_Data, uint32_t* Send_Message_Buffer_Length,
                        uint8_t* senderPin, uint16_t chunkLength, uint32_t ChunkStartN, uint64_t transferdId)
{
    uint32_t    Length=32;
    Send_Message_Buffer_Data[0] = Length >> 24;
    Send_Message_Buffer_Data[1] = Length >> 16;
    Send_Message_Buffer_Data[2] = Length >> 8;
    Send_Message_Buffer_Data[3] = Length;
    Send_Message_Buffer_Data[4] = V001;
    Send_Message_Buffer_Data[5] = DOWNLOAD_ACCEPTED;
    Send_Message_Buffer_Data[6] = senderPin[0];
    Send_Message_Buffer_Data[7] = senderPin[1];
    Send_Message_Buffer_Data[8] = senderPin[2];
    Send_Message_Buffer_Data[9] = senderPin[3];
    Send_Message_Buffer_Data[10] = senderPin[4];
    Send_Message_Buffer_Data[11] = senderPin[5];
    memset(&Send_Message_Buffer_Data[12],0,2);
    Send_Message_Buffer_Data[14] = chunkLength >> 8;
    Send_Message_Buffer_Data[15] = chunkLength;
    Send_Message_Buffer_Data[16] = ChunkStartN >> 24;
    Send_Message_Buffer_Data[17] = ChunkStartN >> 16;
    Send_Message_Buffer_Data[18] = ChunkStartN >> 8;
    Send_Message_Buffer_Data[19] = ChunkStartN;
    Send_Message_Buffer_Data[20] = transferdId >> 56;
    Send_Message_Buffer_Data[21] = transferdId >> 48;
    Send_Message_Buffer_Data[22] = transferdId >> 40;
    Send_Message_Buffer_Data[23] = transferdId >> 32;
    Send_Message_Buffer_Data[24] = transferdId >> 24;
    Send_Message_Buffer_Data[25] = transferdId >> 16;
    Send_Message_Buffer_Data[26] = transferdId >> 8;
    Send_Message_Buffer_Data[27] = transferdId;
    memset(&Send_Message_Buffer_Data[28], 0, 8);
    *Send_Message_Buffer_Length = Length + 4;
}

void download_file_data_received(uint8_t* Send_Message_Buffer_Data, uint32_t* Send_Message_Buffer_Length,
                                    uint8_t* senderPin, uint32_t chunkN, uint64_t transferdId)
{
    uint32_t    Length=32;
    Send_Message_Buffer_Data[0] = Length >> 24;
    Send_Message_Buffer_Data[1] = Length >> 16;
    Send_Message_Buffer_Data[2] = Length >> 8;
    Send_Message_Buffer_Data[3] = Length;
    Send_Message_Buffer_Data[4] = V001;
    Send_Message_Buffer_Data[5] = DOWNLOAD_FILE_DATA_RECEIVED;
    Send_Message_Buffer_Data[6] = senderPin[0];
    Send_Message_Buffer_Data[7] = senderPin[1];
    Send_Message_Buffer_Data[8] = senderPin[2];
    Send_Message_Buffer_Data[9] = senderPin[3];
    Send_Message_Buffer_Data[10] = senderPin[4];
    Send_Message_Buffer_Data[11] = senderPin[5];
    //memset(&Send_Message_Buffer_Data[12],0,2);
    Send_Message_Buffer_Data[14] = chunkN >> 24;
    Send_Message_Buffer_Data[15] = chunkN >> 16;
    Send_Message_Buffer_Data[16] = chunkN >> 8;
    Send_Message_Buffer_Data[17] = chunkN;
    //memset(&Send_Message_Buffer_Data[18],0,2);
    Send_Message_Buffer_Data[20] = transferdId >> 56;
    Send_Message_Buffer_Data[21] = transferdId >> 48;
    Send_Message_Buffer_Data[22] = transferdId >> 40;
    Send_Message_Buffer_Data[23] = transferdId >> 32;
    Send_Message_Buffer_Data[24] = transferdId >> 24;
    Send_Message_Buffer_Data[25] = transferdId >> 16;
    Send_Message_Buffer_Data[26] = transferdId >> 8;
    Send_Message_Buffer_Data[27] = transferdId;
    //memset(&Send_Message_Buffer_Data[28], 0, 8);
    *Send_Message_Buffer_Length = Length + 4;
}


uint16_t upload_init(uint8_t* Send_Message_Buffer_Data,
                 uint32_t destPin, uint8_t fileType, uint32_t fileLength, uint32_t transferdId)
{
    static const uint16_t length=16;
    Send_Message_Buffer_Data[0] = length >> 24;
    Send_Message_Buffer_Data[1] = length >> 16;
    Send_Message_Buffer_Data[2] = length >> 8;
    Send_Message_Buffer_Data[3] = length;
    Send_Message_Buffer_Data[4] = V001;
    Send_Message_Buffer_Data[5] = UPLOAD_INIT;
    Send_Message_Buffer_Data[6] = destPin >> 24;
    Send_Message_Buffer_Data[7] = destPin >> 16;
    Send_Message_Buffer_Data[8] = destPin >> 8;
    Send_Message_Buffer_Data[9] = destPin;
    Send_Message_Buffer_Data[10] = fileType;
    Send_Message_Buffer_Data[11] = fileLength >> 24;
    Send_Message_Buffer_Data[12] = fileLength >> 16;
    Send_Message_Buffer_Data[13] = fileLength >> 8;
    Send_Message_Buffer_Data[14] = fileLength;
    Send_Message_Buffer_Data[15] = transferdId >> 24;
    Send_Message_Buffer_Data[16] = transferdId >> 16;
    Send_Message_Buffer_Data[17] = transferdId >> 8;
    Send_Message_Buffer_Data[18] = transferdId;
    memset(&Send_Message_Buffer_Data[19],0,1);
    return length + 4;
}

uint16_t big_data(uint8_t* Send_Message_Buffer_Data, uint16_t dataLength)
{
    Send_Message_Buffer_Data[0] = dataLength >> 24;
    Send_Message_Buffer_Data[1] = dataLength >> 16;
    Send_Message_Buffer_Data[2] = dataLength >> 8;
    Send_Message_Buffer_Data[3] = dataLength;
    return dataLength + 4;
}

void upload_file_data(uint8_t* Send_Message_Buffer_Data, uint32_t* Send_Message_Buffer_Length,
                 uint8_t* destPin, uint32_t chunkN, uint64_t transferdId, uint8_t* chunkData, uint16_t chunkLength)
{
    uint32_t    Length= 32 + chunkLength;
    Send_Message_Buffer_Data[0] = Length >> 24;
    Send_Message_Buffer_Data[1] = Length >> 16;
    Send_Message_Buffer_Data[2] = Length >> 8;
    Send_Message_Buffer_Data[3] = Length;
    Send_Message_Buffer_Data[4] = V001;
    Send_Message_Buffer_Data[5] = UPLOAD_FILE_DATA;
    Send_Message_Buffer_Data[6] = destPin[0];
    Send_Message_Buffer_Data[7] = destPin[1];
    Send_Message_Buffer_Data[8] = destPin[2];
    Send_Message_Buffer_Data[9] = destPin[3];
    Send_Message_Buffer_Data[10] = destPin[4];
    Send_Message_Buffer_Data[11] = destPin[5];
    memset(&Send_Message_Buffer_Data[12],0,2);
    Send_Message_Buffer_Data[14] = chunkN >> 24;
    Send_Message_Buffer_Data[15] = chunkN >> 16;
    Send_Message_Buffer_Data[16] = chunkN >> 8;
    Send_Message_Buffer_Data[17] = chunkN;
     memset(&Send_Message_Buffer_Data[18], 0, 2);
    Send_Message_Buffer_Data[20] = transferdId >> 56;
    Send_Message_Buffer_Data[21] = transferdId >> 48;
    Send_Message_Buffer_Data[22] = transferdId >> 40;
    Send_Message_Buffer_Data[23] = transferdId >> 32;
    Send_Message_Buffer_Data[24] = transferdId >> 24;
    Send_Message_Buffer_Data[25] = transferdId >> 16;
    Send_Message_Buffer_Data[26] = transferdId >> 8;
    Send_Message_Buffer_Data[27] = transferdId;
    memset(&Send_Message_Buffer_Data[28], 0, 8);
    memcpy(&Send_Message_Buffer_Data[36], &chunkData[0], chunkLength);
    *Send_Message_Buffer_Length = Length + 4;
}

void get_utc_time_ms(uint8_t* Send_Message_Buffer_Data, uint32_t* Send_Message_Buffer_Length, uint64_t getId)
{
    uint32_t    Length= 16;
    Send_Message_Buffer_Data[0] = Length >> 24;
    Send_Message_Buffer_Data[1] = Length >> 16;
    Send_Message_Buffer_Data[2] = Length >> 8;
    Send_Message_Buffer_Data[3] = Length;
    Send_Message_Buffer_Data[4] = V001;
    Send_Message_Buffer_Data[5] = GET_UTC_TIME_MS;
    memset(&Send_Message_Buffer_Data[6],0,6);
    Send_Message_Buffer_Data[12] = getId >> 56;
    Send_Message_Buffer_Data[13] = getId >> 48;
    Send_Message_Buffer_Data[14] = getId >> 40;
    Send_Message_Buffer_Data[15] = getId >> 32;
    Send_Message_Buffer_Data[16] = getId >> 24;
    Send_Message_Buffer_Data[17] = getId >> 16;
    Send_Message_Buffer_Data[18] = getId >> 8;
    Send_Message_Buffer_Data[19] = getId;
    *Send_Message_Buffer_Length = Length + 4;
}
