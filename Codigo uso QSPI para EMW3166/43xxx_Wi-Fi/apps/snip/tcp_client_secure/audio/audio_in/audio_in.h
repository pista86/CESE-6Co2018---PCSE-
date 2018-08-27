#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include "wiced.h"
#include "globals.h"
#include "logan_audio_in_i2s.h"
#include "mic_pdm_i2s.h"


// definiciones MIC_PDM
#define AUDIO_IN_MIC_PDM_FS					8000
#define AUDIO_IN_MIC_PDM_BUFFER_TIME		125 // 125/8000seg de duración
#define AUDIO_IN_MIC_PDM_CHANNELS			1
#define AUDIO_IN_MIC_PDM_BYTES_PER_SAMPLE	2
#define AUDIO_IN_MIC_PDM_DECIMATION			128
#define AUDIO_IN_MIC_PDM_BUFFER_LENGTH		(((AUDIO_IN_MIC_PDM_FS/AUDIO_IN_MIC_PDM_BUFFER_TIME) * AUDIO_IN_MIC_PDM_DECIMATION) / 8)
#define AUDIO_IN_MIC_PCM_RESULT_LENGTH		((AUDIO_IN_MIC_PDM_BUFFER_LENGTH/2) / (AUDIO_IN_MIC_PDM_DECIMATION / 8))
#define AUDIO_IN_MIC_PCM_BYTES_PER_SAMPLE	2


#define NO_WAIT 							0

typedef struct
{
	uint8_t	lastData;
	uint8_t dataPosition;
}audio_recorder_record_data_queue_message_t;

void audio_in_init(int16_t micGain);
void audio_in_start_capture(void);
void audio_in_stop_capture(void);
void audio_in_set_mic_gain(int16_t micGain);
void audio_in_process_lower_half(int16_t * dataPtr, uint32_t * pcmDataLength);
void audio_in_process_higher_half(int16_t * dataPtr, uint32_t * pcmDataLength);


#ifdef __cplusplus
} /*extern "C" */
#endif

