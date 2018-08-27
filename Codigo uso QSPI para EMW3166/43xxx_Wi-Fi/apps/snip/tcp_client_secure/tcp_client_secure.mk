#
# Copyright 2018, Cypress Semiconductor Corporation or a subsidiary of 
 # Cypress Semiconductor Corporation. All Rights Reserved.
 # This software, including source code, documentation and related
 # materials ("Software"), is owned by Cypress Semiconductor Corporation
 # or one of its subsidiaries ("Cypress") and is protected by and subject to
 # worldwide patent protection (United States and foreign),
 # United States copyright laws and international treaty provisions.
 # Therefore, you may use this Software only as provided in the license
 # agreement accompanying the software package from which you
 # obtained this Software ("EULA").
 # If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 # non-transferable license to copy, modify, and compile the Software
 # source code solely for use in connection with Cypress's
 # integrated circuit products. Any reproduction, modification, translation,
 # compilation, or representation of this Software except as specified
 # above is prohibited without the express written permission of Cypress.
 #
 # Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 # EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 # WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 # reserves the right to make changes to the Software without notice. Cypress
 # does not assume any liability arising out of the application or use of the
 # Software or any product or circuit described in the Software. Cypress does
 # not authorize its products for use in any products where a malfunction or
 # failure of the Cypress product may reasonably be expected to result in
 # significant property damage, injury or death ("High Risk Product"). By
 # including Cypress's product in a High Risk Product, the manufacturer
 # of such system or application assumes all risk of such use and in doing
 # so agrees to indemnify Cypress against all liability.
#

NAME := App_tcp_client_secure

$(NAME)_SOURCES := tcp_client_secure.c
$(NAME)_SOURCES += Network/network_thread.c
#$(NAME)_SOURCES += Network/network_application_protocol.c
#$(NAME)_SOURCES += Network/BytePacketFactory.c
#$(NAME)_SOURCES += Network/BytePacketFactory.c
#$(NAME)_SOURCES += drivers/qspi/qspi.c 
#$(NAME)_SOURCES += drivers/mic/i2s.c 

$(NAME)_SOURCES += storage/file_system/file_system.c
$(NAME)_SOURCES += storage/flash_memory/MX25V1635F.c
$(NAME)_SOURCES += storage/ROM/AudioSample.c 
$(NAME)_SOURCES += storage/ROM/RecordingSounds.c
$(NAME)_SOURCES += storage/storage.c

$(NAME)_SOURCES += audio/audio_out/amplifier/MAX98357A.c 
$(NAME)_SOURCES += audio/audio_out/audio_out.c 
$(NAME)_SOURCES += audio/audio_out/monoToStereo.c
$(NAME)_SOURCES += audio/audio_out/monoToStereo_ASM.S
$(NAME)_SOURCES += audio/audio_out/svc.c
$(NAME)_SOURCES += audio/audio_player_thread.c
$(NAME)_SOURCES += audio/audio_in/audio_in.c
$(NAME)_SOURCES += audio/audio_in/mic_pdm_i2s.c
$(NAME)_SOURCES += audio/audio_recorder_thread.c


GLOBAL_DEFINES += DEBUG_PRINTF
#GLOBAL_DEFINES += configUSE_TASK_FPU_SUPPORT

$(NAME)_PREBUILT_LIBRARY += libraries/PDM/libPDMFilter_CM4_GCC.a
$(NAME)_PREBUILT_LIBRARY += libraries/SVC/lib_svc_m4.a

WIFI_CONFIG_DCT_H := wifi_config_dct.h
