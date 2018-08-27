#include "logan_i2s.h"


static void i2s_MIC_CLK_GPIO_Config(void);


void i2s_init(void)
{
	RCC_PLLI2SCmd(DISABLE);

	RCC_PLLI2SConfig(26, 256, 2, 2, 4);

	RCC_I2SCLKConfig(RCC_I2SBus_APB1, RCC_I2SCLKSource_PLLI2S);
	RCC_I2SCLKConfig(RCC_I2SBus_APB2, RCC_I2SCLKSource_PLLI2S);
}

void i2s_MIC_init(uint32_t audioFreq)
{
	I2S_InitTypeDef I2S_InitStructure;

	i2s_MIC_CLK_GPIO_Config();

	SPI_I2S_DeInit(MIC_I2S);

	I2S_InitStructure.I2S_Mode = I2S_Mode_MasterRx;
	I2S_InitStructure.I2S_Standard = I2S_Standard_LSB;
	I2S_InitStructure.I2S_DataFormat = I2S_DataFormat_16b;
	I2S_InitStructure.I2S_MCLKOutput = I2S_MCLKOutput_Disable;
	I2S_InitStructure.I2S_AudioFreq = audioFreq;
	I2S_InitStructure.I2S_CPOL = I2S_CPOL_Low;

	/* Initialize the I2S peripheral with the structure above */
	I2S_Init(MIC_I2S, &I2S_InitStructure);
}



void i2s_MIC_enable()
{
	I2S_Cmd(MIC_I2S, ENABLE);
	RCC_PLLI2SCmd(ENABLE);
}

void i2s_MIC_disable()
{
	I2S_Cmd(MIC_I2S, DISABLE);
	RCC_PLLI2SCmd(DISABLE);
}

static void i2s_MIC_CLK_GPIO_Config(void)
{

	GPIO_InitTypeDef GPIO_InitStructure;

	/* Peripheral Clock Enable -------------------------------------------------*/
	/* Enable the QSPI clock */
	MIC_I2S_CLK_INIT(MIC_I2S_CLK, ENABLE);

	/* Enable DMA2 AHB1 clock */
	//RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_DMA2, ENABLE);
	/* Enable GPIO clocks */
	RCC_AHB1PeriphClockCmd( MIC_I2S_CLK_GPIO_CLK | MIC_I2S_SD_GPIO_CLK, ENABLE);

	/* QSPI GPIO Configuration -------------------------------------------------*/
	/* Connect QSPI pins to Alternate function */
	GPIO_PinAFConfig(MIC_I2S_CLK_GPIO_PORT, MIC_I2S_CLK_SOURCE, MIC_I2S_CLK_AF);
	GPIO_PinAFConfig(MIC_I2S_SD_GPIO_PORT, MIC_I2S_SD_SOURCE, MIC_I2S_SD_AF);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_25MHz;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;

	/* QSPI CLK pin configuration */
	GPIO_InitStructure.GPIO_Pin = MIC_I2S_CLK_PIN;
	GPIO_Init(MIC_I2S_CLK_GPIO_PORT, &GPIO_InitStructure);

	/* QSPI D0 pin configuration */
	GPIO_InitStructure.GPIO_Pin = MIC_I2S_SD_PIN;
	GPIO_Init(MIC_I2S_SD_GPIO_PORT, &GPIO_InitStructure);

	RCC_PLLI2SCmd(ENABLE);
}

