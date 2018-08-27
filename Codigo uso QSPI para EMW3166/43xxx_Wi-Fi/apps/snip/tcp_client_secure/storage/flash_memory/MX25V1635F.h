


#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "wiced.h"

/******************************************************
 *                      Macros
 ******************************************************/

/******************************************************
 *                    Constants
 ******************************************************/



// comandos
#define COMMAND_RDID                        0x9F
#define COMMAND_RDID_DATA_LENGTH            3

#define COMMAND_RDSR                        0x05
#define COMMAND_RDSR_DATA_LENGTH            1

#define COMMAND_WREN                        0x06
#define COMMAND_WRDI                        0x04

#define COMMAND_PP                          0x02
#define COMMAND_4PP                         0x38

// comandos de borrado
#define COMMAND_SE                          0x20    // borra sector de 4KB
#define COMMAND_BE32K                       0x52    // borra bloque de 34KB
#define COMMAND_BE                          0xD8    // borra bloque de 64KB
#define COMMAND_CE                          0xC7    // borra chip entero


#define COMMAND_4READ                       0xEB
#define COMMAND_4READ_DUMMY_CYCLES          4
#define COMMAND_4READ_PERFORMANCE_ON        0x000F0000
#define COMMAND_4READ_PERFORMANCE_OFF       0x00FF0000

#define PERFORMANCE_ON 						COMMAND_4READ_PERFORMANCE_ON
#define PERFORMANCE_OFF 					COMMAND_4READ_PERFORMANCE_OFF

/******************************************************
 *                   Enumerations
 ******************************************************/

/******************************************************
 *                 Type Definitions
 ******************************************************/

/******************************************************
 *                    Structures
 ******************************************************/

typedef struct
{
    uint8_t WIP  : 1;
    uint8_t WEL  : 1;
    uint8_t WP0  : 1;
    uint8_t WP1  : 1;
    uint8_t WP2  : 1;
    uint8_t WP3  : 1;
    uint8_t QE   : 1;
    uint8_t SRWD : 1;
} MX25V1635F_SR_t;

/******************************************************
 *                 Global Variables
 ******************************************************/



/******************************************************
 *               Function Declarations
 ******************************************************/

void mx25v1635f_init (void);
void mx25v1635f_SE4K (uint32_t address);
void mx25v1635f_BE32K (uint32_t address);
void mx25v1635f_BE64K (uint32_t address);
void mx25v1635f_CE ();
void mx25v1635f_read_ID (uint8_t* manufacturerID, uint16_t* deviceID);
void mx25v1635f_4PP (uint8_t * txBuffer, uint32_t txBufferLength, uint32_t address);
uint8_t mx25v1635f_4READ (uint8_t * rxBuffer, uint32_t rxBufferLength, uint32_t address, uint8_t performance);
MX25V1635F_SR_t mx25v1635f_read_SR (void);


#ifdef __cplusplus
} /*extern "C" */
#endif

