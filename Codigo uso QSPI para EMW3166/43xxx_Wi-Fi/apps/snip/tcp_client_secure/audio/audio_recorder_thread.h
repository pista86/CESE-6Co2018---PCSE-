
#pragma once

#ifdef __cplusplus
extern "C" {
#endif


#include "audio_in/audio_in.h"
#include "../storage/storage.h"

#define DEFAULT_MIC_GAIN		3

typedef struct
{
	uint64_t recordingName;
} audio_recorder_queue_message_t;



wiced_result_t  audio_recorder_thread_start( void* arg );

#ifdef __cplusplus
} /*extern "C" */
#endif
