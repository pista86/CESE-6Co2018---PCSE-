#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include "wiced.h"
#include "globals.h"
#include "logan_audio_out_i2s.h"
#include "svc.h"
#include "monoToStereo.h"

#define SIZE_OF_AUDIO_PLAYER_PLAY_DATA_QUEUE_MESSAGE    	(sizeof(audio_player_play_data_queue_message_t))
#define AUDIO_PLAYER_PLAY_DATA_QUEUE_DEPTH					8

#define AUDIO_OUT_FS					8000
#define AUDIO_OUT_BUFFER_TIME			5 // 200mseg de duración
#define AUDIO_OUT_CHANNELS				2
#define AUDIO_OUT_BYTES_PER_SAMPLE  	2
#define AUDIO_OUT_BUFFER_LENGTH			((AUDIO_OUT_FS * AUDIO_OUT_CHANNELS) / AUDIO_OUT_BUFFER_TIME)
#define AUDIO_OUT_BUFFER_LENGTH_BYTES	((AUDIO_OUT_FS * AUDIO_OUT_CHANNELS) / AUDIO_OUT_BUFFER_TIME) * AUDIO_OUT_BYTES_PER_SAMPLE

#define AUDIO_OUT_MONO_BUFFER_LENGTH 	(AUDIO_OUT_BUFFER_LENGTH / AUDIO_OUT_CHANNELS)

#define HALF_MONO_BUFFER_LENGTH(x)		(((x)/2)/AUDIO_OUT_CHANNELS)


#define NO_WAIT 						0

typedef enum
{
	lower_half = 0,
	higher_half = 1
}dataBufferPosition_t;

typedef struct
{
	dataBufferPosition_t dataPosition;
	uint32_t samples;
}audio_player_play_data_queue_message_t;

typedef void (*audio_out_play_ended_callBack_t)( void );

void audio_out_init(audio_out_play_ended_callBack_t play_ended_callBack);
void audio_out_play(int16_t * dataPtr, uint32_t dataLength);
void audio_out_process_lower_half(int16_t * dataPtr, uint32_t dataLength);
void audio_out_process_higher_half(int16_t * dataPtr, uint32_t dataLength);
void audio_out_stop(void);

#ifdef __cplusplus
} /*extern "C" */
#endif

