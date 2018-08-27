

#pragma once
extern wiced_mutex_t   PrintfMutex;

extern void get_DCT_Authentication_Hash(unsigned char Authentication_Hash[64]);

extern void PRINTF_ARRAY(uint8_t* data, uint32_t data_legth);
extern void PRINTF_ARRAY_MEM(uint8_t* data, uint32_t data_length);
extern void PRINTF_UINT8(uint8_t data);
extern void PRINTF_UINT16(uint16_t data);
extern void PRINTF_UINT32(uint32_t data);
extern void PRINTF_UINT64(uint64_t data);
extern void PRINTF_IPv4(uint32_t ip_address);
extern void PRINTF_DATE_TIME();
extern void PRINTF_MAC(void);
extern void PRINT_DEVICE_DATA(void);
extern uint8_t Logan_MAC_Compare(wiced_mac_t A, wiced_mac_t B);

extern void uint8_t_TO_uint16_t(uint8_t* uint8, uint16_t* uint16, uint8_t start);
extern void uint8_t_TO_uint32_t(uint8_t* uint8, uint32_t* uint32, uint8_t start);
extern void uint8_t_TO_uint64_t(uint8_t* uint8, uint64_t* uint64, uint8_t start);
extern void uint8_t_TO_PIN(uint8_t* data, uint8_t* PIN, uint8_t start);

extern uint64_t getUploadFileName(uint8_t* DESTPIN);

extern wiced_result_t Utils_Init();
extern wiced_result_t Utils_DeInit();

extern void Logan_ConfigureDevice(void);
extern void Logan_GetWiFiMAC(wiced_mac_t* mac_address);
extern void SAFE_PRINTF( const char* format, ... );

extern void TickTock_Start(void);
extern uint32_t TickTock_Stop(void);

extern uint32_t Rand32(void);
extern uint64_t Rand64(void);


#define SAFE_PRINTF(args) SAFE_PRINTF_MACRO(args);

#define SAFE_PRINTF_MACRO(args) do {wiced_rtos_lock_mutex (&PrintfMutex); printf args; wiced_rtos_unlock_mutex (&PrintfMutex);} while(0==1)



