#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "wiced.h"
#include "file_system/file_system.h"
#include "flash_memory/MX25V1635F.h"


#define FORMAT_ON_POWER_OFF	0
#define FORMAT_ON_POWER_ON	1

#define FILE_TYPE_IN_AUDIO	0x01
#define FILE_TYPE_OUT_AUDIO	0x02


#define UPDATE_ON			1
#define UPDATE_OFF			0

void init_storage(void);
void read_storage_ID (uint8_t* manufacturerID, uint16_t* deviceID);
fs_result_t storage_open_file_read(fs_file_t * file, uint8_t * FD);
fs_result_t storage_open_file_write(fs_file_t * fileSystemFile, uint32_t size, uint8_t * FD);
void storage_close_file(uint8_t FD);
uint8_t storage_write_file(uint8_t FD, uint8_t * writeBuffer, uint32_t length);
uint8_t storage_read_file(uint8_t FD, uint8_t * readBuffer, uint32_t * readBytes, uint32_t length);
void read_storage_ID(uint8_t* manufacturerID, uint16_t* deviceID);
uint8_t storage_get_existing_file_list(fs_file_t * fs_files, uint8_t count, uint8_t type,
		uint8_t update, uint8_t olderFirst);




#ifdef __cplusplus
} /*extern "C" */
#endif
