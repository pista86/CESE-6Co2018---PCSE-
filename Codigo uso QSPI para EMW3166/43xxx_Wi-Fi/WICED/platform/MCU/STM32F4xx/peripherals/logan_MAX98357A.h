#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"


#define DISABLE      0
#define ENABLE       ! DISABLE

// GPIO para control de #SD_MODE
#define SD_MODE_PIN                	GPIO_Pin_14
#define SD_MODE_GPIO_PORT          	GPIOB
#define SD_MODE_GPIO_CLK           	RCC_AHB1Periph_GPIOB
#define SD_MODE_SOURCE             	GPIO_PinSource14



void MAX98357A_init(void);
void MAX98357A_enable(void);
void MAX98357A_disable(void);

#ifdef __cplusplus
} /*extern "C" */
#endif

