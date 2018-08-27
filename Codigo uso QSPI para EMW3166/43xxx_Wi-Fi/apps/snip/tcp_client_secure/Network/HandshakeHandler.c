
#include "wiced.h"
#include "Utils/Utils.h"
#include "Globals.h"
#include "Protocol.h"
#include "LengthFieldBasedFrameDecoder.h"
#include "HandshakeHandler.h"
#include "TCP_Client_Persistent.h"

uint64_t        LastASK=0;
uint64_t        LastASKProcessed=0;
uint64_t        LastALIVE=0;

wiced_result_t CheckAlive( void* arg )
{
    if (LastASKProcessed!=LastASK)
    {
        if (LastASK==LastALIVE)
        {
            SAFE_PRINTF(("ALIVE recibido\n"));
        }else{
            SAFE_PRINTF(("ALIVE NO recibido\n"));
        }
        LastASKProcessed=LastASK;
    }
   return WICED_SUCCESS;
}
