#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "logan_i2s.h"
#include "wiced_platform.h"

#define DISABLE      0
#define ENABLE       ! DISABLE
#define SET		     ENABLE
#define RESET		 DISABLE

#define I2S_ENABLE_MASK                 0x0400


/* AUDIO_IN_I2S - GPIO */
#define AUDIO_IN_I2S                       SPI5
#define AUDIO_IN_I2S_CLK                   RCC_APB2Periph_SPI5
#define AUDIO_IN_I2S_CLK_INIT              RCC_APB2PeriphClockCmd

#define AUDIO_IN_I2S_CLK_PIN               GPIO_Pin_0
#define AUDIO_IN_I2S_CLK_GPIO_PORT         GPIOB
#define AUDIO_IN_I2S_CLK_GPIO_CLK          RCC_AHB1Periph_GPIOB
#define AUDIO_IN_I2S_CLK_SOURCE            GPIO_PinSource0
#define AUDIO_IN_I2S_CLK_AF                GPIO_AF6_SPI5

#define AUDIO_IN_I2S_SD_PIN                GPIO_Pin_10
#define AUDIO_IN_I2S_SD_GPIO_PORT          GPIOA
#define AUDIO_IN_I2S_SD_GPIO_CLK           RCC_AHB1Periph_GPIOA
#define AUDIO_IN_I2S_SD_SOURCE             GPIO_PinSource10
#define AUDIO_IN_I2S_SD_AF                 GPIO_AF6_SPI5

/* AUDIO_IN_I2S - DMA */
#define AUDIO_IN_I2S_DMA_CLOCK           	RCC_AHB1Periph_DMA2
#define AUDIO_IN_I2S_DMA_STREAM          	DMA2_Stream5
#define AUDIO_IN_I2S_DMA_CHANNEL         	DMA_Channel_7
#define AUDIO_IN_I2S_DMA_IRQ             	DMA2_Stream5_IRQn
#define AUDIO_IN_I2S_DMA_FLAG_TC         	DMA_FLAG_TCIF4
#define AUDIO_IN_I2S_DMA_FLAG_HT         	DMA_FLAG_HTIF4
#define AUDIO_IN_I2S_DMA_FLAG_FE         	DMA_FLAG_FEIF4
#define AUDIO_IN_I2S_DMA_FLAG_TE         	DMA_FLAG_TEIF4
#define AUDIO_IN_I2S_DMA_FLAG_DME        	DMA_FLAG_DMEIF4
#define AUDIO_IN_I2S_DMA_PERIPH_DATA_SIZE	DMA_PeripheralDataSize_HalfWord
#define AUDIO_IN_I2S_DMA_MEM_DATA_SIZE   	DMA_MemoryDataSize_HalfWord
#define DMA_MAX_SZE                    		0xFFFF


#define AUDIO_IN_I2S_DMA_IRQ_PREPRIO		0
#define AUDIO_IN_I2S_DMA_IRQ_SUBRIO			0



typedef void (*audio_in_i2s_transfer_complete_callBack_t)( void );
typedef void (*audio_in_i2s_half_transfer_callBack_t)( void );
typedef void (*audio_in_i2s_error_callBack_t)( void );

void audio_in_i2s_IRQHandler(void);

void audio_in_i2s_init(uint32_t audioFreq,
		audio_in_i2s_transfer_complete_callBack_t transfer_complete_callBack,
		audio_in_i2s_half_transfer_callBack_t half_transfer_callBack );

void audio_in_i2s_start_capture(uint8_t * Addr, uint32_t Size);
void audio_in_i2s_stop_capture(void);

#ifdef __cplusplus
} /*extern "C" */
#endif


