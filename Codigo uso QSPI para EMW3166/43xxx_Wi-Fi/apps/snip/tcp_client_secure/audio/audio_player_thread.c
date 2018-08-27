#include "audio_player_thread.h"

wiced_queue_t audio_player_play_data_queque;

static void audio_player_play(uint8_t FD);
static void init_queues(void);
static uint8_t storageReadBuffer[AUDIO_OUT_BUFFER_LENGTH_BYTES / 2];

static void audio_out_play_ended_callback(void);

wiced_result_t audio_player_thread_start(void* arg)
{
	audio_player_queue_message_t audioPlayerQueueMessage;
	fs_result_t fsResult;
	uint8_t FD;

	init_queues();

	audio_out_init(audio_out_play_ended_callback);

	while (1)
	{
		wiced_rtos_pop_from_queue(&audio_player_queque, &audioPlayerQueueMessage,
		NEVER_TIMEOUT);

		fsResult = storage_open_file_read(&audioPlayerQueueMessage.file, &FD);

		if (fsResult == FS_SUCCES)
		{
			audio_player_play(FD);
		}

	}

}

static void init_queues(void)
{
	wiced_rtos_init_queue(&audio_player_play_data_queque, "AudioPlayerPlayDataQueue",
	SIZE_OF_AUDIO_PLAYER_PLAY_DATA_QUEUE_MESSAGE, AUDIO_PLAYER_PLAY_DATA_QUEUE_DEPTH);
}

static void audio_player_play(uint8_t FD)
{
	audio_player_play_data_queue_message_t audioPlayerPlayDataQueueMessage;
	uint32_t readBytes;

	// Comenzar reproducción

	storage_read_file(FD, storageReadBuffer, &readBytes, sizeof(storageReadBuffer));

	audio_out_play((int16_t *) storageReadBuffer, readBytes / 2);

	while (1)
	{
		// recibir orden de escritura de más datos
		wiced_rtos_pop_from_queue(&audio_player_play_data_queque, &audioPlayerPlayDataQueueMessage,
		WICED_NEVER_TIMEOUT);

		storage_read_file(FD, storageReadBuffer, &readBytes,
				audioPlayerPlayDataQueueMessage.samples * AUDIO_OUT_BYTES_PER_SAMPLE);

		// copiar datos en buffer
		if (audioPlayerPlayDataQueueMessage.dataPosition == 0)
		{
			audio_out_process_lower_half((int16_t *) storageReadBuffer, readBytes / 2);
		}
		else
		{
			audio_out_process_higher_half((int16_t *) storageReadBuffer, readBytes / 2);
		}

	}

}

static void audio_out_play_ended_callback(void)
{

}
