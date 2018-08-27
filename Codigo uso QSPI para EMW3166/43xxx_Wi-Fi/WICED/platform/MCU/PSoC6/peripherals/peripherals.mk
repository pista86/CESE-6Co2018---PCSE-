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

NAME = PSoC6_Peripheral_Drivers

GLOBAL_INCLUDES := .

# Include PSoC6 Standard Peripheral Libraries
$(NAME)_COMPONENTS += MCU/PSoC6/peripherals/libraries

# Include CapSense component
$(NAME)_COMPONENTS += MCU/PSoC6/peripherals/CapSense
# Include SMIF and SPI Flash Component
$(NAME)_COMPONENTS += MCU/PSoC6/peripherals/spi_flash

$(NAME)_SOURCES := platform_clock.c \
                   platform_gpio.c \
                   platform_mcu_powersave.c \
                   platform_spi.c \
                   platform_uart.c \
                   platform_pdm_pcm.c \
                   platform_watchdog.c \
                   platform_i2c.c \
                   platform_pwm.c \
                   platform_i2s.c \
                   platform_adc.c \
                   platform_rtc.c
