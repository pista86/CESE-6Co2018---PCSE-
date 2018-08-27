
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "wiced.h"
#include <stddef.h>

#define MEMORY_SIZE						2097152	// 2Mbytes
#define SECTOR_SIZE						4096	// 4KB
#define PAGE_SIZE						256		// 256B
#define SECTOR_SIZE_BITS				12	//

#define MAX_FILES						128
#define MAX_OPEN_FILES					2

#define FILE_INFO_BLOCK_ENTRY_SIZE_B	2		// 2Bytes
#define FILE_INFO_BLOCK_LENGTH			(MEMORY_SIZE / SECTOR_SIZE)
#define FILE_INFO_BLOCK_LENGTH_B		((MEMORY_SIZE / SECTOR_SIZE) * FILE_INFO_BLOCK_ENTRY_SIZE_B)
#define	FILE_INFO_METADATA_ENTRY_SIZE_B	16		// 1 byte estado + 1 tipo + 4 bytes fecha + 8 bytes nombre + 2 bytes reservados futuros usos
#define FILE_INFO_BLOCK_SIZE_B			(FILE_INFO_BLOCK_ENTRY_SIZE_B * FILE_INFO_BLOCK_LENGTH_B) // 2*512=1024 bytes
#define	FILE_INFO_METADATA_SIZE_B	    (FILE_INFO_METADATA_ENTRY_SIZE_B * MAX_FILES) // 16*128=2048 bytes

#define FILE_TABLE_ADDRESS				0
#define FILE_TABLE_BLOCK_ADDRESS		0
#define FILE_TABLE_METADATA_ADDRESS		FILE_INFO_BLOCK_LENGTH_B

#define BLOCK_EMPTY_STATE				0x7FFF
#define BLOCK_ALLOCATED_STATE			0x3FFF
#define BLOCK_ALLOCATED_MASK			0x3000
#define BLOCK_EOF_MASK					0x1000
#define BLOCK_EOF_DATA_MASK				0x0FFF

#define FILE_EMPTY_STATE				0x7F
#define FILE_WRITING_STATE				0x3F
#define FILE_EXISTING_STATE				0x1F
#define FILE_DELETING_STATE				0x0F

#define UINT8_FF						0xFF
#define UINT16_FF						0xFFFF
#define UINT32_FF						0xFFFFFFFF
#define UINT64_FF						0xFFFFFFFFFFFFFFFF

#define NO_NAME							0
#define DYNAMIC_SIZE_WRITE				0

typedef uint32_t (*file_system_read_storage_t)(uint32_t address, uint8_t * dataIn,
		uint32_t dataInLength);
typedef void (*file_system_write_storage_t)(uint32_t address, uint8_t * dataOut,
		uint32_t dataOutLength);
typedef void (*file_system_erase_4K_block_storage_t)(uint32_t address);
typedef void (*file_system_erase_32K_block_storage_t)(uint32_t address);
typedef void (*file_system_erase_64K_block_storage_t)(uint32_t address);
typedef void (*file_system_erase_storage_t)(void);
typedef uint32_t (*file_system_current_date_t)(void);

typedef struct
{
	uint64_t name;
	uint32_t creationDate;
	uint16_t firstBlock;
	uint8_t state;
	uint8_t type;
}__attribute__((__packed__)) file_system_files_t;
//  __attribute__((__packed__)) garantizar que no agregue padding a la struct

typedef struct
{
	uint32_t readPtr;
	uint32_t writePtr;
	uint32_t fsTableIndex;
	uint64_t name;
	uint32_t creationDate;
	uint8_t state;
	uint8_t type;
} fs_file_t;



typedef enum
{
	FS_SUCCES = 0,
	FS_ERROR,
	FS_EOF,
	FS_ALREADY_OPEN,
	FS_NO_OPEN,
	FS_NO_FREE_SPACE,
	FS_TOO_MANY_FILES_OPEN,
	FS_UNSUPPORTED_OPERATION,
} fs_result_t;


typedef enum
{
	READ = 0,
	WRITE_CREATE,
} fs_open_mode_t;

typedef struct
{
	uint32_t readPtr;
	uint32_t writePtr;
	uint32_t fsTableIndex;
	uint64_t name;
	uint32_t creationDate;
	uint8_t state;
	uint8_t type;
	fs_open_mode_t openMode;
	uint32_t size;
	uint16_t blockChain[FILE_INFO_BLOCK_LENGTH];
	uint32_t blockChainLastIndex;
} fs_open_file_t;


void file_system_init(uint8_t format,
		file_system_read_storage_t file_system_read_storage_implementation,
		file_system_write_storage_t file_system_write_storage_implementation,
		file_system_erase_4K_block_storage_t file_system_erase_4K_block_storage_implementation,
		file_system_erase_32K_block_storage_t file_system_erase_32K_block_storage_implementation,
		file_system_erase_64K_block_storage_t file_system_erase_64K_block_storage_implementation,
		file_system_erase_storage_t file_system_erase_storage_implementation,
		file_system_current_date_t file_system_current_date_implementation);

void file_system_format_storage(void);
void garbageCollect(uint8_t commitFileTable);
void file_system_close_file(uint8_t FD);
uint32_t file_system_get_garbage_space(void);
uint32_t file_system_get_allocated_space(void);
uint32_t file_system_get_free_space(void);
uint32_t file_system_get_free_block_space(void);
uint32_t file_system_get_file_size(uint32_t fileIndex, uint8_t entireBlock);
uint8_t file_system_get_existing_file_list(fs_file_t * fs_files, uint8_t count, uint8_t type,
		uint8_t update, uint8_t olderFirst);
fs_result_t file_system_open_file(fs_file_t * file, fs_open_mode_t mode, uint32_t size, uint8_t * FD);
void file_system_get_file_by_index(fs_file_t * fileSystemFile);
uint8_t file_system_read_file(uint8_t FD, uint8_t * readBuffer, uint32_t * readBytes, uint32_t length);
uint8_t file_system_write_file(uint8_t FD, uint8_t * writeBuffer, uint32_t length);


#ifdef __cplusplus
} /*extern "C" */
#endif


