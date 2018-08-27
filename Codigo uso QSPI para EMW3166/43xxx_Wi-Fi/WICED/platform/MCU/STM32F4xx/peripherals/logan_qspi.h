
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx.h"
#include "stm32f4xx_qspi.h"
#include "stm32f4xx_dma.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"

/******************************************************
 *                      Macros
 ******************************************************/


/******************************************************
 *                    Constants
 ******************************************************/

#define DISABLE      0
#define ENABLE       ! DISABLE
#define RESET        0
#define SET          ! RESET
#define DMA_ON       ENABLE
#define DMA_OFF      DISABLE

// Direcciones definidas en base a bugs del STM32F412 en.DM00183231.pdf
#define QSPI_DMA_WRITE              DMA_DIR_PeripheralToMemory
#define QSPI_DMA_READ               DMA_DIR_MemoryToPeripheral

#define QSPI_DMA_Priority_Low       DMA_Priority_Low
#define QSPI_DMA_Priority_Medium    DMA_Priority_Medium
#define QSPI_DMA_Priority_High      DMA_Priority_High
#define QSPI_DMA_Priority_VeryHigh  DMA_Priority_VeryHigh

/* DMA Definitions */
#define QSPI_DMA_CHANNEL                DMA_Channel_3
#define QSPI_DMA_STREAM                 DMA2_Stream7
#define QSPI_DMA_FLAG_TC                DMA_FLAG_TCIF7

// Registro QUADSPI_CR
#define QSPI_SSHIFT         QSPI_SShift_HalfCycleShift
#define QSPI_PRESCALER      0x01                            // división por 2, 50Mhz
#define QSPI_FSELECT        QSPI_FSelect_2                  // FLASH 2 seleccionada (no está cableada la 1)
#define QSPI_DFLASH         QSPI_DFlash_Disable             // Dual-flash mode disabled

// Registro QUADSPI_DCR
#define QSPI_CKMODE         QSPI_CKMode_Mode3               // clk en 1 cuando no está habilitado con chip select
#define QSPI_CSHTIME        QSPI_CSHTime_8Cycle             // tiempo en alto entre comandos de CS 1 ciclo, revisar si clk aumenta
#define QSPI_FSIZE          0x14                            // 2^(20+1) = 2097152 bytes, 2MB

/*GPIO Pins and Clocks Definition*/
#define QSPIx_CLK                     RCC_AHB3Periph_QSPI
#define QSPIx_CLK_INIT                RCC_AHB3PeriphClockCmd
#define QSPIx_IRQn                    QUADSPI_IRQn
#define QSPIx_IRQHANDLER              QUADSPI_IRQHandler

#define QSPIx_CLK_PIN                 GPIO_Pin_1
#define QSPIx_CLK_GPIO_PORT           GPIOB
#define QSPIx_CLK_GPIO_CLK            RCC_AHB1Periph_GPIOB
#define QSPIx_CLK_SOURCE              GPIO_PinSource1
#define QSPIx_CLK_AF                  GPIO_AF9_QUADSPI

#define QSPIx_D0_PIN                  GPIO_Pin_6
#define QSPIx_D0_GPIO_PORT            GPIOA
#define QSPIx_D0_GPIO_CLK             RCC_AHB1Periph_GPIOA
#define QSPIx_D0_SOURCE               GPIO_PinSource6
#define QSPIx_D0_AF                   GPIO_AF10_QUADSPI

#define QSPIx_D1_PIN                  GPIO_Pin_7
#define QSPIx_D1_GPIO_PORT            GPIOA
#define QSPIx_D1_GPIO_CLK             RCC_AHB1Periph_GPIOA
#define QSPIx_D1_SOURCE               GPIO_PinSource7
#define QSPIx_D1_AF                   GPIO_AF10_QUADSPI

#define QSPIx_D2_PIN                  GPIO_Pin_4
#define QSPIx_D2_GPIO_PORT            GPIOC
#define QSPIx_D2_GPIO_CLK             RCC_AHB1Periph_GPIOC
#define QSPIx_D2_SOURCE               GPIO_PinSource4
#define QSPIx_D2_AF                   GPIO_AF10_QUADSPI

#define QSPIx_D3_PIN                  GPIO_Pin_5
#define QSPIx_D3_GPIO_PORT            GPIOC
#define QSPIx_D3_GPIO_CLK             RCC_AHB1Periph_GPIOC
#define QSPIx_D3_SOURCE               GPIO_PinSource5
#define QSPIx_D3_AF                   GPIO_AF10_QUADSPI

#define QSPIx_CS_PIN                  GPIO_Pin_11
#define QSPIx_CS_GPIO_PORT            GPIOC
#define QSPIx_CS_GPIO_CLK             RCC_AHB1Periph_GPIOC
#define QSPIx_CS_SOURCE               GPIO_PinSource11
#define QSPIx_CS_AF                   GPIO_AF9_QUADSPI


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
 *                 Global Variables
 ******************************************************/

/******************************************************
 *               Function Declarations
 ******************************************************/

void qspi_init(void);

void qspi_enable(uint8_t DMA);
void qspi_disable(void);

void wait_QSPI_FLAG_TC_set(void);
void wait_QSPI_FLAG_BUSY_reset(void);

void qspi_DMA_config(uint8_t * srcDestPtr, uint32_t length, uint32_t direction, uint32_t priority);
void qspi_DMA_init(void);

#ifdef __cplusplus
} /*extern "C" */
#endif
