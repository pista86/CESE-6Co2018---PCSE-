#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "logan_i2s.h"
#include "logan_MAX98357A.h"
#include "wiced_platform.h"

#define DISABLE      0
#define ENABLE       ! DISABLE
#define SET		     ENABLE
#define RESET		 DISABLE

#define I2S_ENABLE_MASK                 0x0400


/* AUDIO_OUT_I2S - GPIO */
#define AUDIO_OUT_I2S                       SPI2
#define AUDIO_OUT_I2S_CLK                   RCC_APB1Periph_SPI2
#define AUDIO_OUT_I2S_CLK_INIT              RCC_APB1PeriphClockCmd

#define AUDIO_OUT_I2S_CLK_PIN               GPIO_Pin_13
#define AUDIO_OUT_I2S_CLK_GPIO_PORT         GPIOB
#define AUDIO_OUT_I2S_CLK_GPIO_CLK          RCC_AHB1Periph_GPIOB
#define AUDIO_OUT_I2S_CLK_SOURCE            GPIO_PinSource13
#define AUDIO_OUT_I2S_CLK_AF                GPIO_AF_SPI2

#define AUDIO_OUT_I2S_SD_PIN                GPIO_Pin_15
#define AUDIO_OUT_I2S_SD_GPIO_PORT          GPIOB
#define AUDIO_OUT_I2S_SD_GPIO_CLK           RCC_AHB1Periph_GPIOB
#define AUDIO_OUT_I2S_SD_SOURCE             GPIO_PinSource15
#define AUDIO_OUT_I2S_SD_AF                 GPIO_AF_SPI2

#define AUDIO_OUT_I2S_WS_PIN                GPIO_Pin_12
#define AUDIO_OUT_I2S_WS_GPIO_PORT          GPIOB
#define AUDIO_OUT_I2S_WS_GPIO_CLK           RCC_AHB1Periph_GPIOB
#define AUDIO_OUT_I2S_WS_SOURCE             GPIO_PinSource12
#define AUDIO_OUT_I2S_WS_AF                 GPIO_AF_SPI2



/* AUDIO_OUT_I2S - DMA */
#define AUDIO_OUT_I2S_DMA_CLOCK           	RCC_AHB1Periph_DMA1
#define AUDIO_OUT_I2S_DMA_STREAM          	DMA1_Stream4
#define AUDIO_OUT_I2S_DMA_CHANNEL         	DMA_Channel_0
#define AUDIO_OUT_I2S_DMA_IRQ             	DMA1_Stream4_IRQn
#define AUDIO_OUT_I2S_DMA_FLAG_TC         	DMA_FLAG_TCIF4
#define AUDIO_OUT_I2S_DMA_FLAG_HT         	DMA_FLAG_HTIF4
#define AUDIO_OUT_I2S_DMA_FLAG_FE         	DMA_FLAG_FEIF4
#define AUDIO_OUT_I2S_DMA_FLAG_TE         	DMA_FLAG_TEIF4
#define AUDIO_OUT_I2S_DMA_FLAG_DME        	DMA_FLAG_DMEIF4
#define AUDIO_OUT_I2S_DMA_PERIPH_DATA_SIZE	DMA_PeripheralDataSize_HalfWord
#define AUDIO_OUT_I2S_DMA_MEM_DATA_SIZE   	DMA_MemoryDataSize_HalfWord
#define DMA_MAX_SZE                    		0xFFFF

//#define audio_out_i2s_IRQHandler          	DMA1_Stream4_IRQHandler
#define AUDIO_OUT_I2S_DMA_IRQ_PREPRIO		0
#define AUDIO_OUT_I2S_DMA_IRQ_SUBRIO		0



typedef void (*audio_out_i2s_transfer_complete_callBack_t)( void );
typedef void (*audio_out_i2s_half_transfer_callBack_t)( void );
typedef void (*audio_out_i2s_error_callBack_t)( void );

void audio_out_i2s_IRQHandler(void);

void audio_out_i2s_init(uint32_t audioFreq,
		audio_out_i2s_transfer_complete_callBack_t transfer_complete_callBack,
		audio_out_i2s_half_transfer_callBack_t half_transfer_callBack );

void audio_out_i2s_play(int16_t * Addr, uint32_t Size);
void audio_out_i2s_pause(void);
void audio_out_i2s_resume(void);
void audio_out_i2s_stop(void);

#ifdef __cplusplus
} /*extern "C" */
#endif


