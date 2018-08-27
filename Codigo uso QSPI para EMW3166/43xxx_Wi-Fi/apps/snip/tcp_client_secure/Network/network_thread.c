#include "network_thread.h"

static wiced_tcp_socket_t 	tcpClientSocket;
static wiced_ip_address_t 	serverIP;
static wiced_tls_context_t	tls_context;

static void network_tcp_connection_handler(wiced_tcp_socket_t* socket);
static connect_to_server_result_t network_connect_to_server(char* serverName, uint16_t serverPort,
		uint8_t enableTLS);

wiced_result_t network_thread_start(void* arg)
{
	wiced_result_t result;
	connect_to_server_result_t networkResult;
	server_conn_parameters_t * serverConnParameters;

	serverConnParameters = (server_conn_parameters_t*) arg;

	while (1)
	{
		result = wiced_network_up(WICED_STA_INTERFACE, WICED_USE_EXTERNAL_DHCP_SERVER, NULL);
		if (result == WICED_SUCCESS)
		{
			break;
		}
		// deinicialización de interfaz
		wiced_network_down(WICED_STA_INTERFACE);
		wiced_rtos_delay_milliseconds(WIFI_CONNECT_RETRY_INTERVAL);
	}

	while (1)
	{
		networkResult = network_connect_to_server(serverConnParameters->serverName,
				serverConnParameters->serverPort, serverConnParameters->enableTLS);
		if (networkResult == network_succes)
		{
			nap_set_connection_status(nap_connected);
			network_tcp_connection_handler(&tcpClientSocket);
			// Si llego aquí no se ha podico conectar
			wiced_rtos_delay_milliseconds(CONNECTION_LOST_RETRY_INTERVAL);
		}
		else
		{
			// si la conexión no se pudo realizar espero x tiempo (generalmente superior al de perdida de conexion)
			wiced_rtos_delay_milliseconds(CONNECTION_RETRY_INTERVAL);
		}

	}
}

static void network_tcp_connection_handler(wiced_tcp_socket_t* socket)
{
	nap_connection_status_t Authentication_Status;
	while (1)
	{
		if (nap_get_connection_status() < nap_connected)
		{
			// Conectarse al servidor
			break;
		}
		else if (nap_get_connection_status() != nap_authenticated)
		{
			Authentication_Status = nap_authenticate(socket);
			if (Authentication_Status == nap_authenticated)
			{
				SendGetUtcTimeMs();
			}
		}
		else
		{
			nap_process_messages(socket);
		}
	}

}

static connect_to_server_result_t network_connect_to_server(char* serverName, uint16_t serverPort,
		uint8_t enableTLS)
{
	wiced_result_t wicedResult;
	connect_to_server_result_t result;
	uint8_t hostnameLookupRetries = 0;

	wicedResult = wiced_tcp_create_socket(&tcpClientSocket, WICED_STA_INTERFACE);
	if (wicedResult != WICED_SUCCESS)
	{
		return network_tcp_create_socket_error;
	}

	if (enableTLS)
	{
		if (wiced_tls_init_context(&tls_context, NULL, NULL) != WICED_SUCCESS)
		{
			WPRINT_APP_INFO(("wiced_tls_init_context failed\n"));
		}

		if (wiced_tcp_enable_tls(&tcpClientSocket, &tls_context) != WICED_SUCCESS)
		{
			WPRINT_APP_INFO(("wiced_tcp_enable_tls failed\n"));
		}
	}

	wicedResult = wiced_tcp_bind(&tcpClientSocket, serverPort);
	if (wicedResult != WICED_SUCCESS)
	{
		return network_tcp_bind_error;
	}

	while (1)
	{
		wicedResult = wiced_hostname_lookup(serverName, &serverIP, HOST_NAME_LOOKUP_TIMEOUT, WICED_STA_INTERFACE);
		if (wicedResult == WICED_SUCCESS)
		{
			break;
		}
		else
		{
			hostnameLookupRetries++;
			if (hostnameLookupRetries == HOST_NAME_LOOKUP_RETRY_COUNT)
			{
				return network_hostname_lookup_error;
			}
		}
		wiced_rtos_delay_milliseconds(HOST_NAME_LOOKUP_RETRY_INTERVAL);
	}

	while (1)
	{
		wicedResult = wiced_tcp_connect(&tcpClientSocket, &serverIP, serverPort,
		TCP_CONNECT_TIMEOUT);
		if (wicedResult == WICED_SUCCESS)
		{
			break;
		}
		else
		{
			hostnameLookupRetries++;
			if (hostnameLookupRetries == TCP_CONNECT_RETRY_COUNT)
			{
				return network_tcp_connect_error;
			}
		}
		wiced_rtos_delay_milliseconds(TCP_CONNECT_RETRY_INTERVAL);
	}

	return network_succes;
}

