
#include "MAX98357A.h"

static void MAX98357A_SD_MODE_GPIO_init(void);

void MAX98357A_init(void)
{
	MAX98357A_SD_MODE_GPIO_init();
}

void MAX98357A_enable(void)
{
	GPIO_SetBits(SD_MODE_GPIO_PORT, SD_MODE_PIN);
}

void MAX98357A_disable(void)
{
	GPIO_ResetBits(SD_MODE_GPIO_PORT, SD_MODE_PIN);
}

static void MAX98357A_SD_MODE_GPIO_init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(SD_MODE_GPIO_CLK, ENABLE);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_25MHz;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;

	/* QSPI D0 pin configuration */
	GPIO_InitStructure.GPIO_Pin = SD_MODE_PIN;
	GPIO_Init(SD_MODE_GPIO_PORT, &GPIO_InitStructure);
}

