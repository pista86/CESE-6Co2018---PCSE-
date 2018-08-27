#include "monoToStereo.h"

void mono_to_stereo_volume_control(int16_t * inPtr, int16_t * outPtr, uint32_t inLength,
		uint16_t divisor)
{
	uint32_t i;
	int16_t sample;

	for (i = 0; i < inLength; i++)
	{
		sample = inPtr[i] / divisor;

		outPtr[2 * i] = sample;
		outPtr[(2 * i) + 1] = sample;
	}
}

