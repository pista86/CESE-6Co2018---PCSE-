
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "wiced.h"
#include "audio_out/audio_out.h"
#include "../storage/storage.h"
#include "../storage/ROM/RecordingSounds.h"
#include "../storage/ROM/AudioSample.h"


#define F_SAMPLE				 				8000
#define SIZE_OF_AUDIO_PLAYER_QUEUE_MESSAGE    	(sizeof(audio_player_queue_message_t))
#define AUDIO_PLAYER_QUEUE_DEPTH				8


typedef struct
{
	fs_file_t file;
} audio_player_queue_message_t;


wiced_result_t  audio_player_thread_start( void* arg );

#ifdef __cplusplus
} /*extern "C" */
#endif
