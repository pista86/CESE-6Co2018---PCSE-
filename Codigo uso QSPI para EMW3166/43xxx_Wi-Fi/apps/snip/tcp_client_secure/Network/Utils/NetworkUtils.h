
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define HOST_NAME_LOOKUP_RETRY_TIMEOUT          5000
#define HOST_NAME_LOOKUP_RETRY_INTERVAL_MS      5000

#define TCP_CLIENT_CONNECT_TIMEOUT              5000
#define TCP_CLIENT_CONNECT_RETRY_INTERVAL_MS    5000

#define PING_TIMEOUT_MS                         5000

#define GOOGLE_DNS_1 MAKE_IPV4_ADDRESS(8,8,8,8)
#define GOOGLE_DNS_2 MAKE_IPV4_ADDRESS(8,8,4,4)

typedef struct
{
    uint32_t average_1_ms;
    uint32_t average_2_ms;
    uint8_t TimeOutN1;
    uint8_t TimeOutN2;
} Logan_Ping_Internet_t;

typedef struct
{
    uint32_t average_ms;
    uint8_t TimeOutN;
} Logan_Ping_Gateway_t;

logan_result_t Logan_Hostname_Lookup(char* HostName, wiced_ip_address_t* ip_address, uint8_t retries);
logan_result_t Logan_TCP_Connect(wiced_tcp_socket_t* tcp_client_socket, wiced_ip_address_t* server_ip_address, uint16_t server_port, uint8_t retries);
Logan_Ping_Gateway_t Logan_Ping_Gateway(uint8_t Times);
Logan_Ping_Internet_t Logan_Ping_Internet(uint8_t Times);


#ifdef __cplusplus
} /* extern "C" */
#endif


