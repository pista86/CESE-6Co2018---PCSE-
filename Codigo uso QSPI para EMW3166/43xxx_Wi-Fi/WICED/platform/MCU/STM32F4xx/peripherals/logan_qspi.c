/* Includes ------------------------------------------------------------------*/
#include "logan_qspi.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
QSPI_InitTypeDef QSPI_InitStructure;
QSPI_ComConfig_InitTypeDef QSPI_ComConfig_InitStructure;
DMA_InitTypeDef DMA_InitStructure;

/* Private function prototypes -----------------------------------------------*/
static void QSPI_CLK_GPIO_Config(void);

/* Private functions ---------------------------------------------------------*/

void qspi_init(void)
{
	/* Configuracion de clk y pines */
	QSPI_CLK_GPIO_Config();

	// Inicialización de DMA
	DMA_StructInit(&DMA_InitStructure);
	DMA_DeInit(QSPI_DMA_STREAM);

	// Configuración inicial de DMA
	DMA_InitStructure.DMA_PeripheralDataSize = DMA_PeripheralDataSize_Byte;
	DMA_InitStructure.DMA_MemoryDataSize = DMA_MemoryDataSize_Byte;

	DMA_InitStructure.DMA_Memory0BaseAddr = (uint32_t) & QUADSPI->DR;
	DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Enable;
	DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Disable;

	DMA_InitStructure.DMA_Mode = DMA_Mode_Normal;
	DMA_InitStructure.DMA_Channel = DMA_Channel_3;

	// Inicicalización de QSPI
	QSPI_StructInit(&QSPI_InitStructure);
	QSPI_InitStructure.QSPI_SShift = QSPI_SSHIFT;
	QSPI_InitStructure.QSPI_Prescaler = QSPI_PRESCALER;
	QSPI_InitStructure.QSPI_CKMode = QSPI_CKMODE;
	QSPI_InitStructure.QSPI_CSHTime = QSPI_CSHTIME;
	QSPI_InitStructure.QSPI_FSize = QSPI_FSIZE;
	QSPI_InitStructure.QSPI_FSelect = QSPI_FSELECT;
	QSPI_InitStructure.QSPI_DFlash = QSPI_DFLASH;
	QSPI_Init(&QSPI_InitStructure);
}

void qspi_enable(uint8_t DMA)
{
	QSPI_Cmd(ENABLE);
	if (DMA)
	{
		QSPI_DMACmd(ENABLE);
	}
}

void qspi_disable(void)
{
	QSPI_Cmd(DISABLE);
	QSPI_DMACmd(DISABLE);
}

void wait_QSPI_FLAG_TC_set(void)
{
	while (QSPI_GetFlagStatus(QSPI_FLAG_TC) == RESET)
	{
	}
	QSPI_ClearFlag(QSPI_FLAG_TC);
}

void wait_QSPI_FLAG_BUSY_reset(void)
{
	while (QSPI_GetFlagStatus(QSPI_FLAG_BUSY) != RESET)
	{
	}
}

void qspi_DMA_config(uint8_t * srcDestPtr, uint32_t length, uint32_t direction, uint32_t priority)
{
	DMA_InitStructure.DMA_PeripheralBaseAddr = (uint32_t) srcDestPtr;
	DMA_InitStructure.DMA_BufferSize = length;
	DMA_InitStructure.DMA_DIR = direction;
	DMA_InitStructure.DMA_Priority = priority;
}

void qspi_DMA_init(void)
{
	DMA_Init(QSPI_DMA_STREAM, &DMA_InitStructure);
}

static void QSPI_CLK_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

	// Habilitación de clock de QSPI
	QSPIx_CLK_INIT(QSPIx_CLK, ENABLE);

	// Habilitación de clock de DMA
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_DMA2, ENABLE);

	// Habilitación de clock de GPIO
	RCC_AHB1PeriphClockCmd(QSPIx_CLK_GPIO_CLK | QSPIx_CS_GPIO_CLK | QSPIx_D0_GPIO_CLK |
	QSPIx_D1_GPIO_CLK | QSPIx_D2_GPIO_CLK | QSPIx_D3_GPIO_CLK, ENABLE);

	// configuración de GPIOs pertenecientes al periférico QSPI
	GPIO_PinAFConfig(QSPIx_CLK_GPIO_PORT, QSPIx_CLK_SOURCE, QSPIx_CLK_AF);
	GPIO_PinAFConfig(QSPIx_CS_GPIO_PORT, QSPIx_CS_SOURCE, QSPIx_CS_AF);
	GPIO_PinAFConfig(QSPIx_D0_GPIO_PORT, QSPIx_D0_SOURCE, QSPIx_D0_AF);
	GPIO_PinAFConfig(QSPIx_D1_GPIO_PORT, QSPIx_D1_SOURCE, QSPIx_D1_AF);
	GPIO_PinAFConfig(QSPIx_D2_GPIO_PORT, QSPIx_D2_SOURCE, QSPIx_D2_AF);
	GPIO_PinAFConfig(QSPIx_D3_GPIO_PORT, QSPIx_D3_SOURCE, QSPIx_D3_AF);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;

	GPIO_InitStructure.GPIO_Pin = QSPIx_CLK_PIN;
	GPIO_Init(QSPIx_CLK_GPIO_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = QSPIx_D0_PIN;
	GPIO_Init(QSPIx_D0_GPIO_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = QSPIx_D1_PIN;
	GPIO_Init(QSPIx_D1_GPIO_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = QSPIx_D2_PIN;
	GPIO_Init(QSPIx_D2_GPIO_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = QSPIx_D3_PIN;
	GPIO_Init(QSPIx_D3_GPIO_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_InitStructure.GPIO_Pin = QSPIx_CS_PIN;
	GPIO_Init(QSPIx_CS_GPIO_PORT, &GPIO_InitStructure);
}

