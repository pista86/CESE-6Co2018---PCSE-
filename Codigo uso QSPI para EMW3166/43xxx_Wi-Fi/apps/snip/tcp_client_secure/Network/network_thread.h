#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include "network_application_protocol.h"
#include "wiced.h"

#define HOST_NAME_LOOKUP_TIMEOUT				5000
#define HOST_NAME_LOOKUP_RETRY_INTERVAL      	5000
#define HOST_NAME_LOOKUP_RETRY_COUNT	      	5
#define TCP_CONNECT_TIMEOUT						5000
#define TCP_CONNECT_RETRY_INTERVAL     		 	5000
#define TCP_CONNECT_RETRY_COUNT	      			5
#define CONNECTION_LOST_RETRY_INTERVAL			10000
#define CONNECTION_RETRY_INTERVAL				60000

#define WIFI_CONNECT_RETRY_INTERVAL				10000


typedef enum
{
	network_succes = 0,
	network_tcp_create_socket_error,
	network_tcp_bind_error,
	network_hostname_lookup_error,
	network_tcp_connect_error
} connect_to_server_result_t;




typedef struct
{
	char* serverName;
	uint16_t serverPort;
	uint8_t enableTLS;
} server_conn_parameters_t;

#ifdef __cplusplus
} /* extern "C" */
#endif
