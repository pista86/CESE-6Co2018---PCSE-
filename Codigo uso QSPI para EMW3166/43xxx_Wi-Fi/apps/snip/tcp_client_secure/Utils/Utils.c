

#include "wiced.h"

#include "Utils.h"
#include "stdarg.h"

static platform_dct_wifi_config_t* dct_wifi_cfg;

unsigned char FIXED_Authentication_Hash[64]={0x20,0xea,0x34,0xae,0x9d,0x53,0x00,0x4e,0xcc,0x12,0x2b,0xb4,0xa8,0x03,0x61,0x0b,0x97,0xb7,0xad,0x2a,0x5a,0x49,0xff,0xdb,0xe2,0x71,0x66,0x66,0xab,0xa8,0xeb,0x77,0xd9,0xf7,0x6f,0x8a,0x79,0x30,0x45,0xee,0x0d,0x10,0xe6,0x77,0x42,0xaa,0x45,0x4e,0x9b,0xb1,0x74,0x45,0xff,0x2d,0x62,0x5d,0x31,0xba,0x54,0xe6,0x4a,0x4a,0xee,0xef};

wiced_mutex_t   PrintfMutex;
TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;

void TickTock_Init(void);
void TickTock_DeInit(void);
void Logan_RNG_Init(void);
void Logan_RNG_DeInit(void);
uint32_t RNG_GetNumber(void);

wiced_result_t Utils_Init()
{
    wiced_result_t result;

    result = wiced_rtos_init_mutex (&PrintfMutex);
    TickTock_Init();
    Logan_RNG_Init();

    return result;
}

wiced_result_t Utils_DeInit()
{
    wiced_result_t result;

    result = wiced_rtos_deinit_mutex (&PrintfMutex);
    TickTock_DeInit();
    Logan_RNG_DeInit();

    return result;
}

void Logan_Restart(Logan_restart_t restartType)
{
    switch (restartType)
    {
        case Logan_Config_Restart:
            SAFE_PRINTF(("Reiniciando por configuracion... \n"));
            break;
        case Logan_Network_Error_Restart:
            SAFE_PRINTF(("Reiniciando por error de red... \n"));
            break;
        case Logan_WIFI_Error_Restart:
            SAFE_PRINTF(("Reiniciando por error de WIFI... \n"));
            break;
        default:
            break;
    }
    wiced_framework_reboot();
}

void Logan_ConfigureDevice(void)
{
   // Update DCT to enable AP mode at startup
    wiced_dct_read_lock((void**)&dct_wifi_cfg, WICED_TRUE, DCT_WIFI_CONFIG_SECTION, 0, sizeof(platform_dct_wifi_config_t));
    dct_wifi_cfg->device_configured = WICED_FALSE;
    wiced_dct_write((const void*)dct_wifi_cfg, DCT_WIFI_CONFIG_SECTION, 0, sizeof(platform_dct_wifi_config_t));
    wiced_dct_read_unlock((void*)dct_wifi_cfg, WICED_TRUE );

    // Reboot to start AP mode.
    wiced_framework_reboot();
}

void Logan_GetWiFiMAC(wiced_mac_t* mac_address)
{
    wiced_wifi_get_mac_address( mac_address );
}


void TickTock_Init(void)
{
    uint16_t                prescaler;
    RCC_ClocksTypeDef       rcc_clock_frequencies;
    RCC_GetClocksFreq( &rcc_clock_frequencies );
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5, ENABLE);
    prescaler = (uint16_t)( rcc_clock_frequencies.PCLK1_Frequency / 500000 -1);
    TIM_TimeBaseStructInit(&TIM_TimeBaseInitStruct);
    TIM_TimeBaseInitStruct.TIM_Prescaler=prescaler;
    TIM_TimeBaseInit(TIM5, &TIM_TimeBaseInitStruct);
    TIM_Cmd(TIM5, ENABLE);
}

void TickTock_DeInit(void)
{
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5, DISABLE);
    TIM_Cmd(TIM5, DISABLE);
}

void Logan_RNG_Init(void)
{
    RCC_AHB2PeriphClockCmd(RCC_AHB2Periph_RNG,ENABLE);
    RNG_Cmd(ENABLE);
}

void Logan_RNG_DeInit(void)
{
    RCC_AHB2PeriphClockCmd(RCC_AHB2Periph_RNG,DISABLE);
    RNG_Cmd(DISABLE);
}

uint32_t RNG_GetNumber(void)
{
    while(RNG_GetFlagStatus(RNG_FLAG_DRDY) == RESET)
    {
        wiced_rtos_delay_microseconds(1);
    }
    return RNG_GetRandomNumber();
}

uint32_t Rand32(void)
{
    return RNG_GetNumber();
}

uint64_t Rand64(void)
{
    return (((uint64_t)RNG_GetNumber())<<32) + ((uint64_t)RNG_GetNumber());
}

void TickTock_Start(void)
{
    TIM_SetCounter(TIM5, 0);
}

uint32_t TickTock_Stop(void)
{
    return TIM_GetCounter(TIM5);
}


void uint8_t_TO_uint16_t(uint8_t* uint8, uint16_t* uint16, uint8_t start){
    *uint16 =((uint16_t)uint8[start] << 8) + (uint16_t)uint8[start+1];
}
void uint8_t_TO_uint32_t(uint8_t* uint8, uint32_t* uint32, uint8_t start){
    *uint32 =((uint32_t)uint8[start] << 24) + ((uint32_t)uint8[start+1] << 16) +((uint32_t)uint8[start+2] << 8) + (uint32_t)uint8[start+3];
}
void uint8_t_TO_uint64_t(uint8_t* uint8, uint64_t* uint64, uint8_t start){
    *uint64 =((uint64_t)uint8[start] << 56)  + ((uint64_t)uint8[start+1] << 48) + ((uint64_t)uint8[start+2] << 40) + \
             ((uint64_t)uint8[start+3] << 32) + ((uint64_t)uint8[start+4] << 24) + ((uint64_t)uint8[start+5] << 16) + \
             ((uint64_t)uint8[start+6] << 8)  + ((uint64_t)uint8[start+7]);
}
void uint8_t_TO_PIN(uint8_t* data, uint8_t* PIN, uint8_t start){
    PIN[0]=data[start];
    PIN[1]=data[start+1];
    PIN[2]=data[start+2];
    PIN[3]=data[start+3];
    PIN[4]=data[start+4];
    PIN[5]=data[start+5];
}

uint8_t Logan_MAC_Compare(wiced_mac_t A, wiced_mac_t B)
{
    return memcmp(A.octet, B.octet, 6);
}


void PRINTF_ARRAY_MEM(uint8_t* data, uint32_t data_length){
    wiced_rtos_lock_mutex (&PrintfMutex);
                for ( int x = 0; x < data_length; x=x+16 ) {
                    WPRINT_APP_INFO(("%u: ",x));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+1]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+2]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+3]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+4]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+5]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+6]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+7]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+8]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+9]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+10]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+11]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+12]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+13]));
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+14]));
                    WPRINT_APP_INFO(("0x%x\n", (unsigned)data[x+15]));
                }
    wiced_rtos_unlock_mutex (&PrintfMutex);
}

void PRINTF_ARRAY(uint8_t* data, uint32_t data_length){
    wiced_rtos_lock_mutex (&PrintfMutex);
                for ( int x = 0; x < data_length; x++ ) {
                    WPRINT_APP_INFO(("0x%x ", (unsigned)data[x]));
                    if ((x+1) % 16 == 0){
                        WPRINT_APP_INFO(("\n"));
                    }else if(x==(data_length-1))
                    {
                        WPRINT_APP_INFO(("\n"));
                    }

                }
    wiced_rtos_unlock_mutex (&PrintfMutex);
}

void PRINTF_UINT8(uint8_t data)
{
    wiced_rtos_lock_mutex (&PrintfMutex);
    WPRINT_APP_INFO(("%02x", (uint8_t)data));
    wiced_rtos_unlock_mutex (&PrintfMutex);
}

void PRINTF_UINT16(uint16_t data)
{
    wiced_rtos_lock_mutex (&PrintfMutex);
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>8)));
    WPRINT_APP_INFO(("%02x", (uint8_t)data));
    wiced_rtos_unlock_mutex (&PrintfMutex);
}

void PRINTF_UINT32(uint32_t data)
{
    wiced_rtos_lock_mutex (&PrintfMutex);
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>24)));
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>16)));
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>8)));
    WPRINT_APP_INFO(("%02x", (uint8_t)data));
    wiced_rtos_unlock_mutex (&PrintfMutex);
}

void PRINTF_UINT64(uint64_t data)
{
    wiced_rtos_lock_mutex (&PrintfMutex);
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>56)));
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>48)));
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>40)));
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>32)));
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>24)));
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>16)));
    WPRINT_APP_INFO(("%02x", (uint8_t)(data>>8)));
    WPRINT_APP_INFO(("%02x", (uint8_t)data));
    wiced_rtos_unlock_mutex (&PrintfMutex);
}

void PRINTF_IPv4(uint32_t ip_address)
{
    wiced_rtos_lock_mutex (&PrintfMutex);
    WPRINT_APP_INFO( ( "IPv4: %u.%u.%u.%u\n", (unsigned char) ( ( ip_address >> 24 ) & 0xff ), (unsigned char) ( ( ip_address >> 16 ) & 0xff ), (unsigned char) ( ( ip_address >> 8 ) & 0xff ), (unsigned char) ( ( ip_address >> 0 ) & 0xff ) ) );
    wiced_rtos_unlock_mutex (&PrintfMutex);
}

void PRINTF_DATE_TIME()
{
    Logan_Time_t    dateTime;

    dateTime=GetDateTime();
    wiced_rtos_lock_mutex (&PrintfMutex);
    WPRINT_APP_INFO(("%02u/", dateTime.Day));
    WPRINT_APP_INFO(("%02u/", dateTime.Month));
    WPRINT_APP_INFO(("%04u ", dateTime.Year));
    WPRINT_APP_INFO(("%02u:", dateTime.Hour));
    WPRINT_APP_INFO(("%02u:", dateTime.Minute));
    WPRINT_APP_INFO(("%02u\n", dateTime.Second));
    wiced_rtos_unlock_mutex (&PrintfMutex);
}

void PRINT_DEVICE_DATA(void)
{
    SAFE_PRINTF(("DEVICE DATA:\n"));
    SAFE_PRINTF(("PIN: %s \n"  , PIN));
    SAFE_PRINTF(("OWNERPIN: %s \n"  , OWNERPIN));
    SAFE_PRINTF(("1° CONTACTLIST.PIN: %s \n"  , CONTACTLIST[0].PIN));
}

Logan_Time_t GetDateTime(void)
{
    Logan_Time_t            DateTime;
    wiced_iso8601_time_t    iso8601_time;

    wiced_time_get_iso8601_time (&iso8601_time);
    DateTime.Year=(uint16_t)atoi(iso8601_time.year);
    DateTime.Month=(uint8_t)atoi(iso8601_time.month);
    DateTime.Day=(uint8_t)atoi(iso8601_time.day);
    DateTime.Hour=(uint8_t)atoi(iso8601_time.hour);
    DateTime.Minute=(uint8_t)atoi(iso8601_time.minute);
    DateTime.Second=(uint8_t)atoi(iso8601_time.second);
    return DateTime;
}

uint64_t getUploadFileName(uint8_t* DESTPIN)
{
//    uint64_t    result;
//    uint64_t    DPIN;
//    wiced_time_get_utc_time_ms(&result);
//    uint8_t_TO_uint64_t(DESTPIN, DPIN, 0);
//    DPIN=DPIN>>16;
//    result+=DPIN;
    return Rand64();
}

void PRINTF_MAC(void)
{
    wiced_mac_t     mac_address;

    Logan_GetWiFiMAC(&mac_address);
    PRINTF_ARRAY(mac_address.octet,6);
    wiced_rtos_lock_mutex (&PrintfMutex);
    WPRINT_APP_INFO(("MAC address:"));
    WPRINT_APP_INFO(("%02x:", mac_address.octet[0]));
    WPRINT_APP_INFO(("%02x:", mac_address.octet[1]));
    WPRINT_APP_INFO(("%02x:", mac_address.octet[2]));
    WPRINT_APP_INFO(("%02x:", mac_address.octet[3]));
    WPRINT_APP_INFO(("%02x:", mac_address.octet[4]));
    WPRINT_APP_INFO(("%02x\n", mac_address.octet[5]));
    wiced_rtos_unlock_mutex (&PrintfMutex);
}


void get_DCT_Authentication_Hash(unsigned char Authentication_Hash[64]){
   // memcpy(Authentication_Hash, FIXED_Authentication_Hash, 64);
}

/*
void sha512 ( unsigned char * input_data, int32_t input_len, unsigned char output[64]){

 sha4 ( &input_data, input_len, output[64], 0);

} 	*/



