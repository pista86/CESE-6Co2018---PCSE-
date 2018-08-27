# include "CM4_DWT.h"

volatile uint32_t * DWT_CTRL = (uint32_t *) DWT_CTRL_ADDRESS;
volatile uint32_t * DWT_CYCCNT = (uint32_t *) DWT_CYCCNT_ADDRESS;

void dwt_init(void)
{
	*DWT_CTRL |= 1;
}

void dwt_reset(void)
{
	*DWT_CYCCNT = 0;
}

uint32_t dwt_get_count(void)
{
	return *DWT_CYCCNT;
}
