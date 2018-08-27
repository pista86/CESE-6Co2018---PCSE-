
#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_spi.h"
#include "stm32f4xx_dma.h"

#define DISABLE      0
#define ENABLE       ! DISABLE

#define I2S_ENABLE_MASK                 0x0400

/*MIC_I2S*/
#define MIC_I2S                       SPI5
#define MIC_I2S_CLK                   RCC_APB2Periph_SPI5
#define MIC_I2S_CLK_INIT              RCC_APB2PeriphClockCmd

#define MIC_I2S_CLK_PIN               GPIO_Pin_0
#define MIC_I2S_CLK_GPIO_PORT         GPIOB
#define MIC_I2S_CLK_GPIO_CLK          RCC_AHB1Periph_GPIOB
#define MIC_I2S_CLK_SOURCE            GPIO_PinSource0
#define MIC_I2S_CLK_AF                GPIO_AF6_SPI5

#define MIC_I2S_SD_PIN                GPIO_Pin_10
#define MIC_I2S_SD_GPIO_PORT          GPIOA
#define MIC_I2S_SD_GPIO_CLK           RCC_AHB1Periph_GPIOA
#define MIC_I2S_SD_SOURCE             GPIO_PinSource10
#define MIC_I2S_SD_AF                 GPIO_AF6_SPI5



void i2s_init(void);

