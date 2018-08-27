



#pragma once

#ifdef __cplusplus
extern "C" {
#endif


#include "wiced.h"
#include "stm32f4xx_crc.h"
#include "stm32f4xx_rcc.h"
#include "../../libraries/SVC/audio_fw_glo.h"
#include "../../libraries/SVC/svc_glo.h"


#define PLAY_BUFFER_LENGTH			1600


#define SVC_PERSISTENT_MEM_SIZE		1368
#define SVC_SCRATCH_MEM_SIZE		2880

#define DISABLE      				0
#define ENABLE       				! DISABLE

#define	MUTE						1
#define ENABLE_COMPRESSION			1
#define HIGH_QUALITY				1

#define SVC_JOINT_STEREO			1


void svc_process_data(buffer_t * input_buffer, buffer_t * output_buffer);
void svc_init(void);
void svc_set_volume(int16_t volumeDB);
void svc_mute(void);
void svc_unmute(void);



#ifdef __cplusplus
} /*extern "C" */
#endif

