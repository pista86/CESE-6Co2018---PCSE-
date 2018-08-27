
#include "wiced.h"
#include "Utils/Utils.h"
#include "Globals.h"
#include "LengthFieldBasedFrameDecoder.h"
#include "Protocol.h"
#include "FirewallHandler.h"

pipeline_result_t FirewallHandler (uint8_t* Message_Data, uint32_t Data_Length){


    switch(Message_Data[0])
    {
        case V001:
            switch(Message_Data[1]){
                case AUTHENTICATE_USER_PASSWORD_OK:
                    SAFE_PRINTF(("AUTENTICADO!!\n"));
                        //Client_Authenticated=1;
                    return pipe_Authenticated;
                    break;
                case CREATE_USER_NOK:
                case CREATE_USER_OK:
                case DOWNLOAD_INIT:
                case DOWNLOAD_FILE_DATA:
                case UPLOAD_ACCEPTED:
                case UPLOAD_FILE_DATA_RECEIVED:
                case REPLY_ALIVE:
                case VOLUME_DOWN:
                case VOLUME_UP:
                case SET_UTC_TIME_MS:
                        if (Authentication_Status==Authenticated){
                            return pipe_Propagate; // Si está autenticado se reenvía el mensaje a las siguientes etapas del pipeline
                        }else{
                            return pipe_Dropped;
                        }
                        break;
            }
                break;
        default:
                return pipe_Dropped;
                break;

    }


return pipe_Dropped;
}
