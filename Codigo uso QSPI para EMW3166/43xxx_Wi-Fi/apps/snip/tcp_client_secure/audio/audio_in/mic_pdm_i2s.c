#include "mic_pdm_i2s.h"

static PDM_Filter_Handler_t PDMFilterHandler;
static PDM_Filter_Config_t PDMFilterConfig;

uint32_t mic_pdm_i2s_init(int16_t micGain, uint16_t outputSamplesNumber, uint16_t decimationFactor)
{
	uint32_t result;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_CRC, ENABLE);
	CRC_ResetDR();

	PDMFilterHandler.bit_order = PDM_FILTER_BIT_ORDER_LSB;
	PDMFilterHandler.endianness = PDM_FILTER_ENDIANNESS_BE;
	PDMFilterHandler.high_pass_tap = PDM_HP_TAP;
	PDMFilterHandler.in_ptr_channels = PDM_FILTER_IN_CH;
	PDMFilterHandler.out_ptr_channels = PDM_FILTER_OUT_CH;

	result = PDM_Filter_Init((PDM_Filter_Handler_t *) (&PDMFilterHandler));

	if (!result)
	{
		PDMFilterConfig.decimation_factor = decimationFactor;
		PDMFilterConfig.output_samples_number = outputSamplesNumber;
		PDMFilterConfig.mic_gain = micGain;

		result = PDM_Filter_setConfig((PDM_Filter_Handler_t *) &PDMFilterHandler, &PDMFilterConfig);
	}
	return result;
}

uint16_t mic_pdm_i2s_process(uint8_t * pdmBuffer, int16_t * pcmBuffer)
{
	/* por cada muestra de entrada, que es PDM_DECIMATION_FACTOR / 8 bytes, sale 1 muestra de 16bits
	 si PDM_DECIMATION_FACTOR es 128, por cada 16 bytes de entrada sale 1 muestra de 16bits
	 */
	PDM_Filter(pdmBuffer, pcmBuffer, &PDMFilterHandler);
	return PDMFilterConfig.output_samples_number;
}

uint32_t mic_pdm_set_mic_gain(int16_t micGain)
{
	PDMFilterConfig.mic_gain = micGain;
	return PDM_Filter_setConfig((PDM_Filter_Handler_t *) &PDMFilterHandler, &PDMFilterConfig);
}

int16_t mic_pdm_i2s_get_mic_gain(void)
{
	PDM_Filter_getConfig((PDM_Filter_Handler_t *) &PDMFilterHandler, &PDMFilterConfig);
	return PDMFilterConfig.mic_gain;
}

uint32_t mic_pdm_i2s_get_output_samples_number(void)
{
	PDM_Filter_getConfig((PDM_Filter_Handler_t *) &PDMFilterHandler, &PDMFilterConfig);
	return PDMFilterConfig.output_samples_number;
}

uint16_t mic_pdm_i2s_get_decimation_factor(void)
{
	PDM_Filter_getConfig((PDM_Filter_Handler_t *) &PDMFilterHandler, &PDMFilterConfig);
	return PDMFilterConfig.decimation_factor;
}

