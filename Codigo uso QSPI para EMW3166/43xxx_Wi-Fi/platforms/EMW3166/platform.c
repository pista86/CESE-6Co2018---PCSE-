#include "platform.h"
#include "platform_config.h"
#include "platform_init.h"
#include "platform_isr.h"
#include "platform_peripheral.h"
#include "wwd_platform_common.h"
#include "wwd_rtos_isr.h"
#include "wiced_defaults.h"
#include "wiced_platform.h"


/******************************************************
 *                      Macros
 ******************************************************/

/******************************************************
 *                    Constants
 ******************************************************/

/******************************************************
 *                   Enumerations
 ******************************************************/

/******************************************************
 *                 Type Definitions
 ******************************************************/

/******************************************************
 *                    Structures
 ******************************************************/

/******************************************************
 *               Static Function Declarations
 ******************************************************/

/******************************************************
 *               Variable Definitions
 ******************************************************/
void AUDIO_OUT_I2S_IRQHandler_dma_irq (void);
/* GPIO pin table. Used by WICED/platform/MCU/wiced_platform_common.c */
const platform_gpio_t platform_gpio_pins[] =
{

	//[WICED_GPIO_1]										// Not connected
	[WICED_GPIO_2] = { GPIOB, 2 },	// BOOT1
	//[WICED_GPIO_3]										// Not connected


	[WICED_GPIO_4] = { GPIOB, 15 },
	[WICED_GPIO_5] = { GPIOB, 12 },
	[WICED_GPIO_6] = { GPIOB, 13 },
	[WICED_GPIO_7] = { GPIOB, 14 },
	// End of SPI1 bus

	[WICED_GPIO_8] = { GPIOC, 6  },// TIM2_CH3,TIM5_CH3,TIM9_CH1,I2S2_CKIN,USART2_TX,ADC1_2
	[WICED_GPIO_9] = { GPIOA, 15 },// TIM2_CH2,TIM5_CH2,SPI4_MOSI/I2S4_SD,USART2_RTS,ADC1_1
	//[WICED_GPIO_10]										// VBAT - Connect to VDD if not in use.
	//[WICED_GPIO_11]										// Not connected
	[WICED_GPIO_12] = { GPIOC, 7 },	// TIM2_CH4,TIM5_CH4,TIM9_CH2,I2S2_MCK,USART2_RX,ADC1_3
	//[WICED_GPIO_13]										// NRST - RESET
	[WICED_GPIO_14] = { GPIOC, 0 },	// Wi-Fi wake up MCU
	//[WICED_GPIO_15]										// Not connected
	[WICED_GPIO_16] = { GPIOC, 13 },// RTC_AMP1, RTC_OUT, RTC_TS
	[WICED_GPIO_17] = { GPIOB, 8  },// TIM2_CH3,I2C2_SCL,SPI2_SCK/I2S2_CK,I2S3_MCK
	[WICED_GPIO_18] = { GPIOB, 9  },// TIM4_CH4,TIM11_CH1,I2C1_SDA,SPI2_NSS/I2S2_WS,I2C2_SDA
	[WICED_GPIO_19] = { GPIOB, 10 },// TIM1_BKIN,I2C2_SMBA,SPI2_NSS/I2S2_WS,SPI4_NSS/I2S4_WS,SPI3_SCK/I2S3_CK
	//[WICED_GPIO_2O]										// GND
	//[WICED_GPIO_21]										// GND
	//[WICED_GPIO_22]										// Not connected
	//[WICED_GPIO_23]										// Not connected
	//[WICED_GPIO_24]										// Not connected

	// NOTE: Using those pins for anything other than debugging could make your life difficult
	[WICED_GPIO_25] = { GPIOA, 14 },	// SWD_SWCLK
	[WICED_GPIO_26] = { GPIOA, 13 },	// SWD_SWDIO
	// END NOTE

	[WICED_GPIO_27] = { GPIOB, 3 },	// TIM1_ETR,SPI5_MISO,USART1_RTS,USART6_RX,USB_FS_DP
	//[WICED_GPIO_28]										// Not connected
	[WICED_GPIO_29] = { GPIOB, 7 },	// TIM1_CH3,SPI5_MOSI/I2S5_SD,USART1_RX,USB_FS_ID
	[WICED_GPIO_30] = { GPIOB, 6 },	// TIM4_CH1,I2C1_SCL,USART1_TX
	[WICED_GPIO_31] = { GPIOB, 4 },	// TIM4_CH3,TIM10_CH1,I2C1_SCL,SPI5_MOSI/I2S5_SD,I2C3_SDA
	//[WICED_GPIO_32]										// Not connected
	[WICED_GPIO_33] = { GPIOA, 10 },// TIM1_CH1N,SPI2_SCK/I2S2_CK,SPI4_SCK/I2S4_CK
	[WICED_GPIO_34] = { GPIOA, 12 },// TIM2_CH1/TIM2_ET,SPI1_SCK/I2S1_CK,ADC1_5
	[WICED_GPIO_35] = { GPIOA, 11 },// TIM1_CH4,SPI4_MISO,USART1_CTS,USART6_TX,USB_FS_DM
	[WICED_GPIO_36] = { GPIOA, 5 },	// TIM1_CH3N,TIM3_CH4,SPI5_NSS/I2S5_WS,ADC1_9
	[WICED_GPIO_37] = { GPIOB, 0 },	// TIM1_CH2N,TIM3_CH3,SPI5_SCK/I2S5_CK,ADC1_8
	[WICED_GPIO_38] = { GPIOA, 4 },// SPI1_NSS/I2S1_WS,SPI3_NSS/I2S3_WS,USART2_CK,ADC1_4
	//[WICED_GPIO_39]										// VDD
	//[WICED_GPIO_40]										// VDD
	//[WICED_GPIO_41]										// ANT - External antenna pad

};

const platform_pwm_t *platform_pwm_peripherals = NULL;



/* UART peripherals and runtime drivers. Used by WICED/platform/MCU/wiced_platform_common.c */
const platform_uart_t platform_uart_peripherals[] =
{
  [WICED_UART_1] =
  {
    .port                         = USART6,
    .tx_pin                       = &platform_gpio_pins[WICED_GPIO_8],
    .rx_pin                       = &platform_gpio_pins[WICED_GPIO_12],
    .cts_pin                      = NULL,
    .rts_pin                      = NULL,
    .tx_dma_config =
    {
      .controller                 = DMA2,
      .stream                     = DMA2_Stream6,
      .channel                    = DMA_Channel_5,
      .irq_vector                 = DMA2_Stream6_IRQn,
      .complete_flags             = DMA_HISR_TCIF6,
      .error_flags                = ( DMA_HISR_TEIF6 | DMA_HISR_FEIF6 ),
    },
    .rx_dma_config =
    {
      .controller                 = DMA2,
      .stream                     = DMA2_Stream1,
      .channel                    = DMA_Channel_5,
      .irq_vector                 = DMA2_Stream1_IRQn,
      .complete_flags             = DMA_LISR_TCIF1,
      .error_flags                = ( DMA_LISR_TEIF1 | DMA_LISR_FEIF1 | DMA_LISR_DMEIF1 ),
    },
  },

};
platform_uart_driver_t platform_uart_drivers[WICED_UART_MAX];

/* UART standard I/O configuration */
#ifndef WICED_DISABLE_STDIO
static platform_uart_config_t stdio_config =
{
    .baud_rate    = 115200,				// TODO: Check if this is valid for USART2
    .data_width   = DATA_WIDTH_8BIT,
    .parity       = NO_PARITY,
    .stop_bits    = STOP_BITS_1,
    .flow_control = FLOW_CONTROL_DISABLED,
};
#endif




/* Wi-Fi control pins. Used by platform/MCU/wlan_platform_common.c
* SDIO: EMW1062_PIN_BOOTSTRAP[1:0] = b'00
* gSPI: EMW1062_PIN_BOOTSTRAP[1:0] = b'01
*/
const platform_gpio_t wifi_control_pins[] =
{
  [WWD_PIN_RESET]           = { GPIOA, 9 },
};

/* Wi-Fi SDIO bus pins. Used by platform/MCU/STM32F2xx/EMW1062_driver/wlan_SDIO.c */
const platform_gpio_t wifi_sdio_pins[] =
{
  [WWD_PIN_SDIO_OOB_IRQ] = { GPIOC,  0 },
  [WWD_PIN_SDIO_CLK    ] = { GPIOC, 12 },
  [WWD_PIN_SDIO_CMD    ] = { GPIOD,  2 },
  [WWD_PIN_SDIO_D0     ] = { GPIOC,  8 },
  [WWD_PIN_SDIO_D1     ] = { GPIOC,  9 },
  [WWD_PIN_SDIO_D2     ] = { GPIOC, 10 },
  [WWD_PIN_SDIO_D3     ] = { GPIOB,  5 },
};

/******************************************************
 *               Function Definitions
 ******************************************************/

void platform_init_peripheral_irq_priorities( void )
{
    /* Interrupt priority setup. Called by WICED/platform/MCU/STM32F2xx/platform_init.c */
    NVIC_SetPriority( RTC_WKUP_IRQn    ,  1 ); /* RTC Wake-up event   */
    NVIC_SetPriority( SDIO_IRQn        ,  2 ); /* WLAN SDIO           */
    NVIC_SetPriority( DMA2_Stream3_IRQn,  3 ); /* WLAN SDIO DMA       */
    NVIC_SetPriority( DMA1_Stream3_IRQn,  3 ); /* WLAN SPI DMA        */
    NVIC_SetPriority( USART6_IRQn      ,  6 ); /* WICED_UART_1        */
    NVIC_SetPriority( USART1_IRQn      ,  6 ); /* WICED_UART_2        */
    NVIC_SetPriority( DMA2_Stream6_IRQn,  7 ); /* WICED_UART_1 TX DMA */
    NVIC_SetPriority( DMA2_Stream1_IRQn,  7 ); /* WICED_UART_1 RX DMA */
    NVIC_SetPriority( DMA2_Stream7_IRQn,  7 ); /* WICED_UART_2 TX DMA */
    NVIC_SetPriority( DMA2_Stream2_IRQn,  7 ); /* WICED_UART_2 RX DMA */
    NVIC_SetPriority( DMA1_Stream4_IRQn,  7 );
    NVIC_SetPriority( EXTI0_IRQn       , 14 ); /* GPIO                */
    NVIC_SetPriority( EXTI1_IRQn       , 14 ); /* GPIO                */
    NVIC_SetPriority( EXTI2_IRQn       , 14 ); /* GPIO                */
    NVIC_SetPriority( EXTI3_IRQn       , 14 ); /* GPIO                */
    NVIC_SetPriority( EXTI4_IRQn       , 14 ); /* GPIO                */
    NVIC_SetPriority( EXTI9_5_IRQn     , 14 ); /* GPIO                */
    NVIC_SetPriority( EXTI15_10_IRQn   , 14 ); /* GPIO                */
}

void platform_init_external_devices( void )
{
    /*  This function initializes the external interfaces for the platform.
        You could use this to initialize the peripherals you use.
        Note however that if you initialize alternative functionality of 
        JTAG and UART pins, you could lock yourself out of being able to flash
        new firmware.
    */

    //patch added to resolve the microseconds delay hang issue.
    do
    {
        // enable DWT hardware and cycle counting
        CoreDebug->DEMCR = CoreDebug->DEMCR | CoreDebug_DEMCR_TRCENA_Msk;
        // reset a counter
        DWT->CYCCNT = 0;
        // enable the counter
        DWT->CTRL = (DWT->CTRL | DWT_CTRL_CYCCNTENA_Msk) ;
    }
    while(0);


#ifndef WICED_DISABLE_STDIO
    /* Initialise UART standard I/O */
    platform_stdio_init( &platform_uart_drivers[STDIO_UART], &platform_uart_peripherals[STDIO_UART], &stdio_config );
#endif
}



/******************************************************
 *           Interrupt Handler Definitions
 ******************************************************/



WWD_RTOS_DEFINE_ISR( usart6_irq )
{
    platform_uart_irq( &platform_uart_drivers[WICED_UART_1] );
}



WWD_RTOS_DEFINE_ISR( usart6_tx_dma_irq )
{
    platform_uart_tx_dma_irq( &platform_uart_drivers[WICED_UART_1] );
}



WWD_RTOS_DEFINE_ISR( usart6_rx_dma_irq )
{
    platform_uart_rx_dma_irq( &platform_uart_drivers[WICED_UART_1] );
}

WWD_RTOS_DEFINE_ISR( audio_out_tx_dma_irq )
{
	audio_out_i2s_IRQHandler( );
}

WWD_RTOS_DEFINE_ISR( audio_in_rx_dma_irq )
{
	audio_in_i2s_IRQHandler( );
}

/******************************************************
 *            Interrupt Handlers Mapping
 ******************************************************/

/* These DMA assignments can be found STM32F2xx datasheet DMA section */
WWD_RTOS_MAP_ISR( usart6_irq       , USART6_irq       )
WWD_RTOS_MAP_ISR( usart6_tx_dma_irq, DMA2_Stream6_irq )
WWD_RTOS_MAP_ISR( usart6_rx_dma_irq, DMA2_Stream1_irq )
WWD_RTOS_MAP_ISR( audio_out_tx_dma_irq, DMA1_Stream4_irq )
WWD_RTOS_MAP_ISR( audio_in_rx_dma_irq, DMA2_Stream5_irq )
