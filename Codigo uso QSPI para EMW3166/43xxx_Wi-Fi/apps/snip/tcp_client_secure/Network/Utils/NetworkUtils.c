
#include "wiced.h"
#include "Logan.h"
#include "Utils/Utils.h"
#include "Network/Utils/NetworkUtils.h"


logan_result_t Logan_Hostname_Lookup(char* HostName, wiced_ip_address_t* ip_address, uint8_t retries)
{
    uint8_t         retry = 0;
    wiced_result_t  WicedResult;

    while(1)
    {
        WicedResult=wiced_hostname_lookup(HostName, ip_address, HOST_NAME_LOOKUP_RETRY_TIMEOUT);
        if (WicedResult==WICED_SUCCESS)
        {
            SAFE_PRINTF(("Servidor: %s  ", HostName));
            PRINTF_IPv4(ip_address->ip.v4);
            return Logan_Success;
        }
        retry++;
        if (retry==retries)
        {
            return Logan_Timeout;
        }
    SAFE_PRINTF(("Reintetando wiced_hostname_lookup en: %u ms\n", HOST_NAME_LOOKUP_RETRY_INTERVAL_MS));
    wiced_rtos_delay_milliseconds(HOST_NAME_LOOKUP_RETRY_INTERVAL_MS);
    }

}

logan_result_t Logan_TCP_Connect(wiced_tcp_socket_t* tcp_client_socket, wiced_ip_address_t* server_ip_address, uint16_t server_port, uint8_t retries)
{
    uint8_t         retry = 0;
    wiced_result_t  WicedResult;

    while(1)
    {
        WicedResult = wiced_tcp_connect(tcp_client_socket, server_ip_address, server_port, TCP_CLIENT_CONNECT_TIMEOUT );
        if (WicedResult==WICED_SUCCESS)
        {
            SAFE_PRINTF(("Conexion TCP establecida en el intento n°: %u con servidor: ", retry));
            PRINTF_IPv4(server_ip_address->ip.v4);
            return Logan_Success;
        }
        retry++;
        if (retry==retries)
        {
            return Logan_Timeout;
        }
        SAFE_PRINTF(("ERROR: wiced_tcp_connect %u \n", WicedResult));
        if (WicedResult==WICED_ERROR){
            wiced_tcp_disconnect(tcp_client_socket);
        }
        SAFE_PRINTF(("Reintetando wiced_tcp_connect en: %u ms\n", TCP_CLIENT_CONNECT_RETRY_INTERVAL_MS));
        wiced_rtos_delay_milliseconds(TCP_CLIENT_CONNECT_RETRY_INTERVAL_MS);
    }

}

Logan_Ping_Internet_t Logan_Ping_Internet(uint8_t Times)
{
    const wiced_ip_address_t INITIALISER_IPV4_ADDRESS( ipv4_address_1, GOOGLE_DNS_1 );
    const wiced_ip_address_t INITIALISER_IPV4_ADDRESS( ipv4_address_2, GOOGLE_DNS_2 );
    uint32_t elapsed_ms;
    uint32_t elapsed_1_ms=0;
    uint32_t average_1_ms=0;
    uint32_t elapsed_2_ms=0;
    uint32_t average_2_ms=0;
    uint8_t TimeOutN1=0;
    uint8_t TimeOutN2=0;
    wiced_result_t  WicedResult;
    Logan_Ping_Internet_t result;

    for (uint8_t i=0;i<Times;i++)
    {
        WicedResult=wiced_ping (WICED_STA_INTERFACE, &ipv4_address_1, PING_TIMEOUT_MS, &elapsed_ms);
        if (WicedResult!=WICED_SUCCESS)
        {
            TimeOutN1++;
        }else{
            elapsed_1_ms+=elapsed_ms;
        }
        wiced_rtos_delay_milliseconds(1000);
    }
    if (TimeOutN1<Times)
    {
        average_1_ms=elapsed_1_ms/(Times-TimeOutN1);
    }else{
        average_1_ms=0xFFFFFFFF;
    }
    for (uint8_t i=0;i<Times;i++)
    {
        WicedResult=wiced_ping (WICED_STA_INTERFACE, &ipv4_address_2, PING_TIMEOUT_MS, &elapsed_ms);
        if (WicedResult!=WICED_SUCCESS)
        {
            TimeOutN2++;
        }else{
            elapsed_2_ms+=elapsed_ms;
        }
        wiced_rtos_delay_milliseconds(1000);
    }
    if (TimeOutN2<Times)
    {
        average_2_ms=elapsed_2_ms/(Times-TimeOutN2);
    }else{
        average_2_ms=0xFFFFFFFF;
    }
    result.TimeOutN1=TimeOutN1;
    result.TimeOutN2=TimeOutN2;
    result.average_1_ms=average_1_ms;
    result.average_2_ms=average_2_ms;

    return result;
}

Logan_Ping_Gateway_t Logan_Ping_Gateway(uint8_t Times)
{
    wiced_result_t          WicedResult;
    wiced_ip_address_t      ipv4_address;
    uint32_t elapsed_ms;
    uint32_t average_ms;
    uint32_t elapsed__ms=0;
    uint8_t TimeOutN=0;
    Logan_Ping_Gateway_t result;

    wiced_ip_get_gateway_address (WICED_STA_INTERFACE, &ipv4_address);
    for (uint8_t i=0;i<Times;i++)
    {
           WicedResult=wiced_ping (WICED_STA_INTERFACE, &ipv4_address, PING_TIMEOUT_MS, &elapsed_ms);
           if (WicedResult!=WICED_SUCCESS)
           {
               TimeOutN++;
           }else{
               elapsed__ms+=elapsed_ms;
           }
           wiced_rtos_delay_milliseconds(1000);
    }
    if (TimeOutN<Times)
    {
        average_ms=elapsed__ms/(Times-TimeOutN);
    }else{
        average_ms=0xFFFFFFFF;
    }
    result.TimeOutN=TimeOutN;
    result.average_ms=average_ms;

    return result;
}

