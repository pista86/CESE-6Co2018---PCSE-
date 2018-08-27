#include "svc.h"

void *svc_dynamic_mem_ptr = NULL;
void *svc_static_mem_ptr = NULL;

static svc_static_param_t svc_static_param;
static svc_dynamic_param_t svc_dynamic_param;

void svc_init(void)
{
	uint32_t result;

	svc_dynamic_mem_ptr = malloc(svc_dynamic_mem_size);
	svc_static_mem_ptr = malloc(svc_static_mem_size);

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_CRC, ENABLE);
	CRC_ResetDR();

	result = svc_reset(svc_static_mem_ptr, svc_dynamic_mem_ptr);
	WPRINT_APP_INFO(("svc_reset: %lu \n", result));

	svc_static_param.delay_len = 80;
	svc_static_param.joint_stereo = SVC_JOINT_STEREO;

	result = svc_setParam(&svc_static_param, svc_static_mem_ptr);
	WPRINT_APP_INFO(("svc_setParam: %lu \n", result));

	svc_dynamic_param.mute = !MUTE;
	svc_dynamic_param.target_volume_dB = 1; /* volume targeted value */
	svc_dynamic_param.enable_compr = ENABLE_COMPRESSION; /* enable compression */
	svc_dynamic_param.attack_time = 2103207220;
	svc_dynamic_param.release_time = 2146924480;
	svc_dynamic_param.quality = HIGH_QUALITY; /* High quality */

	result = svc_setConfig(&svc_dynamic_param, svc_static_mem_ptr);
	WPRINT_APP_INFO(("svc_setConfig: %lu \n", result));

}

void svc_process_data(buffer_t * input_buffer, buffer_t * output_buffer)
{
	uint32_t result;
	WPRINT_APP_INFO(("svc_dynamic_mem_size: %lu \n", svc_dynamic_mem_size));
	WPRINT_APP_INFO(("svc_static_mem_size: %lu \n", svc_static_mem_size));
	result = svc_process(input_buffer, output_buffer, svc_static_mem_ptr);

	WPRINT_APP_INFO(("svc_process: %lu \n", result));
}

void svc_set_volume(int16_t volumeDB)
{
	svc_dynamic_param.target_volume_dB = volumeDB;
	svc_setConfig(&svc_dynamic_param, svc_static_mem_ptr);
}

void svc_mute(void)
{
	svc_dynamic_param.mute = MUTE;
	svc_setConfig(&svc_dynamic_param, svc_static_mem_ptr);
}

void svc_unmute(void)
{
	svc_dynamic_param.mute = !MUTE;
	svc_setConfig(&svc_dynamic_param, svc_static_mem_ptr);
}
