
#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#include "wiced.h"

typedef enum
{
	nap_unconnected = 0, nap_connected, nap_unauthenticated, nap_authenticated
} nap_connection_status_t;

nap_connection_status_t nap_authenticate(wiced_tcp_socket_t* socket);
nap_connection_status_t nap_get_connection_status(void);
void nap_set_connection_status(nap_connection_status_t connection_status);

#ifdef __cplusplus
} /* extern "C" */
#endif
