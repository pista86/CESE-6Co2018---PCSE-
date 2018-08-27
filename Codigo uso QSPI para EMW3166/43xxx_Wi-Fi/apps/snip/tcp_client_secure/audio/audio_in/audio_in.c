#include "audio_in.h"

static uint8_t audio_in_buffer[AUDIO_IN_MIC_PDM_BUFFER_LENGTH];
static uint8_t stopRecording;
static audio_recorder_record_data_queue_message_t audio_recorder_record_data_queue_message;

static void audio_in_i2s_transfer_complete_callBack(void);
static void audio_in_i2s_half_transfer_callBack(void);

void audio_in_init(int16_t micGain)
{
	mic_pdm_i2s_init(micGain, AUDIO_IN_MIC_PCM_RESULT_LENGTH, AUDIO_IN_MIC_PDM_DECIMATION);

	audio_in_i2s_init(AUDIO_IN_MIC_PDM_FS, audio_in_i2s_transfer_complete_callBack,
			audio_in_i2s_half_transfer_callBack);

	stopRecording = 0;
}

void audio_in_set_mic_gain(int16_t micGain)
{
	mic_pdm_set_mic_gain(micGain);
}

void audio_in_start_capture(void)
{
	audio_in_i2s_start_capture(audio_in_buffer, AUDIO_IN_MIC_PDM_BUFFER_LENGTH);
}

void audio_in_stop_capture(void)
{
	stopRecording = 1;
}

void audio_in_process_lower_half(int16_t * pcmDataPtr, uint32_t * pcmDataLength)
{
	*pcmDataLength = mic_pdm_i2s_process(&audio_in_buffer[0], pcmDataPtr);
}

void audio_in_process_higher_half(int16_t * pcmDataPtr, uint32_t * pcmDataLength)
{
	*pcmDataLength = mic_pdm_i2s_process(&audio_in_buffer[AUDIO_IN_MIC_PDM_BUFFER_LENGTH / 2],
			pcmDataPtr);
}

static void audio_in_i2s_transfer_complete_callBack(void)
{
	// procesar datos en mitad superior

	audio_recorder_record_data_queue_message.dataPosition = 1;

	if (!stopRecording)
	{
		audio_recorder_record_data_queue_message.lastData = 0;
		wiced_rtos_push_to_queue(&audio_player_play_data_queque,
				&audio_recorder_record_data_queue_message,
				NO_WAIT);
	}
	else
	{
		audio_recorder_record_data_queue_message.lastData = 1;
		wiced_rtos_push_to_queue(&audio_player_play_data_queque,
				&audio_recorder_record_data_queue_message,
				NO_WAIT);
		audio_in_i2s_stop_capture();
		stopRecording = 0;
	}
}
static void audio_in_i2s_half_transfer_callBack(void)
{
	// procesar datos en mitad inferior

	audio_recorder_record_data_queue_message.dataPosition = 0;

	wiced_rtos_push_to_queue(&audio_player_play_data_queque,
			&audio_recorder_record_data_queue_message,
			NO_WAIT);

	if (!stopRecording)
	{
		audio_recorder_record_data_queue_message.lastData = 0;
		wiced_rtos_push_to_queue(&audio_player_play_data_queque,
				&audio_recorder_record_data_queue_message,
				NO_WAIT);
	}
	else
	{
		audio_recorder_record_data_queue_message.lastData = 1;
		wiced_rtos_push_to_queue(&audio_player_play_data_queque,
				&audio_recorder_record_data_queue_message,
				NO_WAIT);
		audio_in_i2s_stop_capture();
		stopRecording = 0;
	}
}
