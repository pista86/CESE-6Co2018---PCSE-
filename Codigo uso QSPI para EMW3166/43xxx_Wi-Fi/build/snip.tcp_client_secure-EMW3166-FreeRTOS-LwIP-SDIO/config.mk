WICED_SDK_MAKEFILES           += ./WICED/platform/MCU/STM32F4xx/peripherals/libraries/libraries.mk ./libraries/utilities/crc/crc.mk ./libraries/utilities/ring_buffer/ring_buffer.mk ./WICED/platform/MCU/STM32F4xx/peripherals/peripherals.mk ./WICED/platform/GCC/GCC.mk ./WICED/security/BESL/crypto_internal/micro-ecc/micro-ecc.mk ./WICED/security/BESL/mbedtls_open/mbedtls_open.mk ./libraries/utilities/linked_list/linked_list.mk ./libraries/utilities/base64/base64.mk ./libraries/utilities/TLV/TLV.mk ./libraries/daemons/DHCP_server/DHCP_server.mk ././WICED/network/LwIP/WWD/FreeRTOS/FreeRTOS.mk ././WICED/platform/MCU/STM32F4xx/STM32F4xx.mk ./libraries/filesystems/wicedfs/wicedfs.mk ./libraries/protocols/DNS/DNS.mk ././WICED/security/PostgreSQL/PostgreSQL.mk ././WICED/security/BESL/BESL.mk ././WICED/WWD/WWD.mk ././WICED/network/LwIP/WICED/WICED.mk ././WICED/network/LwIP/WWD/WWD.mk ././WICED/RTOS/FreeRTOS/WICED/WICED.mk ././WICED/RTOS/FreeRTOS/WWD/WWD.mk ./libraries/drivers/spi_flash/spi_flash.mk ././WICED/WICED.mk ./WICED/network/LwIP/LwIP.mk ./WICED/RTOS/FreeRTOS/FreeRTOS.mk ./platforms/EMW3166/EMW3166.mk ./apps/snip/tcp_client_secure/tcp_client_secure.mk
TOOLCHAIN_NAME                := GCC
JTAG                          := CYW9WCD1EVAL1
WICED_SDK_LDFLAGS             += -Wl,--gc-sections -Wl,-Os -Wl,--cref -mthumb -mcpu=cortex-m4 -Wl,-A,thumb -Wl,-z,max-page-size=0x10 -Wl,-z,common-page-size=0x10 -mlittle-endian -nostartfiles -Wl,--defsym,__STACKSIZE__=800 -L ./WICED/platform/MCU/STM32F4xx/GCC -L ./WICED/platform/MCU/STM32F4xx/GCC/STM32F412
RESOURCE_CFLAGS               += -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\" -mthumb -mcpu=cortex-m4 -mlittle-endian -Wno-address
RESOURCE_CXXFLAGS             += -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\" -mthumb -mcpu=cortex-m4 -mlittle-endian
WICED_SDK_LINK_SCRIPT         += ././WICED/platform/MCU/STM32F4xx/GCC/app_with_bootloader.ld
WICED_SDK_LINK_SCRIPT_CMD     += -Wl,-T ././WICED/platform/MCU/STM32F4xx/GCC/app_with_bootloader.ld
WICED_SDK_PREBUILT_LIBRARIES  += ./apps/snip/tcp_client_secure/libraries/PDM/libPDMFilter_CM4_GCC.a ./apps/snip/tcp_client_secure/libraries/SVC/lib_svc_m4.a ././WICED/security/BESL/BESL_generic.ARM_CM4.release.a ././WICED/security/PostgreSQL/PostgreSQL.ARM_CM4.release.a
WICED_SDK_CERTIFICATES        += 
WICED_SDK_PRE_APP_BUILDS      += bootloader
WICED_SDK_DCT_LINK_SCRIPT     += ././WICED/platform/MCU/STM32F4xx/GCC/STM32F412/dct.ld
WICED_SDK_DCT_LINK_CMD        += -Wl,-T ././WICED/platform/MCU/STM32F4xx/GCC/STM32F412/dct.ld
WICED_SDK_APPLICATION_DCT     += 
WICED_SDK_WIFI_CONFIG_DCT_H   += ./apps/snip/tcp_client_secure/wifi_config_dct.h
WICED_SDK_BT_CONFIG_DCT_H     += ./include/default_bt_config_dct.h
WICED_SDK_LINK_FILES          +=                                $(OUTPUT_DIR)/Modules/./WICED/platform/MCU/STM32F4xx/../../ARM_CM4/crt0_GCC.o $(OUTPUT_DIR)/Modules/./WICED/platform/MCU/STM32F4xx/../../ARM_CM4/hardfault_handler.o $(OUTPUT_DIR)/Modules/./WICED/platform/MCU/STM32F4xx/platform_vector_table.o                $(OUTPUT_DIR)/Modules/WICED/platform/GCC/mem_newlib.o $(OUTPUT_DIR)/Modules/WICED/platform/GCC/time_newlib.o $(OUTPUT_DIR)/Modules/WICED/platform/GCC/stdio_newlib.o        
WICED_SDK_INCLUDES            +=                                                                   -I./WICED/platform/MCU/STM32F4xx/peripherals/libraries/. -I./WICED/platform/MCU/STM32F4xx/peripherals/libraries/inc -I./WICED/platform/MCU/STM32F4xx/peripherals/libraries/../../../ARM_CM4/CMSIS -I./libraries/utilities/crc/. -I./libraries/utilities/ring_buffer/. -I./WICED/platform/MCU/STM32F4xx/peripherals/. -I./WICED/platform/GCC/. -I./WICED/security/BESL/crypto_internal/micro-ecc/. -I./WICED/security/BESL/mbedtls_open/include -I./libraries/utilities/linked_list/. -I./libraries/utilities/base64/. -I./libraries/utilities/TLV/. -I./libraries/daemons/DHCP_server/. -I././WICED/network/LwIP/WWD/FreeRTOS/. -I././WICED/platform/MCU/STM32F4xx/. -I././WICED/platform/MCU/STM32F4xx/.. -I././WICED/platform/MCU/STM32F4xx/../.. -I././WICED/platform/MCU/STM32F4xx/../../include -I././WICED/platform/MCU/STM32F4xx/../../ARM_CM4 -I././WICED/platform/MCU/STM32F4xx/../../ARM_CM4/CMSIS -I././WICED/platform/MCU/STM32F4xx/peripherals -I././WICED/platform/MCU/STM32F4xx/WAF -I././WICED/platform/MCU/STM32F4xx/../../../../../apps/waf/bootloader/ -I./libraries/filesystems/wicedfs/src -I./libraries/protocols/DNS/. -I././WICED/security/PostgreSQL/include -I././WICED/security/BESL/host/WICED -I././WICED/security/BESL/TLS -I././WICED/security/BESL/crypto_internal -I././WICED/security/BESL/WPS -I././WICED/security/BESL/include -I././WICED/security/BESL/P2P -I././WICED/security/BESL/crypto_internal/homekit_srp -I././WICED/security/BESL/crypto_internal/ed25519 -I././WICED/security/BESL/supplicant -I././WICED/security/BESL/DTLS -I././WICED/security/BESL/mbedtls_open/include -I././WICED/WWD/. -I././WICED/WWD/include -I././WICED/WWD/include/network -I././WICED/WWD/include/RTOS -I././WICED/WWD/internal/bus_protocols/SDIO -I././WICED/WWD/internal/chips/43362 -I././WICED/WWD/../../libraries/utilities/linked_list -I././WICED/WWD/../RTOS/FreeRTOS/WICED -I././WICED/network/LwIP/WICED/. -I././WICED/network/LwIP/WWD/. -I././WICED/RTOS/FreeRTOS/WICED/. -I././WICED/RTOS/FreeRTOS/WWD/. -I././WICED/RTOS/FreeRTOS/WWD/./EMW3166 -I././WICED/RTOS/FreeRTOS/WWD/./ARM_CM3 -I./libraries/drivers/spi_flash/. -I././WICED/. -I././WICED/platform/include -I./WICED/network/LwIP/ver2.0.3 -I./WICED/network/LwIP/ver2.0.3/src/include -I./WICED/network/LwIP/WICED -I./WICED/RTOS/FreeRTOS/ver9.0.0/Source/include -I./WICED/RTOS/FreeRTOS/ver9.0.0/Source/portable/GCC/ARM_CM3 -I./platforms/EMW3166/. -I./apps/snip/tcp_client_secure/ -I./WICED/WWD/internal/chips/43362 -I./libraries -I./include
WICED_SDK_DEFINES             +=                                                              -DSFLASH_APPS_HEADER_LOC=0x0000 -DUSE_STDPERIPH_DRIVER -D_STM3x_ -D_STM32x_ -DSTM32F412xG -DPLATFORM_SUPPORTS_LOW_POWER_MODES -DMAX_WATCHDOG_TIMEOUT_SECONDS=22 -DUSING_WICEDFS -DADD_LWIP_EAPOL_SUPPORT -DNXD_EXTENDED_BSD_SOCKET_SUPPORT -DOPENSSL -DSTDC_HEADERS -Dwifi_firmware_image=resources_firmware_DIR_43362_DIR_43362A2_bin -DFIRMWARE_WITH_PMK_CALC_SUPPORT -DADD_NETX_EAPOL_SUPPORT -DNX_FRAGMENT_IMMEDIATE_ASSEMBLY -DWWD_STARTUP_DELAY=10 -DBOOTLOADER_MAGIC_NUMBER=0x4d435242 -DNETWORK_LwIP=1 -DLwIP_VERSION=\"v2.0.3\" -DRTOS_FreeRTOS=1 -DconfigUSE_MUTEXES -DconfigUSE_RECURSIVE_MUTEXES -DFreeRTOS_VERSION=\"v9.0.0\" -DWWD_DIRECT_RESOURCES -DHSE_VALUE=26000000 -DCRLF_STDIO_REPLACEMENT -DGPIO_LED_NOT_SUPPORTED -DDEBUG_PRINTF -DWIFI_CONFIG_APPLICATION_DEFINED -DWICED_SDK_WIFI_CONFIG_DCT_H=\"./apps/snip/tcp_client_secure/wifi_config_dct.h\" -DWICED_SDK_BT_CONFIG_DCT_H=\"./include/default_bt_config_dct.h\"
COMPONENTS                := App_tcp_client_secure Platform_EMW3166 FreeRTOS LwIP WICED Lib_SPI_Flash_Library_EMW3166 WWD_FreeRTOS_Interface_EMW3166 WICED_FreeRTOS_Interface WWD_LwIP_Interface_FreeRTOS WICED_LwIP_Interface WWD_for_SDIO_FreeRTOS Supplicant_BESL Fortuna_PostgreSQL Lib_DNS Lib_Wiced_RO_FS STM32F4xx Wiced_Network_LwIP_FreeRTOS Lib_DHCP_Server Lib_TLV Lib_base64 Lib_Linked_List Lib_mbedTLS Lib_micro_ecc common_GCC STM32F4xx_Peripheral_Drivers Lib_Ring_Buffer Lib_crc STM32F4xx_Peripheral_Libraries
BUS                       := SDIO
IMAGE_TYPE                := ram
NETWORK_FULL              := LwIP
RTOS_FULL                 := FreeRTOS
PLATFORM_DIRECTORY        := EMW3166
APP_FULL                  := snip/tcp_client_secure
NETWORK                   := LwIP
RTOS                      := FreeRTOS
PLATFORM                  := EMW3166
APPS_CHIP_REVISION        := 
USB                       := 
APP                       := tcp_client_secure
HOST_OPENOCD              := stm32f4x
HOST_ARCH                 := ARM_CM4
WICED_SDK_CERTIFICATE         := 
WICED_SDK_PRIVATE_KEY         := 
NO_BUILD_BOOTLOADER           := 
NO_BOOTLOADER_REQUIRED        := 
COMPILER_SPECIFIC_SYSTEM_DIR  := -isystem ./tools/ARM_GNU/Linux64/bin/../../include -isystem ./tools/ARM_GNU/Linux64/bin/../../lib/include -isystem ./tools/ARM_GNU/Linux64/bin/../../lib/include-fixed
BOARD_SPECIFIC_OPENOCD_SCRIPT := 
App_tcp_client_secure_LOCATION         := ./apps/snip/tcp_client_secure/
Platform_EMW3166_LOCATION         := ./platforms/EMW3166/
FreeRTOS_LOCATION         := ./WICED/RTOS/FreeRTOS/
LwIP_LOCATION         := ./WICED/network/LwIP/
WICED_LOCATION         := ././WICED/
Lib_SPI_Flash_Library_EMW3166_LOCATION         := ./libraries/drivers/spi_flash/
WWD_FreeRTOS_Interface_EMW3166_LOCATION         := ././WICED/RTOS/FreeRTOS/WWD/
WICED_FreeRTOS_Interface_LOCATION         := ././WICED/RTOS/FreeRTOS/WICED/
WWD_LwIP_Interface_FreeRTOS_LOCATION         := ././WICED/network/LwIP/WWD/
WICED_LwIP_Interface_LOCATION         := ././WICED/network/LwIP/WICED/
WWD_for_SDIO_FreeRTOS_LOCATION         := ././WICED/WWD/
Supplicant_BESL_LOCATION         := ././WICED/security/BESL/
Fortuna_PostgreSQL_LOCATION         := ././WICED/security/PostgreSQL/
Lib_DNS_LOCATION         := ./libraries/protocols/DNS/
Lib_Wiced_RO_FS_LOCATION         := ./libraries/filesystems/wicedfs/
STM32F4xx_LOCATION         := ././WICED/platform/MCU/STM32F4xx/
Wiced_Network_LwIP_FreeRTOS_LOCATION         := ././WICED/network/LwIP/WWD/FreeRTOS/
Lib_DHCP_Server_LOCATION         := ./libraries/daemons/DHCP_server/
Lib_TLV_LOCATION         := ./libraries/utilities/TLV/
Lib_base64_LOCATION         := ./libraries/utilities/base64/
Lib_Linked_List_LOCATION         := ./libraries/utilities/linked_list/
Lib_mbedTLS_LOCATION         := ./WICED/security/BESL/mbedtls_open/
Lib_micro_ecc_LOCATION         := ./WICED/security/BESL/crypto_internal/micro-ecc/
common_GCC_LOCATION         := ./WICED/platform/GCC/
STM32F4xx_Peripheral_Drivers_LOCATION         := ./WICED/platform/MCU/STM32F4xx/peripherals/
Lib_Ring_Buffer_LOCATION         := ./libraries/utilities/ring_buffer/
Lib_crc_LOCATION         := ./libraries/utilities/crc/
STM32F4xx_Peripheral_Libraries_LOCATION         := ./WICED/platform/MCU/STM32F4xx/peripherals/libraries/
App_tcp_client_secure_SOURCES          += tcp_client_secure.c Network/network_thread.c storage/file_system/file_system.c storage/flash_memory/MX25V1635F.c storage/ROM/AudioSample.c  storage/ROM/RecordingSounds.c storage/storage.c audio/audio_out/amplifier/MAX98357A.c  audio/audio_out/audio_out.c  audio/audio_out/monoToStereo.c audio/audio_out/monoToStereo_ASM.S audio/audio_out/svc.c audio/audio_player_thread.c audio/audio_in/audio_in.c audio/audio_in/mic_pdm_i2s.c audio/audio_recorder_thread.c
Platform_EMW3166_SOURCES          += platform.c
FreeRTOS_SOURCES          += ver9.0.0/Source/croutine.c ver9.0.0/Source/event_groups.c ver9.0.0/Source/list.c ver9.0.0/Source/queue.c ver9.0.0/Source/tasks.c ver9.0.0/Source/timers.c ver9.0.0/Source/portable/MemMang/heap_3.c ver9.0.0/Source/portable/GCC/ARM_CM3/port.c
LwIP_SOURCES          += ver2.0.3/src/api/api_lib.c ver2.0.3/src/api/api_msg.c ver2.0.3/src/api/err.c ver2.0.3/src/api/netbuf.c ver2.0.3/src/api/netdb.c ver2.0.3/src/api/netifapi.c ver2.0.3/src/api/sockets.c ver2.0.3/src/api/tcpip.c ver2.0.3/src/core/ipv4/dhcp.c ver2.0.3/src/core/dns.c ver2.0.3/src/core/init.c ver2.0.3/src/core/ip.c ver2.0.3/src/core/ipv4/autoip.c ver2.0.3/src/core/ipv4/icmp.c ver2.0.3/src/core/ipv4/igmp.c ver2.0.3/src/core/inet_chksum.c ver2.0.3/src/core/ipv4/ip4.c ver2.0.3/src/core/ipv4/ip4_addr.c ver2.0.3/src/core/ipv4/ip4_frag.c ver2.0.3/src/core/def.c ver2.0.3/src/core/timeouts.c ver2.0.3/src/core/mem.c ver2.0.3/src/core/memp.c ver2.0.3/src/core/netif.c ver2.0.3/src/core/pbuf.c ver2.0.3/src/core/raw.c ver2.0.3/src/apps/snmp/snmp_asn1.c ver2.0.3/src/apps/snmp/snmp_mib2.c ver2.0.3/src/apps/snmp/snmp_msg.c ver2.0.3/src/core/stats.c ver2.0.3/src/core/sys.c ver2.0.3/src/core/tcp.c ver2.0.3/src/core/tcp_in.c ver2.0.3/src/core/tcp_out.c ver2.0.3/src/core/udp.c ver2.0.3/src/core/ipv4/etharp.c ver2.0.3/src/netif/ethernet.c ver2.0.3/src/core/ipv6/ethip6.c ver2.0.3/src/core/ipv6/dhcp6.c ver2.0.3/src/core/ipv6/icmp6.c ver2.0.3/src/core/ipv6/inet6.c ver2.0.3/src/core/ipv6/ip6.c ver2.0.3/src/core/ipv6/ip6_addr.c ver2.0.3/src/core/ipv6/ip6_frag.c ver2.0.3/src/core/ipv6/mld6.c ver2.0.3/src/core/ipv6/nd6.c
WICED_SOURCES          += internal/wiced_core.c internal/time.c internal/system_monitor.c internal/wiced_lib.c internal/wiced_crypto.c internal/waf.c internal/wiced_audio.c internal/wifi.c internal/wiced_wifi_deep_sleep.c internal/wiced_cooee.c internal/wiced_easy_setup.c internal/wiced_filesystem.c internal/wiced_low_power.c
Lib_SPI_Flash_Library_EMW3166_SOURCES          += spi_flash.c spi_flash_wiced.c
WWD_FreeRTOS_Interface_EMW3166_SOURCES          += wwd_rtos.c ARM_CM3/low_level_init.c ARM_CM3/low_power.c
WICED_FreeRTOS_Interface_SOURCES          += wiced_rtos.c ../../wiced_rtos_common.c
WWD_LwIP_Interface_FreeRTOS_SOURCES          += wwd_network.c wwd_buffer.c
WICED_LwIP_Interface_SOURCES          += wiced_network.c tcpip.c wiced_ping.c ../../wiced_network_common.c ../../wiced_tcpip_common.c
WWD_for_SDIO_FreeRTOS_SOURCES          += internal/wwd_thread.c internal/wwd_ap_common.c internal/wwd_thread_internal.c internal/wwd_sdpcm.c internal/wwd_internal.c internal/wwd_management.c internal/wwd_wifi.c internal/wwd_wifi_sleep.c internal/wwd_wifi_chip_common.c internal/wwd_rtos_interface.c internal/wwd_logging.c internal/wwd_debug.c internal/wwd_eapol.c internal/bus_protocols/wwd_bus_common.c internal/bus_protocols/SDIO/wwd_bus_protocol.c internal/chips/43362/wwd_ap.c internal/chips/43362/wwd_chip_specific_functions.c
Supplicant_BESL_SOURCES          += host/WICED/besl_host.c host/WICED/wiced_tls.c host/WICED/wiced_wps.c host/WICED/wiced_p2p.c host/WICED/cipher_suites.c host/WICED/tls_cipher_suites.c host/WICED/dtls_cipher_suites.c host/WICED/p2p_internal.c host/WICED/wiced_supplicant.c P2P/p2p_events.c P2P/p2p_frame_writer.c host/WICED/wiced_dtls.c
Fortuna_PostgreSQL_SOURCES          += 
Lib_DNS_SOURCES          += dns.c
Lib_Wiced_RO_FS_SOURCES          += src/wicedfs.c wicedfs_drivers.c
STM32F4xx_SOURCES          += ../../ARM_CM4/crt0_GCC.c ../../ARM_CM4/hardfault_handler.c ../../ARM_CM4/host_cm4.c ../platform_resource.c ../platform_stdio.c ../wiced_platform_common.c ../wwd_platform_separate_mcu.c ../wwd_resources.c ../wiced_apps_common.c ../wiced_waf_common.c ../platform_nsclock.c platform_vector_table.c platform_init.c platform_unhandled_isr.c platform_filesystem.c WAF/waf_platform.c  ../wiced_dct_internal_common.c ../wiced_dct_update.c WWD/wwd_platform.c WWD/wwd_SDIO.c
Wiced_Network_LwIP_FreeRTOS_SOURCES          += sys_arch.c
Lib_DHCP_Server_SOURCES          += dhcp_server.c
Lib_TLV_SOURCES          += tlv.c
Lib_base64_SOURCES          += bsd-base64.c
Lib_Linked_List_SOURCES          += linked_list.c
Lib_mbedTLS_SOURCES          += library/aes.c library/aesni.c library/arc4.c library/asn1parse.c library/asn1write.c library/base64.c library/bignum.c library/blowfish.c library/camellia.c library/ccm.c library/cipher.c library/cipher_wrap.c library/cmac.c library/ctr_drbg.c library/des.c library/dhm.c library/ecdh.c library/ecdsa.c library/ecjpake.c library/ecp.c library/ecp_curves.c library/entropy.c library/entropy_poll.c library/error.c library/gcm.c library/havege.c library/hmac_drbg.c library/md.c library/md2.c library/md4.c library/md5.c library/md_wrap.c library/memory_buffer_alloc.c library/oid.c library/padlock.c library/pem.c library/pk.c library/pk_wrap.c library/pkcs12.c library/pkcs5.c library/pkparse.c library/pkwrite.c library/platform.c library/ripemd160.c library/rsa.c library/sha1.c library/sha256.c library/sha512.c library/threading.c library/timing.c library/version.c library/version_features.c library/xtea.c library/certs.c library/pkcs11.c library/x509.c library/x509_create.c library/x509_crl.c library/x509_crt.c library/x509_csr.c library/x509write_crt.c library/x509write_csr.c library/debug.c library/net_sockets.c library/ssl_cache.c library/ssl_ciphersuites.c library/ssl_cli.c library/ssl_cookie.c library/ssl_srv.c library/ssl_ticket.c library/ssl_tls.c library/ecp_alt.c library/aes_alt.c library/des_alt.c library/sha256_alt.c library/sha1_alt.c library/md5_alt.c
Lib_micro_ecc_SOURCES          += uECC.c
common_GCC_SOURCES          +=  mem_newlib.c time_newlib.c math_newlib.c cxx_funcs.c stdio_newlib.c
STM32F4xx_Peripheral_Drivers_SOURCES          += platform_adc.c platform_gpio.c platform_i2c.c platform_mcu_powersave.c platform_pwm.c platform_rtc.c platform_spi.c logan_audio_in_i2s.c logan_audio_out_i2s.c logan_MAX98357A.c logan_i2s.c logan_qspi.c platform_uart.c platform_watchdog.c platform_ext_memory.c platform_audio_timer.c platform_gspi_master.c
Lib_Ring_Buffer_SOURCES          += ring_buffer.c
Lib_crc_SOURCES          += crc.c
STM32F4xx_Peripheral_Libraries_SOURCES          += src/misc.c src/stm32f4xx_adc.c src/stm32f4xx_can.c src/stm32f4xx_crc.c src/stm32f4xx_dac.c src/stm32f4xx_dbgmcu.c src/stm32f4xx_dma.c src/stm32f4xx_exti.c src/stm32f4xx_flash.c src/stm32f4xx_gpio.c src/stm32f4xx_rng.c src/stm32f4xx_i2c.c src/stm32f4xx_iwdg.c src/stm32f4xx_pwr.c src/stm32f4xx_rcc.c src/stm32f4xx_rtc.c src/stm32f4xx_sdio.c src/stm32f4xx_spi.c src/stm32f4xx_qspi.c src/stm32f4xx_syscfg.c src/stm32f4xx_tim.c src/stm32f4xx_usart.c src/stm32f4xx_wwdg.c
App_tcp_client_secure_CHECK_HEADERS    += 
Platform_EMW3166_CHECK_HEADERS    += 
FreeRTOS_CHECK_HEADERS    += 
LwIP_CHECK_HEADERS    += 
WICED_CHECK_HEADERS    += internal/wiced_internal_api.h ../include/default_wifi_config_dct.h ../include/resource.h ../include/wiced.h ../include/wiced_defaults.h ../include/wiced_easy_setup.h ../include/wiced_framework.h ../include/wiced_management.h ../include/wiced_platform.h ../include/wiced_rtos.h ../include/wiced_tcpip.h ../include/wiced_time.h ../include/wiced_utilities.h ../include/wiced_crypto.h ../include/wiced_wifi.h ../include/wiced_wifi_deep_sleep.h
Lib_SPI_Flash_Library_EMW3166_CHECK_HEADERS    += 
WWD_FreeRTOS_Interface_EMW3166_CHECK_HEADERS    += wwd_FreeRTOS_systick.h wwd_rtos.h
WICED_FreeRTOS_Interface_CHECK_HEADERS    += rtos.h
WWD_LwIP_Interface_FreeRTOS_CHECK_HEADERS    += wwd_buffer.h wwd_network.h
WICED_LwIP_Interface_CHECK_HEADERS    += wiced_ping.h wiced_network.h
WWD_for_SDIO_FreeRTOS_CHECK_HEADERS    += internal/wwd_ap.h internal/wwd_ap_common.h internal/wwd_bcmendian.h internal/wwd_internal.h internal/wwd_logging.h internal/wwd_sdpcm.h internal/wwd_thread.h internal/wwd_thread_internal.h internal/bus_protocols/wwd_bus_protocol_interface.h internal/bus_protocols/SDIO/wwd_bus_protocol.h internal/chips/43362/chip_constants.h include/wwd_assert.h include/wwd_constants.h include/wwd_debug.h include/wwd_events.h include/wwd_management.h include/wwd_poll.h include/wwd_structures.h include/wwd_wifi.h include/wwd_wifi_sleep.h include/wwd_wifi_chip_common.h include/wwd_wlioctl.h include/Network/wwd_buffer_interface.h include/Network/wwd_network_constants.h include/Network/wwd_network_interface.h include/platform/wwd_bus_interface.h include/platform/wwd_platform_interface.h include/platform/wwd_resource_interface.h include/platform/wwd_sdio_interface.h include/platform/wwd_spi_interface.h include/RTOS/wwd_rtos_interface.h
Supplicant_BESL_CHECK_HEADERS    += 
Fortuna_PostgreSQL_CHECK_HEADERS    += 
Lib_DNS_CHECK_HEADERS    += 
Lib_Wiced_RO_FS_CHECK_HEADERS    += 
STM32F4xx_CHECK_HEADERS    += 
Wiced_Network_LwIP_FreeRTOS_CHECK_HEADERS    += 
Lib_DHCP_Server_CHECK_HEADERS    += 
Lib_TLV_CHECK_HEADERS    += 
Lib_base64_CHECK_HEADERS    += 
Lib_Linked_List_CHECK_HEADERS    += 
Lib_mbedTLS_CHECK_HEADERS    += 
Lib_micro_ecc_CHECK_HEADERS    += 
common_GCC_CHECK_HEADERS    += 
STM32F4xx_Peripheral_Drivers_CHECK_HEADERS    += 
Lib_Ring_Buffer_CHECK_HEADERS    += 
Lib_crc_CHECK_HEADERS    += 
STM32F4xx_Peripheral_Libraries_CHECK_HEADERS    += 
App_tcp_client_secure_INCLUDES         := 
Platform_EMW3166_INCLUDES         := 
FreeRTOS_INCLUDES         := 
LwIP_INCLUDES         := 
WICED_INCLUDES         := -I././WICED/security/BESL/crypto_internal -I././WICED/security/BESL/include -I././WICED/security/BESL/host/WICED -I././WICED/security/BESL/WPS -I././WICED/security/PostgreSQL -I././WICED/security/PostgreSQL/include -I././WICED/security/BESL/mbedtls_open/include
Lib_SPI_Flash_Library_EMW3166_INCLUDES         := 
WWD_FreeRTOS_Interface_EMW3166_INCLUDES         := 
WICED_FreeRTOS_Interface_INCLUDES         := 
WWD_LwIP_Interface_FreeRTOS_INCLUDES         := 
WICED_LwIP_Interface_INCLUDES         := 
WWD_for_SDIO_FreeRTOS_INCLUDES         := 
Supplicant_BESL_INCLUDES         := 
Fortuna_PostgreSQL_INCLUDES         := 
Lib_DNS_INCLUDES         := 
Lib_Wiced_RO_FS_INCLUDES         := 
STM32F4xx_INCLUDES         := 
Wiced_Network_LwIP_FreeRTOS_INCLUDES         := 
Lib_DHCP_Server_INCLUDES         := 
Lib_TLV_INCLUDES         := 
Lib_base64_INCLUDES         := 
Lib_Linked_List_INCLUDES         := 
Lib_mbedTLS_INCLUDES         := 
Lib_micro_ecc_INCLUDES         := 
common_GCC_INCLUDES         := 
STM32F4xx_Peripheral_Drivers_INCLUDES         := 
Lib_Ring_Buffer_INCLUDES         := 
Lib_crc_INCLUDES         := 
STM32F4xx_Peripheral_Libraries_INCLUDES         := 
App_tcp_client_secure_DEFINES          := 
Platform_EMW3166_DEFINES          := 
FreeRTOS_DEFINES          := -DFREERTOS_WICED
LwIP_DEFINES          := 
WICED_DEFINES          := 
Lib_SPI_Flash_Library_EMW3166_DEFINES          := -DSFLASH_SUPPORT_SST_PARTS -DSFLASH_SUPPORT_MACRONIX_PARTS -DSFLASH_SUPPORT_EON_PARTS -DSFLASH_SUPPORT_MICRON_PARTS
WWD_FreeRTOS_Interface_EMW3166_DEFINES          := 
WICED_FreeRTOS_Interface_DEFINES          := 
WWD_LwIP_Interface_FreeRTOS_DEFINES          := 
WICED_LwIP_Interface_DEFINES          := 
WWD_for_SDIO_FreeRTOS_DEFINES          := 
Supplicant_BESL_DEFINES          := 
Fortuna_PostgreSQL_DEFINES          := 
Lib_DNS_DEFINES          := 
Lib_Wiced_RO_FS_DEFINES          := 
STM32F4xx_DEFINES          := 
Wiced_Network_LwIP_FreeRTOS_DEFINES          := 
Lib_DHCP_Server_DEFINES          := 
Lib_TLV_DEFINES          := 
Lib_base64_DEFINES          := 
Lib_Linked_List_DEFINES          := 
Lib_mbedTLS_DEFINES          := 
Lib_micro_ecc_DEFINES          := 
common_GCC_DEFINES          := 
STM32F4xx_Peripheral_Drivers_DEFINES          := 
Lib_Ring_Buffer_DEFINES          := 
Lib_crc_DEFINES          := 
STM32F4xx_Peripheral_Libraries_DEFINES          := 
App_tcp_client_secure_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
Platform_EMW3166_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
FreeRTOS_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
LwIP_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
WICED_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
Lib_SPI_Flash_Library_EMW3166_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
WWD_FreeRTOS_Interface_EMW3166_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
WICED_FreeRTOS_Interface_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
WWD_LwIP_Interface_FreeRTOS_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
WICED_LwIP_Interface_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11 -Werror -Wstrict-prototypes -W -Wshadow -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal -Wundef -Wshadow
WWD_for_SDIO_FreeRTOS_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
Supplicant_BESL_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -fno-strict-aliasing
Fortuna_PostgreSQL_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -fno-strict-aliasing
Lib_DNS_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
Lib_Wiced_RO_FS_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
STM32F4xx_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
Wiced_Network_LwIP_FreeRTOS_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
Lib_DHCP_Server_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
Lib_TLV_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
Lib_base64_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
Lib_Linked_List_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
Lib_mbedTLS_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    -fno-strict-aliasing
Lib_micro_ecc_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
common_GCC_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
STM32F4xx_Peripheral_Drivers_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
Lib_Ring_Buffer_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
Lib_crc_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
STM32F4xx_Peripheral_Libraries_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4    -mlittle-endian            -Wno-address    
App_tcp_client_secure_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Platform_EMW3166_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
FreeRTOS_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
LwIP_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
WICED_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_SPI_Flash_Library_EMW3166_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
WWD_FreeRTOS_Interface_EMW3166_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
WICED_FreeRTOS_Interface_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
WWD_LwIP_Interface_FreeRTOS_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
WICED_LwIP_Interface_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
WWD_for_SDIO_FreeRTOS_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Supplicant_BESL_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Fortuna_PostgreSQL_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_DNS_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_Wiced_RO_FS_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
STM32F4xx_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Wiced_Network_LwIP_FreeRTOS_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_DHCP_Server_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_TLV_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_base64_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_Linked_List_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_mbedTLS_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_micro_ecc_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
common_GCC_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
STM32F4xx_Peripheral_Drivers_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_Ring_Buffer_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
Lib_crc_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
STM32F4xx_Peripheral_Libraries_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/snip.tcp_client_secure-EMW3166-FreeRTOS-LwIP-SDIO/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"             -mthumb -mcpu=cortex-m4   -mlittle-endian                
App_tcp_client_secure_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Platform_EMW3166_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
FreeRTOS_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
LwIP_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
WICED_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_SPI_Flash_Library_EMW3166_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
WWD_FreeRTOS_Interface_EMW3166_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
WICED_FreeRTOS_Interface_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
WWD_LwIP_Interface_FreeRTOS_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
WICED_LwIP_Interface_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
WWD_for_SDIO_FreeRTOS_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Supplicant_BESL_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Fortuna_PostgreSQL_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_DNS_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_Wiced_RO_FS_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
STM32F4xx_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Wiced_Network_LwIP_FreeRTOS_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_DHCP_Server_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_TLV_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_base64_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_Linked_List_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_mbedTLS_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_micro_ecc_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
common_GCC_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
STM32F4xx_Peripheral_Drivers_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_Ring_Buffer_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
Lib_crc_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
STM32F4xx_Peripheral_Libraries_ASMFLAGS         :=             -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian                
App_tcp_client_secure_RESOURCES        := 
Platform_EMW3166_RESOURCES        := 
FreeRTOS_RESOURCES        := 
LwIP_RESOURCES        := 
WICED_RESOURCES        := 
Lib_SPI_Flash_Library_EMW3166_RESOURCES        := 
WWD_FreeRTOS_Interface_EMW3166_RESOURCES        := 
WICED_FreeRTOS_Interface_RESOURCES        := 
WWD_LwIP_Interface_FreeRTOS_RESOURCES        := 
WICED_LwIP_Interface_RESOURCES        := 
WWD_for_SDIO_FreeRTOS_RESOURCES        := resources/firmware/43362/43362A2.bin
Supplicant_BESL_RESOURCES        := 
Fortuna_PostgreSQL_RESOURCES        := 
Lib_DNS_RESOURCES        := 
Lib_Wiced_RO_FS_RESOURCES        := 
STM32F4xx_RESOURCES        := 
Wiced_Network_LwIP_FreeRTOS_RESOURCES        := 
Lib_DHCP_Server_RESOURCES        := 
Lib_TLV_RESOURCES        := 
Lib_base64_RESOURCES        := 
Lib_Linked_List_RESOURCES        := 
Lib_mbedTLS_RESOURCES        := 
Lib_micro_ecc_RESOURCES        := 
common_GCC_RESOURCES        := 
STM32F4xx_Peripheral_Drivers_RESOURCES        := 
Lib_Ring_Buffer_RESOURCES        := 
Lib_crc_RESOURCES        := 
STM32F4xx_Peripheral_Libraries_RESOURCES        := 
App_tcp_client_secure_MAKEFILE         := ./apps/snip/tcp_client_secure/tcp_client_secure.mk
Platform_EMW3166_MAKEFILE         := ./platforms/EMW3166/EMW3166.mk
FreeRTOS_MAKEFILE         := ./WICED/RTOS/FreeRTOS/FreeRTOS.mk
LwIP_MAKEFILE         := ./WICED/network/LwIP/LwIP.mk
WICED_MAKEFILE         := ././WICED/WICED.mk
Lib_SPI_Flash_Library_EMW3166_MAKEFILE         := ./libraries/drivers/spi_flash/spi_flash.mk
WWD_FreeRTOS_Interface_EMW3166_MAKEFILE         := ././WICED/RTOS/FreeRTOS/WWD/WWD.mk
WICED_FreeRTOS_Interface_MAKEFILE         := ././WICED/RTOS/FreeRTOS/WICED/WICED.mk
WWD_LwIP_Interface_FreeRTOS_MAKEFILE         := ././WICED/network/LwIP/WWD/WWD.mk
WICED_LwIP_Interface_MAKEFILE         := ././WICED/network/LwIP/WICED/WICED.mk
WWD_for_SDIO_FreeRTOS_MAKEFILE         := ././WICED/WWD/WWD.mk
Supplicant_BESL_MAKEFILE         := ././WICED/security/BESL/BESL.mk
Fortuna_PostgreSQL_MAKEFILE         := ././WICED/security/PostgreSQL/PostgreSQL.mk
Lib_DNS_MAKEFILE         := ./libraries/protocols/DNS/DNS.mk
Lib_Wiced_RO_FS_MAKEFILE         := ./libraries/filesystems/wicedfs/wicedfs.mk
STM32F4xx_MAKEFILE         := ././WICED/platform/MCU/STM32F4xx/STM32F4xx.mk
Wiced_Network_LwIP_FreeRTOS_MAKEFILE         := ././WICED/network/LwIP/WWD/FreeRTOS/FreeRTOS.mk
Lib_DHCP_Server_MAKEFILE         := ./libraries/daemons/DHCP_server/DHCP_server.mk
Lib_TLV_MAKEFILE         := ./libraries/utilities/TLV/TLV.mk
Lib_base64_MAKEFILE         := ./libraries/utilities/base64/base64.mk
Lib_Linked_List_MAKEFILE         := ./libraries/utilities/linked_list/linked_list.mk
Lib_mbedTLS_MAKEFILE         := ./WICED/security/BESL/mbedtls_open/mbedtls_open.mk
Lib_micro_ecc_MAKEFILE         := ./WICED/security/BESL/crypto_internal/micro-ecc/micro-ecc.mk
common_GCC_MAKEFILE         := ./WICED/platform/GCC/GCC.mk
STM32F4xx_Peripheral_Drivers_MAKEFILE         := ./WICED/platform/MCU/STM32F4xx/peripherals/peripherals.mk
Lib_Ring_Buffer_MAKEFILE         := ./libraries/utilities/ring_buffer/ring_buffer.mk
Lib_crc_MAKEFILE         := ./libraries/utilities/crc/crc.mk
STM32F4xx_Peripheral_Libraries_MAKEFILE         := ./WICED/platform/MCU/STM32F4xx/peripherals/libraries/libraries.mk
App_tcp_client_secure_PRE_BUILD_TARGETS:= 
Platform_EMW3166_PRE_BUILD_TARGETS:= 
FreeRTOS_PRE_BUILD_TARGETS:= 
LwIP_PRE_BUILD_TARGETS:= 
WICED_PRE_BUILD_TARGETS:= 
Lib_SPI_Flash_Library_EMW3166_PRE_BUILD_TARGETS:= 
WWD_FreeRTOS_Interface_EMW3166_PRE_BUILD_TARGETS:= 
WICED_FreeRTOS_Interface_PRE_BUILD_TARGETS:= 
WWD_LwIP_Interface_FreeRTOS_PRE_BUILD_TARGETS:= 
WICED_LwIP_Interface_PRE_BUILD_TARGETS:= 
WWD_for_SDIO_FreeRTOS_PRE_BUILD_TARGETS:= 
Supplicant_BESL_PRE_BUILD_TARGETS:= 
Fortuna_PostgreSQL_PRE_BUILD_TARGETS:= 
Lib_DNS_PRE_BUILD_TARGETS:= 
Lib_Wiced_RO_FS_PRE_BUILD_TARGETS:= 
STM32F4xx_PRE_BUILD_TARGETS:= 
Wiced_Network_LwIP_FreeRTOS_PRE_BUILD_TARGETS:= 
Lib_DHCP_Server_PRE_BUILD_TARGETS:= 
Lib_TLV_PRE_BUILD_TARGETS:= 
Lib_base64_PRE_BUILD_TARGETS:= 
Lib_Linked_List_PRE_BUILD_TARGETS:= 
Lib_mbedTLS_PRE_BUILD_TARGETS:= 
Lib_micro_ecc_PRE_BUILD_TARGETS:= 
common_GCC_PRE_BUILD_TARGETS:= 
STM32F4xx_Peripheral_Drivers_PRE_BUILD_TARGETS:= 
Lib_Ring_Buffer_PRE_BUILD_TARGETS:= 
Lib_crc_PRE_BUILD_TARGETS:= 
STM32F4xx_Peripheral_Libraries_PRE_BUILD_TARGETS:= 
App_tcp_client_secure_PREBUILT_LIBRARY := ./apps/snip/tcp_client_secure/libraries/PDM/libPDMFilter_CM4_GCC.a ./apps/snip/tcp_client_secure/libraries/SVC/lib_svc_m4.a
Platform_EMW3166_PREBUILT_LIBRARY := 
FreeRTOS_PREBUILT_LIBRARY := 
LwIP_PREBUILT_LIBRARY := 
WICED_PREBUILT_LIBRARY := 
Lib_SPI_Flash_Library_EMW3166_PREBUILT_LIBRARY := 
WWD_FreeRTOS_Interface_EMW3166_PREBUILT_LIBRARY := 
WICED_FreeRTOS_Interface_PREBUILT_LIBRARY := 
WWD_LwIP_Interface_FreeRTOS_PREBUILT_LIBRARY := 
WICED_LwIP_Interface_PREBUILT_LIBRARY := 
WWD_for_SDIO_FreeRTOS_PREBUILT_LIBRARY := 
Supplicant_BESL_PREBUILT_LIBRARY := ././WICED/security/BESL/BESL_generic.ARM_CM4.release.a
Fortuna_PostgreSQL_PREBUILT_LIBRARY := ././WICED/security/PostgreSQL/PostgreSQL.ARM_CM4.release.a
Lib_DNS_PREBUILT_LIBRARY := 
Lib_Wiced_RO_FS_PREBUILT_LIBRARY := 
STM32F4xx_PREBUILT_LIBRARY := 
Wiced_Network_LwIP_FreeRTOS_PREBUILT_LIBRARY := 
Lib_DHCP_Server_PREBUILT_LIBRARY := 
Lib_TLV_PREBUILT_LIBRARY := 
Lib_base64_PREBUILT_LIBRARY := 
Lib_Linked_List_PREBUILT_LIBRARY := 
Lib_mbedTLS_PREBUILT_LIBRARY := 
Lib_micro_ecc_PREBUILT_LIBRARY := 
common_GCC_PREBUILT_LIBRARY := 
STM32F4xx_Peripheral_Drivers_PREBUILT_LIBRARY := 
Lib_Ring_Buffer_PREBUILT_LIBRARY := 
Lib_crc_PREBUILT_LIBRARY := 
STM32F4xx_Peripheral_Libraries_PREBUILT_LIBRARY := 
App_tcp_client_secure_BUILD_TYPE       := release
Platform_EMW3166_BUILD_TYPE       := release
FreeRTOS_BUILD_TYPE       := release
LwIP_BUILD_TYPE       := release
WICED_BUILD_TYPE       := release
Lib_SPI_Flash_Library_EMW3166_BUILD_TYPE       := release
WWD_FreeRTOS_Interface_EMW3166_BUILD_TYPE       := release
WICED_FreeRTOS_Interface_BUILD_TYPE       := release
WWD_LwIP_Interface_FreeRTOS_BUILD_TYPE       := release
WICED_LwIP_Interface_BUILD_TYPE       := release
WWD_for_SDIO_FreeRTOS_BUILD_TYPE       := release
Supplicant_BESL_BUILD_TYPE       := release
Fortuna_PostgreSQL_BUILD_TYPE       := release
Lib_DNS_BUILD_TYPE       := release
Lib_Wiced_RO_FS_BUILD_TYPE       := release
STM32F4xx_BUILD_TYPE       := release
Wiced_Network_LwIP_FreeRTOS_BUILD_TYPE       := release
Lib_DHCP_Server_BUILD_TYPE       := release
Lib_TLV_BUILD_TYPE       := release
Lib_base64_BUILD_TYPE       := release
Lib_Linked_List_BUILD_TYPE       := release
Lib_mbedTLS_BUILD_TYPE       := release
Lib_micro_ecc_BUILD_TYPE       := release
common_GCC_BUILD_TYPE       := release
STM32F4xx_Peripheral_Drivers_BUILD_TYPE       := release
Lib_Ring_Buffer_BUILD_TYPE       := release
Lib_crc_BUILD_TYPE       := release
STM32F4xx_Peripheral_Libraries_BUILD_TYPE       := release
BOARD_REVISION   := 
WICED_SDK_UNIT_TEST_SOURCES   :=          ././WICED/internal/unit/wiced_unit.cpp                    ./libraries/filesystems/wicedfs/src/unit/wicedfs_unit_images.c ./libraries/filesystems/wicedfs/src/unit/wicedfs_unit.cpp      ./libraries/daemons/DHCP_server/unit/dhcp_server_unit.cpp ./libraries/daemons/DHCP_server/unit/dhcp_server_test_content.c                    
APP_WWD_ONLY              := 
USES_BOOTLOADER_OTA       := 1
NODCT                     := 
ALL_RESOURCES             :=  resources/firmware/43362/43362A2.bin
RESOURCES_LOCATION        := 
INTERNAL_MEMORY_RESOURCES :=  resources/firmware/43362/43362A2.bin
EXTRA_TARGET_MAKEFILES :=    ./tools/makefiles/standard_platform_targets.mk
EXTRA_PLATFORM_MAKEFILES := 
APPS_LUT_HEADER_LOC := 0x0000
APPS_START_SECTOR := 1 
FR_APP := 
OTA2_FAILSAFE_APP := 
OTA_APP := 
DCT_IMAGE := 
FILESYSTEM_IMAGE :=  
WIFI_FIRMWARE :=  
APP0 :=  
APP1 :=  
APP2 :=  
FR_APP_SECURE := 
OTA_APP_SECURE := 
FAILSAFE_APP_SECURE := 
WICED_ROM_SYMBOL_LIST_FILE := 
WICED_SDK_CHIP_SPECIFIC_SCRIPT :=                            
WICED_SDK_CONVERTER_OUTPUT_FILE :=                            
WICED_SDK_FINAL_OUTPUT_FILE :=                            
WICED_RAM_STUB_LIST_FILE := 
DCT_IMAGE_SECURE := 
FILESYSTEM_IMAGE_SECURE := 
WIFI_FIRMWARE_SECURE := 
APP0_SECURE := 
APP1_SECURE := 
APP2_SECURE := 
