#include "file_system.h"

static file_system_read_storage_t file_system_read_storage = NULL;
static file_system_write_storage_t file_system_write_storage = NULL;
static file_system_erase_4K_block_storage_t file_system_erase_4K_BLOCK_storage = NULL;
static file_system_erase_32K_block_storage_t file_system_erase_32K_BLOCK_storage = NULL;
static file_system_erase_64K_block_storage_t file_system_erase_64K_BLOCK_storage = NULL;
static file_system_erase_storage_t file_system_erase_storage = NULL;
static file_system_current_date_t file_system_current_date = NULL;

static uint16_t fileTableBlock[FILE_INFO_BLOCK_LENGTH];
static file_system_files_t fileTableMetadata[MAX_FILES];
static fs_open_file_t file_system_open_files[MAX_OPEN_FILES];

static void file_system_load_Table_block(void);
static void file_system_load_Table_Metadata(void);
static uint8_t file_system_check_open_file(void);
static void fileTableBlockArray_init(void);
static void fileTableMetadataArray_init(void);
static void file_system_get_block_chain(fs_open_file_t * file_system_open_file);
static void commitFileTable(void);
static void deleteFile(uint16_t deleteIndex, uint8_t commitFileTable);
static uint8_t file_system_file_has_name(uint8_t FD);
static int file_system_files_t_compare(file_system_files_t * A, file_system_files_t * B);
static int fs_file_t_compare_up(fs_file_t * A, fs_file_t * B);
static int fs_file_t_compare_down(fs_file_t * A, fs_file_t * B);
static uint8_t file_system_asign_block_chain(fs_open_file_t * file_system_open_file);
static uint8_t file_system_add_open_file(fs_file_t * file, fs_open_mode_t openMode, uint32_t size,
		uint8_t * fileSystemOpenFilesIndex);

void file_system_init(uint8_t format,
		file_system_read_storage_t file_system_read_storage_implementation,
		file_system_write_storage_t file_system_write_storage_implementation,
		file_system_erase_4K_block_storage_t file_system_erase_4K_block_storage_implementation,
		file_system_erase_32K_block_storage_t file_system_erase_32K_block_storage_implementation,
		file_system_erase_64K_block_storage_t file_system_erase_64K_block_storage_implementation,
		file_system_erase_storage_t file_system_erase_storage_implementation,
		file_system_current_date_t file_system_current_date_implementation)
{
	file_system_read_storage = file_system_read_storage_implementation;
	file_system_write_storage = file_system_write_storage_implementation;
	file_system_erase_4K_BLOCK_storage = file_system_erase_4K_block_storage_implementation;
	file_system_erase_storage = file_system_erase_storage_implementation;
	file_system_current_date = file_system_current_date_implementation;

	if (format)
	{
#ifdef DEBUG_PRINTF
		WPRINT_APP_INFO(("Iniciando formato... \n"));
#endif
		file_system_format_storage();
#ifdef DEBUG_PRINTF
		WPRINT_APP_INFO(("Formato finalizado! \n"));
#endif
	}
	file_system_load_Table_block();
	file_system_load_Table_Metadata();
#ifdef DEBUG_PRINTF
	WPRINT_APP_INFO(("File system inicializado! \n"));
#endif
}

void file_system_format_storage(void)
{
	fileTableBlockArray_init();
	fileTableMetadataArray_init();
	file_system_erase_storage();
	file_system_write_storage( FILE_TABLE_BLOCK_ADDRESS, (uint8_t *) fileTableBlock,
	FILE_INFO_BLOCK_LENGTH_B);
	file_system_write_storage( FILE_TABLE_METADATA_ADDRESS, (uint8_t *) fileTableMetadata,
	MAX_FILES * sizeof(file_system_files_t));
}

uint32_t file_system_get_free_block_space(void)
{
	uint32_t freeBlockSpaceBytes = 0;

	for (int i = 0; i < FILE_INFO_BLOCK_LENGTH; i++)
	{
		if (fileTableBlock[i] == BLOCK_EMPTY_STATE)
		{
			freeBlockSpaceBytes += SECTOR_SIZE;
		}
	}

	return freeBlockSpaceBytes;
}

uint32_t file_system_get_free_space(void)
{
	uint32_t freeSpace = MEMORY_SIZE - SECTOR_SIZE;

	for (int i = 0; i < MAX_FILES; i++)
	{
		if (fileTableMetadata[i].state == FILE_EXISTING_STATE)
		{
			freeSpace -= file_system_get_file_size(i, 1);
		}
	}

	return freeSpace;
}

uint32_t file_system_get_garbage_space(void)
{
	uint32_t garbageSpace = MEMORY_SIZE - SECTOR_SIZE;

	for (int i = 0; i < MAX_FILES; i++)
	{
		if (fileTableMetadata[i].state == FILE_DELETING_STATE)
		{
			garbageSpace -= file_system_get_file_size(i, 1);
		}
	}

	return garbageSpace;
}

uint32_t file_system_get_allocated_space(void)
{

	uint32_t allocatedSpaceBytes = 0;

	for (int i = 0; i < MAX_OPEN_FILES; i++)
	{

		if (file_system_open_files[i].size != 0)
		{
			allocatedSpaceBytes += (file_system_open_files[i].size
					- file_system_open_files[i].writePtr);
		}

	}

	return allocatedSpaceBytes;
}

uint32_t file_system_get_file_size(uint32_t fileIndex, uint8_t entireBlock)
{
	uint32_t fileSize = 0;
	uint32_t loopCount = 0;
	uint16_t currentBlock = fileTableMetadata[fileIndex].firstBlock;

	while (1)
	{
		if (fileTableBlock[currentBlock] < FILE_INFO_BLOCK_LENGTH)
		{
			// si el bloque contiene dirección válida de otro bloque
			fileSize += SECTOR_SIZE;
			currentBlock = fileTableBlock[currentBlock];
		}
		else if (fileTableBlock[currentBlock] & BLOCK_EOF_MASK)
		{
			if (entireBlock)
			{
				fileSize += SECTOR_SIZE;
			}
			else
			{
				fileSize += (fileTableBlock[currentBlock] & BLOCK_EOF_DATA_MASK);
			}
			break;
		}
		if (loopCount++ == FILE_INFO_BLOCK_LENGTH)
		{
			// Evita loop infinito si el parámetro fileIndex es incorrecto
			break;
		}
	}

	return fileSize;
}

fs_result_t file_system_open_file(fs_file_t * file, fs_open_mode_t mode, uint32_t size,
		uint8_t * FD)
{
	uint32_t freeSpace = 0;

	if (!file_system_check_open_file())
	{
		return FS_TOO_MANY_FILES_OPEN;
	}

	if (mode == WRITE_CREATE)
	{
		if (size != 0)
		{
			freeSpace = file_system_get_free_space();
			freeSpace -= file_system_get_allocated_space();
			if (size > freeSpace)
			{
				// no hay espacio suficiente

				if (size > (freeSpace + file_system_get_garbage_space()))
				{
					// no hay espacio suficiente ni siquiera borrando archivos listos para borrar
					return FS_NO_FREE_SPACE;
				}
				else
				{
					garbageCollect(0);
				}
				// no había espacio pero se pudo liberar

			}
			// hay espacio

		}

		if (file_system_add_open_file(file, mode, size, FD))
		{
			return FS_TOO_MANY_FILES_OPEN;
		}
		return FS_SUCCES;
	}
	else if (mode == READ)
	{
		if (file_system_add_open_file(file, mode, size, FD))
		{
			return FS_TOO_MANY_FILES_OPEN;
		}
		return FS_SUCCES;
	}
	else
	{
		return FS_UNSUPPORTED_OPERATION;
	}
	return FS_UNSUPPORTED_OPERATION;
}

void file_system_close_file(uint8_t FD)
{
	file_system_open_files[FD].name = NO_NAME;
	fileTableMetadata[file_system_open_files[FD].fsTableIndex].state = FILE_EXISTING_STATE;
}

void file_system_get_file_by_index(fs_file_t * fileSystemFile)
{
	fileSystemFile->creationDate = fileTableMetadata[fileSystemFile->fsTableIndex].creationDate;
	fileSystemFile->readPtr = 0;
	fileSystemFile->writePtr = 0;
	fileSystemFile->name = fileTableMetadata[fileSystemFile->fsTableIndex].name;
	fileSystemFile->state = fileTableMetadata[fileSystemFile->fsTableIndex].state;
	fileSystemFile->type = fileTableMetadata[fileSystemFile->fsTableIndex].type;
}

uint8_t file_system_write_file(uint8_t FD, uint8_t * writeBuffer, uint32_t length)
{
	uint32_t writeLength;
	uint32_t remainingLength;
	uint32_t writePtr;
	uint8_t result = 1;

	if (FD < MAX_OPEN_FILES && file_system_file_has_name(FD))
	{
		WPRINT_APP_INFO(
				("file_system_open_files[FD].openMode %d \n", file_system_open_files[FD].openMode));
		if (file_system_open_files[FD].openMode != READ)
		{
			remainingLength = length;
			writePtr = file_system_open_files[FD].writePtr;

			if (file_system_open_files[FD].size > 0)
			{
				// Archivo estático
				while (remainingLength > 0)
				{
					writeLength = MIN(remainingLength, PAGE_SIZE);
					file_system_write_storage(
							((file_system_open_files[FD].blockChain[writePtr >> SECTOR_SIZE_BITS])
									* SECTOR_SIZE) + (writePtr % SECTOR_SIZE) + SECTOR_SIZE,
							&writeBuffer[length - remainingLength], writeLength);
					remainingLength -= writeLength;
					writePtr += writeLength;

				}
				result = 0;
			}
			else
			{
				// Archivo dinámico
			}
		}

	}

	return result;
}

uint8_t file_system_read_file(uint8_t FD, uint8_t * readBuffer, uint32_t * readBytes,
		uint32_t length)
{
	uint8_t result = FS_SUCCES;
	uint32_t readPtr = file_system_open_files[FD].readPtr;
	uint32_t bufferReadPtr = 0;
	uint32_t block;
	uint32_t readAddress;
	uint32_t readSize;
	uint32_t lastBlockSize = 0;

	if (file_system_file_has_name(FD))
	{
		while (1)
		{

			if ((readPtr >> SECTOR_SIZE_BITS) < file_system_open_files[FD].blockChainLastIndex)
			{
				block = file_system_open_files[FD].blockChain[readPtr >> SECTOR_SIZE_BITS];
				readAddress = (block * SECTOR_SIZE) + (readPtr % SECTOR_SIZE) + SECTOR_SIZE;
				readSize = MIN(MIN(length, SECTOR_SIZE), SECTOR_SIZE-(readPtr % SECTOR_SIZE));
				if (readSize > 0)
				{
					file_system_read_storage(readAddress, &readBuffer[bufferReadPtr], readSize);
				}
				else
				{
					break;
				}
				readPtr += readSize;
				bufferReadPtr += readSize;
				length -= readSize;
			}
			else
			{
				// ultimo bloque del archivo
				block = file_system_open_files[FD].blockChain[readPtr >> SECTOR_SIZE_BITS];
				readAddress = (block * SECTOR_SIZE) + (readPtr % SECTOR_SIZE) + SECTOR_SIZE;
				lastBlockSize = (BLOCK_EOF_DATA_MASK
						& fileTableBlock[file_system_open_files[FD].blockChainLastIndex]);
				readSize = MIN(length, (lastBlockSize - (readPtr % SECTOR_SIZE)));
				if (readSize > 0)
				{
					file_system_read_storage(readAddress, &readBuffer[bufferReadPtr], readSize);
				}
				else
				{
					break;
				}
				bufferReadPtr += readSize;
				readPtr += readSize;
				length -= readSize;
				break;
			}

		}
	}
	else
	{
		result = FS_NO_OPEN;
	}
	file_system_open_files[FD].readPtr = readPtr;
	*readBytes = bufferReadPtr;
	return result;
}

uint8_t file_system_get_existing_file_list(fs_file_t * fs_files, uint8_t count, uint8_t type,
		uint8_t update, uint8_t olderFirst)
{
	uint8_t outCount = 0;

	if (update)
	{
		file_system_load_Table_Metadata();
	}

	for (int i = 0; i < MAX_FILES; i++)
	{
		if (fileTableMetadata[i].state == FILE_EXISTING_STATE && fileTableMetadata[i].type == type)
		{
			if (outCount == count)
			{
				break;
			}
			fs_files[outCount].creationDate = fileTableMetadata[i].creationDate;
			fs_files[outCount].state = fileTableMetadata[i].state;
			fs_files[outCount].name = fileTableMetadata[i].name;
			fs_files[outCount].type = fileTableMetadata[i].type;
			fs_files[outCount].fsTableIndex = i;
			outCount++;
		}
	}

	// Orden por fecha de resultados
	if (olderFirst)
	{
		qsort(fs_files, outCount, sizeof(fs_file_t), (__compar_fn_t) fs_file_t_compare_up);
	}
	else
	{
		qsort(fs_files, outCount, sizeof(fs_file_t), (__compar_fn_t) fs_file_t_compare_down);
	}
	return outCount;
}

void garbageCollect(uint8_t commitFileTable)
{
	file_system_load_Table_Metadata();
	for (int i = 0; i < MAX_FILES; i++)
	{
		if (fileTableMetadata[i].state == FILE_DELETING_STATE)
		{
			deleteFile(i, commitFileTable);
		}
	}

}

static uint8_t file_system_file_has_name(uint8_t FD)
{
	return !(file_system_open_files[FD].name == NO_NAME);
}

static uint8_t file_system_check_open_file(void)
{
	uint8_t result = 0;

	for (int i = 0; i < MAX_OPEN_FILES; i++)
	{
		if (file_system_open_files[i].name == NO_NAME)
		{
			// Hay lugar para abrir al menos un archivo más
			result = 1;
			break;
		}
	}

	return result;
}

static uint8_t file_system_add_open_file(fs_file_t * file, fs_open_mode_t openMode, uint32_t size,
		uint8_t * fileSystemOpenFilesIndex)
{
	uint8_t result = 1; // error
	if (openMode == WRITE_CREATE)
	{
		for (int i = 0; i < MAX_OPEN_FILES; i++)
		{
			if (file_system_open_files[i].name == 0)
			{

				for (int i = 0; i < MAX_FILES; i++)
				{
					if (fileTableMetadata[i].state == FILE_EMPTY_STATE)
					{
						file->fsTableIndex = i;
						if (file_system_current_date != NULL)
						{
							file->creationDate = file_system_current_date();
						}
						else
						{
							file->creationDate = 0;
						}
						fileTableMetadata[i].creationDate = file->creationDate;
						fileTableMetadata[i].name = file->name;
						fileTableMetadata[i].state = FILE_WRITING_STATE;
						fileTableMetadata[i].type = file->type;
						file->readPtr = 0;
						file->writePtr = 0;
						result = 0;
						break;
					}
				}
				if (!result)
				{
					// argegar archivo abierto a lista de archivos abiertos
					file_system_open_files[i].creationDate = file->creationDate;
					file_system_open_files[i].fsTableIndex = file->fsTableIndex;
					file_system_open_files[i].readPtr = file->readPtr;
					file_system_open_files[i].writePtr = file->writePtr;
					file_system_open_files[i].name = file->name;
					file_system_open_files[i].type = file->type;
					file_system_open_files[i].state = file->state;
					file_system_open_files[i].openMode = openMode;
					file_system_open_files[i].size = size;
					file_system_asign_block_chain(&file_system_open_files[i]); // reserva de boques en FS
					file_system_get_block_chain(&file_system_open_files[i]); // carga de blockchain en archivo abierto
					*fileSystemOpenFilesIndex = i;
				}
				// archivo agreagado correctamente si result = 0
				break;
			}
		}
	}
	else if (openMode == READ)
	{
		for (int i = 0; i < MAX_OPEN_FILES; i++)
		{
			if (file_system_open_files[i].name == NO_NAME)
			{
				// argegar archivo abierto a lista de archivos abiertos
				file->readPtr = 0;
				file->writePtr = 0;
				file_system_open_files[i].creationDate = file->creationDate;
				file_system_open_files[i].fsTableIndex = file->fsTableIndex;
				file_system_open_files[i].readPtr = file->readPtr;
				file_system_open_files[i].writePtr = file->writePtr;
				file_system_open_files[i].name = file->name;
				file_system_open_files[i].type = file->type;
				file_system_open_files[i].state = file->state;
				file_system_open_files[i].openMode = openMode;
				file_system_open_files[i].size = size;
				file_system_get_block_chain(&file_system_open_files[i]); // carga de blockchain en archivo abierto
				*fileSystemOpenFilesIndex = i;
				result = 0;
				break;
			}

		}

	}
	WPRINT_APP_INFO((" agregar archivo abierto a lista de archivos abiertos %d \n", result));
	return result;
}

static uint8_t file_system_asign_block_chain(fs_open_file_t * file_system_open_file)
{
	uint16_t lastIndex = 0;
	uint32_t allocatedSize = 0;
	uint8_t result = 1;

	for (uint16_t i = 0; i < FILE_INFO_BLOCK_LENGTH; i++)
	{
		// Si encuentra un primer bloque libre asigna espacio de ahí en adelante (no necesariamente bloques consecutivos)
		if (fileTableBlock[i] == BLOCK_EMPTY_STATE)
		{
			fileTableMetadata[file_system_open_file->fsTableIndex].firstBlock = i;
			lastIndex = i;
			allocatedSize += SECTOR_SIZE;

			if (file_system_open_file->size > allocatedSize)
			{
				//el tamaño asignado por el primer bloque es inferior al necesario por el archuvo
				while (i < FILE_INFO_BLOCK_LENGTH)
				{
					i++; // avanzo a la posición siguiente
					if (fileTableBlock[i] == BLOCK_EMPTY_STATE)
					{
						fileTableBlock[lastIndex] = i;
						lastIndex = i;
						allocatedSize += SECTOR_SIZE;
						if (file_system_open_file->size <= allocatedSize)
						{
							fileTableBlock[lastIndex] = BLOCK_EOF_MASK
									| (SECTOR_SIZE - (allocatedSize - file_system_open_file->size));
							result = 0;
							break;
						}
					}
				}

			}
			else
			{
				// el tamaño asignado por el primer bloque es suficiente para guardar el archivo
				fileTableBlock[i] = BLOCK_EOF_MASK | file_system_open_file->size;
				result = 0;
				// el bloque EOF contiene la máscara de EOF y cantidad de bytes de datos almacenados en el bloque
			}

			break;
		}
	}

	return result;
}

static void file_system_get_block_chain(fs_open_file_t * file_system_open_file)
{
	uint16_t blockChainIndex = 0;

	uint16_t block = fileTableMetadata[file_system_open_file->fsTableIndex].firstBlock;

	file_system_open_file->blockChain[blockChainIndex] = block;

	while (1)
	{

		if (fileTableBlock[block] < FILE_INFO_BLOCK_LENGTH)
		{
			blockChainIndex++;
			block = fileTableBlock[block];
			file_system_open_file->blockChain[blockChainIndex] = block;
		}
		else
		{
			// es el ultimo bloque
			file_system_open_file->blockChainLastIndex = blockChainIndex;
			break;
		}
	}

}

static uint8_t file_system_remove_open_file(uint32_t fsTableIndex)
{
	uint8_t result = 1; // error

	for (int i = 0; i < MAX_OPEN_FILES; i++)
	{
		if (file_system_open_files[i].fsTableIndex == fsTableIndex)
		{
			// sacar archivo abierto de la lista de archivos abiertos
			file_system_open_files[i].name = 0;
			result = 0; // sacado correctamente
			break;
		}
	}

	return result;
}

static void deleteFile(uint16_t deleteIndex, uint8_t commitTable)
{
	uint16_t blockIndex = 0;
	uint16_t eraseIndex = 0;
	uint16_t currentBlock = fileTableMetadata[deleteIndex].firstBlock;
	uint16_t blockChain[FILE_INFO_BLOCK_LENGTH];

	blockChain[blockIndex] = currentBlock;
	while (1)
	{
		if (fileTableBlock[currentBlock] < FILE_INFO_BLOCK_LENGTH)
		{
			// si el bloque contiene dirección válida de otro bloque
			blockIndex++;
			currentBlock = fileTableBlock[currentBlock];
			blockChain[blockIndex] = currentBlock;
		}
		else
		{
			blockChain[blockIndex + 1] = fileTableBlock[currentBlock];
			break;
		}
	}

// Borrado de bloques continuos o individuales en su defecto
	while (eraseIndex <= blockIndex)
	{

		if ((eraseIndex + 16) <= blockIndex
				&& (blockChain[eraseIndex + 16] - blockChain[eraseIndex] == 16))
		{
			// 16 bloques de 4K continuos 64K
			file_system_erase_64K_BLOCK_storage(blockChain[eraseIndex] * SECTOR_SIZE);
			eraseIndex = eraseIndex + 16;
			memset(&fileTableBlock[blockChain[eraseIndex]], BLOCK_EMPTY_STATE, 16);
		}
		else if ((eraseIndex + 8) <= blockIndex
				&& (blockChain[eraseIndex + 8] - blockChain[eraseIndex] == 8))
		{
			// 8 bloques de 4K continuos 32K
			file_system_erase_32K_BLOCK_storage(blockChain[eraseIndex] * SECTOR_SIZE);
			eraseIndex = eraseIndex + 8;
			memset(&fileTableBlock[blockChain[eraseIndex]], BLOCK_EMPTY_STATE, 8);
		}
		else
		{
			// 1 bloque de 4K sin bloques continuos
			file_system_erase_4K_BLOCK_storage(blockChain[eraseIndex] * SECTOR_SIZE);
			fileTableBlock[blockChain[eraseIndex]] = BLOCK_EMPTY_STATE;
		}

	}

	fileTableMetadata[deleteIndex].creationDate = UINT32_FF;
	fileTableMetadata[deleteIndex].firstBlock = UINT16_FF;
	fileTableMetadata[deleteIndex].name = UINT64_FF;
	fileTableMetadata[deleteIndex].state = FILE_EMPTY_STATE;
	fileTableMetadata[deleteIndex].type = UINT8_FF;

	if (commitTable)
	{
		commitFileTable();
	}

}

static void commitFileTable(void)
{
	file_system_erase_4K_BLOCK_storage(FILE_TABLE_ADDRESS);
	file_system_write_storage(FILE_TABLE_ADDRESS, (uint8_t *) fileTableBlock,
	FILE_INFO_BLOCK_SIZE_B);
	file_system_write_storage(FILE_TABLE_METADATA_ADDRESS, (uint8_t *) fileTableMetadata,
	FILE_INFO_METADATA_SIZE_B);
}

static void fileTableBlockArray_init(void)
{
	for (int i = 0; i < FILE_INFO_BLOCK_LENGTH; i++)
	{
		fileTableBlock[i] = BLOCK_EMPTY_STATE;
	}
}

static void fileTableMetadataArray_init(void)
{
	for (uint32_t i = 0; i < MAX_FILES; i++)
	{
		fileTableMetadata[i].state = FILE_EMPTY_STATE;
		fileTableMetadata[i].creationDate = UINT32_FF;
		fileTableMetadata[i].name = UINT64_FF;
		fileTableMetadata[i].type = UINT8_FF;
		fileTableMetadata[i].firstBlock = UINT16_FF;
	}
}

static void file_system_load_Table_block(void)
{
	file_system_read_storage(FILE_TABLE_BLOCK_ADDRESS, (uint8_t *) fileTableBlock,
	FILE_INFO_BLOCK_LENGTH);
}

static void file_system_load_Table_Metadata(void)
{
	file_system_read_storage(FILE_TABLE_METADATA_ADDRESS, (uint8_t *) fileTableMetadata,
	MAX_FILES * sizeof(file_system_files_t));
}

static int file_system_files_t_compare(file_system_files_t * A, file_system_files_t * B)
{
	return (A->creationDate - B->creationDate);
}

static int fs_file_t_compare_up(fs_file_t * A, fs_file_t * B)
{
	return (A->creationDate - B->creationDate);
}

static int fs_file_t_compare_down(fs_file_t * A, fs_file_t * B)
{
	return (B->creationDate - A->creationDate);
}

