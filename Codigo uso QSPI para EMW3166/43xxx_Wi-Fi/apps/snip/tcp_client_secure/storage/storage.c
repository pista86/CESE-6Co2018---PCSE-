#include "storage.h"

static uint32_t HAL_read_storage(uint32_t address, uint8_t * dataIn, uint32_t dataInLength);
static void HAL_write_storage(uint32_t address, uint8_t * dataOut, uint32_t dataOutLength);
static void HAL_erase_4K_block_storage(uint32_t address);
static void HAL_erase_32K_block_storage(uint32_t address);
static void HAL_erase_64K_block_storage(uint32_t address);
static void HAL_erase_storage(void);
static uint32_t HAL_get_current_date(void);

void init_storage(void)
{

	mx25v1635f_init();

	file_system_init( FORMAT_ON_POWER_ON, HAL_read_storage, HAL_write_storage,
			HAL_erase_4K_block_storage, HAL_erase_32K_block_storage, HAL_erase_64K_block_storage,
			HAL_erase_storage, HAL_get_current_date);

}

uint8_t storage_get_existing_file_list(fs_file_t * fs_files, uint8_t count, uint8_t type,
		uint8_t update, uint8_t olderFirst)
{
	return file_system_get_existing_file_list(fs_files, count, type, update, olderFirst);
}

fs_result_t storage_open_file_write(fs_file_t * file, uint32_t size, uint8_t * FD)
{
	return file_system_open_file(file, WRITE_CREATE, size, FD);
}

fs_result_t storage_open_file_read(fs_file_t * file, uint8_t * FD)
{

	return file_system_open_file(file, READ, 0, FD);
}

void storage_close_file(uint8_t FD)
{
	file_system_close_file(FD);
}

uint8_t storage_write_file(uint8_t FD, uint8_t * writeBuffer, uint32_t length)
{
	return file_system_write_file(FD, writeBuffer, length);
}

uint8_t storage_read_file(uint8_t FD, uint8_t * readBuffer, uint32_t * readBytes, uint32_t length)
{
	uint8_t result;

	result = file_system_read_file(FD, readBuffer, readBytes, length);

	 return result;
}

void read_storage_ID(uint8_t* manufacturerID, uint16_t* deviceID)
{
	mx25v1635f_read_ID(manufacturerID, deviceID);
}

static uint32_t HAL_read_storage(uint32_t address, uint8_t * dataIn, uint32_t dataInLength)
{
	mx25v1635f_4READ(dataIn, dataInLength, address, PERFORMANCE_OFF);
	return dataInLength;
}

static void HAL_write_storage(uint32_t address, uint8_t * dataOut, uint32_t dataOutLength)
{
	mx25v1635f_4PP(dataOut, dataOutLength, address);
}

static void HAL_erase_4K_block_storage(uint32_t address)
{
	mx25v1635f_SE4K(address);
}

static void HAL_erase_32K_block_storage(uint32_t address)
{
	mx25v1635f_BE32K(address);
}

static void HAL_erase_64K_block_storage(uint32_t address)
{
	mx25v1635f_BE64K(address);
}

static void HAL_erase_storage(void)
{
	mx25v1635f_CE();
}

static uint32_t HAL_get_current_date(void)
{
	uint32_t time;
	wiced_time_get_utc_time(&time);
	return time;
}

