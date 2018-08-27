#include "audio_recorder_thread.h"

static uint8_t storageWriteBuffer[PAGE_SIZE];

static void audio_recorder_record(uint8_t FD);

wiced_result_t audio_recorder_thread_start(void* arg)
{
	audio_recorder_queue_message_t audioRecorderQueueMessage;
	fs_file_t fileSystemFile;
	fs_result_t fsResult;
	uint8_t FD;

	audio_in_init(DEFAULT_MIC_GAIN);

	while (1)
	{
		wiced_rtos_pop_from_queue(&audio_recorder_queque, &audioRecorderQueueMessage,
		NEVER_TIMEOUT);

		fileSystemFile.name = audioRecorderQueueMessage.recordingName;
		fsResult = storage_open_file_write(&fileSystemFile, DYNAMIC_SIZE_WRITE, &FD);
		if (fsResult == FS_SUCCES)
		{
			audio_recorder_record(FD);
		}
	}

}

static void audio_recorder_record(uint8_t FD)
{
	audio_recorder_record_data_queue_message_t audioRecorderRecordDataQueueMessage;
	uint32_t pcmDataLength;
	uint32_t receivedPcmData = 0;
	uint32_t totalReceivedPcmData = 0;

	// Comenzar grabación
	audio_in_start_capture();

	while (1)
	{
		// recibir orden de escritura de más datos
		wiced_rtos_pop_from_queue(&audio_recorder_record_data_queque,
				&audioRecorderRecordDataQueueMessage,
				WICED_NEVER_TIMEOUT);
		// leer datos desde el medio de almacenamiento

		// copiar datos al buffer de escritora en disco
		if (audioRecorderRecordDataQueueMessage.dataPosition == 0)
		{
			audio_in_process_lower_half((int16_t *) &storageWriteBuffer[receivedPcmData],
					&pcmDataLength);
		}
		else
		{
			audio_in_process_higher_half((int16_t *) &storageWriteBuffer[receivedPcmData],
					&pcmDataLength);
		}
		receivedPcmData += pcmDataLength;

		if (receivedPcmData == PAGE_SIZE)
		{
			storage_write_file(FD, storageWriteBuffer, receivedPcmData);
			totalReceivedPcmData += receivedPcmData;
			receivedPcmData = 0;
		}
		else if (audioRecorderRecordDataQueueMessage.lastData)
		{
			storage_write_file(FD, storageWriteBuffer, receivedPcmData);
			totalReceivedPcmData += receivedPcmData;
			receivedPcmData = 0;
			break;
		}
	}

#ifdef DEBUG_PRINTF
	WPRINT_APP_INFO(("Capturaron %lu muestras PCM\n", totalReceivedPcmData));
#endif

}

