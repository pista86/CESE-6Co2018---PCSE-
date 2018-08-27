
#pragma once

//Versiones:
#define     V001        0x01

//Comandos:
#define UPLOAD_INIT                     0x00
#define UPLOAD_FILE_DATA                0x01
#define UPLOAD_ACCEPTED                 0x02
#define UPLOAD_FILE_DATA_RECEIVED       0x03

#define DOWNLOAD_INIT                   0x10
#define DOWNLOAD_FILE_DATA              0x11
#define DOWNLOAD_ACCEPTED               0x12
#define DOWNLOAD_FILE_DATA_RECEIVED     0x13

#define VOLUME_UP                       0x20
#define VOLUME_DOWN                     0x21

#define GET_UTC_TIME_MS                 0x30
#define SET_UTC_TIME_MS                 0x31

#define GET_MY_CONTACTS                 0x40
#define SEND_CONTACTS                   0x41

#define CREATE_USER                     0x50 //32 caracteres(bytes) para cada uno: name, lastname, email  codificados ISO 8859-1 completando con 0x00 + 64 bytes SHA512(user+passwordHASH) + 16 bytes gender + 16 bytes type
#define CREATE_USER_OK                  0x51 // 6 bytes PIN asignado por servidor + 32 bytes reservado
#define CREATE_USER_NOK                 0x52 // 1 byte codigo de error + 32 bytes reservado
#define AUTHENTICATE_USER_PASSWORD      0x80 //64 bytes que representan SHA512(user+passwordHASH)
#define AUTHENTICATE_USER_PASSWORD_OK   0x81 // Respuesta del servidor indicando autenticación correcta
#define ASK_ALIVE                       0x90
#define REPLY_ALIVE                     0x91

//Archivos reconocidos:
#define FILE_AUDIO_OGG                  0x10
#define FILE_AUDIO_AAC                  0x11
#define FILE_AUDIO_MP3                  0x12
#define FILE_TEXT_TXT                   0x50
#define FILE_NOT_SUPPORTED              0xFF
