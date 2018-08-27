#include "wiced.h"
#include "wiced_tls.h"
#include "globals.h"
#include "Network/BytePacketFactory.h"
#include "audio/audio_player_thread.h"
#include "audio/audio_recorder_thread.h"

#include "storage/storage.h"

/******************************************************
 *                      Macros
 ******************************************************/

#define TCP_PACKET_MAX_DATA_LENGTH        30
#define TCP_CLIENT_INTERVAL               2
#define TCP_SERVER_PORT                   32734
#define TCP_CLIENT_CONNECT_TIMEOUT        500
#define TCP_CLIENT_RECEIVE_TIMEOUT        300
#define TCP_CONNECTION_NUMBER_OF_RETRIES  3

/* Change the server IP address to match the TCP echo server address */

/******************************************************
 *                    Constants
 ******************************************************/

/******************************************************
 *                   Enumerations
 ******************************************************/

/******************************************************
 *                 Type Definitions
 ******************************************************/

/******************************************************
 *                    Structures
 ******************************************************/

/******************************************************
 *               Static Function Declarations
 ******************************************************/

static void init_queues(void);
static void launch_threads(void);

static void test_CESE_protocolos(void);
static void test_play(void);
/******************************************************
 *               Variable Definitions
 ******************************************************/

#define TCP_SERVER_IP_ADDRESS MAKE_IPV4_ADDRESS(192,168,100,121)

wiced_queue_t audio_player_queque;
wiced_queue_t audio_recorder_queque;
wiced_queue_t audio_player_play_queque;

wiced_worker_thread_t audio_out_worker_thread;

uint8_t Send_Message_Buffer_Data[4 * 1024];

uint8_t manufacturerID;
uint16_t deviceID;

uint8_t rxBuffer[8000];
uint8_t txBuffer[8000];

/******************************************************
 *               Function Definitions
 ******************************************************/

void PRINTF_ARRAY_MEM(uint8_t* data, uint32_t data_length)
{

	for (int x = 0; x < data_length; x = x + 16)
	{
		WPRINT_APP_INFO(("%u: ",x));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+1]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+2]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+3]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+4]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+5]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+6]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+7]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+8]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+9]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+10]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+11]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+12]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+13]));
		WPRINT_APP_INFO(("0x%x ", (unsigned)data[x+14]));
		WPRINT_APP_INFO(("0x%x\n", (unsigned)data[x+15]));
	}

}

void application_start(void)
{
	wiced_result_t result;

	/* Initialise the device and WICED framework */
	wiced_init();



	wwd_wifi_enable_powersave_with_throughput(250);



	init_storage();

	init_queues();

	launch_threads();

	test_play();


	//test_CESE_protocolos();


	//i2s_MIC_init(8000);
	//i2s_MIC_enable();

	// uint8_t FD2;
	//result = storage_write_file(FD2, txBuffer, 8000);
	//WPRINT_APP_INFO(("storage_write_file: %d \n", result));
	//storage_close_file(FD2);

	//result = storage_get_existing_file_list(fs_files, 2, FILE_TYPE_IN_AUDIO, UPDATE_OFF, 0);

	//WPRINT_APP_INFO(("storage_get_existing_file_list: %d \n", result));

	//result = storage_open_file_read(&fs_files[0], &FD1);
	//WPRINT_APP_INFO(("storage_open_file_read: %d, FD: %d \n", result, FD1));

	//result = storage_read_file(FD1, rxBuffer, &readbytes, 8000);
	//WPRINT_APP_INFO(("storage_read_file: %lu, readbytes: %lu \n", result, readbytes));
	//PRINTF_ARRAY_MEM(rxBuffer, 5000);

	/*
	 if (wiced_tcp_create_socket(&tcp_client_socket, WICED_STA_INTERFACE) != WICED_SUCCESS)
	 {
	 WPRINT_APP_INFO(("TCP socket creation failed\n"));
	 }

	 result = wiced_tcp_register_callbacks(&tcp_client_socket, client_connected_callback,
	 received_data_callback, client_disconnected_callback, NULL);

	 if (result != WICED_SUCCESS)
	 {
	 WPRINT_APP_INFO(("wiced_tcp_register_callbacks failed\r\n"));
	 }

	 wiced_tcp_bind(&tcp_client_socket, TCP_SERVER_PORT);


	 wiced_rtos_register_timed_event(&tcp_client_event, WICED_NETWORKING_WORKER_THREAD, &tcp_client,
	 TCP_CLIENT_INTERVAL * SECONDS, 0);

	 */

}

static void test_CESE_protocolos(void)
{
	// inicialización de txBuffer
	for (int i = 0; i < 256; i++)
	{
		txBuffer[i] = i % 256;
	}

	mx25v1635f_init();

	mx25v1635f_read_ID(&manufacturerID, &deviceID);
	WPRINT_APP_INFO(("manufacturerID: %d \n", manufacturerID));
	WPRINT_APP_INFO(("deviceID: %d \n", deviceID));

	WPRINT_APP_INFO(("Borrando memoria \n"));
	mx25v1635f_SE4K(0);
	//mx25v1635f_CE ();

	WPRINT_APP_INFO(("Lectura de memoria borrada: \n"));
	mx25v1635f_4READ(rxBuffer, 256, 0, COMMAND_4READ_PERFORMANCE_OFF);
	PRINTF_ARRAY_MEM(rxBuffer, 256);

	WPRINT_APP_INFO(("Escritura de memoria \n"));
	mx25v1635f_4PP(txBuffer, 256, 0);

	WPRINT_APP_INFO(("Lectura de datos escritos: \n"));
	mx25v1635f_4READ(rxBuffer, 256, 0, COMMAND_4READ_PERFORMANCE_OFF);
	PRINTF_ARRAY_MEM(rxBuffer, 256);

}

static void test_play(void)
{
	fs_file_t fileSystemFile;
	uint8_t FD1;
	uint8_t result;
	fs_file_t fs_files[2];
	audio_player_queue_message_t player_queue_message;

	result = storage_get_existing_file_list(fs_files, 2, FILE_TYPE_IN_AUDIO, UPDATE_ON, 0);

	WPRINT_APP_INFO(("storage_get_existing_file_list: %d \n", result));

	fileSystemFile.name = 'a';
	fileSystemFile.type = FILE_TYPE_IN_AUDIO;

	result = storage_open_file_write(&fileSystemFile, AUDIOSAMPLE_NUM_ELEMENTS * 2, &FD1);
	WPRINT_APP_INFO(("storage_open_file_write: %d, FD: %d \n", result, FD1));

	result = storage_write_file(FD1, (uint8_t *) AUDIOSAMPLE, AUDIOSAMPLE_NUM_ELEMENTS * 2);
	WPRINT_APP_INFO(("storage_write_file: %d \n", result));
	storage_close_file(FD1);

	storage_get_existing_file_list(fs_files, 1, FILE_TYPE_IN_AUDIO, UPDATE_OFF, 0);

	player_queue_message.file = fs_files[0];

	wiced_rtos_push_to_queue(&audio_player_queque, &player_queue_message,
	NO_WAIT);

}

static void init_queues(void)
{

	wiced_rtos_init_queue(&audio_player_queque, "AudioPlayerQueue",
	SIZE_OF_AUDIO_PLAYER_QUEUE_MESSAGE, AUDIO_PLAYER_QUEUE_DEPTH);

}

static void launch_threads(void)
{
	wiced_result_t result;

	result = wiced_rtos_create_worker_thread(AUDIO_OUT_WORKER_THREAD, 2, 24000, 16);
	if (result != WICED_SUCCESS)
	{
		WPRINT_APP_INFO(
				("Error en wiced_rtos_create_worker_thread: AUDIO_OUT_WORKER_THREAD %d\n", result));
	}

	result = wiced_rtos_send_asynchronous_event(AUDIO_OUT_WORKER_THREAD, &audio_player_thread_start,
			0);
	if (result != WICED_SUCCESS)
	{
		WPRINT_APP_INFO(
				("Error en wiced_rtos_send_asynchronous_event: AUDIO_OUT_WORKER_THREAD %d\n", result));
	}
}

//platform_init_nanosecond_clock();

/*
 *
 static wiced_result_t client_connected_callback(wiced_tcp_socket_t* socket, void* arg)
 {
 WPRINT_APP_INFO(("client_connected_callback \n"));
 }
 static wiced_result_t client_disconnected_callback(wiced_tcp_socket_t* socket, void* arg)
 {
 WPRINT_APP_INFO(("client_disconnected_callback \n"));
 }
 static wiced_result_t received_data_callback(wiced_tcp_socket_t* socket, void* arg)
 {
 WPRINT_APP_INFO(("received_data_callback \n"));
 }

 wiced_result_t tcp_client(void* arg)
 {
 wiced_result_t result;
 wiced_packet_t* packet;
 wiced_packet_t* rx_packet;

 wiced_packet_t* tx_packet;
 uint8_t* tx_data;
 uint16_t tx_available_space;
 uint32_t ip_address;

 const wiced_ip_address_t INITIALISER_IPV4_ADDRESS( server_ip_address, TCP_SERVER_IP_ADDRESS );

 char* rx_data;
 uint16_t rx_data_length;
 uint16_t available_data_length;
 int connection_retries;
 UNUSED_PARAMETER(arg);

 connection_retries = 0;
 do
 {
 WPRINT_APP_INFO(("wiced_tcp_connect\n"));
 ip_address = server_ip_address.ip.v4;
 WPRINT_APP_INFO(
 ( "IPv4: %u.%u.%u.%u\n", (unsigned char) ( ( ip_address >> 24 ) & 0xff ), (unsigned char) ( ( ip_address >> 16 ) & 0xff ), (unsigned char) ( ( ip_address >> 8 ) & 0xff ), (unsigned char) ( ( ip_address >> 0 ) & 0xff ) ));

 result = wiced_tcp_connect(&tcp_client_socket, &server_ip_address, TCP_SERVER_PORT,
 TCP_CLIENT_CONNECT_TIMEOUT);
 WPRINT_APP_INFO(("result: %d \n", result));
 connection_retries++;
 } while ((result != WICED_SUCCESS) && (connection_retries < TCP_CONNECTION_NUMBER_OF_RETRIES));
 if (result != WICED_SUCCESS)
 {
 WPRINT_APP_INFO(("Unable to connect to the server! Halt.\n"));
 }

 //wiced_tcp_enable_keepalive( &tcp_client_socket, 10, 3, 10 );

 uint16_t Send_Message_Buffer_Length;
 uint32_t destPin = 1024;
 uint8_t fileType = 1;
 uint32_t fileLength = 32;
 uint32_t transferdId = 64;

 Send_Message_Buffer_Length = big_data(Send_Message_Buffer_Data, 1 * 1024);

 while (1)
 {

 result = wiced_tcp_send_buffer(&tcp_client_socket, Send_Message_Buffer_Data,
 Send_Message_Buffer_Length);

 if (result != WICED_SUCCESS)
 {
 WPRINT_APP_INFO(("wiced_packet_create_tcp error.\n"));
 }
 }



 wiced_tcp_disconnect(&tcp_client_socket);

 return WICED_SUCCESS;

 }

 */
