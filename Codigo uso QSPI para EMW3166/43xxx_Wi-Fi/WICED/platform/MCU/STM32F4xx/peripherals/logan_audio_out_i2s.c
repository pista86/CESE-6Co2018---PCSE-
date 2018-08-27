#include "logan_audio_out_i2s.h"


static audio_out_i2s_transfer_complete_callBack_t audio_out_i2s_transfer_complete_callBack = NULL;
static audio_out_i2s_half_transfer_callBack_t audio_out_i2s_half_transfer_callBack = NULL;

static DMA_InitTypeDef DMA_InitStructure;

static void audio_out_i2s_CLK_GPIO_Config(void);
static void audio_out_i2s_DMA_init(void);

static uint8_t playing;

void audio_out_i2s_init(uint32_t audioFreq,
		audio_out_i2s_transfer_complete_callBack_t transfer_complete_callBack,
		audio_out_i2s_half_transfer_callBack_t half_transfer_callBack)
{
	I2S_InitTypeDef I2S_InitStructure;

	audio_out_i2s_transfer_complete_callBack = transfer_complete_callBack;
	audio_out_i2s_half_transfer_callBack = half_transfer_callBack;

	i2s_init();

	audio_out_i2s_CLK_GPIO_Config();

	SPI_I2S_DeInit(AUDIO_OUT_I2S);

	I2S_InitStructure.I2S_Mode = I2S_Mode_MasterTx;
	I2S_InitStructure.I2S_Standard = I2S_Standard_LSB;
	I2S_InitStructure.I2S_DataFormat = I2S_DataFormat_16b;
	I2S_InitStructure.I2S_MCLKOutput = I2S_MCLKOutput_Disable;
	I2S_InitStructure.I2S_AudioFreq = audioFreq;
	I2S_InitStructure.I2S_CPOL = I2S_CPOL_Low;

	/* Initialize the I2S peripheral with the structure above */
	I2S_Init(AUDIO_OUT_I2S, &I2S_InitStructure);

	audio_out_i2s_DMA_init();

	MAX98357A_init();

	playing = 0;
}


static void audio_out_i2s_CLK_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;

	/* Peripheral Clock Enable -------------------------------------------------*/
	/* Enable the QSPI clock */
	AUDIO_OUT_I2S_CLK_INIT(AUDIO_OUT_I2S_CLK, ENABLE);

	/* Enable GPIO clocks */
	RCC_AHB1PeriphClockCmd(
	AUDIO_OUT_I2S_CLK_GPIO_CLK | AUDIO_OUT_I2S_SD_GPIO_CLK | AUDIO_OUT_I2S_WS_GPIO_CLK, ENABLE);

	/* QSPI GPIO Configuration -------------------------------------------------*/
	/* Connect QSPI pins to Alternate function */
	GPIO_PinAFConfig(AUDIO_OUT_I2S_CLK_GPIO_PORT, AUDIO_OUT_I2S_CLK_SOURCE,
	AUDIO_OUT_I2S_CLK_AF);
	GPIO_PinAFConfig(AUDIO_OUT_I2S_SD_GPIO_PORT, AUDIO_OUT_I2S_SD_SOURCE,
	AUDIO_OUT_I2S_SD_AF);
	GPIO_PinAFConfig(AUDIO_OUT_I2S_WS_GPIO_PORT, AUDIO_OUT_I2S_WS_SOURCE,
	AUDIO_OUT_I2S_WS_AF);

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_25MHz;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;

	GPIO_InitStructure.GPIO_Pin = AUDIO_OUT_I2S_CLK_PIN;
	GPIO_Init(AUDIO_OUT_I2S_CLK_GPIO_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = AUDIO_OUT_I2S_SD_PIN;
	GPIO_Init(AUDIO_OUT_I2S_SD_GPIO_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = AUDIO_OUT_I2S_WS_PIN;
	GPIO_Init(AUDIO_OUT_I2S_WS_GPIO_PORT, &GPIO_InitStructure);

	RCC_PLLI2SCmd(ENABLE);
}

static void audio_out_i2s_DMA_init(void)
{
	/* Enable the DMA clock */
	RCC_AHB1PeriphClockCmd(AUDIO_OUT_I2S_DMA_CLOCK, ENABLE);

	/* Configure the DMA Stream */
	DMA_Cmd(AUDIO_OUT_I2S_DMA_STREAM, DISABLE);
	DMA_DeInit(AUDIO_OUT_I2S_DMA_STREAM);
	/* Set the parameters to be configured */
	DMA_InitStructure.DMA_Channel = AUDIO_OUT_I2S_DMA_CHANNEL;
	DMA_InitStructure.DMA_PeripheralBaseAddr = (uint32_t) & AUDIO_OUT_I2S->DR;
	DMA_InitStructure.DMA_Memory0BaseAddr = (uint32_t) 0; /* This field will be configured in play function */
	DMA_InitStructure.DMA_DIR = DMA_DIR_MemoryToPeripheral;
	DMA_InitStructure.DMA_BufferSize = (uint32_t) 0; /* This field will be configured in play function */
	DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Disable;
	DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable;
	DMA_InitStructure.DMA_PeripheralDataSize =	AUDIO_OUT_I2S_DMA_PERIPH_DATA_SIZE;
	DMA_InitStructure.DMA_MemoryDataSize = AUDIO_OUT_I2S_DMA_MEM_DATA_SIZE;
	DMA_InitStructure.DMA_Mode = DMA_Mode_Circular;
	DMA_InitStructure.DMA_Priority = DMA_Priority_VeryHigh;
	DMA_InitStructure.DMA_FIFOMode = DMA_FIFOMode_Disable;
	DMA_InitStructure.DMA_FIFOThreshold = DMA_FIFOThreshold_HalfFull;
	DMA_InitStructure.DMA_MemoryBurst = DMA_MemoryBurst_Single;
	DMA_InitStructure.DMA_PeripheralBurst = DMA_PeripheralBurst_Single;
	DMA_Init(AUDIO_OUT_I2S_DMA_STREAM, &DMA_InitStructure);

	DMA_ITConfig(AUDIO_OUT_I2S_DMA_STREAM, DMA_IT_TC, ENABLE);
	DMA_ITConfig(AUDIO_OUT_I2S_DMA_STREAM, DMA_IT_HT, ENABLE);

	NVIC_EnableIRQ(AUDIO_OUT_I2S_DMA_IRQ);
}

void audio_out_i2s_play(int16_t * bufferAddress, uint32_t bufferLength)
{
	playing = 1;
	/* Configure the buffer address and size */
	DMA_InitStructure.DMA_Memory0BaseAddr = (uint32_t) bufferAddress;
	DMA_InitStructure.DMA_BufferSize = (uint32_t) bufferLength;

	/* Enable the I2S DMA request */
	SPI_I2S_DMACmd(AUDIO_OUT_I2S, SPI_I2S_DMAReq_Tx, ENABLE);

	/* Configure the DMA Stream with the new parameters */
	DMA_Init(AUDIO_OUT_I2S_DMA_STREAM, &DMA_InitStructure);

	/* Enable the I2S DMA Stream*/
	DMA_Cmd(AUDIO_OUT_I2S_DMA_STREAM, ENABLE);


	if ((AUDIO_OUT_I2S->I2SCFGR & I2S_ENABLE_MASK) == 0)
	{
		I2S_Cmd(AUDIO_OUT_I2S, ENABLE);
	}

	MAX98357A_enable();
}

void audio_out_i2s_pause(void)
{
	playing = 0;
	/* Disable the I2S DMA request */
	SPI_I2S_DMACmd(AUDIO_OUT_I2S, SPI_I2S_DMAReq_Tx, DISABLE);

	/* Pause the I2S DMA Stream
	 Note. For the STM32F4xx devices, the DMA implements a pause feature,
	 by disabling the stream, all configuration is preserved and data
	 transfer is paused till the next enable of the stream.*/
	DMA_Cmd(AUDIO_OUT_I2S_DMA_STREAM, DISABLE);
	MAX98357A_disable();
}

void audio_out_i2s_resume(void)
{
	playing = 1;
	/* Enable the I2S DMA request */
	SPI_I2S_DMACmd(AUDIO_OUT_I2S, SPI_I2S_DMAReq_Tx, ENABLE);

	/* Resume the I2S DMA Stream
	 Note. For the STM32F4xx devices, the DMA implements a pause feature,
	 by disabling the stream, all configuration is preserved and data
	 transfer is paused till the next enable of the stream.*/
	DMA_Cmd(AUDIO_OUT_I2S_DMA_STREAM, ENABLE);

	/* If the I2S peripheral is still not enabled, enable it */
	if ((AUDIO_OUT_I2S->I2SCFGR & I2S_ENABLE_MASK) == 0)
	{
		I2S_Cmd(AUDIO_OUT_I2S, ENABLE);
	}
	MAX98357A_enable();
}

void audio_out_i2s_stop(void)
{
	playing = 0;
	/* Stop the Transfer on the I2S side: Stop and disable the DMA stream */
	DMA_Cmd(AUDIO_OUT_I2S_DMA_STREAM, DISABLE);

	/* Clear all the DMA flags for the next transfer */
	DMA_ClearFlag(AUDIO_OUT_I2S_DMA_STREAM,
	AUDIO_OUT_I2S_DMA_FLAG_TC | AUDIO_OUT_I2S_DMA_FLAG_HT |
	AUDIO_OUT_I2S_DMA_FLAG_FE | AUDIO_OUT_I2S_DMA_FLAG_TE);

	/*
	 The I2S DMA requests are not disabled here.
	 */

	/* In all modes, disable the I2S peripheral */
	I2S_Cmd(AUDIO_OUT_I2S, DISABLE);
	MAX98357A_disable();
}

void audio_out_i2s_IRQHandler(void)
{
	/* Transfer complete interrupt */
	if (DMA_GetFlagStatus(AUDIO_OUT_I2S_DMA_STREAM,
	AUDIO_OUT_I2S_DMA_FLAG_TC) != RESET)
	{

		if (audio_out_i2s_transfer_complete_callBack != NULL && playing)
		{
			audio_out_i2s_transfer_complete_callBack();
		}

		/* Clear the Interrupt flag */
		DMA_ClearFlag(AUDIO_OUT_I2S_DMA_STREAM, AUDIO_OUT_I2S_DMA_FLAG_TC);

	}

	/* Half Transfer complete interrupt */
	if (DMA_GetFlagStatus(AUDIO_OUT_I2S_DMA_STREAM,
	AUDIO_OUT_I2S_DMA_FLAG_HT) != RESET)
	{

		if (audio_out_i2s_half_transfer_callBack != NULL && playing)
		{
			audio_out_i2s_half_transfer_callBack();
		}

		/* Clear the Interrupt flag */
		DMA_ClearFlag(AUDIO_OUT_I2S_DMA_STREAM, AUDIO_OUT_I2S_DMA_FLAG_HT);
	}

}
