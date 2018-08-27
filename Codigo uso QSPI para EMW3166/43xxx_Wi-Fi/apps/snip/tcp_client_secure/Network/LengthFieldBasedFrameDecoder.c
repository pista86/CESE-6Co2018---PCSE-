
#include "wiced.h"
#include "Globals.h"
#include "LengthFieldBasedFrameDecoder.h"


uint8_t     Received_Message[RECEIVE_MESSAGE_BUFFER_LENGTH];
uint32_t    Received_Message_Length;


uint8_t*                 received_data;
uint16_t                 fragment_available_data_length = 0;
uint16_t                 total_available_data_length;
uint8_t                  datastatus=DATA_INCOMPLETE;
uint32_t                 receivedData=0;
uint32_t                 dataLength=0;

pipeline_result_t LengthFieldBasedFrameDecoder (wiced_packet_t* tcp_receive_packet)
{

    wiced_packet_get_data( tcp_receive_packet, 0, (uint8_t**) &received_data, &fragment_available_data_length, &total_available_data_length );

                if ((receivedData==0) && (fragment_available_data_length>4))
                {
                    dataLength = (received_data[0] << 24) + (received_data[1] << 16) + (received_data[2] << 8) + received_data[3];
                    memcpy(&Received_Message[0], &received_data[4], fragment_available_data_length-4);
                    receivedData+=fragment_available_data_length-4;
                    wiced_packet_delete(tcp_receive_packet);
                    if (receivedData<dataLength){
                        datastatus=DATA_INCOMPLETE;
                        return pipe_Processed;
                    }else{
                        datastatus=DATA_COMPLETE;
                    }
                }
                if (datastatus==DATA_INCOMPLETE)
                {
                    wiced_packet_get_data( tcp_receive_packet, 0, (uint8_t**) &received_data, &fragment_available_data_length, &total_available_data_length );
                    memcpy(&Received_Message[receivedData], &received_data[0], fragment_available_data_length);
                    receivedData+=fragment_available_data_length;
                    wiced_packet_delete(tcp_receive_packet);
                    if (receivedData<dataLength){
                        datastatus=DATA_INCOMPLETE;
                        return pipe_Processed;
                    }else{
                        datastatus=DATA_COMPLETE;
                    }
                }
                Received_Message_Length=receivedData;
                receivedData=0;
return pipe_Propagate;
}







