
/* Includes ------------------------------------------------------------------*/
#include "../flash_memory/MX25V1635F.h"

#include "logan_qspi.h"

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

/* Buffer used for transmission */

/* Buffer used for reception */

/* Private function prototypes -----------------------------------------------*/

static void mx25v1635f_wait_WIP_reset (void);
static void mx25v1635f_WREN (void);
static void mx25v1635f_WRDI (void);

/* Private functions ---------------------------------------------------------*/





void mx25v1635f_init (void)
{
    qspi_init();
}

uint8_t mx25v1635f_4READ (uint8_t * rxBuffer, uint32_t rxBufferLength, uint32_t address, uint8_t performance)
{
    uint8_t result = 0;
    QSPI_ComConfig_InitTypeDef  QSPI_ComConfig_InitStructure;

    qspi_enable(DMA_ON);


    QSPI_SetDataLength(rxBufferLength - 1 + 16);

    if (performance){
        QSPI_SetAlternateByte(COMMAND_4READ_PERFORMANCE_ON);
    }else{
        QSPI_SetAlternateByte(COMMAND_4READ_PERFORMANCE_OFF);
    }

    QSPI_ComConfig_StructInit(&QSPI_ComConfig_InitStructure);
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_FMode       = QSPI_ComConfig_FMode_Indirect_Read;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADSize      = QSPI_ComConfig_ADSize_24bit;

    // Comentado por bug en STM32F412 en.DM00183231.pdf
    //QSPI_ComConfig_InitStructure.QSPI_ComConfig_DummyCycles = COMMAND_4READ_DUMMY_CYCLES;
    //QSPI_ComConfig_InitStructure.QSPI_ComConfig_ABSize      = QSPI_ComConfig_ABSize_8bit;
    // Solución a bug (incorporar más alternate bytes en lugar de los dummy cycles):
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ABSize      = QSPI_ComConfig_ABSize_24bit;

    QSPI_ComConfig_InitStructure.QSPI_ComConfig_IMode       = QSPI_ComConfig_IMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADMode      = QSPI_ComConfig_ADMode_4Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ABMode      = QSPI_ComConfig_ABMode_4Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_DMode       = QSPI_ComConfig_DMode_4Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_Ins         = COMMAND_4READ;
    QSPI_ComConfig_Init(&QSPI_ComConfig_InitStructure);

    QSPI_SetAddress(address);

    qspi_DMA_config(rxBuffer, rxBufferLength, QSPI_DMA_READ, QSPI_DMA_Priority_Medium);
    qspi_DMA_init();

    DMA_Cmd(QSPI_DMA_STREAM, ENABLE);

    while(DMA_GetFlagStatus(QSPI_DMA_STREAM, QSPI_DMA_FLAG_TC) == RESET)
      {}

      DMA_ClearFlag(QSPI_DMA_STREAM, QSPI_DMA_FLAG_TC);

      DMA_Cmd(QSPI_DMA_STREAM, DISABLE);

      qspi_disable();

    return result;
}

void mx25v1635f_4PP (uint8_t * txBuffer, uint32_t txBufferLength, uint32_t address)
{
    QSPI_ComConfig_InitTypeDef  QSPI_ComConfig_InitStructure;

    mx25v1635f_wait_WIP_reset();

    mx25v1635f_WREN();

    qspi_enable(DMA_ON);

    QSPI_SetDataLength(txBufferLength - 1);

    QSPI_ComConfig_StructInit(&QSPI_ComConfig_InitStructure);
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_IMode       = QSPI_ComConfig_IMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADMode      = QSPI_ComConfig_ADMode_4Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_DMode       = QSPI_ComConfig_DMode_4Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_FMode       = QSPI_ComConfig_FMode_Indirect_Write;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADSize      = QSPI_ComConfig_ADSize_24bit;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_Ins         = COMMAND_4PP;
    QSPI_ComConfig_Init(&QSPI_ComConfig_InitStructure);
    QSPI_SetAddress(address);

    qspi_DMA_config(txBuffer, txBufferLength, QSPI_DMA_WRITE, QSPI_DMA_Priority_Medium);
    qspi_DMA_init();

    DMA_Cmd(QSPI_DMA_STREAM, ENABLE);

    while(DMA_GetFlagStatus(QSPI_DMA_STREAM, QSPI_DMA_FLAG_TC) == RESET)
      {}

      DMA_ClearFlag(QSPI_DMA_STREAM, QSPI_DMA_FLAG_TC);

      DMA_Cmd(QSPI_DMA_STREAM, DISABLE);

      qspi_disable();

      mx25v1635f_wait_WIP_reset();
}


void mx25v1635f_read_ID (uint8_t* manufacturerID, uint16_t* deviceID)
{
    QSPI_ComConfig_InitTypeDef  QSPI_ComConfig_InitStructure;

    qspi_enable(DMA_OFF);

    QSPI_SetDataLength(COMMAND_RDID_DATA_LENGTH - 1);

    QSPI_ComConfig_StructInit(&QSPI_ComConfig_InitStructure);
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_FMode       = QSPI_ComConfig_FMode_Indirect_Read;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_DMode       = QSPI_ComConfig_DMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_IMode       = QSPI_ComConfig_IMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_Ins         = COMMAND_RDID;

    QSPI_ComConfig_Init(&QSPI_ComConfig_InitStructure);

    wait_QSPI_FLAG_TC_set();

    *manufacturerID = QSPI_ReceiveData16();
    *deviceID = QSPI_ReceiveData8();

    wait_QSPI_FLAG_BUSY_reset();

    qspi_disable();
}


MX25V1635F_SR_t mx25v1635f_read_SR (void)
{
    MX25V1635F_SR_t result;
    uint8_t sr;
    QSPI_ComConfig_InitTypeDef  QSPI_ComConfig_InitStructure;

    qspi_enable(DMA_OFF);

    QSPI_SetDataLength(COMMAND_RDSR_DATA_LENGTH - 1);

    QSPI_ComConfig_StructInit(&QSPI_ComConfig_InitStructure);
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_FMode       = QSPI_ComConfig_FMode_Indirect_Read;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_DMode       = QSPI_ComConfig_DMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_IMode       = QSPI_ComConfig_IMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_Ins         = COMMAND_RDSR;

    QSPI_ComConfig_Init(&QSPI_ComConfig_InitStructure);

    wait_QSPI_FLAG_TC_set();

    sr = QSPI_ReceiveData8();

    memcpy(&result, &sr, sizeof(result));

    wait_QSPI_FLAG_BUSY_reset();

    qspi_disable();

    return result;
}

void mx25v1635f_SE4K (uint32_t address)
{
    QSPI_ComConfig_InitTypeDef  QSPI_ComConfig_InitStructure;

    mx25v1635f_WREN();

    qspi_enable(DMA_OFF);

    QSPI_ComConfig_StructInit(&QSPI_ComConfig_InitStructure);
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_FMode       = QSPI_ComConfig_FMode_Indirect_Write;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_IMode       = QSPI_ComConfig_IMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADMode      = QSPI_ComConfig_ADMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADSize      = QSPI_ComConfig_ADSize_24bit;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_Ins         = COMMAND_SE;
    QSPI_ComConfig_Init(&QSPI_ComConfig_InitStructure);

    QSPI_SetAddress(address);

    wait_QSPI_FLAG_BUSY_reset();

    qspi_disable();

    while(mx25v1635f_read_SR().WIP)
        {
        }
    while(mx25v1635f_read_SR().WEL)
        {
        }
}

void mx25v1635f_BE32K (uint32_t address)
{
    QSPI_ComConfig_InitTypeDef  QSPI_ComConfig_InitStructure;

    mx25v1635f_WREN();

    qspi_enable(DMA_OFF);

    QSPI_ComConfig_StructInit(&QSPI_ComConfig_InitStructure);
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_FMode       = QSPI_ComConfig_FMode_Indirect_Write;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_IMode       = QSPI_ComConfig_IMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADMode      = QSPI_ComConfig_ADMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADSize      = QSPI_ComConfig_ADSize_24bit;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_Ins         = COMMAND_BE32K;
    QSPI_ComConfig_Init(&QSPI_ComConfig_InitStructure);

    QSPI_SetAddress(address);

    wait_QSPI_FLAG_BUSY_reset();

    qspi_disable();

    while(mx25v1635f_read_SR().WIP)
        {
        }
    while(mx25v1635f_read_SR().WEL)
        {
        }
}

void mx25v1635f_BE64K (uint32_t address)
{
    QSPI_ComConfig_InitTypeDef  QSPI_ComConfig_InitStructure;

    mx25v1635f_WREN();

    qspi_enable(DMA_OFF);

    QSPI_ComConfig_StructInit(&QSPI_ComConfig_InitStructure);
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_FMode       = QSPI_ComConfig_FMode_Indirect_Write;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_IMode       = QSPI_ComConfig_IMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADMode      = QSPI_ComConfig_ADMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADSize      = QSPI_ComConfig_ADSize_24bit;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_Ins         = COMMAND_BE;
    QSPI_ComConfig_Init(&QSPI_ComConfig_InitStructure);

    QSPI_SetAddress(address);

    wait_QSPI_FLAG_BUSY_reset();

    qspi_disable();

    while(mx25v1635f_read_SR().WIP)
        {
        }
    while(mx25v1635f_read_SR().WEL)
        {
        }
}

void mx25v1635f_CE ()
{
    QSPI_ComConfig_InitTypeDef  QSPI_ComConfig_InitStructure;

    mx25v1635f_WREN();

    qspi_enable(DMA_OFF);

    QSPI_ComConfig_StructInit(&QSPI_ComConfig_InitStructure);
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_FMode       = QSPI_ComConfig_FMode_Indirect_Write;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_IMode       = QSPI_ComConfig_IMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_ADMode      = QSPI_ComConfig_ADMode_NoAddress;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_Ins         = COMMAND_CE;
    QSPI_ComConfig_Init(&QSPI_ComConfig_InitStructure);

    wait_QSPI_FLAG_BUSY_reset();

    qspi_disable();

    while(mx25v1635f_read_SR().WIP)
        {
        }
    while(mx25v1635f_read_SR().WEL)
        {
        }
}

static void mx25v1635f_WREN (void)
{
    QSPI_ComConfig_InitTypeDef  QSPI_ComConfig_InitStructure;

    qspi_enable(DMA_OFF);

    QSPI_ComConfig_StructInit(&QSPI_ComConfig_InitStructure);
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_FMode       = QSPI_ComConfig_FMode_Indirect_Write;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_IMode       = QSPI_ComConfig_IMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_Ins         = COMMAND_WREN;

    QSPI_ComConfig_Init(&QSPI_ComConfig_InitStructure);

    wait_QSPI_FLAG_BUSY_reset();

    qspi_disable();

    while(!mx25v1635f_read_SR().WEL)
        {
        }
}

static void mx25v1635f_WRDI (void)
{
    QSPI_ComConfig_InitTypeDef  QSPI_ComConfig_InitStructure;

    qspi_enable(DMA_OFF);

    QSPI_ComConfig_StructInit(&QSPI_ComConfig_InitStructure);
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_FMode       = QSPI_ComConfig_FMode_Indirect_Write;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_IMode       = QSPI_ComConfig_IMode_1Line;
    QSPI_ComConfig_InitStructure.QSPI_ComConfig_Ins         = COMMAND_WRDI;

    QSPI_ComConfig_Init(&QSPI_ComConfig_InitStructure);

    wait_QSPI_FLAG_BUSY_reset();

    qspi_disable();
}



static void mx25v1635f_wait_WIP_reset (void)
{
    while(mx25v1635f_read_SR().WIP)
    {
    }
}
