

#include "stm32f4xx_crc.h"
#include "stm32f4xx_rcc.h"
#include "../../libraries/PDM/pdm2pcm_glo.h"


#define PDM_FILTER_LP_HZ		20
#define PDM_FILTER_HP_HZ		4000
#define PDM_FILTER_FS			8000
#define PDM_FILTER_IN_CH		1
#define PDM_FILTER_OUT_CH		1
#define PDM_HP_TAP				2104533974



#define DISABLE      			0
#define ENABLE       			! DISABLE


uint32_t mic_pdm_i2s_init(int16_t micGain, uint16_t outputSamplesNumber, uint16_t decimationFactor);
uint16_t mic_pdm_i2s_process(uint8_t * pdmBuffer, int16_t * pcmBuffer);
uint32_t mic_pdm_set_mic_gain(int16_t micGain);
int16_t mic_pdm_i2s_get_mic_gain(void);
uint32_t mic_pdm_i2s_get_output_samples_number(void);
uint16_t mic_pdm_i2s_get_decimation_factor(void);
