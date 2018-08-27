
#pragma once

#ifdef __cplusplus
extern "C" {
#endif



void authenticate_user_password(uint8_t* Send_Message_Buffer_Data, uint8_t* Authentication_Hash);

void download_accepted(uint8_t* Send_Message_Buffer_Data, uint32_t* Send_Message_Buffer_Length,
                                uint8_t* senderPin, uint16_t chunkLength, uint32_t ChunkStartN, uint64_t transferdId);

void download_file_data_received(uint8_t* Send_Message_Buffer_Data, uint32_t* Send_Message_Buffer_Length,
                                        uint8_t* senderPin, uint32_t chunkN, uint64_t transferdId);

uint16_t upload_init(uint8_t* Send_Message_Buffer_Data,
                 uint32_t destPin, uint8_t fileType, uint32_t fileLength, uint32_t transferdId);

uint16_t big_data(uint8_t* Send_Message_Buffer_Data, uint16_t dataLength);

void upload_file_data(uint8_t* Send_Message_Buffer_Data, uint32_t* Send_Message_Buffer_Length,
                 uint8_t* destPin, uint32_t chunkN, uint64_t transferdId, uint8_t* chunkData, uint16_t chunkLength);

void get_utc_time_ms(uint8_t* Send_Message_Buffer_Data, uint32_t* Send_Message_Buffer_Length, uint64_t getId);

#ifdef __cplusplus
} /* extern "C" */
#endif
