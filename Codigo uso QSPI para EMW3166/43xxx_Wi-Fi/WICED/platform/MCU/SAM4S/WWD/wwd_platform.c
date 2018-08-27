/*
 * Copyright 2018, Cypress Semiconductor Corporation or a subsidiary of 
 * Cypress Semiconductor Corporation. All Rights Reserved.
 * 
 * This software, associated documentation and materials ("Software"),
 * is owned by Cypress Semiconductor Corporation
 * or one of its subsidiaries ("Cypress") and is protected by and subject to
 * worldwide patent protection (United States and foreign),
 * United States copyright laws and international treaty provisions.
 * Therefore, you may use this Software only as provided in the license
 * agreement accompanying the software package from which you
 * obtained this Software ("EULA").
 * If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 * non-transferable license to copy, modify, and compile the Software
 * source code solely for use in connection with Cypress's
 * integrated circuit products. Any reproduction, modification, translation,
 * compilation, or representation of this Software except as specified
 * above is prohibited without the express written permission of Cypress.
 *
 * Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 * reserves the right to make changes to the Software without notice. Cypress
 * does not assume any liability arising out of the application or use of the
 * Software or any product or circuit described in the Software. Cypress does
 * not authorize its products for use in any products where a malfunction or
 * failure of the Cypress product may reasonably be expected to result in
 * significant property damage, injury or death ("High Risk Product"). By
 * including Cypress's product in a High Risk Product, the manufacturer
 * of such system or application assumes all risk of such use and in doing
 * so agrees to indemnify Cypress against all liability.
 */

/** @file
 * Defines STM32F2xx-specific WWD platform functions
 */
#include <stdint.h>
#include <string.h>
#include "platform_peripheral.h"
#include "platform_config.h"
#include "wwd_constants.h"
#include "wwd_platform_common.h"
#include "platform/wwd_platform_interface.h"
#include "genclk.h"

/******************************************************
 *                      Macros
 ******************************************************/

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

/******************************************************
 *               Variable Definitions
 ******************************************************/

/******************************************************
 *               Function Definitions
 ******************************************************/

wwd_result_t host_platform_init_wlan_powersave_clock( void )
{
    /* Configure IO port CLKOUT if enabled */
#if defined ( WICED_USE_WIFI_32K_CLOCK_MCO )
    struct genclk_config gcfg;

    /* Since all SCK are currently on Peripheral mode B - hardwire it */
    ioport_set_pin_mode(wifi_control_pins[WWD_PIN_32K_CLK].pin, IOPORT_MODE_MUX_B);
    ioport_disable_pin(wifi_control_pins[WWD_PIN_32K_CLK].pin);
    /* Configure the output clock */
    genclk_config_defaults(&gcfg, MCO_CLK_ID);
    genclk_config_set_source(&gcfg, GENCLK_PCK_SRC_SLCK_XTAL);
    genclk_config_set_divider(&gcfg, GENCLK_PCK_PRES_1);
    genclk_enable(&gcfg, MCO_CLK_ID);
    return WICED_SUCCESS;
#else
    return WICED_UNSUPPORTED;
#endif
}
