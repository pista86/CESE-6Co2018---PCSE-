

#define SERVER_HOST_NAME "loganiot.com"

#define AUDIO_OUT_WORKER_THREAD                  ((wiced_worker_thread_t*)&audio_out_worker_thread )






extern wiced_queue_t audio_player_queque;
extern wiced_queue_t audio_recorder_queque;
extern wiced_queue_t audio_player_play_data_queque;
extern wiced_queue_t audio_recorder_record_data_queque;
