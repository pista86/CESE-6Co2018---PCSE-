#include "network_application_protocol.h"

static nap_connection_status_t nap_connection_status;

void network_application_protocol_init(void)
{

}




nap_connection_status_t nap_authenticate(wiced_tcp_socket_t* socket)
{
    wiced_result_t              result;
    pipeline_result_t           pipeline_result;
    wiced_packet_t*          tcp_receive_packet;

//get_DCT_Authentication_Hash(&Authentication_Hash[64]);
    authenticate_user_password(Send_Message_Buffer, Authentication_Hash);
//    PRINTF_ARRAY(Send_Message_Buffer, Send_Message_Buffer_Length);

while(nap_connection_status != nap_authenticated)
{
    result = wiced_tcp_send_buffer (&socket, Send_Message_Buffer,  Send_Message_Buffer_Length);
    if( result == WICED_SUCCESS)
    {
        result = wiced_tcp_receive( &socket, &tcp_receive_packet, WICED_NEVER_TIMEOUT );
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



nap_connection_status_t nap_get_connection_status(void)
{
	return nap_connection_status;
}

void nap_set_connection_status(nap_connection_status_t connection_status)
{
	nap_connection_status = connection_status;
}
