#include "audio_out.h"

static int16_t audio_out_buffer[AUDIO_OUT_BUFFER_LENGTH]; // 3200 muestras de 16 bits

static audio_player_play_data_queue_message_t audio_player_play_data_queue_message;
static audio_out_play_ended_callBack_t audio_out_play_ended_callBack = NULL;

static void audio_out_i2s_transfer_complete_callBack(void);
static void audio_out_i2s_half_transfer_callBack(void);

void audio_out_init(audio_out_play_ended_callBack_t play_ended_callBack)
{
	audio_player_play_data_queue_message.samples = (AUDIO_OUT_BUFFER_LENGTH / 2) / 2;

	audio_out_play_ended_callBack = play_ended_callBack;

	audio_out_i2s_init(AUDIO_OUT_FS, audio_out_i2s_transfer_complete_callBack,
			audio_out_i2s_half_transfer_callBack);
}

void audio_out_play(int16_t * dataPtr, uint32_t dataLength)
{
	mono_to_stereo_volume_control(dataPtr, &audio_out_buffer[0], dataLength, 2);

	audio_out_i2s_play(audio_out_buffer, dataLength * 2);
}

void audio_out_stop(void)
{
	audio_out_i2s_stop();
	if (audio_out_play_ended_callBack != NULL)
	{
		audio_out_play_ended_callBack();
	}
}

void audio_out_process_lower_half(int16_t * dataPtr, uint32_t dataLength)
{

	if (dataLength > 4)
	{

		mono_to_stereo_volume_control(dataPtr, &audio_out_buffer[0], dataLength, 2);

		//memcpy(&audio_out_buffer[0], dataPtr, dataLength * 2);

		/*		if ((AUDIO_OUT_BUFFER_LENGTH / 2) > (svc_audio_buffer.buffer_size ))
		 {
		 //WPRINT_APP_INFO(("completando salida de audio: %d !\n", dataLength));
		 memset(&audio_out_buffer[svc_audio_buffer.buffer_size * 2], 0,
		 ((AUDIO_OUT_BUFFER_LENGTH / 2) - (svc_audio_buffer.buffer_size * 2))
		 * sizeof(uint16_t));
		 }*/

	}
	else
	{
		audio_out_stop();
	}
}

void audio_out_process_higher_half(int16_t * dataPtr, uint32_t dataLength)
{

	if (dataLength > 4)
	{

		mono_to_stereo_volume_control(dataPtr, &audio_out_buffer[(AUDIO_OUT_BUFFER_LENGTH / 2)],
				dataLength, 2);

		//memcpy(&audio_out_buffer[AUDIO_OUT_BUFFER_LENGTH / 2], dataPtr, dataLength *2);

		/*		if ((AUDIO_OUT_BUFFER_LENGTH / 2) > (svc_audio_buffer.buffer_size * 2))
		 {
		 //WPRINT_APP_INFO(("completando salida de audio: %d !\n", dataLength));
		 memset(
		 &audio_out_buffer[((AUDIO_OUT_BUFFER_LENGTH / 2)
		 + (svc_audio_buffer.buffer_size * 2))], 0,
		 ((AUDIO_OUT_BUFFER_LENGTH / 2) - (svc_audio_buffer.buffer_size * 2))
		 * sizeof(uint16_t));
		 }*/

	}
	else
	{
		audio_out_stop();
	}
}

static void audio_out_i2s_transfer_complete_callBack(void)
{
	audio_player_play_data_queue_message.dataPosition = higher_half;

	wiced_rtos_push_to_queue(&audio_player_play_data_queque, &audio_player_play_data_queue_message,
	NO_WAIT);
}
static void audio_out_i2s_half_transfer_callBack(void)
{
	audio_player_play_data_queue_message.dataPosition = lower_half;

	wiced_rtos_push_to_queue(&audio_player_play_data_queque, &audio_player_play_data_queue_message,
	NO_WAIT);
}

