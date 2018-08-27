/**
  ******************************************************************************
  * @file    svc_glo.h
  * @author  MCD Application Team
  * @Revision V1.0.4
  * @date    7-Oct-2013
  * @brief   This file contains SVC module definitions to export
  *   Version     Date           Author              Comment
  *   -------     --------      ---------            ---------------------------------
  *   1.0.0       15 Feb 2013   L. Champsaur         - SVC first version
  *   1.0.1       09 Apr 2013   L. Champsaur         - SVC v1 demo
  *   1.0.2       24 May 2013   L. Champsaur         - update errors log
  *   1.0.3        5 Jun 2013   L. Champsaur         - joint stereo addition
  *   1.0.4       07 Oct 2013   L. Champsaur         - joint stereo set as static param
  *
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2013 STMicroelectronics</center></h2>
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef SVC_GLO_H
#define SVC_GLO_H


/* Includes ------------------------------------------------------------------*/
#include "audio_fw_glo.h"

/*============================================================================*/
/*      G E N E R A L  D E F I N I T I O N S                                  */
/*============================================================================*/

#define MONO                            1
#define STEREO                          2

#define MUTE_NOT_ACTIVATED              0
#define MUTE_ACTIVATED                 (MUTE_NOT_ACTIVATED + 1)
#define DISABLE_EFFECT                  0
#define ENABLE_EFFECT                  (DISABLE_EFFECT + 1)

/*============================================================================*/
/*      G L O B A L  V A L U E S                                              */
/*============================================================================*/


/*============================================================================*/
/*      E R R O R   V A L U E S                                               */
/*============================================================================*/

#define SVC_ERROR_NONE                              0
#define SVC_UNSUPPORTED_DELAY_LENGTH               -1
#define SVC_UNSUPPORTED_VOLUME                     -2
#define SVC_UNSUPPORTED_MUTE_MODE                  -3
#define SVC_UNSUPPORTED_QUALITY_MODE               -4        
#define SVC_UNSUPPORTED_JOINT_STEREO_MODE          -5        
#define SVC_UNSUPPORTED_NUMBER_OF_BYTEPERSAMPLE    -6
#define SVC_BAD_HW                                 -7

/*============================================================================*/
/*      D Y N A M I C   P A R A M E T E R S   S T R U C T U R E               */
/*============================================================================*/
struct svc_dynamic_param {
    int16_t target_volume_dB;    /* in dB    */
    int16_t mute;                /* 0 = unmute, 1 = mute */
    int16_t enable_compr;
    int32_t attack_time;
    int32_t release_time;
    int16_t quality;             /* 0:STANDARD, 1:HIGH_Q */
};
typedef struct svc_dynamic_param svc_dynamic_param_t;


/*============================================================================*/
/*      S T A T I C   P A R A M E T E R S   S T R U C T U R E                 */
/*============================================================================*/
struct svc_static_param {
  int16_t delay_len;
  int16_t joint_stereo;

};
typedef struct svc_static_param svc_static_param_t;


/*============================================================================*/
/*      I N T E R N A L   S T A T I C   M E M O R Y                           */
/*============================================================================*/
extern const uint32_t svc_dynamic_mem_size;


/*============================================================================*/
/*      I N T E R N A L   D Y N A M I C   M E M O R Y                         */
/*============================================================================*/
extern const uint32_t svc_static_mem_size;


/*============================================================================*/
/*      I N T E R F A C E S   D E C L A R A T I O N S                         */
/*============================================================================*/
/* svc_reset() : initializes static memory, states machines, ... */
extern int32_t svc_reset(void *static_mem_ptr, void *dynamic_mem_ptr);
/* svc_setConfig() : use to change dynamically some parameters */
extern int32_t svc_setConfig(svc_dynamic_param_t *input_dynamic_param_ptr, void *static_mem_ptr);
/* svc_getConfig() : use to get values of dynamic parameters */
extern int32_t svc_getConfig(svc_dynamic_param_t *input_dynamic_param_ptr, void *static_mem_ptr);
/* svc_setParam() : use to set parameters that won't change during processing */
extern int32_t svc_setParam(svc_static_param_t *input_static_param_ptr, void *static_mem_ptr);
/* svc_getParam() : use to get values of static parameters */
extern int32_t svc_getParam(svc_static_param_t *input_static_param_ptr, void *static_mem_ptr);
/* svc_process() : this is the main processing routine */
extern int32_t svc_process(buffer_t *input_buffer, buffer_t *output_buffer, void *static_mem_ptr);


#endif // SVC_GLO_H

/******************* (C) COPYRIGHT 2013 STMicroelectronics *****END OF FILE****/