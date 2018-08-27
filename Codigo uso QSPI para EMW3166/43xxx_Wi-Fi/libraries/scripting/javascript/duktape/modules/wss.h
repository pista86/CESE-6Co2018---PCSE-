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
 *
 */
#pragma once

#include "dpm.h"
#include "websocket.h"
#include "callback_loop.h"

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************
 *                      Macros
 ******************************************************/

/******************************************************
 *                    Constants
 ******************************************************/

/******************************************************
 *                   Enumerations
 ******************************************************/
typedef enum
{
    LWS_WSS_CALLBACK_EVENT_CONNECTION,
    LWS_WSS_CALLBACK_EVENT_MESSAGE,
    LWS_WSS_CALLBACK_EVENT_CLOSE,
    LWS_WSS_CALLBACK_EVENT_ERROR,
} dpm_wss_callback_event_id;

/******************************************************
 *                 Type Definitions
 ******************************************************/
typedef wiced_websocket_t wiced_wss_t;

/******************************************************
 *                    Structures
 ******************************************************/

typedef struct {
    duk_context *ctx;
    wiced_wss_t* wsi;
    void *data;
} wss_handle_t;

/******************************************************
 *               Function Declarations
 ******************************************************/
// javascript interface functions
duk_ret_t dpm_new_wss(duk_context *ctx);
duk_ret_t dpm_wss_start(duk_context *ctx);
duk_ret_t dpm_wss_on_close(duk_context *ctx);
duk_ret_t dpm_wss_on_message(duk_context *ctx);
duk_ret_t dpm_wss_send(duk_context *ctx);
duk_ret_t dpm_wss_close(duk_context *ctx);
duk_ret_t dpm_wss_shutdown(duk_context *ctx);

// callback functions
void websocket_callback_handler(wiced_duktape_callback_queue_element_t *message);

#ifdef __cplusplus
} /* extern "C" */
#endif
