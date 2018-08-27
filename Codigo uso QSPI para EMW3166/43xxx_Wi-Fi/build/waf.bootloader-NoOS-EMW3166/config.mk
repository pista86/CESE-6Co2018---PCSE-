WICED_SDK_MAKEFILES           += ./WICED/platform/MCU/STM32F4xx/peripherals/libraries/libraries.mk ./libraries/utilities/ring_buffer/ring_buffer.mk ./WICED/platform/MCU/STM32F4xx/peripherals/peripherals.mk ./WICED/platform/GCC/GCC.mk ././WICED/platform/MCU/STM32F4xx/STM32F4xx.mk ./libraries/drivers/spi_flash/spi_flash.mk ././WICED/RTOS/NoOS/WWD/WWD.mk ./libraries/utilities/crc/crc.mk ./libraries/filesystems/wicedfs/wicedfs.mk ././WICED/WICED.mk ./platforms/EMW3166/EMW3166.mk ./WICED/RTOS/NoOS/NoOS.mk ./apps/waf/bootloader/bootloader.mk
TOOLCHAIN_NAME                := GCC
JTAG                          := CYW9WCD1EVAL1
WICED_SDK_LDFLAGS             += -Wl,--gc-sections -Wl,-Os -Wl,--cref -mthumb -mcpu=cortex-m4 -Wl,-A,thumb -Wl,-z,max-page-size=0x10 -Wl,-z,common-page-size=0x10 -mlittle-endian -nostartfiles -Wl,--defsym,__STACKSIZE__=8000 -L ./WICED/platform/MCU/STM32F4xx/GCC -L ./WICED/platform/MCU/STM32F4xx/GCC/STM32F412
RESOURCE_CFLAGS               += -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\" -mthumb -mcpu=cortex-m4 -mlittle-endian
RESOURCE_CXXFLAGS             += -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\" -mthumb -mcpu=cortex-m4 -mlittle-endian
WICED_SDK_LINK_SCRIPT         += ././WICED/platform/MCU/STM32F4xx/GCC/bootloader.ld
WICED_SDK_LINK_SCRIPT_CMD     += -Wl,-T ././WICED/platform/MCU/STM32F4xx/GCC/bootloader.ld
WICED_SDK_PREBUILT_LIBRARIES  += 
WICED_SDK_CERTIFICATES        += 
WICED_SDK_PRE_APP_BUILDS      += 
WICED_SDK_DCT_LINK_SCRIPT     += ././WICED/platform/MCU/STM32F4xx/GCC/STM32F412/dct.ld
WICED_SDK_DCT_LINK_CMD        += -Wl,-T ././WICED/platform/MCU/STM32F4xx/GCC/STM32F412/dct.ld
WICED_SDK_APPLICATION_DCT     += 
WICED_SDK_WIFI_CONFIG_DCT_H   += ./include/default_wifi_config_dct.h
WICED_SDK_BT_CONFIG_DCT_H     += ./include/default_bt_config_dct.h
WICED_SDK_LINK_FILES          +=                  $(OUTPUT_DIR)/Modules/./WICED/platform/MCU/STM32F4xx/../../ARM_CM4/crt0_GCC.o $(OUTPUT_DIR)/Modules/./WICED/platform/MCU/STM32F4xx/../../ARM_CM4/hardfault_handler.o $(OUTPUT_DIR)/Modules/./WICED/platform/MCU/STM32F4xx/platform_vector_table.o  $(OUTPUT_DIR)/Modules/WICED/platform/GCC/mem_newlib.o $(OUTPUT_DIR)/Modules/WICED/platform/GCC/time_newlib.o $(OUTPUT_DIR)/Modules/WICED/platform/GCC/stdio_newlib.o      
WICED_SDK_INCLUDES            +=                                     -I./WICED/platform/MCU/STM32F4xx/peripherals/libraries/. -I./WICED/platform/MCU/STM32F4xx/peripherals/libraries/inc -I./WICED/platform/MCU/STM32F4xx/peripherals/libraries/../../../ARM_CM4/CMSIS -I./libraries/utilities/ring_buffer/. -I./WICED/platform/MCU/STM32F4xx/peripherals/. -I./WICED/platform/GCC/. -I././WICED/platform/MCU/STM32F4xx/. -I././WICED/platform/MCU/STM32F4xx/.. -I././WICED/platform/MCU/STM32F4xx/../.. -I././WICED/platform/MCU/STM32F4xx/../../include -I././WICED/platform/MCU/STM32F4xx/../../ARM_CM4 -I././WICED/platform/MCU/STM32F4xx/../../ARM_CM4/CMSIS -I././WICED/platform/MCU/STM32F4xx/peripherals -I././WICED/platform/MCU/STM32F4xx/WAF -I./libraries/drivers/spi_flash/. -I././WICED/RTOS/NoOS/WWD/. -I././WICED/RTOS/NoOS/WWD/Cortex_M3_M4 -I./libraries/utilities/crc/. -I./libraries/filesystems/wicedfs/src -I././WICED/WWD/include -I././WICED/security/BESL/include -I././WICED/security/BESL/host/WICED -I././WICED/security/BESL/crypto_internal -I././WICED/security/PostgreSQL/include -I././WICED/security/BESL/mbedtls_open/include -I././WICED/. -I././WICED/platform/include -I./platforms/EMW3166/. -I./WICED/RTOS/NoOS/. -I./apps/waf/bootloader/. -I./apps/waf/bootloader/../../../libraries/utilities/linked_list -I./WICED/WWD/internal/chips/43362 -I./libraries -I./include
WICED_SDK_DEFINES             +=                                        -DSFLASH_APPS_HEADER_LOC=0x0000 -DUSE_STDPERIPH_DRIVER -D_STM3x_ -D_STM32x_ -DSTM32F412xG -DPLATFORM_SUPPORTS_LOW_POWER_MODES -DMAX_WATCHDOG_TIMEOUT_SECONDS=22 -DUSING_WICEDFS -DNO_WICED_API -DWWD_STARTUP_DELAY=10 -DBOOTLOADER_MAGIC_NUMBER=0x4d435242 -DWWD_DIRECT_RESOURCES -DHSE_VALUE=26000000 -DCRLF_STDIO_REPLACEMENT -DGPIO_LED_NOT_SUPPORTED -DRTOS_NoOS=1 -DWICED_NO_WIFI -DWICED_DISABLE_STDIO -DWICED_DISABLE_MCU_POWERSAVE -DWICED_DCACHE_WTHROUGH -DNO_WIFI_FIRMWARE -DBOOTLOADER -DDCT_CRC32_CALCULATION_SIZE_ON_STACK=1024 -DWICED_SDK_WIFI_CONFIG_DCT_H=\"./include/default_wifi_config_dct.h\" -DWICED_SDK_BT_CONFIG_DCT_H=\"./include/default_bt_config_dct.h\"
COMPONENTS                := App_WICED_Bootloader_EMW3166 NoOS Platform_EMW3166 WICED Lib_Wiced_RO_FS Lib_crc WWD_NoOS_Interface Lib_SPI_Flash_Library_EMW3166 STM32F4xx common_GCC STM32F4xx_Peripheral_Drivers Lib_Ring_Buffer STM32F4xx_Peripheral_Libraries
BUS                       := SDIO
IMAGE_TYPE                := ram
NETWORK_FULL              := 
RTOS_FULL                 := NoOS
PLATFORM_DIRECTORY        := EMW3166
APP_FULL                  := waf/bootloader
NETWORK                   := 
RTOS                      := NoOS
PLATFORM                  := EMW3166
APPS_CHIP_REVISION        := 
USB                       := 
APP                       := bootloader
HOST_OPENOCD              := stm32f4x
HOST_ARCH                 := ARM_CM4
WICED_SDK_CERTIFICATE         := 
WICED_SDK_PRIVATE_KEY         := 
NO_BUILD_BOOTLOADER           := 
NO_BOOTLOADER_REQUIRED        := 
COMPILER_SPECIFIC_SYSTEM_DIR  := -isystem ./tools/ARM_GNU/Linux64/bin/../../include -isystem ./tools/ARM_GNU/Linux64/bin/../../lib/include -isystem ./tools/ARM_GNU/Linux64/bin/../../lib/include-fixed
BOARD_SPECIFIC_OPENOCD_SCRIPT := 
App_WICED_Bootloader_EMW3166_LOCATION         := ./apps/waf/bootloader/
NoOS_LOCATION         := ./WICED/RTOS/NoOS/
Platform_EMW3166_LOCATION         := ./platforms/EMW3166/
WICED_LOCATION         := ././WICED/
Lib_Wiced_RO_FS_LOCATION         := ./libraries/filesystems/wicedfs/
Lib_crc_LOCATION         := ./libraries/utilities/crc/
WWD_NoOS_Interface_LOCATION         := ././WICED/RTOS/NoOS/WWD/
Lib_SPI_Flash_Library_EMW3166_LOCATION         := ./libraries/drivers/spi_flash/
STM32F4xx_LOCATION         := ././WICED/platform/MCU/STM32F4xx/
common_GCC_LOCATION         := ./WICED/platform/GCC/
STM32F4xx_Peripheral_Drivers_LOCATION         := ./WICED/platform/MCU/STM32F4xx/peripherals/
Lib_Ring_Buffer_LOCATION         := ./libraries/utilities/ring_buffer/
STM32F4xx_Peripheral_Libraries_LOCATION         := ./WICED/platform/MCU/STM32F4xx/peripherals/libraries/
App_WICED_Bootloader_EMW3166_SOURCES          += bootloader.c
NoOS_SOURCES          += 
Platform_EMW3166_SOURCES          += platform.c
WICED_SOURCES          += internal/wiced_core.c internal/wiced_low_power.c
Lib_Wiced_RO_FS_SOURCES          += src/wicedfs.c wicedfs_drivers.c
Lib_crc_SOURCES          += crc.c
WWD_NoOS_Interface_SOURCES          += wwd_rtos.c Cortex_M3_M4/noos.c
Lib_SPI_Flash_Library_EMW3166_SOURCES          += spi_flash.c spi_flash_wiced.c
STM32F4xx_SOURCES          += ../../ARM_CM4/crt0_GCC.c ../../ARM_CM4/hardfault_handler.c ../../ARM_CM4/host_cm4.c ../platform_resource.c ../platform_stdio.c ../wiced_platform_common.c ../wwd_platform_separate_mcu.c ../wwd_resources.c ../wiced_apps_common.c ../wiced_waf_common.c ../platform_nsclock.c platform_vector_table.c platform_init.c platform_unhandled_isr.c platform_filesystem.c WAF/waf_platform.c  ../wiced_dct_internal_common.c ../wiced_dct_update.c
common_GCC_SOURCES          +=  mem_newlib.c time_newlib.c math_newlib.c cxx_funcs.c stdio_newlib.c
STM32F4xx_Peripheral_Drivers_SOURCES          += platform_adc.c platform_gpio.c platform_i2c.c platform_mcu_powersave.c platform_pwm.c platform_rtc.c platform_spi.c logan_audio_in_i2s.c logan_audio_out_i2s.c logan_MAX98357A.c logan_i2s.c logan_qspi.c platform_uart.c platform_watchdog.c platform_ext_memory.c platform_audio_timer.c platform_gspi_master.c
Lib_Ring_Buffer_SOURCES          += ring_buffer.c
STM32F4xx_Peripheral_Libraries_SOURCES          += src/misc.c src/stm32f4xx_adc.c src/stm32f4xx_can.c src/stm32f4xx_crc.c src/stm32f4xx_dac.c src/stm32f4xx_dbgmcu.c src/stm32f4xx_dma.c src/stm32f4xx_exti.c src/stm32f4xx_flash.c src/stm32f4xx_gpio.c src/stm32f4xx_rng.c src/stm32f4xx_i2c.c src/stm32f4xx_iwdg.c src/stm32f4xx_pwr.c src/stm32f4xx_rcc.c src/stm32f4xx_rtc.c src/stm32f4xx_sdio.c src/stm32f4xx_spi.c src/stm32f4xx_qspi.c src/stm32f4xx_syscfg.c src/stm32f4xx_tim.c src/stm32f4xx_usart.c src/stm32f4xx_wwdg.c
App_WICED_Bootloader_EMW3166_CHECK_HEADERS    += 
NoOS_CHECK_HEADERS    += 
Platform_EMW3166_CHECK_HEADERS    += 
WICED_CHECK_HEADERS    += internal/wiced_internal_api.h ../include/default_wifi_config_dct.h ../include/resource.h ../include/wiced.h ../include/wiced_defaults.h ../include/wiced_easy_setup.h ../include/wiced_framework.h ../include/wiced_management.h ../include/wiced_platform.h ../include/wiced_rtos.h ../include/wiced_tcpip.h ../include/wiced_time.h ../include/wiced_utilities.h ../include/wiced_crypto.h ../include/wiced_wifi.h ../include/wiced_wifi_deep_sleep.h
Lib_Wiced_RO_FS_CHECK_HEADERS    += 
Lib_crc_CHECK_HEADERS    += 
WWD_NoOS_Interface_CHECK_HEADERS    += wwd_rtos.h
Lib_SPI_Flash_Library_EMW3166_CHECK_HEADERS    += 
STM32F4xx_CHECK_HEADERS    += 
common_GCC_CHECK_HEADERS    += 
STM32F4xx_Peripheral_Drivers_CHECK_HEADERS    += 
Lib_Ring_Buffer_CHECK_HEADERS    += 
STM32F4xx_Peripheral_Libraries_CHECK_HEADERS    += 
App_WICED_Bootloader_EMW3166_INCLUDES         := 
NoOS_INCLUDES         := 
Platform_EMW3166_INCLUDES         := 
WICED_INCLUDES         := 
Lib_Wiced_RO_FS_INCLUDES         := 
Lib_crc_INCLUDES         := 
WWD_NoOS_Interface_INCLUDES         := 
Lib_SPI_Flash_Library_EMW3166_INCLUDES         := 
STM32F4xx_INCLUDES         := 
common_GCC_INCLUDES         := 
STM32F4xx_Peripheral_Drivers_INCLUDES         := 
Lib_Ring_Buffer_INCLUDES         := 
STM32F4xx_Peripheral_Libraries_INCLUDES         := 
App_WICED_Bootloader_EMW3166_DEFINES          := 
NoOS_DEFINES          := 
Platform_EMW3166_DEFINES          := 
WICED_DEFINES          := 
Lib_Wiced_RO_FS_DEFINES          := 
Lib_crc_DEFINES          := 
WWD_NoOS_Interface_DEFINES          := 
Lib_SPI_Flash_Library_EMW3166_DEFINES          := -DSFLASH_SUPPORT_SST_PARTS -DSFLASH_SUPPORT_MACRONIX_PARTS -DSFLASH_SUPPORT_EON_PARTS -DSFLASH_SUPPORT_MICRON_PARTS
STM32F4xx_DEFINES          := 
common_GCC_DEFINES          := 
STM32F4xx_Peripheral_Drivers_DEFINES          := 
Lib_Ring_Buffer_DEFINES          := 
STM32F4xx_Peripheral_Libraries_DEFINES          := 
App_WICED_Bootloader_EMW3166_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         
NoOS_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         
Platform_EMW3166_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         
WICED_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
Lib_Wiced_RO_FS_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
Lib_crc_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         
WWD_NoOS_Interface_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
Lib_SPI_Flash_Library_EMW3166_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
STM32F4xx_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         -Wall -fsigned-char -ffunction-sections -fdata-sections -fno-common -std=gnu11  -Werror -Wstrict-prototypes  -W -Wshadow  -Wwrite-strings -pedantic -std=c11 -U__STRICT_ANSI__ -Wconversion -Wextra -Wdeclaration-after-statement -Wconversion -Waddress -Wlogical-op -Wstrict-prototypes -Wold-style-definition -Wmissing-prototypes -Wmissing-declarations -Wmissing-field-initializers -Wdouble-promotion -Wswitch-enum -Wswitch-default -Wuninitialized -Wunknown-pragmas -Wfloat-equal  -Wundef  -Wshadow 
common_GCC_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         
STM32F4xx_Peripheral_Drivers_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         
Lib_Ring_Buffer_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         
STM32F4xx_Peripheral_Libraries_CFLAGS           := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4    -mlittle-endian         
App_WICED_Bootloader_EMW3166_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
NoOS_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
Platform_EMW3166_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
WICED_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
Lib_Wiced_RO_FS_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
Lib_crc_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
WWD_NoOS_Interface_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
Lib_SPI_Flash_Library_EMW3166_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
STM32F4xx_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
common_GCC_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
STM32F4xx_Peripheral_Drivers_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
Lib_Ring_Buffer_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
STM32F4xx_Peripheral_Libraries_CXXFLAGS         := -DWICED_VERSION=\"Wiced_006.002.001.0002\" -DBUS=\"$(BUS)\" -Ibuild/waf.bootloader-NoOS-EMW3166/resources/ -DPLATFORM=\"$(PLATFORM)\" -DAPPS_CHIP_REVISION=\"$(APPS_CHIP_REVISION)\"     -mthumb -mcpu=cortex-m4   -mlittle-endian         
App_WICED_Bootloader_EMW3166_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
NoOS_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
Platform_EMW3166_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
WICED_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
Lib_Wiced_RO_FS_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
Lib_crc_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
WWD_NoOS_Interface_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
Lib_SPI_Flash_Library_EMW3166_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
STM32F4xx_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
common_GCC_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
STM32F4xx_Peripheral_Drivers_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
Lib_Ring_Buffer_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
STM32F4xx_Peripheral_Libraries_ASMFLAGS         :=     -mcpu=cortex-m4 -mfpu=softvfp  -mlittle-endian         
App_WICED_Bootloader_EMW3166_RESOURCES        := 
NoOS_RESOURCES        := 
Platform_EMW3166_RESOURCES        := 
WICED_RESOURCES        := 
Lib_Wiced_RO_FS_RESOURCES        := 
Lib_crc_RESOURCES        := 
WWD_NoOS_Interface_RESOURCES        := 
Lib_SPI_Flash_Library_EMW3166_RESOURCES        := 
STM32F4xx_RESOURCES        := 
common_GCC_RESOURCES        := 
STM32F4xx_Peripheral_Drivers_RESOURCES        := 
Lib_Ring_Buffer_RESOURCES        := 
STM32F4xx_Peripheral_Libraries_RESOURCES        := 
App_WICED_Bootloader_EMW3166_MAKEFILE         := ./apps/waf/bootloader/bootloader.mk
NoOS_MAKEFILE         := ./WICED/RTOS/NoOS/NoOS.mk
Platform_EMW3166_MAKEFILE         := ./platforms/EMW3166/EMW3166.mk
WICED_MAKEFILE         := ././WICED/WICED.mk
Lib_Wiced_RO_FS_MAKEFILE         := ./libraries/filesystems/wicedfs/wicedfs.mk
Lib_crc_MAKEFILE         := ./libraries/utilities/crc/crc.mk
WWD_NoOS_Interface_MAKEFILE         := ././WICED/RTOS/NoOS/WWD/WWD.mk
Lib_SPI_Flash_Library_EMW3166_MAKEFILE         := ./libraries/drivers/spi_flash/spi_flash.mk
STM32F4xx_MAKEFILE         := ././WICED/platform/MCU/STM32F4xx/STM32F4xx.mk
common_GCC_MAKEFILE         := ./WICED/platform/GCC/GCC.mk
STM32F4xx_Peripheral_Drivers_MAKEFILE         := ./WICED/platform/MCU/STM32F4xx/peripherals/peripherals.mk
Lib_Ring_Buffer_MAKEFILE         := ./libraries/utilities/ring_buffer/ring_buffer.mk
STM32F4xx_Peripheral_Libraries_MAKEFILE         := ./WICED/platform/MCU/STM32F4xx/peripherals/libraries/libraries.mk
App_WICED_Bootloader_EMW3166_PRE_BUILD_TARGETS:= 
NoOS_PRE_BUILD_TARGETS:= 
Platform_EMW3166_PRE_BUILD_TARGETS:= 
WICED_PRE_BUILD_TARGETS:= 
Lib_Wiced_RO_FS_PRE_BUILD_TARGETS:= 
Lib_crc_PRE_BUILD_TARGETS:= 
WWD_NoOS_Interface_PRE_BUILD_TARGETS:= 
Lib_SPI_Flash_Library_EMW3166_PRE_BUILD_TARGETS:= 
STM32F4xx_PRE_BUILD_TARGETS:= 
common_GCC_PRE_BUILD_TARGETS:= 
STM32F4xx_Peripheral_Drivers_PRE_BUILD_TARGETS:= 
Lib_Ring_Buffer_PRE_BUILD_TARGETS:= 
STM32F4xx_Peripheral_Libraries_PRE_BUILD_TARGETS:= 
App_WICED_Bootloader_EMW3166_PREBUILT_LIBRARY := 
NoOS_PREBUILT_LIBRARY := 
Platform_EMW3166_PREBUILT_LIBRARY := 
WICED_PREBUILT_LIBRARY := 
Lib_Wiced_RO_FS_PREBUILT_LIBRARY := 
Lib_crc_PREBUILT_LIBRARY := 
WWD_NoOS_Interface_PREBUILT_LIBRARY := 
Lib_SPI_Flash_Library_EMW3166_PREBUILT_LIBRARY := 
STM32F4xx_PREBUILT_LIBRARY := 
common_GCC_PREBUILT_LIBRARY := 
STM32F4xx_Peripheral_Drivers_PREBUILT_LIBRARY := 
Lib_Ring_Buffer_PREBUILT_LIBRARY := 
STM32F4xx_Peripheral_Libraries_PREBUILT_LIBRARY := 
App_WICED_Bootloader_EMW3166_BUILD_TYPE       := release
NoOS_BUILD_TYPE       := release
Platform_EMW3166_BUILD_TYPE       := release
WICED_BUILD_TYPE       := release
Lib_Wiced_RO_FS_BUILD_TYPE       := release
Lib_crc_BUILD_TYPE       := release
WWD_NoOS_Interface_BUILD_TYPE       := release
Lib_SPI_Flash_Library_EMW3166_BUILD_TYPE       := release
STM32F4xx_BUILD_TYPE       := release
common_GCC_BUILD_TYPE       := release
STM32F4xx_Peripheral_Drivers_BUILD_TYPE       := release
Lib_Ring_Buffer_BUILD_TYPE       := release
STM32F4xx_Peripheral_Libraries_BUILD_TYPE       := release
BOARD_REVISION   := 
WICED_SDK_UNIT_TEST_SOURCES   :=        ././WICED/internal/unit/wiced_unit.cpp  ./libraries/filesystems/wicedfs/src/unit/wicedfs_unit_images.c ./libraries/filesystems/wicedfs/src/unit/wicedfs_unit.cpp                
APP_WWD_ONLY              := 1
USES_BOOTLOADER_OTA       := 1
NODCT                     := 
ALL_RESOURCES             := 
RESOURCES_LOCATION        := 
INTERNAL_MEMORY_RESOURCES := 
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
