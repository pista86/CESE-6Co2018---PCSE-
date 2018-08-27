
#pragma once


//#define TCP_SERVER_IP_ADDRESS MAKE_IPV4_ADDRESS(200,58,127,161)
//#define TCP_SERVER_IP_ADDRESS MAKE_IPV4_ADDRESS(192,168,100,252)

#define TCP_SERVER_HOST_NAME "logan.com.ar"
//#define TCP_SERVER_HOST_NAME "192.168.100.252"

#define TCP_PACKET_MAX_DATA_LENGTH        30
#define TCP_CLIENT_INTERVAL               2
#define TCP_SERVER_PORT                   8992

#define TCP_CLIENT_RECEIVE_TIMEOUT        1000
#define TCP_CONNECTION_NUMBER_OF_RETRIES  3
#define TCP_CONNECTION_RETRY_INTERVAL_MS  5000

#define TCP_DOWNLOAD_FILE_TIMEOUT_S       5


#define HOST_NAME_LOOKUP_RETRIES_N        10
#define TCP_CONNECT_RETRIES_N             10

#define TCP_CLIENT_CHECK_SERVER_CONN      60 // cada 60 TCP_CLIENT_RECEIVE_TIMEOUT hace un check server conn

typedef enum {Download_FileFirst,
              Download_FileAppend,
              Download_FileAlreadyExists,
              Download_Error} download_result_t ;

typedef struct
{
uint8_t     downloadInProgress;
uint8_t     fileType;
uint32_t    DownloadFileLength;
uint32_t    ChunksN;
uint32_t    ReceivedChunksN;
uint64_t    downloadID;
uint8_t     downloadSenderPin[6];
} download_file_t;

typedef struct
{
uint8_t     InProgress;
uint8_t     Type;
uint32_t    FileLength;
uint32_t    ChunksN;
uint32_t    readbytes;
uint32_t    transmittedBytes;
uint32_t    transmittedChunksN;
uint64_t    ID;
uint8_t     destPin[6];

} upload_file_t;




extern wiced_result_t establishConnection( void* arg );



