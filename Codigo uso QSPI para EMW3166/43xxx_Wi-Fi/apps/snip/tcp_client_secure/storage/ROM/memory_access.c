#include "memory_access.h"







void memory_access_open(memory_access_file_t * memoryAccessFile)
{
	memoryAccessFile->readPtr = 0;
}



void memory_access_read(memory_access_file_t * memoryAccessFile, uint8_t * dest, uint32_t length){


//	memcpy(dest, memoryAccessFile->memoryPtr, MIN(sizeof()))

}
