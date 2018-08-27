
#pragma once

#define DATA_COMPLETE                       0
#define DATA_INCOMPLETE                     1



typedef enum {pipe_Processed,
              pipe_Propagate,
              pipe_Authenticated,
              pipe_Dropped} pipeline_result_t ;




extern pipeline_result_t LengthFieldBasedFrameDecoder (wiced_packet_t* tcp_receive_packet);

