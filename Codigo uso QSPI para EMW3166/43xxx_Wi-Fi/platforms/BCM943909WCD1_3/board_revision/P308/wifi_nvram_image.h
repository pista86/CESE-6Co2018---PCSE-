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

#ifndef INCLUDED_NVRAM_IMAGE_H_
#define INCLUDED_NVRAM_IMAGE_H_

#include <string.h>
#include <stdint.h>
#include "../generated_mac_address.txt"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Character array of NVRAM image
 * Generated from bcm943909wcd1_p308_dvt.txt
 */

static const char wifi_nvram_image[] =
        "sromrev=11"                                                         "\x00"
        "vendid=0x14e4"                                                      "\x00"
        "devid=0x43d0"                                                       "\x00"
        NVRAM_GENERATED_MAC_ADDRESS                                          "\x00"
        "nocrc=1"                                                            "\x00"
        "boardtype=0x0755"                                                   "\x00"
        "boardrev=0x1308"                                                    "\x00"
        "xtalfreq=37400"                                                     "\x00"
        "boardflags=0xa00"                                                   "\x00"
        "boardflags2=0x40002000"                                             "\x00"
        "boardflags3=0x08100100"                                             "\x00"
        "rxgains2gelnagaina0=0"                                              "\x00"
        "rxgains2gtrisoa0=0"                                                 "\x00"
        "rxgains2gtrelnabypa0=0"                                             "\x00"
        "rxgains5gelnagaina0=0"                                              "\x00"
        "rxgains5gtrisoa0=0"                                                 "\x00"
        "rxgains5gtrelnabypa0=0"                                             "\x00"
        "pdgain5g=5"                                                         "\x00"
        "pdgain2g=5"                                                         "\x00"
        "rxchain=1"                                                          "\x00"
        "txchain=1"                                                          "\x00"
        "aa2g=3"                                                             "\x00"
        "aa5g=3"                                                             "\x00"
        "swdiv_en=1"                                                         "\x00"
        "swdiv_gpio=0"                                                       "\x00"
        "swdiv_swctrl_en=2"                                                  "\x00"
        "swdiv_swctrl_ant0=0"                                                "\x00"
        "swdiv_swctrl_ant1=1"                                                "\x00"
        "tssipos5g=1"                                                        "\x00"
        "tssipos2g=1"                                                        "\x00"
        "femctrl=0"                                                          "\x00"
        "pa2ga0=-145,6074,-668"                                              "\x00"
        "pa2ga1=-133,4159,-549"                                              "\x00"
        "pa5ga0=-144,5963,-675,-145,5861,-670,-146,5940,-669,-147,5867,-663" "\x00"
        "pa5ga1=-142,3863,-536,-132,4076,-555,-144,3885,-530,-149,3915,-530" "\x00"
        "pdoffset2g40ma0=0x8"                                                "\x00"
        "pdoffset40ma0=0xa988"                                               "\x00"
        "pdoffset80ma0=0x998a"                                               "\x00"
        "extpagain5g=2"                                                      "\x00"
        "extpagain2g=2"                                                      "\x00"
        "maxp2ga0=0x48"                                                      "\x00"
        "maxp5ga0=0x48,0x48,0x48,0x48"                                       "\x00"
        "cckbw202gpo=0"                                                      "\x00"
        "cckbw20ul2gpo=0"                                                    "\x00"
        "mcsbw202gpo=0x03000000"                                             "\x00"
        "mcsbw402gpo=0x90200000"                                             "\x00"
        "mcsbw205glpo=0x0c860200"                                            "\x00"
        "mcsbw405glpo=0xc0800400"                                            "\x00"
        "mcsbw805glpo=0xc0800400"                                            "\x00"
        "mcsbw205gmpo=0x0c860200"                                            "\x00"
        "mcsbw405gmpo=0xc0800400"                                            "\x00"
        "mcsbw805gmpo=0xc0800400"                                            "\x00"
        "mcsbw205ghpo=0x0c860200"                                            "\x00"
        "mcsbw405ghpo=0xc0800400"                                            "\x00"
        "mcsbw805ghpo=0xc0800400"                                            "\x00"
        "dot11agofdmhrbw202gpo=0x4321"                                       "\x00"
        "ofdmlrbw202gpo=0x0011"                                              "\x00"
        "swctrlmap_2g=0x00002111,0x00002212,0x00002212,0x000000,0x0ff"       "\x00"
        "swctrlmap_5g=0x00002414,0x00002818,0x00002818,0x000000,0x0ff"       "\x00"
        "swctrlmapext_5g=0x00000000,0x00000000,0x00000000,0x000000,0x000"    "\x00"
        "swctrlmapext_2g=0x00000000,0x00000000,0x00000000,0x000000,0x000"    "\x00"
        "itrsw=1"                                                            "\x00"
        "rssi_delta_5gh=2,2,2,2,-6,-6,-6,-6,2,2,2,2"                         "\x00"
        "rssi_delta_5gmu=2,2,2,2,-6,-6,-6,-6,2,2,2,2"                        "\x00"
        "rssi_delta_5gml=2,2,2,2,-6,-6,-6,-6,2,2,2,2"                        "\x00"
        "rssi_delta_5gl=2,2,2,2,-6,-6,-6,-6,2,2,2,2"                         "\x00"
        "rssi_delta_2gb0=-8,0,0,0,-12,0,0,0"                                 "\x00"
        "rssi_delta_2gb1=0,0,0,0,0,0,0,0"                                    "\x00"
        "rssi_delta_2gb2=0,0,0,0,0,0,0,0"                                    "\x00"
        "rssi_delta_2gb3=0,0,0,0,0,0,0,0"                                    "\x00"
        "rssi_delta_2gb4=0,0,0,0,0,0,0,0"                                    "\x00"
        "rssi_cal_freq_grp_2g=0x0,0x00,0x00,0x08,0x00,0x00,0x00"             "\x00"
        "rssi_cal_rev=1"                                                     "\x00"
        "rxgaincal_rssical=1"                                                "\x00"
        "rssi_qdB_en=1"                                                      "\x00"
        "fdss_level_2g=2,-1"                                                 "\x00"
        "fdss_level_5g=2,-1"                                                 "\x00"
        "tworangetssi2g=1"                                                   "\x00"
        "tworangetssi5g=1"                                                   "\x00"
        "phycal_tempdelta=20"                                                "\x00"
        "cal_period=0"                                                       "\x00"
        "temp_based_dutycy_en=1"                                             "\x00"
        "tx_duty_cycle_ofdm=100"                                             "\x00"
        "tx_duty_cycle_cck=100"                                              "\x00"
        "tx_ofdm_temp_0=115"                                                 "\x00"
        "tx_cck_temp_0=115"                                                  "\x00"
        "tx_ofdm_dutycy_0=40"                                                "\x00"
        "tx_cck_dutycy_0=40"                                                 "\x00"
        "tx_ofdm_temp_1=255"                                                 "\x00"
        "tx_cck_temp_1=255"                                                  "\x00"
        "tx_ofdm_dutycy_1=40"                                                "\x00"
        "tx_cck_dutycy_1=40"                                                 "\x00"
        "\x00\x00";
#ifdef __cplusplus
} /*extern "C" */
#endif

#else /* ifndef INCLUDED_NVRAM_IMAGE_H_ */

#error Wi-Fi NVRAM image included twice

#endif /* ifndef INCLUDED_NVRAM_IMAGE_H_ */
