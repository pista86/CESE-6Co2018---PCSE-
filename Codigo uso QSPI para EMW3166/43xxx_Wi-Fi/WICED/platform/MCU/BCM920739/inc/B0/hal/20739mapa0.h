/*
//------------------------------------------------------------------------------------------------------------------------------
// Autocreated by: param2adrmap.pl  \
//  +incdir+/projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/BT_MODEM_NEW/BTRF_control/ver/param  \
//  +incdir+/projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/share/ver/param  \
//  +incdir+/projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/bpl/ver/param  \
//  +incdir+/projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/mac154_top/ver/param  \
//  +incdir+/projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/seceng_top/ver/param  \
//  +incdir+/projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/jtmode/ver/param  \
//  +incdir+/projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/capscan_top/ver/param/  \
//  /projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/share/ver/param/asic_config.v  \
//  /projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/share/ver/param/adrmap.h  \
//  /projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/spiffy/ver/param/spiffy_offset_adrmap.h+spi_base  \
//  /projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/lhl/ver/param/lhl_adrmap.h+lhl_adr_base  \
//  /projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/mia/ver/param/mia_adrmap.h+mia_adr_base  \
//  /projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/dip/spiffy/ver/param/spiffy_offset_adrmap.h=spiffy2_+spiffy2_base \
//  -replace=_offset\b: -replace=spiffy2_spiffy_:spiffy2_ -overwrite -min_address=0x00300000  \
//  -i=^(base_|last_)|(.*_base|base_|Base|stop_adr|_end|_offset)$ -i=(.*regs.*|.*mem.*|.*adr.*)/i  \
//  -i=^(rom_adr_base|ram_adr_base|memory_map_base)$ -e=^(baud|remap|ram|rom|reset|reserved)$  \
//  -e=^(sri_base2|plc_ch_a_base_addr)$  \
//  -outdir=/projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/vip/btfm_core/btfm_top/ver/vtb/test/output
// By: yunlu
// In: /projects/BCM20739_A0_ext1/users/yunlu/bcm20739a0/v_2015_0123_fpga/vip/btfm_core/btfm_top/ver/vtb/test
//------------------------------------------------------------------------------------------------------------------------------
*/
#ifndef REGISTER_H
  #define REGISTER_H

  #define base_code_adr                                  0x00000000                                                  
  #define base_code                                      (*(volatile unsigned int *)base_code_adr)
  #define base_sram_adr                                  0x20000000                                                  
  #define base_sram                                      (*(volatile unsigned int *)base_sram_adr)
  #define base_peripherals_adr                           0x40000000                                                  
  #define base_peripherals                               (*(volatile unsigned int *)base_peripherals_adr)
  #define base_extern_sram_adr                           0x60000000                                                  
  #define base_extern_sram                               (*(volatile unsigned int *)base_extern_sram_adr)
  #define base_extern_device_adr                         0xa0000000                                                  
  #define base_extern_device                             (*(volatile unsigned int *)base_extern_device_adr)
  #define base_ppb_adr                                   0xe0000000                                                  
  #define base_ppb                                       (*(volatile unsigned int *)base_ppb_adr)
  #define base_IntRom_adr                                0x00000000                                                  
  #define base_IntRom                                    (*(volatile unsigned int *)base_IntRom_adr)
  #define last_IntRom_adr                                0x001fffff                                                  
  #define last_IntRom                                    (*(volatile unsigned int *)last_IntRom_adr)
  #define base_IntMemPrc_adr                             0x00270000                                                  
  #define base_IntMemPrc                                 (*(volatile unsigned int *)base_IntMemPrc_adr)
  #define last_IntMemPrc_adr                             0x0027ffff                                                  
  #define last_IntMemPrc                                 (*(volatile unsigned int *)last_IntMemPrc_adr)
  #define base_IntMemCm3_adr                             0x00200000                                                  
  #define base_IntMemCm3                                 (*(volatile unsigned int *)base_IntMemCm3_adr)
  #define last_IntMemCm3_adr                             0x0026ffff                                                  
  #define last_IntMemCm3                                 (*(volatile unsigned int *)last_IntMemCm3_adr)
  #define base_hw_regs_cm3_adr                           0x00300000                                                  
  #define base_hw_regs_cm3                               (*(volatile unsigned int *)base_hw_regs_cm3_adr)
  #define last_hw_regs_cm3_adr                           0x00337fff                                                  
  #define last_hw_regs_cm3                               (*(volatile unsigned int *)last_hw_regs_cm3_adr)
  #define base_rtx_fifo_adr                              0x00370000                                                  
  #define base_rtx_fifo                                  (*(volatile unsigned int *)base_rtx_fifo_adr)
  #define base_rf_regs_adr                               0x00600000                                                  
  #define base_rf_regs                                   (*(volatile unsigned int *)base_rf_regs_adr)
  #define base_clb_regs_adr                              0x00640000                                                  
  #define base_clb_regs                                  (*(volatile unsigned int *)base_clb_regs_adr)
  #define gci_regs_adr_base                              0x00650000                                                  
  #define base_ef_regs_adr                               0x00404000                                                  
  #define base_ef_regs                                   (*(volatile unsigned int *)base_ef_regs_adr)
  #define last_ef_regs_adr                               0x00407fff                                                  
  #define last_ef_regs                                   (*(volatile unsigned int *)last_ef_regs_adr)
  #define base_bt_modem_regs_adr                         0x00410000                                                  
  #define base_bt_modem_regs                             (*(volatile unsigned int *)base_bt_modem_regs_adr)
  #define last_bt_modem_regs_adr                         0x00413fff                                                  
  #define last_bt_modem_regs                             (*(volatile unsigned int *)last_bt_modem_regs_adr)
  #define base_fm_modem_regs_adr                         0x00420000                                                  
  #define base_fm_modem_regs                             (*(volatile unsigned int *)base_fm_modem_regs_adr)
  #define last_fm_modem_regs_adr                         0x00423fff                                                  
  #define last_fm_modem_regs                             (*(volatile unsigned int *)last_fm_modem_regs_adr)
  #define base_mac154_top_adr                            0x00430000                                                  
  #define base_mac154_top                                (*(volatile unsigned int *)base_mac154_top_adr)
  #define last_mac154_top_adr                            0x00433fff                                                  
  #define last_mac154_top                                (*(volatile unsigned int *)last_mac154_top_adr)
  #define base_capscan_top_adr                           0x00450000                                                  
  #define base_capscan_top                               (*(volatile unsigned int *)base_capscan_top_adr)
  #define base_epm_ram_adr                               0x00500000                                                  
  #define base_epm_ram                                   (*(volatile unsigned int *)base_epm_ram_adr)
  #define last_epm_ram_adr                               0x005fffff                                                  
  #define last_epm_ram                                   (*(volatile unsigned int *)last_epm_ram_adr)
  #define base_power_WD_adr                              0x00390000                                                  
  #define base_power_WD                                  (*(volatile unsigned int *)base_power_WD_adr)
  #define last_power_WD_adr                              0x00397fff                                                  
  #define last_power_WD                                  (*(volatile unsigned int *)last_power_WD_adr)
  #define base_clb_regs_adr                              0x00640000                                                  
  #define base_clb_regs                                  (*(volatile unsigned int *)base_clb_regs_adr)
  #define clb_sr_cntl_0_adr                              0x00640000                                                   // base_clb_regs_adr + 0x00000004 * 0x00000000
  #define clb_sr_cntl_0                                  (*(volatile unsigned int *)clb_sr_cntl_0_adr)
  #define clb_sr_cntl_1_adr                              0x00640004                                                   // base_clb_regs_adr + 0x00000004 * 0x00000001
  #define clb_sr_cntl_1                                  (*(volatile unsigned int *)clb_sr_cntl_1_adr)
  #define clb_sr_cntl_2_adr                              0x00640008                                                   // base_clb_regs_adr + 0x00000004 * 0x00000002
  #define clb_sr_cntl_2                                  (*(volatile unsigned int *)clb_sr_cntl_2_adr)
  #define clb_sr_cntl_3_adr                              0x0064000c                                                   // base_clb_regs_adr + 0x00000004 * 0x00000003
  #define clb_sr_cntl_3                                  (*(volatile unsigned int *)clb_sr_cntl_3_adr)
  #define clb_sr_cntl_4_adr                              0x00640010                                                   // base_clb_regs_adr + 0x00000004 * 0x00000004
  #define clb_sr_cntl_4                                  (*(volatile unsigned int *)clb_sr_cntl_4_adr)
  #define clb_sr_cntl_5_adr                              0x00640014                                                   // base_clb_regs_adr + 0x00000004 * 0x00000005
  #define clb_sr_cntl_5                                  (*(volatile unsigned int *)clb_sr_cntl_5_adr)
  #define clb_sr_cntl_6_adr                              0x00640018                                                   // base_clb_regs_adr + 0x00000004 * 0x00000006
  #define clb_sr_cntl_6                                  (*(volatile unsigned int *)clb_sr_cntl_6_adr)
  #define clb_sr_cntl_7_adr                              0x0064001c                                                   // base_clb_regs_adr + 0x00000004 * 0x00000007
  #define clb_sr_cntl_7                                  (*(volatile unsigned int *)clb_sr_cntl_7_adr)
  #define clb_sr_cntl_8_adr                              0x00640020                                                   // base_clb_regs_adr + 0x00000004 * 0x00000008
  #define clb_sr_cntl_8                                  (*(volatile unsigned int *)clb_sr_cntl_8_adr)
  #define clb_sr_cntl_9_adr                              0x00640024                                                   // base_clb_regs_adr + 0x00000004 * 0x00000009
  #define clb_sr_cntl_9                                  (*(volatile unsigned int *)clb_sr_cntl_9_adr)
  #define clb_sr_cntl_a_adr                              0x00640028                                                   // base_clb_regs_adr + 0x00000004 * 0x0000000a
  #define clb_sr_cntl_a                                  (*(volatile unsigned int *)clb_sr_cntl_a_adr)
  #define clb_sr_cntl_b_adr                              0x0064002c                                                   // base_clb_regs_adr + 0x00000004 * 0x0000000b
  #define clb_sr_cntl_b                                  (*(volatile unsigned int *)clb_sr_cntl_b_adr)
  #define clb_ldo_cntl_0_adr                             0x00640054                                                   // base_clb_regs_adr + 0x00000004 * 0x00000015
  #define clb_ldo_cntl_0                                 (*(volatile unsigned int *)clb_ldo_cntl_0_adr)
  #define clb_ldo_cntl_1_adr                             0x00640058                                                   // base_clb_regs_adr + 0x00000004 * 0x00000016
  #define clb_ldo_cntl_1                                 (*(volatile unsigned int *)clb_ldo_cntl_1_adr)
  #define clb_ldo_cntl_2_adr                             0x0064005c                                                   // base_clb_regs_adr + 0x00000004 * 0x00000017
  #define clb_ldo_cntl_2                                 (*(volatile unsigned int *)clb_ldo_cntl_2_adr)
  #define clb_ldo_cntl_3_adr                             0x00640060                                                   // base_clb_regs_adr + 0x00000004 * 0x00000018
  #define clb_ldo_cntl_3                                 (*(volatile unsigned int *)clb_ldo_cntl_3_adr)
  #define clb_ldo_cntl_4_adr                             0x00640064                                                   // base_clb_regs_adr + 0x00000004 * 0x00000019
  #define clb_ldo_cntl_4                                 (*(volatile unsigned int *)clb_ldo_cntl_4_adr)
  #define clb_ldo_cntl_5_adr                             0x00640068                                                   // base_clb_regs_adr + 0x00000004 * 0x0000001a
  #define clb_ldo_cntl_5                                 (*(volatile unsigned int *)clb_ldo_cntl_5_adr)
  #define clb_ldo_cntl_6_adr                             0x0064006c                                                   // base_clb_regs_adr + 0x00000004 * 0x0000001b
  #define clb_ldo_cntl_6                                 (*(volatile unsigned int *)clb_ldo_cntl_6_adr)
  #define clb_ldo_cntl_7_adr                             0x00640070                                                   // base_clb_regs_adr + 0x00000004 * 0x0000001c
  #define clb_ldo_cntl_7                                 (*(volatile unsigned int *)clb_ldo_cntl_7_adr)
  #define clb_ldo_cntl_8_adr                             0x00640074                                                   // base_clb_regs_adr + 0x00000004 * 0x0000001d
  #define clb_ldo_cntl_8                                 (*(volatile unsigned int *)clb_ldo_cntl_8_adr)
  #define clb_ldo_cntl_9_adr                             0x00640078                                                   // base_clb_regs_adr + 0x00000004 * 0x0000001e
  #define clb_ldo_cntl_9                                 (*(volatile unsigned int *)clb_ldo_cntl_9_adr)
  #define clb_ovd_pmu_adr                                0x0064008c                                                   // base_clb_regs_adr + 0x00000004 * 0x00000023
  #define clb_ovd_pmu                                    (*(volatile unsigned int *)clb_ovd_pmu_adr)
  #define clb_bt2clb_PMU_sr_cntl_en_adr                  0x00640094                                                   // base_clb_regs_adr + 0x00000004 * 0x00000025
  #define clb_bt2clb_PMU_sr_cntl_en                      (*(volatile unsigned int *)clb_bt2clb_PMU_sr_cntl_en_adr)
  #define clb_bt2clb_PMU_ldo_cntl_en_adr                 0x00640098                                                   // base_clb_regs_adr + 0x00000004 * 0x00000026
  #define clb_bt2clb_PMU_ldo_cntl_en                     (*(volatile unsigned int *)clb_bt2clb_PMU_ldo_cntl_en_adr)
  #define xo_en_adr                                      0x006400a0                                                   // base_clb_regs_adr + 0x00000004 * 0x00000028
  #define xo_en                                          (*(volatile unsigned int *)xo_en_adr)
  #define clb_clk_ctl_3_adr                              0x006400e0                                                   // base_clb_regs_adr + 0x00000004 * 0x00000038
  #define clb_clk_ctl_3                                  (*(volatile unsigned int *)clb_clk_ctl_3_adr)
  #define clb_extlpo_ctl_adr                             0x00640100                                                   // base_clb_regs_adr + 0x00000004 * 0x00000040
  #define clb_extlpo_ctl                                 (*(volatile unsigned int *)clb_extlpo_ctl_adr)
  #define clb_ext_lpo_adr                                0x00640150                                                   // base_clb_regs_adr + 0x00000004 * 0x00000054
  #define clb_ext_lpo                                    (*(volatile unsigned int *)clb_ext_lpo_adr)
  #define clb_BT2WLAN_pwrup_adr                          0x00640168                                                   // base_clb_regs_adr + 0x00000004 * 0x0000005a
  #define clb_BT2WLAN_pwrup                              (*(volatile unsigned int *)clb_BT2WLAN_pwrup_adr)
  #define clb_WLAN_SRAM_adr                              0x0064016c                                                   // base_clb_regs_adr + 0x00000004 * 0x0000005b
  #define clb_WLAN_SRAM                                  (*(volatile unsigned int *)clb_WLAN_SRAM_adr)
  #define clb_pds_spare_adr                              0x00640170                                                   // base_clb_regs_adr + 0x00000004 * 0x0000005c
  #define clb_pds_spare                                  (*(volatile unsigned int *)clb_pds_spare_adr)
  #define clb_otp_intlpo_ctl_adr                         0x006401f4                                                   // base_clb_regs_adr + 0x00000004 * 0x0000007d
  #define clb_otp_intlpo_ctl                             (*(volatile unsigned int *)clb_otp_intlpo_ctl_adr)
  #define clb_straps_read_adr                            0x0064037c                                                   // base_clb_regs_adr + 0x00000004 * 0x000000df
  #define clb_straps_read                                (*(volatile unsigned int *)clb_straps_read_adr)
  #define gci_corecapabilities0_adr                      0x00650000                                                   // gci_regs_adr_base + gci_corecapabilities0
  #define gci_corecapabilities0                          (*(volatile unsigned int *)gci_corecapabilities0_adr)
  #define gci_corecapabilities1_adr                      0x00650004                                                   // gci_regs_adr_base + gci_corecapabilities1
  #define gci_corecapabilities1                          (*(volatile unsigned int *)gci_corecapabilities1_adr)
  #define gci_corecapabilities2_adr                      0x00650008                                                   // gci_regs_adr_base + gci_corecapabilities2
  #define gci_corecapabilities2                          (*(volatile unsigned int *)gci_corecapabilities2_adr)
  #define gci_corectrl_c_adr                             0x0065000c                                                   // gci_regs_adr_base + gci_corectrl_c
  #define gci_corectrl_c                                 (*(volatile unsigned int *)gci_corectrl_c_adr)
  #define gci_corestatus_c_adr                           0x00650010                                                   // gci_regs_adr_base + gci_corestatus_c
  #define gci_corestatus_c                               (*(volatile unsigned int *)gci_corestatus_c_adr)
  #define gci_gciintstatus_adr                           0x00650014                                                   // gci_regs_adr_base + gci_gciintstatus
  #define gci_gciintstatus                               (*(volatile unsigned int *)gci_gciintstatus_adr)
  #define gci_gciintmask_adr                             0x00650018                                                   // gci_regs_adr_base + gci_gciintmask
  #define gci_gciintmask                                 (*(volatile unsigned int *)gci_gciintmask_adr)
  #define gci_gciwakemask_adr                            0x0065001c                                                   // gci_regs_adr_base + gci_gciwakemask
  #define gci_gciwakemask                                (*(volatile unsigned int *)gci_gciwakemask_adr)
  #define gci_gcilevelinterruptstatussummary_adr         0x00650020                                                   // gci_regs_adr_base + gci_gcilevelinterruptstatussummary
  #define gci_gcilevelinterruptstatussummary             (*(volatile unsigned int *)gci_gcilevelinterruptstatussummary_adr)
  #define gci_gcieventinterruptstatussummary_adr         0x00650024                                                   // gci_regs_adr_base + gci_gcieventinterruptstatussummary
  #define gci_gcieventinterruptstatussummary             (*(volatile unsigned int *)gci_gcieventinterruptstatussummary_adr)
  #define gci_gciwakelevelinterruptstatussummary_adr     0x00650028                                                   // gci_regs_adr_base + gci_gciwakelevelinterruptstatussummary
  #define gci_gciwakelevelinterruptstatussummary         (*(volatile unsigned int *)gci_gciwakelevelinterruptstatussummary_adr)
  #define gci_gciwakeeventinterruptstatussummary_adr     0x0065002c                                                   // gci_regs_adr_base + gci_gciwakeeventinterruptstatussummary
  #define gci_gciwakeeventinterruptstatussummary         (*(volatile unsigned int *)gci_gciwakeeventinterruptstatussummary_adr)
  #define gci_semaphoreinterruptstatus_adr               0x00650030                                                   // gci_regs_adr_base + gci_semaphoreinterruptstatus
  #define gci_semaphoreinterruptstatus                   (*(volatile unsigned int *)gci_semaphoreinterruptstatus_adr)
  #define gci_semaphoreinterruptmask_adr                 0x00650034                                                   // gci_regs_adr_base + gci_semaphoreinterruptmask
  #define gci_semaphoreinterruptmask                     (*(volatile unsigned int *)gci_semaphoreinterruptmask_adr)
  #define gci_semaphorerequest_adr                       0x00650038                                                   // gci_regs_adr_base + gci_semaphorerequest
  #define gci_semaphorerequest                           (*(volatile unsigned int *)gci_semaphorerequest_adr)
  #define gci_semaphorereserve_adr                       0x0065003c                                                   // gci_regs_adr_base + gci_semaphorereserve
  #define gci_semaphorereserve                           (*(volatile unsigned int *)gci_semaphorereserve_adr)
  #define gci_gciindirectaddress_adr                     0x00650040                                                   // gci_regs_adr_base + gci_gciindirectaddress
  #define gci_gciindirectaddress                         (*(volatile unsigned int *)gci_gciindirectaddress_adr)
  #define gci_gcigpiocontrol_c_adr                       0x00650044                                                   // gci_regs_adr_base + gci_gcigpiocontrol_c
  #define gci_gcigpiocontrol_c                           (*(volatile unsigned int *)gci_gcigpiocontrol_c_adr)
  #define gci_gcigpiostatus_adr                          0x00650048                                                   // gci_regs_adr_base + gci_gcigpiostatus
  #define gci_gcigpiostatus                              (*(volatile unsigned int *)gci_gcigpiostatus_adr)
  #define gci_gcigpiomask_c_adr                          0x0065004c                                                   // gci_regs_adr_base + gci_gcigpiomask_c
  #define gci_gcigpiomask_c                              (*(volatile unsigned int *)gci_gcigpiomask_c_adr)
  #define gci_gcieventsummary_adr                        0x00650050                                                   // gci_regs_adr_base + gci_gcieventsummary
  #define gci_gcieventsummary                            (*(volatile unsigned int *)gci_gcieventsummary_adr)
  #define gci_gcimisccontrol_c_adr                       0x00650054                                                   // gci_regs_adr_base + gci_gcimisccontrol_c
  #define gci_gcimisccontrol_c                           (*(volatile unsigned int *)gci_gcimisccontrol_c_adr)
  #define gci_gcigpiointmask_adr                         0x00650058                                                   // gci_regs_adr_base + gci_gcigpiointmask
  #define gci_gcigpiointmask                             (*(volatile unsigned int *)gci_gcigpiointmask_adr)
  #define gci_gcigpiowakemask_adr                        0x0065005c                                                   // gci_regs_adr_base + gci_gcigpiowakemask
  #define gci_gcigpiowakemask                            (*(volatile unsigned int *)gci_gcigpiowakemask_adr)
  #define gci_gciinput0_c_adr                            0x00650060                                                   // gci_regs_adr_base + gci_gciinput0_c
  #define gci_gciinput0_c                                (*(volatile unsigned int *)gci_gciinput0_c_adr)
  #define gci_gciinput1_c_adr                            0x00650064                                                   // gci_regs_adr_base + gci_gciinput1_c
  #define gci_gciinput1_c                                (*(volatile unsigned int *)gci_gciinput1_c_adr)
  #define gci_gciinput2_c_adr                            0x00650068                                                   // gci_regs_adr_base + gci_gciinput2_c
  #define gci_gciinput2_c                                (*(volatile unsigned int *)gci_gciinput2_c_adr)
  #define gci_gciinput3_c_adr                            0x0065006c                                                   // gci_regs_adr_base + gci_gciinput3_c
  #define gci_gciinput3_c                                (*(volatile unsigned int *)gci_gciinput3_c_adr)
  #define gci_gciinput4_c_adr                            0x00650070                                                   // gci_regs_adr_base + gci_gciinput4_c
  #define gci_gciinput4_c                                (*(volatile unsigned int *)gci_gciinput4_c_adr)
  #define gci_gciinput5_c_adr                            0x00650074                                                   // gci_regs_adr_base + gci_gciinput5_c
  #define gci_gciinput5_c                                (*(volatile unsigned int *)gci_gciinput5_c_adr)
  #define gci_gciinput6_c_adr                            0x00650078                                                   // gci_regs_adr_base + gci_gciinput6_c
  #define gci_gciinput6_c                                (*(volatile unsigned int *)gci_gciinput6_c_adr)
  #define gci_gciinput7_c_adr                            0x0065007c                                                   // gci_regs_adr_base + gci_gciinput7_c
  #define gci_gciinput7_c                                (*(volatile unsigned int *)gci_gciinput7_c_adr)
  #define gci_gciinput8_c_adr                            0x00650080                                                   // gci_regs_adr_base + gci_gciinput8_c
  #define gci_gciinput8_c                                (*(volatile unsigned int *)gci_gciinput8_c_adr)
  #define gci_gciinput9_c_adr                            0x00650084                                                   // gci_regs_adr_base + gci_gciinput9_c
  #define gci_gciinput9_c                                (*(volatile unsigned int *)gci_gciinput9_c_adr)
  #define gci_gciinput10_c_adr                           0x00650088                                                   // gci_regs_adr_base + gci_gciinput10_c
  #define gci_gciinput10_c                               (*(volatile unsigned int *)gci_gciinput10_c_adr)
  #define gci_gciinput11_c_adr                           0x0065008c                                                   // gci_regs_adr_base + gci_gciinput11_c
  #define gci_gciinput11_c                               (*(volatile unsigned int *)gci_gciinput11_c_adr)
  #define gci_gciinput12_c_adr                           0x00650090                                                   // gci_regs_adr_base + gci_gciinput12_c
  #define gci_gciinput12_c                               (*(volatile unsigned int *)gci_gciinput12_c_adr)
  #define gci_gciinput13_c_adr                           0x00650094                                                   // gci_regs_adr_base + gci_gciinput13_c
  #define gci_gciinput13_c                               (*(volatile unsigned int *)gci_gciinput13_c_adr)
  #define gci_gciinput14_c_adr                           0x00650098                                                   // gci_regs_adr_base + gci_gciinput14_c
  #define gci_gciinput14_c                               (*(volatile unsigned int *)gci_gciinput14_c_adr)
  #define gci_gciinput15_c_adr                           0x0065009c                                                   // gci_regs_adr_base + gci_gciinput15_c
  #define gci_gciinput15_c                               (*(volatile unsigned int *)gci_gciinput15_c_adr)
  #define gci_gciinput16_c_adr                           0x006500a0                                                   // gci_regs_adr_base + gci_gciinput16_c
  #define gci_gciinput16_c                               (*(volatile unsigned int *)gci_gciinput16_c_adr)
  #define gci_gciinput17_c_adr                           0x006500a4                                                   // gci_regs_adr_base + gci_gciinput17_c
  #define gci_gciinput17_c                               (*(volatile unsigned int *)gci_gciinput17_c_adr)
  #define gci_gciinput18_c_adr                           0x006500a8                                                   // gci_regs_adr_base + gci_gciinput18_c
  #define gci_gciinput18_c                               (*(volatile unsigned int *)gci_gciinput18_c_adr)
  #define gci_gciinput19_c_adr                           0x006500ac                                                   // gci_regs_adr_base + gci_gciinput19_c
  #define gci_gciinput19_c                               (*(volatile unsigned int *)gci_gciinput19_c_adr)
  #define gci_gciinput20_c_adr                           0x006500b0                                                   // gci_regs_adr_base + gci_gciinput20_c
  #define gci_gciinput20_c                               (*(volatile unsigned int *)gci_gciinput20_c_adr)
  #define gci_gciinput21_c_adr                           0x006500b4                                                   // gci_regs_adr_base + gci_gciinput21_c
  #define gci_gciinput21_c                               (*(volatile unsigned int *)gci_gciinput21_c_adr)
  #define gci_gciinput22_c_adr                           0x006500b8                                                   // gci_regs_adr_base + gci_gciinput22_c
  #define gci_gciinput22_c                               (*(volatile unsigned int *)gci_gciinput22_c_adr)
  #define gci_gciinput23_c_adr                           0x006500bc                                                   // gci_regs_adr_base + gci_gciinput23_c
  #define gci_gciinput23_c                               (*(volatile unsigned int *)gci_gciinput23_c_adr)
  #define gci_gciinput24_c_adr                           0x006500c0                                                   // gci_regs_adr_base + gci_gciinput24_c
  #define gci_gciinput24_c                               (*(volatile unsigned int *)gci_gciinput24_c_adr)
  #define gci_gciinput25_c_adr                           0x006500c4                                                   // gci_regs_adr_base + gci_gciinput25_c
  #define gci_gciinput25_c                               (*(volatile unsigned int *)gci_gciinput25_c_adr)
  #define gci_gciinput26_c_adr                           0x006500c8                                                   // gci_regs_adr_base + gci_gciinput26_c
  #define gci_gciinput26_c                               (*(volatile unsigned int *)gci_gciinput26_c_adr)
  #define gci_gciinput27_c_adr                           0x006500cc                                                   // gci_regs_adr_base + gci_gciinput27_c
  #define gci_gciinput27_c                               (*(volatile unsigned int *)gci_gciinput27_c_adr)
  #define gci_gciinput28_c_adr                           0x006500d0                                                   // gci_regs_adr_base + gci_gciinput28_c
  #define gci_gciinput28_c                               (*(volatile unsigned int *)gci_gciinput28_c_adr)
  #define gci_gciinput29_c_adr                           0x006500d4                                                   // gci_regs_adr_base + gci_gciinput29_c
  #define gci_gciinput29_c                               (*(volatile unsigned int *)gci_gciinput29_c_adr)
  #define gci_gciinput30_c_adr                           0x006500d8                                                   // gci_regs_adr_base + gci_gciinput30_c
  #define gci_gciinput30_c                               (*(volatile unsigned int *)gci_gciinput30_c_adr)
  #define gci_gciinput31_c_adr                           0x006500dc                                                   // gci_regs_adr_base + gci_gciinput31_c
  #define gci_gciinput31_c                               (*(volatile unsigned int *)gci_gciinput31_c_adr)
  #define gci_gcievent0_adr                              0x006500e0                                                   // gci_regs_adr_base + gci_gcievent0
  #define gci_gcievent0                                  (*(volatile unsigned int *)gci_gcievent0_adr)
  #define gci_gcievent1_adr                              0x006500e4                                                   // gci_regs_adr_base + gci_gcievent1
  #define gci_gcievent1                                  (*(volatile unsigned int *)gci_gcievent1_adr)
  #define gci_gcievent2_adr                              0x006500e8                                                   // gci_regs_adr_base + gci_gcievent2
  #define gci_gcievent2                                  (*(volatile unsigned int *)gci_gcievent2_adr)
  #define gci_gcievent3_adr                              0x006500ec                                                   // gci_regs_adr_base + gci_gcievent3
  #define gci_gcievent3                                  (*(volatile unsigned int *)gci_gcievent3_adr)
  #define gci_gcievent4_adr                              0x006500f0                                                   // gci_regs_adr_base + gci_gcievent4
  #define gci_gcievent4                                  (*(volatile unsigned int *)gci_gcievent4_adr)
  #define gci_gcievent5_adr                              0x006500f4                                                   // gci_regs_adr_base + gci_gcievent5
  #define gci_gcievent5                                  (*(volatile unsigned int *)gci_gcievent5_adr)
  #define gci_gcievent6_adr                              0x006500f8                                                   // gci_regs_adr_base + gci_gcievent6
  #define gci_gcievent6                                  (*(volatile unsigned int *)gci_gcievent6_adr)
  #define gci_gcievent7_adr                              0x006500fc                                                   // gci_regs_adr_base + gci_gcievent7
  #define gci_gcievent7                                  (*(volatile unsigned int *)gci_gcievent7_adr)
  #define gci_gcievent8_adr                              0x00650100                                                   // gci_regs_adr_base + gci_gcievent8
  #define gci_gcievent8                                  (*(volatile unsigned int *)gci_gcievent8_adr)
  #define gci_gcievent9_adr                              0x00650104                                                   // gci_regs_adr_base + gci_gcievent9
  #define gci_gcievent9                                  (*(volatile unsigned int *)gci_gcievent9_adr)
  #define gci_gcievent10_adr                             0x00650108                                                   // gci_regs_adr_base + gci_gcievent10
  #define gci_gcievent10                                 (*(volatile unsigned int *)gci_gcievent10_adr)
  #define gci_gcievent11_adr                             0x0065010c                                                   // gci_regs_adr_base + gci_gcievent11
  #define gci_gcievent11                                 (*(volatile unsigned int *)gci_gcievent11_adr)
  #define gci_gcievent12_adr                             0x00650110                                                   // gci_regs_adr_base + gci_gcievent12
  #define gci_gcievent12                                 (*(volatile unsigned int *)gci_gcievent12_adr)
  #define gci_gcievent13_adr                             0x00650114                                                   // gci_regs_adr_base + gci_gcievent13
  #define gci_gcievent13                                 (*(volatile unsigned int *)gci_gcievent13_adr)
  #define gci_gcievent14_adr                             0x00650118                                                   // gci_regs_adr_base + gci_gcievent14
  #define gci_gcievent14                                 (*(volatile unsigned int *)gci_gcievent14_adr)
  #define gci_gcievent15_adr                             0x0065011c                                                   // gci_regs_adr_base + gci_gcievent15
  #define gci_gcievent15                                 (*(volatile unsigned int *)gci_gcievent15_adr)
  #define gci_gcievent16_adr                             0x00650120                                                   // gci_regs_adr_base + gci_gcievent16
  #define gci_gcievent16                                 (*(volatile unsigned int *)gci_gcievent16_adr)
  #define gci_gcievent17_adr                             0x00650124                                                   // gci_regs_adr_base + gci_gcievent17
  #define gci_gcievent17                                 (*(volatile unsigned int *)gci_gcievent17_adr)
  #define gci_gcievent18_adr                             0x00650128                                                   // gci_regs_adr_base + gci_gcievent18
  #define gci_gcievent18                                 (*(volatile unsigned int *)gci_gcievent18_adr)
  #define gci_gcievent19_adr                             0x0065012c                                                   // gci_regs_adr_base + gci_gcievent19
  #define gci_gcievent19                                 (*(volatile unsigned int *)gci_gcievent19_adr)
  #define gci_gcievent20_adr                             0x00650130                                                   // gci_regs_adr_base + gci_gcievent20
  #define gci_gcievent20                                 (*(volatile unsigned int *)gci_gcievent20_adr)
  #define gci_gcievent21_adr                             0x00650134                                                   // gci_regs_adr_base + gci_gcievent21
  #define gci_gcievent21                                 (*(volatile unsigned int *)gci_gcievent21_adr)
  #define gci_gcievent22_adr                             0x00650138                                                   // gci_regs_adr_base + gci_gcievent22
  #define gci_gcievent22                                 (*(volatile unsigned int *)gci_gcievent22_adr)
  #define gci_gcievent23_adr                             0x0065013c                                                   // gci_regs_adr_base + gci_gcievent23
  #define gci_gcievent23                                 (*(volatile unsigned int *)gci_gcievent23_adr)
  #define gci_gcievent24_adr                             0x00650140                                                   // gci_regs_adr_base + gci_gcievent24
  #define gci_gcievent24                                 (*(volatile unsigned int *)gci_gcievent24_adr)
  #define gci_gcievent25_adr                             0x00650144                                                   // gci_regs_adr_base + gci_gcievent25
  #define gci_gcievent25                                 (*(volatile unsigned int *)gci_gcievent25_adr)
  #define gci_gcievent26_adr                             0x00650148                                                   // gci_regs_adr_base + gci_gcievent26
  #define gci_gcievent26                                 (*(volatile unsigned int *)gci_gcievent26_adr)
  #define gci_gcievent27_adr                             0x0065014c                                                   // gci_regs_adr_base + gci_gcievent27
  #define gci_gcievent27                                 (*(volatile unsigned int *)gci_gcievent27_adr)
  #define gci_gcievent28_adr                             0x00650150                                                   // gci_regs_adr_base + gci_gcievent28
  #define gci_gcievent28                                 (*(volatile unsigned int *)gci_gcievent28_adr)
  #define gci_gcievent29_adr                             0x00650154                                                   // gci_regs_adr_base + gci_gcievent29
  #define gci_gcievent29                                 (*(volatile unsigned int *)gci_gcievent29_adr)
  #define gci_gcievent30_adr                             0x00650158                                                   // gci_regs_adr_base + gci_gcievent30
  #define gci_gcievent30                                 (*(volatile unsigned int *)gci_gcievent30_adr)
  #define gci_gcievent31_adr                             0x0065015c                                                   // gci_regs_adr_base + gci_gcievent31
  #define gci_gcievent31                                 (*(volatile unsigned int *)gci_gcievent31_adr)
  #define gci_gcioutput0_adr                             0x00650160                                                   // gci_regs_adr_base + gci_gcioutput0
  #define gci_gcioutput0                                 (*(volatile unsigned int *)gci_gcioutput0_adr)
  #define gci_gcioutput1_adr                             0x00650164                                                   // gci_regs_adr_base + gci_gcioutput1
  #define gci_gcioutput1                                 (*(volatile unsigned int *)gci_gcioutput1_adr)
  #define gci_gcioutput2_adr                             0x00650168                                                   // gci_regs_adr_base + gci_gcioutput2
  #define gci_gcioutput2                                 (*(volatile unsigned int *)gci_gcioutput2_adr)
  #define gci_gcioutput3_adr                             0x0065016c                                                   // gci_regs_adr_base + gci_gcioutput3
  #define gci_gcioutput3                                 (*(volatile unsigned int *)gci_gcioutput3_adr)
  #define gci_gcicontrol0_adr                            0x00650170                                                   // gci_regs_adr_base + gci_gcicontrol0
  #define gci_gcicontrol0                                (*(volatile unsigned int *)gci_gcicontrol0_adr)
  #define gci_gcicontrol1_adr                            0x00650174                                                   // gci_regs_adr_base + gci_gcicontrol1
  #define gci_gcicontrol1                                (*(volatile unsigned int *)gci_gcicontrol1_adr)
  #define gci_gciinterruptpolarity_adr                   0x00650178                                                   // gci_regs_adr_base + gci_gciinterruptpolarity
  #define gci_gciinterruptpolarity                       (*(volatile unsigned int *)gci_gciinterruptpolarity_adr)
  #define gci_gcilevelinterruptmask_adr                  0x0065017c                                                   // gci_regs_adr_base + gci_gcilevelinterruptmask
  #define gci_gcilevelinterruptmask                      (*(volatile unsigned int *)gci_gcilevelinterruptmask_adr)
  #define gci_gcieventinterruptmask_adr                  0x00650180                                                   // gci_regs_adr_base + gci_gcieventinterruptmask
  #define gci_gcieventinterruptmask                      (*(volatile unsigned int *)gci_gcieventinterruptmask_adr)
  #define gci_gciwakelevelinterruptmask_adr              0x00650184                                                   // gci_regs_adr_base + gci_gciwakelevelinterruptmask
  #define gci_gciwakelevelinterruptmask                  (*(volatile unsigned int *)gci_gciwakelevelinterruptmask_adr)
  #define gci_gciwakeeventinterruptmask_adr              0x00650188                                                   // gci_regs_adr_base + gci_gciwakeeventinterruptmask
  #define gci_gciwakeeventinterruptmask                  (*(volatile unsigned int *)gci_gciwakeeventinterruptmask_adr)
  #define gci_gcihwmask_adr                              0x0065018c                                                   // gci_regs_adr_base + gci_gcihwmask
  #define gci_gcihwmask                                  (*(volatile unsigned int *)gci_gcihwmask_adr)
  #define gci_gciinbandlevelinterruptmask_adr            0x00650190                                                   // gci_regs_adr_base + gci_gciinbandlevelinterruptmask
  #define gci_gciinbandlevelinterruptmask                (*(volatile unsigned int *)gci_gciinbandlevelinterruptmask_adr)
  #define gci_gciinbandeventinterruptmask_adr            0x00650194                                                   // gci_regs_adr_base + gci_gciinbandeventinterruptmask
  #define gci_gciinbandeventinterruptmask                (*(volatile unsigned int *)gci_gciinbandeventinterruptmask_adr)
  #define gci_gciinbandlevelinterruptstatussummary_adr   0x00650198                                                   // gci_regs_adr_base + gci_gciinbandlevelinterruptstatussummary
  #define gci_gciinbandlevelinterruptstatussummary       (*(volatile unsigned int *)gci_gciinbandlevelinterruptstatussummary_adr)
  #define gci_gciinbandeventinterruptstatussummary_adr   0x0065019c                                                   // gci_regs_adr_base + gci_gciinbandeventinterruptstatussummary
  #define gci_gciinbandeventinterruptstatussummary       (*(volatile unsigned int *)gci_gciinbandeventinterruptstatussummary_adr)
  #define gci_seciauxtx_adr                              0x006501a0                                                   // gci_regs_adr_base + gci_seciauxtx
  #define gci_seciauxtx                                  (*(volatile unsigned int *)gci_seciauxtx_adr)
  #define gci_seciauxrx_c_adr                            0x006501a4                                                   // gci_regs_adr_base + gci_seciauxrx_c
  #define gci_seciauxrx_c                                (*(volatile unsigned int *)gci_seciauxrx_c_adr)
  #define gci_secitxdatatag_c_adr                        0x006501a8                                                   // gci_regs_adr_base + gci_secitxdatatag_c
  #define gci_secitxdatatag_c                            (*(volatile unsigned int *)gci_secitxdatatag_c_adr)
  #define gci_secirxdatatag_c_adr                        0x006501ac                                                   // gci_regs_adr_base + gci_secirxdatatag_c
  #define gci_secirxdatatag_c                            (*(volatile unsigned int *)gci_secirxdatatag_c_adr)
  #define gci_secitxdatamask_c_adr                       0x006501b0                                                   // gci_regs_adr_base + gci_secitxdatamask_c
  #define gci_secitxdatamask_c                           (*(volatile unsigned int *)gci_secitxdatamask_c_adr)
  #define gci_seciuseformat0tx_c_adr                     0x006501b4                                                   // gci_regs_adr_base + gci_seciuseformat0tx_c
  #define gci_seciuseformat0tx_c                         (*(volatile unsigned int *)gci_seciuseformat0tx_c_adr)
  #define gci_seciformat0txoffset_c_adr                  0x006501b8                                                   // gci_regs_adr_base + gci_seciformat0txoffset_c
  #define gci_seciformat0txoffset_c                      (*(volatile unsigned int *)gci_seciformat0txoffset_c_adr)
  #define gci_seciformat0rxoffset_c_adr                  0x006501bc                                                   // gci_regs_adr_base + gci_seciformat0rxoffset_c
  #define gci_seciformat0rxoffset_c                      (*(volatile unsigned int *)gci_seciformat0rxoffset_c_adr)
  #define gci_seciformat1txoffset_c_adr                  0x006501c0                                                   // gci_regs_adr_base + gci_seciformat1txoffset_c
  #define gci_seciformat1txoffset_c                      (*(volatile unsigned int *)gci_seciformat1txoffset_c_adr)
  #define gci_gcirxfifocommoncontrol_c_adr               0x006501c4                                                   // gci_regs_adr_base + gci_gcirxfifocommoncontrol_c
  #define gci_gcirxfifocommoncontrol_c                   (*(volatile unsigned int *)gci_gcirxfifocommoncontrol_c_adr)
  #define gci_gcirxfifoperipcontrol_adr                  0x006501c8                                                   // gci_regs_adr_base + gci_gcirxfifoperipcontrol
  #define gci_gcirxfifoperipcontrol                      (*(volatile unsigned int *)gci_gcirxfifoperipcontrol_adr)
  #define gci_seciuartescapevalue_c_adr                  0x006501d0                                                   // gci_regs_adr_base + gci_seciuartescapevalue_c
  #define gci_seciuartescapevalue_c                      (*(volatile unsigned int *)gci_seciuartescapevalue_c_adr)
  #define gci_seciuartautobaudctr_c_adr                  0x006501d4                                                   // gci_regs_adr_base + gci_seciuartautobaudctr_c
  #define gci_seciuartautobaudctr_c                      (*(volatile unsigned int *)gci_seciuartautobaudctr_c_adr)
  #define gci_secififolevel_c_adr                        0x006501d8                                                   // gci_regs_adr_base + gci_secififolevel_c
  #define gci_secififolevel_c                            (*(volatile unsigned int *)gci_secififolevel_c_adr)
  #define gci_seciuartdata_c_adr                         0x006501dc                                                   // gci_regs_adr_base + gci_seciuartdata_c
  #define gci_seciuartdata_c                             (*(volatile unsigned int *)gci_seciuartdata_c_adr)
  #define gci_seciuartbaudratedivisor_c_adr              0x006501e0                                                   // gci_regs_adr_base + gci_seciuartbaudratedivisor_c
  #define gci_seciuartbaudratedivisor_c                  (*(volatile unsigned int *)gci_seciuartbaudratedivisor_c_adr)
  #define gci_seciuartfcr_c_adr                          0x006501e4                                                   // gci_regs_adr_base + gci_seciuartfcr_c
  #define gci_seciuartfcr_c                              (*(volatile unsigned int *)gci_seciuartfcr_c_adr)
  #define gci_seciuartlcr_c_adr                          0x006501e8                                                   // gci_regs_adr_base + gci_seciuartlcr_c
  #define gci_seciuartlcr_c                              (*(volatile unsigned int *)gci_seciuartlcr_c_adr)
  #define gci_seciuartmcr_c_adr                          0x006501ec                                                   // gci_regs_adr_base + gci_seciuartmcr_c
  #define gci_seciuartmcr_c                              (*(volatile unsigned int *)gci_seciuartmcr_c_adr)
  #define gci_seciuartlsr_c_adr                          0x006501f0                                                   // gci_regs_adr_base + gci_seciuartlsr_c
  #define gci_seciuartlsr_c                              (*(volatile unsigned int *)gci_seciuartlsr_c_adr)
  #define gci_seciuartmsr_c_adr                          0x006501f4                                                   // gci_regs_adr_base + gci_seciuartmsr_c
  #define gci_seciuartmsr_c                              (*(volatile unsigned int *)gci_seciuartmsr_c_adr)
  #define gci_seciuartbaudrateadjustment_c_adr           0x006501f8                                                   // gci_regs_adr_base + gci_seciuartbaudrateadjustment_c
  #define gci_seciuartbaudrateadjustment_c               (*(volatile unsigned int *)gci_seciuartbaudrateadjustment_c_adr)
  #define gci_gciinbandintmask_adr                       0x006501fc                                                   // gci_regs_adr_base + gci_gciinbandintmask
  #define gci_gciinbandintmask                           (*(volatile unsigned int *)gci_gciinbandintmask_adr)
  #define gci_gcichipcontrol_c_adr                       0x00650200                                                   // gci_regs_adr_base + gci_gcichipcontrol_c
  #define gci_gcichipcontrol_c                           (*(volatile unsigned int *)gci_gcichipcontrol_c_adr)
  #define gci_gcichipstatus_c_adr                        0x00650204                                                   // gci_regs_adr_base + gci_gcichipstatus_c
  #define gci_gcichipstatus_c                            (*(volatile unsigned int *)gci_gcichipstatus_c_adr)
  #define gci_gcigpioout_adr                             0x00650208                                                   // gci_regs_adr_base + gci_gcigpioout
  #define gci_gcigpioout                                 (*(volatile unsigned int *)gci_gcigpioout_adr)
  #define gci_gcigpiooutread_c_adr                       0x0065020c                                                   // gci_regs_adr_base + gci_gcigpiooutread_c
  #define gci_gcigpiooutread_c                           (*(volatile unsigned int *)gci_gcigpiooutread_c_adr)
  #define gci_multipoint_wake_tx_reg_c_adr               0x00650210                                                   // gci_regs_adr_base + gci_multipoint_wake_tx_reg_c
  #define gci_multipoint_wake_tx_reg_c                   (*(volatile unsigned int *)gci_multipoint_wake_tx_reg_c_adr)
  #define gci_multipoint_wake_detect_reg_c_adr           0x00650214                                                   // gci_regs_adr_base + gci_multipoint_wake_detect_reg_c
  #define gci_multipoint_wake_detect_reg_c               (*(volatile unsigned int *)gci_multipoint_wake_detect_reg_c_adr)
  #define gci_seci_in_control_reg_c_adr                  0x00650218                                                   // gci_regs_adr_base + gci_seci_in_control_reg_c
  #define gci_seci_in_control_reg_c                      (*(volatile unsigned int *)gci_seci_in_control_reg_c_adr)
  #define gci_seci_out_control_reg_c_adr                 0x0065021c                                                   // gci_regs_adr_base + gci_seci_out_control_reg_c
  #define gci_seci_out_control_reg_c                     (*(volatile unsigned int *)gci_seci_out_control_reg_c_adr)
  #define gci_seci_in_aux_fifo_rx_enable_reg_adr         0x00650220                                                   // gci_regs_adr_base + gci_seci_in_aux_fifo_rx_enable_reg
  #define gci_seci_in_aux_fifo_rx_enable_reg             (*(volatile unsigned int *)gci_seci_in_aux_fifo_rx_enable_reg_adr)
  #define gci_seci_out_tx_enable_tx_break_reg_c_adr      0x00650224                                                   // gci_regs_adr_base + gci_seci_out_tx_enable_tx_break_reg_c
  #define gci_seci_out_tx_enable_tx_break_reg_c          (*(volatile unsigned int *)gci_seci_out_tx_enable_tx_break_reg_c_adr)
  #define gci_seci_in_rx_break_status_reg_adr            0x00650228                                                   // gci_regs_adr_base + gci_seci_in_rx_break_status_reg
  #define gci_seci_in_rx_break_status_reg                (*(volatile unsigned int *)gci_seci_in_rx_break_status_reg_adr)
  #define gci_seci_in_rx_error_status_reg_adr            0x0065022c                                                   // gci_regs_adr_base + gci_seci_in_rx_error_status_reg
  #define gci_seci_in_rx_error_status_reg                (*(volatile unsigned int *)gci_seci_in_rx_error_status_reg_adr)
  #define gci_seci_in_flow_control_status_reg_adr        0x00650230                                                   // gci_regs_adr_base + gci_seci_in_flow_control_status_reg
  #define gci_seci_in_flow_control_status_reg            (*(volatile unsigned int *)gci_seci_in_flow_control_status_reg_adr)
  #define gci_seci_out_tx_status_reg_c_adr               0x00650234                                                   // gci_regs_adr_base + gci_seci_out_tx_status_reg_c
  #define gci_seci_out_tx_status_reg_c                   (*(volatile unsigned int *)gci_seci_out_tx_status_reg_c_adr)
  #define gci_seci_out_tx_break_status_reg_c_adr         0x00650238                                                   // gci_regs_adr_base + gci_seci_out_tx_break_status_reg_c
  #define gci_seci_out_tx_break_status_reg_c             (*(volatile unsigned int *)gci_seci_out_tx_break_status_reg_c_adr)
  #define gci_chip_id_reg_adr                            0x00650300                                                   // gci_regs_adr_base + gci_chip_id_reg
  #define gci_chip_id_reg                                (*(volatile unsigned int *)gci_chip_id_reg_adr)
  #define gci_otp_status_reg_adr                         0x00650310                                                   // gci_regs_adr_base + gci_otp_status_reg
  #define gci_otp_status_reg                             (*(volatile unsigned int *)gci_otp_status_reg_adr)
  #define gci_otp_control_reg_adr                        0x00650314                                                   // gci_regs_adr_base + gci_otp_control_reg
  #define gci_otp_control_reg                            (*(volatile unsigned int *)gci_otp_control_reg_adr)
  #define gci_otp_prog_reg_adr                           0x00650318                                                   // gci_regs_adr_base + gci_otp_prog_reg
  #define gci_otp_prog_reg                               (*(volatile unsigned int *)gci_otp_prog_reg_adr)
  #define gci_otp_layout_reg_adr                         0x0065031c                                                   // gci_regs_adr_base + gci_otp_layout_reg
  #define gci_otp_layout_reg                             (*(volatile unsigned int *)gci_otp_layout_reg_adr)
  #define gci_otp_layout_ext_reg_adr                     0x00650320                                                   // gci_regs_adr_base + gci_otp_layout_ext_reg
  #define gci_otp_layout_ext_reg                         (*(volatile unsigned int *)gci_otp_layout_ext_reg_adr)
  #define gci_otp_control_1_reg_adr                      0x00650324                                                   // gci_regs_adr_base + gci_otp_control_1_reg
  #define gci_otp_control_1_reg                          (*(volatile unsigned int *)gci_otp_control_1_reg_adr)
  #define rom_adr_base                                   0x00000000                                                   // base_IntRom
  #define smi_mem_adr_base                               0xf0000000                                                  
  #define ram_adr_base                                   0x00200000                                                   // base_IntMemCm3
  #define pmu_adr_base                                   0x00320000                                                   // base_hw_regs_cm3 + 0x00020000
  #define apb_adr_base                                   0x00328000                                                   // base_hw_regs_cm3 + 0x00028000
  #define fmrx_adr_base                                  0x00420000                                                   // base_hw_regs_cm3 + 0x00120000
  #define vco_adr_base                                   0x00423400                                                   // base_hw_regs_cm3 + 0x00123400
  #define iq_adr_base                                    0x00423500                                                   // base_hw_regs_cm3 + 0x00123500
  #define fmrf_adr_base                                  0x00423600                                                   // base_hw_regs_cm3 + 0x00123600
  #define modem_adr_new_base                             0x00410000                                                   // base_bt_modem_regs
  #define modem_adr_base                                 0x00410400                                                   // modem_adr_new_base + 0x00000400
  #define rf_adr_base                                    0x00600000                                                   // base_rf_regs
  #define sri_bk_adr_base                                0x0031e000                                                   // base_hw_regs_cm3 + 0x0001e000
  #define bpl_hclk_base_adr                              0x00314000                                                   // base_hw_regs_cm3 + 0x00014000
  #define bpl_hclk_base                                  (*(volatile unsigned int *)bpl_hclk_base_adr)
  #define phy_adr_base                                   0x00318000                                                   // base_hw_regs_cm3 + 0x00018000
  #define ptu_adr_base                                   0x00360000                                                   // base_hw_regs_cm3 + 0x00060000
  #define prc_adr_base                                   0x00310000                                                   // base_hw_regs_cm3 + 0x00010000
  #define ptu_aux_adr_base                               0x00350000                                                   // base_hw_regs_cm3 + 0x00050000
  #define smi_ahb_adr_base                               0x00308000                                                   // base_hw_regs_cm3 + 0x00008000
  #define dmac_adr_base                                  0x00300000                                                   // base_hw_regs_cm3 + 0x00000000
  #define memory_map_base                                0x00000000                                                  
  #define rmppause_adr_base                              0x00328000                                                   // apb_adr_base + 0x00000000
  #define watchdog_adr_base                              0x00329000                                                   // apb_adr_base + 0x00001000
  #define timers_adr_base                                0x0032a000                                                   // apb_adr_base + 0x00002000
  #define gpio2_adr_base                                 0x0032b000                                                   // apb_adr_base + 0x00003000
  #define gpio_adr_base                                  0x0032c000                                                   // apb_adr_base + 0x00004000
  #define swp_adr_base                                   0x0032d000                                                   // apb_adr_base + 0x00005000
  #define otp_adr_base                                   0x00340000                                                   // apb_adr_base + 0x00018000
  #define timers2_adr_base                               0x00341000                                                   // apb_adr_base + 0x00019000
  #define mia_adr_base                                   0x00338000                                                  
  #define lhl_adr_base                                   0x00338000                                                  
  #define base_ToRam_adr                                 0x00280000                                                  
  #define base_ToRam                                     (*(volatile unsigned int *)base_ToRam_adr)
  #define last_ToRam_adr                                 0x00283fff                                                  
  #define last_ToRam                                     (*(volatile unsigned int *)last_ToRam_adr)
  #define base_ToRam_alias_adr                           0x40000000                                                  
  #define base_ToRam_alias                               (*(volatile unsigned int *)base_ToRam_alias_adr)
  #define last_ToRam_alias_adr                           0x40003fff                                                  
  #define last_ToRam_alias                               (*(volatile unsigned int *)last_ToRam_alias_adr)
  #define base_ToRam_bit_band_adr                        0x42000000                                                  
  #define base_ToRam_bit_band                            (*(volatile unsigned int *)base_ToRam_bit_band_adr)
  #define last_ToRam_bit_band_adr                        0x4207ffff                                                  
  #define last_ToRam_bit_band                            (*(volatile unsigned int *)last_ToRam_bit_band_adr)
  #define pause_adr                                      0x00328000                                                   // rmppause_adr_base + 0x00000000
  #define pause                                          (*(volatile unsigned int *)pause_adr)
  #define resetstatus_adr                                0x00328008                                                   // rmppause_adr_base + 0x00000008
  #define resetstatus                                    (*(volatile unsigned int *)resetstatus_adr)
  #define resetstatusclr_adr                             0x0032800c                                                   // rmppause_adr_base + 0x0000000c
  #define resetstatusclr                                 (*(volatile unsigned int *)resetstatusclr_adr)
  #define rpcperiphid0_adr                               0x00328fe0                                                   // rmppause_adr_base + 0x00000fe0
  #define rpcperiphid0                                   (*(volatile unsigned int *)rpcperiphid0_adr)
  #define rpcperiphid1_adr                               0x00328fe4                                                   // rmppause_adr_base + 0x00000fe4
  #define rpcperiphid1                                   (*(volatile unsigned int *)rpcperiphid1_adr)
  #define rpcperiphid2_adr                               0x00328fe8                                                   // rmppause_adr_base + 0x00000fe8
  #define rpcperiphid2                                   (*(volatile unsigned int *)rpcperiphid2_adr)
  #define rpcperiphid3_adr                               0x00328fec                                                   // rmppause_adr_base + 0x00000fec
  #define rpcperiphid3                                   (*(volatile unsigned int *)rpcperiphid3_adr)
  #define rpcpcellid0_adr                                0x00328ff0                                                   // rmppause_adr_base + 0x00000ff0
  #define rpcpcellid0                                    (*(volatile unsigned int *)rpcpcellid0_adr)
  #define rpcpcellid1_adr                                0x00328ff4                                                   // rmppause_adr_base + 0x00000ff4
  #define rpcpcellid1                                    (*(volatile unsigned int *)rpcpcellid1_adr)
  #define rpcpcellid2_adr                                0x00328ff8                                                   // rmppause_adr_base + 0x00000ff8
  #define rpcpcellid2                                    (*(volatile unsigned int *)rpcpcellid2_adr)
  #define rpcpcellid3_adr                                0x00328ffc                                                   // rmppause_adr_base + 0x00000ffc
  #define rpcpcellid3                                    (*(volatile unsigned int *)rpcpcellid3_adr)
  #define wdogload_adr                                   0x00329000                                                   // watchdog_adr_base + 0x00000000
  #define wdogload                                       (*(volatile unsigned int *)wdogload_adr)
  #define wdogvalue_adr                                  0x00329004                                                   // watchdog_adr_base + 0x00000004
  #define wdogvalue                                      (*(volatile unsigned int *)wdogvalue_adr)
  #define wdogcontrol_adr                                0x00329008                                                   // watchdog_adr_base + 0x00000008
  #define wdogcontrol                                    (*(volatile unsigned int *)wdogcontrol_adr)
  #define wdogintclr_adr                                 0x0032900c                                                   // watchdog_adr_base + 0x0000000c
  #define wdogintclr                                     (*(volatile unsigned int *)wdogintclr_adr)
  #define wdogris_adr                                    0x00329010                                                   // watchdog_adr_base + 0x00000010
  #define wdogris                                        (*(volatile unsigned int *)wdogris_adr)
  #define wdogmis_adr                                    0x00329014                                                   // watchdog_adr_base + 0x00000014
  #define wdogmis                                        (*(volatile unsigned int *)wdogmis_adr)
  #define wdoglock_adr                                   0x00329c00                                                   // watchdog_adr_base + 0x00000c00
  #define wdoglock                                       (*(volatile unsigned int *)wdoglock_adr)
  #define wdogitcr_adr                                   0x00329f00                                                   // watchdog_adr_base + 0x00000f00
  #define wdogitcr                                       (*(volatile unsigned int *)wdogitcr_adr)
  #define wdogitop_adr                                   0x00329f04                                                   // watchdog_adr_base + 0x00000f04
  #define wdogitop                                       (*(volatile unsigned int *)wdogitop_adr)
  #define wdogperiphid0_adr                              0x00329fe0                                                   // watchdog_adr_base + 0x00000fe0
  #define wdogperiphid0                                  (*(volatile unsigned int *)wdogperiphid0_adr)
  #define wdogperiphid1_adr                              0x00329fe4                                                   // watchdog_adr_base + 0x00000fe4
  #define wdogperiphid1                                  (*(volatile unsigned int *)wdogperiphid1_adr)
  #define wdogperiphid2_adr                              0x00329fe8                                                   // watchdog_adr_base + 0x00000fe8
  #define wdogperiphid2                                  (*(volatile unsigned int *)wdogperiphid2_adr)
  #define wdogperiphid3_adr                              0x00329fec                                                   // watchdog_adr_base + 0x00000fec
  #define wdogperiphid3                                  (*(volatile unsigned int *)wdogperiphid3_adr)
  #define wdogpcellid0_adr                               0x00329ff0                                                   // watchdog_adr_base + 0x00000ff0
  #define wdogpcellid0                                   (*(volatile unsigned int *)wdogpcellid0_adr)
  #define wdogpcellid1_adr                               0x00329ff4                                                   // watchdog_adr_base + 0x00000ff4
  #define wdogpcellid1                                   (*(volatile unsigned int *)wdogpcellid1_adr)
  #define wdogpcellid2_adr                               0x00329ff8                                                   // watchdog_adr_base + 0x00000ff8
  #define wdogpcellid2                                   (*(volatile unsigned int *)wdogpcellid2_adr)
  #define wdogpcellid3_adr                               0x00329ffc                                                   // watchdog_adr_base + 0x00000ffc
  #define wdogpcellid3                                   (*(volatile unsigned int *)wdogpcellid3_adr)
  #define timer1load_adr                                 0x0032a000                                                   // timers_adr_base + 0x00000000
  #define timer1load                                     (*(volatile unsigned int *)timer1load_adr)
  #define timer1value_adr                                0x0032a004                                                   // timers_adr_base + 0x00000004
  #define timer1value                                    (*(volatile unsigned int *)timer1value_adr)
  #define timer1control_adr                              0x0032a008                                                   // timers_adr_base + 0x00000008
  #define timer1control                                  (*(volatile unsigned int *)timer1control_adr)
  #define timer1intclr_adr                               0x0032a00c                                                   // timers_adr_base + 0x0000000c
  #define timer1intclr                                   (*(volatile unsigned int *)timer1intclr_adr)
  #define timer1ris_adr                                  0x0032a010                                                   // timers_adr_base + 0x00000010
  #define timer1ris                                      (*(volatile unsigned int *)timer1ris_adr)
  #define timer1mis_adr                                  0x0032a014                                                   // timers_adr_base + 0x00000014
  #define timer1mis                                      (*(volatile unsigned int *)timer1mis_adr)
  #define timer1bgload_adr                               0x0032a018                                                   // timers_adr_base + 0x00000018
  #define timer1bgload                                   (*(volatile unsigned int *)timer1bgload_adr)
  #define timer1test_adr                                 0x0032a01c                                                   // timers_adr_base + 0x0000001c
  #define timer1test                                     (*(volatile unsigned int *)timer1test_adr)
  #define timer2load_adr                                 0x0032a020                                                   // timers_adr_base + 0x00000020
  #define timer2load                                     (*(volatile unsigned int *)timer2load_adr)
  #define timer2value_adr                                0x0032a024                                                   // timers_adr_base + 0x00000024
  #define timer2value                                    (*(volatile unsigned int *)timer2value_adr)
  #define timer2control_adr                              0x0032a028                                                   // timers_adr_base + 0x00000028
  #define timer2control                                  (*(volatile unsigned int *)timer2control_adr)
  #define timer2intclr_adr                               0x0032a02c                                                   // timers_adr_base + 0x0000002c
  #define timer2intclr                                   (*(volatile unsigned int *)timer2intclr_adr)
  #define timer2ris_adr                                  0x0032a030                                                   // timers_adr_base + 0x00000030
  #define timer2ris                                      (*(volatile unsigned int *)timer2ris_adr)
  #define timer2mis_adr                                  0x0032a034                                                   // timers_adr_base + 0x00000034
  #define timer2mis                                      (*(volatile unsigned int *)timer2mis_adr)
  #define timer2bgload_adr                               0x0032a038                                                   // timers_adr_base + 0x00000038
  #define timer2bgload                                   (*(volatile unsigned int *)timer2bgload_adr)
  #define timer2test_adr                                 0x0032a03c                                                   // timers_adr_base + 0x0000003c
  #define timer2test                                     (*(volatile unsigned int *)timer2test_adr)
  #define timeritcr_adr                                  0x0032af00                                                   // timers_adr_base + 0x00000f00
  #define timeritcr                                      (*(volatile unsigned int *)timeritcr_adr)
  #define timeritop_adr                                  0x0032af04                                                   // timers_adr_base + 0x00000f04
  #define timeritop                                      (*(volatile unsigned int *)timeritop_adr)
  #define tperiphid0_adr                                 0x0032afe0                                                   // timers_adr_base + 0x00000fe0
  #define tperiphid0                                     (*(volatile unsigned int *)tperiphid0_adr)
  #define tperiphid1_adr                                 0x0032afe4                                                   // timers_adr_base + 0x00000fe4
  #define tperiphid1                                     (*(volatile unsigned int *)tperiphid1_adr)
  #define tperiphid2_adr                                 0x0032afe8                                                   // timers_adr_base + 0x00000fe8
  #define tperiphid2                                     (*(volatile unsigned int *)tperiphid2_adr)
  #define tperiphid3_adr                                 0x0032afec                                                   // timers_adr_base + 0x00000fec
  #define tperiphid3                                     (*(volatile unsigned int *)tperiphid3_adr)
  #define tpcellid0_adr                                  0x0032aff0                                                   // timers_adr_base + 0x00000ff0
  #define tpcellid0                                      (*(volatile unsigned int *)tpcellid0_adr)
  #define tpcellid1_adr                                  0x0032aff4                                                   // timers_adr_base + 0x00000ff4
  #define tpcellid1                                      (*(volatile unsigned int *)tpcellid1_adr)
  #define tpcellid2_adr                                  0x0032aff8                                                   // timers_adr_base + 0x00000ff8
  #define tpcellid2                                      (*(volatile unsigned int *)tpcellid2_adr)
  #define tpcellid3_adr                                  0x0032affc                                                   // timers_adr_base + 0x00000ffc
  #define tpcellid3                                      (*(volatile unsigned int *)tpcellid3_adr)
  #define t2_timer1load_adr                              0x00341000                                                   // timers2_adr_base + 0x00000000
  #define t2_timer1load                                  (*(volatile unsigned int *)t2_timer1load_adr)
  #define t2_timer1value_adr                             0x00341004                                                   // timers2_adr_base + 0x00000004
  #define t2_timer1value                                 (*(volatile unsigned int *)t2_timer1value_adr)
  #define t2_timer1control_adr                           0x00341008                                                   // timers2_adr_base + 0x00000008
  #define t2_timer1control                               (*(volatile unsigned int *)t2_timer1control_adr)
  #define t2_timer1intclr_adr                            0x0034100c                                                   // timers2_adr_base + 0x0000000c
  #define t2_timer1intclr                                (*(volatile unsigned int *)t2_timer1intclr_adr)
  #define t2_timer1ris_adr                               0x00341010                                                   // timers2_adr_base + 0x00000010
  #define t2_timer1ris                                   (*(volatile unsigned int *)t2_timer1ris_adr)
  #define t2_timer1mis_adr                               0x00341014                                                   // timers2_adr_base + 0x00000014
  #define t2_timer1mis                                   (*(volatile unsigned int *)t2_timer1mis_adr)
  #define t2_timer1bgload_adr                            0x00341018                                                   // timers2_adr_base + 0x00000018
  #define t2_timer1bgload                                (*(volatile unsigned int *)t2_timer1bgload_adr)
  #define t2_timer1test_adr                              0x0034101c                                                   // timers2_adr_base + 0x0000001c
  #define t2_timer1test                                  (*(volatile unsigned int *)t2_timer1test_adr)
  #define t2_timer2load_adr                              0x00341020                                                   // timers2_adr_base + 0x00000020
  #define t2_timer2load                                  (*(volatile unsigned int *)t2_timer2load_adr)
  #define t2_timer2value_adr                             0x00341024                                                   // timers2_adr_base + 0x00000024
  #define t2_timer2value                                 (*(volatile unsigned int *)t2_timer2value_adr)
  #define t2_timer2control_adr                           0x00341028                                                   // timers2_adr_base + 0x00000028
  #define t2_timer2control                               (*(volatile unsigned int *)t2_timer2control_adr)
  #define t2_timer2intclr_adr                            0x0034102c                                                   // timers2_adr_base + 0x0000002c
  #define t2_timer2intclr                                (*(volatile unsigned int *)t2_timer2intclr_adr)
  #define t2_timer2ris_adr                               0x00341030                                                   // timers2_adr_base + 0x00000030
  #define t2_timer2ris                                   (*(volatile unsigned int *)t2_timer2ris_adr)
  #define t2_timer2mis_adr                               0x00341034                                                   // timers2_adr_base + 0x00000034
  #define t2_timer2mis                                   (*(volatile unsigned int *)t2_timer2mis_adr)
  #define t2_timer2bgload_adr                            0x00341038                                                   // timers2_adr_base + 0x00000038
  #define t2_timer2bgload                                (*(volatile unsigned int *)t2_timer2bgload_adr)
  #define t2_timer2test_adr                              0x0034103c                                                   // timers2_adr_base + 0x0000003c
  #define t2_timer2test                                  (*(volatile unsigned int *)t2_timer2test_adr)
  #define t2_timeritcr_adr                               0x00341f00                                                   // timers2_adr_base + 0x00000f00
  #define t2_timeritcr                                   (*(volatile unsigned int *)t2_timeritcr_adr)
  #define t2_timeritop_adr                               0x00341f04                                                   // timers2_adr_base + 0x00000f04
  #define t2_timeritop                                   (*(volatile unsigned int *)t2_timeritop_adr)
  #define t2_tperiphid0_adr                              0x00341fe0                                                   // timers2_adr_base + 0x00000fe0
  #define t2_tperiphid0                                  (*(volatile unsigned int *)t2_tperiphid0_adr)
  #define t2_tperiphid1_adr                              0x00341fe4                                                   // timers2_adr_base + 0x00000fe4
  #define t2_tperiphid1                                  (*(volatile unsigned int *)t2_tperiphid1_adr)
  #define t2_tperiphid2_adr                              0x00341fe8                                                   // timers2_adr_base + 0x00000fe8
  #define t2_tperiphid2                                  (*(volatile unsigned int *)t2_tperiphid2_adr)
  #define t2_tperiphid3_adr                              0x00341fec                                                   // timers2_adr_base + 0x00000fec
  #define t2_tperiphid3                                  (*(volatile unsigned int *)t2_tperiphid3_adr)
  #define t2_tpcellid0_adr                               0x00341ff0                                                   // timers2_adr_base + 0x00000ff0
  #define t2_tpcellid0                                   (*(volatile unsigned int *)t2_tpcellid0_adr)
  #define t2_tpcellid1_adr                               0x00341ff4                                                   // timers2_adr_base + 0x00000ff4
  #define t2_tpcellid1                                   (*(volatile unsigned int *)t2_tpcellid1_adr)
  #define t2_tpcellid2_adr                               0x00341ff8                                                   // timers2_adr_base + 0x00000ff8
  #define t2_tpcellid2                                   (*(volatile unsigned int *)t2_tpcellid2_adr)
  #define t2_tpcellid3_adr                               0x00341ffc                                                   // timers2_adr_base + 0x00000ffc
  #define t2_tpcellid3                                   (*(volatile unsigned int *)t2_tpcellid3_adr)
  #define gpio2data_adr                                  0x0032b000                                                   // gpio2_adr_base + 0x00000000
  #define gpio2data                                      (*(volatile unsigned int *)gpio2data_adr)
  #define gpio2dir_adr                                   0x0032b400                                                   // gpio2_adr_base + 0x00000400
  #define gpio2dir                                       (*(volatile unsigned int *)gpio2dir_adr)
  #define gpio2is_adr                                    0x0032b404                                                   // gpio2_adr_base + 0x00000404
  #define gpio2is                                        (*(volatile unsigned int *)gpio2is_adr)
  #define gpio2ibe_adr                                   0x0032b408                                                   // gpio2_adr_base + 0x00000408
  #define gpio2ibe                                       (*(volatile unsigned int *)gpio2ibe_adr)
  #define gpio2iev_adr                                   0x0032b40c                                                   // gpio2_adr_base + 0x0000040c
  #define gpio2iev                                       (*(volatile unsigned int *)gpio2iev_adr)
  #define gpio2ie_adr                                    0x0032b410                                                   // gpio2_adr_base + 0x00000410
  #define gpio2ie                                        (*(volatile unsigned int *)gpio2ie_adr)
  #define gpio2ris_adr                                   0x0032b414                                                   // gpio2_adr_base + 0x00000414
  #define gpio2ris                                       (*(volatile unsigned int *)gpio2ris_adr)
  #define gpio2mis_adr                                   0x0032b418                                                   // gpio2_adr_base + 0x00000418
  #define gpio2mis                                       (*(volatile unsigned int *)gpio2mis_adr)
  #define gpio2ic_adr                                    0x0032b41c                                                   // gpio2_adr_base + 0x0000041c
  #define gpio2ic                                        (*(volatile unsigned int *)gpio2ic_adr)
  #define gpio2afsel_adr                                 0x0032b420                                                   // gpio2_adr_base + 0x00000420
  #define gpio2afsel                                     (*(volatile unsigned int *)gpio2afsel_adr)
  #define gpio2itcr_adr                                  0x0032b600                                                   // gpio2_adr_base + 0x00000600
  #define gpio2itcr                                      (*(volatile unsigned int *)gpio2itcr_adr)
  #define gpio2itip1_adr                                 0x0032b604                                                   // gpio2_adr_base + 0x00000604
  #define gpio2itip1                                     (*(volatile unsigned int *)gpio2itip1_adr)
  #define gpio2itip2_adr                                 0x0032b608                                                   // gpio2_adr_base + 0x00000608
  #define gpio2itip2                                     (*(volatile unsigned int *)gpio2itip2_adr)
  #define gpio2itop1_adr                                 0x0032b60c                                                   // gpio2_adr_base + 0x0000060c
  #define gpio2itop1                                     (*(volatile unsigned int *)gpio2itop1_adr)
  #define gpio2itop2_adr                                 0x0032b610                                                   // gpio2_adr_base + 0x00000610
  #define gpio2itop2                                     (*(volatile unsigned int *)gpio2itop2_adr)
  #define gpio2itop3_adr                                 0x0032b614                                                   // gpio2_adr_base + 0x00000614
  #define gpio2itop3                                     (*(volatile unsigned int *)gpio2itop3_adr)
  #define gpio2periphid0_adr                             0x0032bfe0                                                   // gpio2_adr_base + 0x00000fe0
  #define gpio2periphid0                                 (*(volatile unsigned int *)gpio2periphid0_adr)
  #define gpio2periphid1_adr                             0x0032bfe4                                                   // gpio2_adr_base + 0x00000fe4
  #define gpio2periphid1                                 (*(volatile unsigned int *)gpio2periphid1_adr)
  #define gpio2periphid2_adr                             0x0032bfe8                                                   // gpio2_adr_base + 0x00000fe8
  #define gpio2periphid2                                 (*(volatile unsigned int *)gpio2periphid2_adr)
  #define gpio2periphid3_adr                             0x0032bfec                                                   // gpio2_adr_base + 0x00000fec
  #define gpio2periphid3                                 (*(volatile unsigned int *)gpio2periphid3_adr)
  #define gpio2pcellid0_adr                              0x0032bff0                                                   // gpio2_adr_base + 0x00000ff0
  #define gpio2pcellid0                                  (*(volatile unsigned int *)gpio2pcellid0_adr)
  #define gpio2pcellid1_adr                              0x0032bff4                                                   // gpio2_adr_base + 0x00000ff4
  #define gpio2pcellid1                                  (*(volatile unsigned int *)gpio2pcellid1_adr)
  #define gpio2pcellid2_adr                              0x0032bff8                                                   // gpio2_adr_base + 0x00000ff8
  #define gpio2pcellid2                                  (*(volatile unsigned int *)gpio2pcellid2_adr)
  #define gpio2pcellid3_adr                              0x0032bffc                                                   // gpio2_adr_base + 0x00000ffc
  #define gpio2pcellid3                                  (*(volatile unsigned int *)gpio2pcellid3_adr)
  #define gpiodata_adr                                   0x0032c000                                                   // gpio_adr_base + 0x00000000
  #define gpiodata                                       (*(volatile unsigned int *)gpiodata_adr)
  #define gpiodir_adr                                    0x0032c400                                                   // gpio_adr_base + 0x00000400
  #define gpiodir                                        (*(volatile unsigned int *)gpiodir_adr)
  #define gpiois_adr                                     0x0032c404                                                   // gpio_adr_base + 0x00000404
  #define gpiois                                         (*(volatile unsigned int *)gpiois_adr)
  #define gpioibe_adr                                    0x0032c408                                                   // gpio_adr_base + 0x00000408
  #define gpioibe                                        (*(volatile unsigned int *)gpioibe_adr)
  #define gpioiev_adr                                    0x0032c40c                                                   // gpio_adr_base + 0x0000040c
  #define gpioiev                                        (*(volatile unsigned int *)gpioiev_adr)
  #define gpioie_adr                                     0x0032c410                                                   // gpio_adr_base + 0x00000410
  #define gpioie                                         (*(volatile unsigned int *)gpioie_adr)
  #define gpioris_adr                                    0x0032c414                                                   // gpio_adr_base + 0x00000414
  #define gpioris                                        (*(volatile unsigned int *)gpioris_adr)
  #define gpiomis_adr                                    0x0032c418                                                   // gpio_adr_base + 0x00000418
  #define gpiomis                                        (*(volatile unsigned int *)gpiomis_adr)
  #define gpioic_adr                                     0x0032c41c                                                   // gpio_adr_base + 0x0000041c
  #define gpioic                                         (*(volatile unsigned int *)gpioic_adr)
  #define gpioafsel_adr                                  0x0032c420                                                   // gpio_adr_base + 0x00000420
  #define gpioafsel                                      (*(volatile unsigned int *)gpioafsel_adr)
  #define gpioitcr_adr                                   0x0032c600                                                   // gpio_adr_base + 0x00000600
  #define gpioitcr                                       (*(volatile unsigned int *)gpioitcr_adr)
  #define gpioitip1_adr                                  0x0032c604                                                   // gpio_adr_base + 0x00000604
  #define gpioitip1                                      (*(volatile unsigned int *)gpioitip1_adr)
  #define gpioitip2_adr                                  0x0032c608                                                   // gpio_adr_base + 0x00000608
  #define gpioitip2                                      (*(volatile unsigned int *)gpioitip2_adr)
  #define gpioitop1_adr                                  0x0032c60c                                                   // gpio_adr_base + 0x0000060c
  #define gpioitop1                                      (*(volatile unsigned int *)gpioitop1_adr)
  #define gpioitop2_adr                                  0x0032c610                                                   // gpio_adr_base + 0x00000610
  #define gpioitop2                                      (*(volatile unsigned int *)gpioitop2_adr)
  #define gpioitop3_adr                                  0x0032c614                                                   // gpio_adr_base + 0x00000614
  #define gpioitop3                                      (*(volatile unsigned int *)gpioitop3_adr)
  #define gpioperiphid0_adr                              0x0032cfe0                                                   // gpio_adr_base + 0x00000fe0
  #define gpioperiphid0                                  (*(volatile unsigned int *)gpioperiphid0_adr)
  #define gpioperiphid1_adr                              0x0032cfe4                                                   // gpio_adr_base + 0x00000fe4
  #define gpioperiphid1                                  (*(volatile unsigned int *)gpioperiphid1_adr)
  #define gpioperiphid2_adr                              0x0032cfe8                                                   // gpio_adr_base + 0x00000fe8
  #define gpioperiphid2                                  (*(volatile unsigned int *)gpioperiphid2_adr)
  #define gpioperiphid3_adr                              0x0032cfec                                                   // gpio_adr_base + 0x00000fec
  #define gpioperiphid3                                  (*(volatile unsigned int *)gpioperiphid3_adr)
  #define gpiopcellid0_adr                               0x0032cff0                                                   // gpio_adr_base + 0x00000ff0
  #define gpiopcellid0                                   (*(volatile unsigned int *)gpiopcellid0_adr)
  #define gpiopcellid1_adr                               0x0032cff4                                                   // gpio_adr_base + 0x00000ff4
  #define gpiopcellid1                                   (*(volatile unsigned int *)gpiopcellid1_adr)
  #define gpiopcellid2_adr                               0x0032cff8                                                   // gpio_adr_base + 0x00000ff8
  #define gpiopcellid2                                   (*(volatile unsigned int *)gpiopcellid2_adr)
  #define gpiopcellid3_adr                               0x0032cffc                                                   // gpio_adr_base + 0x00000ffc
  #define gpiopcellid3                                   (*(volatile unsigned int *)gpiopcellid3_adr)
  #define cr_clk_div_sel_adr                             0x00320000                                                   // pmu_adr_base + 0x00000000
  #define cr_clk_div_sel                                 (*(volatile unsigned int *)cr_clk_div_sel_adr)
  #define cr_clk_src_sel_adr                             0x00320004                                                   // pmu_adr_base + 0x00000004
  #define cr_clk_src_sel                                 (*(volatile unsigned int *)cr_clk_src_sel_adr)
  #define cr_clk_switch_adr                              0x00320008                                                   // pmu_adr_base + 0x00000008
  #define cr_clk_switch                                  (*(volatile unsigned int *)cr_clk_switch_adr)
  #define cr_xtal_lpo_div_adr                            0x0032000c                                                   // pmu_adr_base + 0x0000000c
  #define cr_xtal_lpo_div                                (*(volatile unsigned int *)cr_xtal_lpo_div_adr)
  #define cr_lpo_sel_adr                                 0x00320010                                                   // pmu_adr_base + 0x00000010
  #define cr_lpo_sel                                     (*(volatile unsigned int *)cr_lpo_sel_adr)
  #define cr_err_est_cnt_adr                             0x00320014                                                   // pmu_adr_base + 0x00000014
  #define cr_err_est_cnt                                 (*(volatile unsigned int *)cr_err_est_cnt_adr)
  #define cr_err_result_adr                              0x00320018                                                   // pmu_adr_base + 0x00000018
  #define cr_err_result                                  (*(volatile unsigned int *)cr_err_result_adr)
  #define cr_err_en_adr                                  0x0032001c                                                   // pmu_adr_base + 0x0000001c
  #define cr_err_en                                      (*(volatile unsigned int *)cr_err_en_adr)
  #define cr_sleep_cnt_adr                               0x00320020                                                   // pmu_adr_base + 0x00000020
  #define cr_sleep_cnt                                   (*(volatile unsigned int *)cr_sleep_cnt_adr)
  #define cr_warmup_cnt_adr                              0x00320024                                                   // pmu_adr_base + 0x00000024
  #define cr_warmup_cnt                                  (*(volatile unsigned int *)cr_warmup_cnt_adr)
  #define cr_sleep_en_adr                                0x00320028                                                   // pmu_adr_base + 0x00000028
  #define cr_sleep_en                                    (*(volatile unsigned int *)cr_sleep_en_adr)
  #define cr_sleep_remain_adr                            0x0032002c                                                   // pmu_adr_base + 0x0000002c
  #define cr_sleep_remain                                (*(volatile unsigned int *)cr_sleep_remain_adr)
  #define version_adr                                    0x00320030                                                   // pmu_adr_base + 0x00000030
  #define version                                        (*(volatile unsigned int *)version_adr)
  #define xtal_strap_adr                                 0x00320034                                                   // pmu_adr_base + 0x00000034
  #define xtal_strap                                     (*(volatile unsigned int *)xtal_strap_adr)
  #define cr_rpu_gate_ctl_adr                            0x00320038                                                   // pmu_adr_base + 0x00000038
  #define cr_rpu_gate_ctl                                (*(volatile unsigned int *)cr_rpu_gate_ctl_adr)
  #define cr_mem_stby_ctl_adr0                           0x0032003c                                                   // pmu_adr_base + 0x0000003c
  #define cr_mem_stby_ctl0                               (*(volatile unsigned int *)cr_mem_stby_ctl_adr0)
  #define cr_xtal_1m_int_adr                             0x00320040                                                   // pmu_adr_base + 0x00000040
  #define cr_xtal_1m_int                                 (*(volatile unsigned int *)cr_xtal_1m_int_adr)
  #define cr_xtal_1m_frac_adr                            0x00320044                                                   // pmu_adr_base + 0x00000044
  #define cr_xtal_1m_frac                                (*(volatile unsigned int *)cr_xtal_1m_frac_adr)
  #define cr_i2c_pump_adr                                0x00320048                                                   // pmu_adr_base + 0x00000048
  #define cr_i2c_pump                                    (*(volatile unsigned int *)cr_i2c_pump_adr)
  #define sr_warmup_remain_adr                           0x0032004c                                                   // pmu_adr_base + 0x0000004c
  #define sr_warmup_remain                               (*(volatile unsigned int *)sr_warmup_remain_adr)
  #define sr_clk_status_adr                              0x00320050                                                   // pmu_adr_base + 0x00000050
  #define sr_clk_status                                  (*(volatile unsigned int *)sr_clk_status_adr)
  #define cr_lpo_timer_adr                               0x00320054                                                   // pmu_adr_base + 0x00000054
  #define cr_lpo_timer                                   (*(volatile unsigned int *)cr_lpo_timer_adr)
  #define cr_wake_int_en_adr                             0x00320058                                                   // pmu_adr_base + 0x00000058
  #define cr_wake_int_en                                 (*(volatile unsigned int *)cr_wake_int_en_adr)
  #define cr_pulse_reset_adr                             0x0032005c                                                   // pmu_adr_base + 0x0000005c
  #define cr_pulse_reset                                 (*(volatile unsigned int *)cr_pulse_reset_adr)
  #define cr_level_reset_adr                             0x00320060                                                   // pmu_adr_base + 0x00000060
  #define cr_level_reset                                 (*(volatile unsigned int *)cr_level_reset_adr)
  #define cr_mem_ctl_adr                                 0x00320064                                                   // pmu_adr_base + 0x00000064
  #define cr_mem_ctl                                     (*(volatile unsigned int *)cr_mem_ctl_adr)
  #define cr_pad_config_adr0                             0x00320068                                                   // pmu_adr_base + 0x00000068
  #define cr_pad_config0                                 (*(volatile unsigned int *)cr_pad_config_adr0)
  #define cr_pad_config_adr1                             0x0032006c                                                   // pmu_adr_base + 0x0000006c
  #define cr_pad_config1                                 (*(volatile unsigned int *)cr_pad_config_adr1)
  #define cr_pad_config_adr2                             0x00320070                                                   // pmu_adr_base + 0x00000070
  #define cr_pad_config2                                 (*(volatile unsigned int *)cr_pad_config_adr2)
  #define cr_pad_config_adr3                             0x00320074                                                   // pmu_adr_base + 0x00000074
  #define cr_pad_config3                                 (*(volatile unsigned int *)cr_pad_config_adr3)
  #define cr_pad_config_adr4                             0x00320078                                                   // pmu_adr_base + 0x00000078
  #define cr_pad_config4                                 (*(volatile unsigned int *)cr_pad_config_adr4)
  #define cr_pad_config_adr5                             0x0032007c                                                   // pmu_adr_base + 0x0000007c
  #define cr_pad_config5                                 (*(volatile unsigned int *)cr_pad_config_adr5)
  #define cr_pad_config_adr6                             0x00320080                                                   // pmu_adr_base + 0x00000080
  #define cr_pad_config6                                 (*(volatile unsigned int *)cr_pad_config_adr6)
  #define cr_pad_dbg_ctl_adr                             0x00320084                                                   // pmu_adr_base + 0x00000084
  #define cr_pad_dbg_ctl                                 (*(volatile unsigned int *)cr_pad_dbg_ctl_adr)
  #define cr_pad_fcn_ctl_adr0                            0x00320088                                                   // pmu_adr_base + 0x00000088
  #define cr_pad_fcn_ctl0                                (*(volatile unsigned int *)cr_pad_fcn_ctl_adr0)
  #define cr_pad_fcn_ctl_adr1                            0x0032008c                                                   // pmu_adr_base + 0x0000008c
  #define cr_pad_fcn_ctl1                                (*(volatile unsigned int *)cr_pad_fcn_ctl_adr1)
  #define cr_pad_fcn_ctl_adr2                            0x00320090                                                   // pmu_adr_base + 0x00000090
  #define cr_pad_fcn_ctl2                                (*(volatile unsigned int *)cr_pad_fcn_ctl_adr2)
  #define cr_ptu_clk_en_adr                              0x00320094                                                   // pmu_adr_base + 0x00000094
  #define cr_ptu_clk_en                                  (*(volatile unsigned int *)cr_ptu_clk_en_adr)
  #define cr_bpl_upi_gate_ctl_adr                        0x00320098                                                   // pmu_adr_base + 0x00000098
  #define cr_bpl_upi_gate_ctl                            (*(volatile unsigned int *)cr_bpl_upi_gate_ctl_adr)
  #define cr_pll_wrmup_cnt_adr                           0x0032009c                                                   // pmu_adr_base + 0x0000009c
  #define cr_pll_wrmup_cnt                               (*(volatile unsigned int *)cr_pll_wrmup_cnt_adr)
  #define cr_sdio_clk_sel_adr                            0x003200a0                                                   // pmu_adr_base + 0x000000a0
  #define cr_sdio_clk_sel                                (*(volatile unsigned int *)cr_sdio_clk_sel_adr)
  #define cr_pwr_ctl_adr                                 0x003200a4                                                   // pmu_adr_base + 0x000000a4
  #define cr_pwr_ctl                                     (*(volatile unsigned int *)cr_pwr_ctl_adr)
  #define cr_mem_ovst_ctl_adr                            0x003200a8                                                   // pmu_adr_base + 0x000000a8
  #define cr_mem_ovst_ctl                                (*(volatile unsigned int *)cr_mem_ovst_ctl_adr)
  #define cr_xtal_buf_dly_byp_adr                        0x003200ac                                                   // pmu_adr_base + 0x000000ac
  #define cr_xtal_buf_dly_byp                            (*(volatile unsigned int *)cr_xtal_buf_dly_byp_adr)
  #define cr_lpo_tim_ctl_adr                             0x003200b0                                                   // pmu_adr_base + 0x000000b0
  #define cr_lpo_tim_ctl                                 (*(volatile unsigned int *)cr_lpo_tim_ctl_adr)
  #define cr_tport_clk_sel_adr                           0x003200b4                                                   // pmu_adr_base + 0x000000b4
  #define cr_tport_clk_sel                               (*(volatile unsigned int *)cr_tport_clk_sel_adr)
  #define cr_ptu_clk_gate_on_adr                         0x003200b8                                                   // pmu_adr_base + 0x000000b8
  #define cr_ptu_clk_gate_on                             (*(volatile unsigned int *)cr_ptu_clk_gate_on_adr)
  #define cr_ptu_clk_gate_off_adr                        0x003200bc                                                   // pmu_adr_base + 0x000000bc
  #define cr_ptu_clk_gate_off                            (*(volatile unsigned int *)cr_ptu_clk_gate_off_adr)
  #define sr_pmu_status_adr                              0x003200c0                                                   // pmu_adr_base + 0x000000c0
  #define sr_pmu_status                                  (*(volatile unsigned int *)sr_pmu_status_adr)
  #define sr_pmu_en_adr                                  0x003200c4                                                   // pmu_adr_base + 0x000000c4
  #define sr_pmu_en                                      (*(volatile unsigned int *)sr_pmu_en_adr)
  #define sr_pmu_sdis_adr                                0x003200c8                                                   // pmu_adr_base + 0x000000c8
  #define sr_pmu_sdis                                    (*(volatile unsigned int *)sr_pmu_sdis_adr)
  #define fm_sleep_cnt_adr                               0x003200cc                                                   // pmu_adr_base + 0x000000cc
  #define fm_sleep_cnt                                   (*(volatile unsigned int *)fm_sleep_cnt_adr)
  #define fm_warn_cnt_adr                                0x003200d0                                                   // pmu_adr_base + 0x000000d0
  #define fm_warn_cnt                                    (*(volatile unsigned int *)fm_warn_cnt_adr)
  #define fm_warmup_cnt_adr                              0x003200d8                                                   // pmu_adr_base + 0x000000d8
  #define fm_warmup_cnt                                  (*(volatile unsigned int *)fm_warmup_cnt_adr)
  #define cr_mtu_clk_en_adr                              0x003200dc                                                   // pmu_adr_base + 0x000000dc
  #define cr_mtu_clk_en                                  (*(volatile unsigned int *)cr_mtu_clk_en_adr)
  #define cr_clk_req_cfg_adr                             0x003200e0                                                   // pmu_adr_base + 0x000000e0
  #define cr_clk_req_cfg                                 (*(volatile unsigned int *)cr_clk_req_cfg_adr)
  #define cr_pad_config_adr7                             0x003200e4                                                   // pmu_adr_base + 0x000000e4
  #define cr_pad_config7                                 (*(volatile unsigned int *)cr_pad_config_adr7)
  #define fm_sleep_en_adr                                0x003200e8                                                   // pmu_adr_base + 0x000000e8
  #define fm_sleep_en                                    (*(volatile unsigned int *)fm_sleep_en_adr)
  #define fm_sleep_remain_adr                            0x003200ec                                                   // pmu_adr_base + 0x000000ec
  #define fm_sleep_remain                                (*(volatile unsigned int *)fm_sleep_remain_adr)
  #define cr_mem_tm_ctl_adr                              0x003200f0                                                   // pmu_adr_base + 0x000000f0
  #define cr_mem_tm_ctl                                  (*(volatile unsigned int *)cr_mem_tm_ctl_adr)
  #define cr_mem_stby_ctl_adr1                           0x003200f4                                                   // pmu_adr_base + 0x000000f4
  #define cr_mem_stby_ctl1                               (*(volatile unsigned int *)cr_mem_stby_ctl_adr1)
  #define cr_wake_int_en_2_adr                           0x003200f8                                                   // pmu_adr_base + 0x000000f8
  #define cr_wake_int_en_2                               (*(volatile unsigned int *)cr_wake_int_en_2_adr)
  #define cr_buf_wrmup_cnt_adr                           0x003200fc                                                   // pmu_adr_base + 0x000000fc
  #define cr_buf_wrmup_cnt                               (*(volatile unsigned int *)cr_buf_wrmup_cnt_adr)
  #define cr_pulse_reset_peri_adr                        0x00320100                                                   // pmu_adr_base + 0x00000100
  #define cr_pulse_reset_peri                            (*(volatile unsigned int *)cr_pulse_reset_peri_adr)
  #define cr_level_reset_peri_adr                        0x00320104                                                   // pmu_adr_base + 0x00000104
  #define cr_level_reset_peri                            (*(volatile unsigned int *)cr_level_reset_peri_adr)
  #define fm_hclk_fm_on_adr                              0x00320108                                                   // pmu_adr_base + 0x00000108
  #define fm_hclk_fm_on                                  (*(volatile unsigned int *)fm_hclk_fm_on_adr)
  #define cr_pad_config_adr8                             0x00320110                                                   // pmu_adr_base + 0x00000110
  #define cr_pad_config8                                 (*(volatile unsigned int *)cr_pad_config_adr8)
  #define cr_mem_stby_ctl_adr2                           0x00320114                                                   // pmu_adr_base + 0x00000114
  #define cr_mem_stby_ctl2                               (*(volatile unsigned int *)cr_mem_stby_ctl_adr2)
  #define cr_mem_stby_ctl_adr3                           0x00320118                                                   // pmu_adr_base + 0x00000118
  #define cr_mem_stby_ctl3                               (*(volatile unsigned int *)cr_mem_stby_ctl_adr3)
  #define cr_ns_clk_ctl_adr                              0x0032010c                                                   // pmu_adr_base + 0x0000010c
  #define cr_ns_clk_ctl                                  (*(volatile unsigned int *)cr_ns_clk_ctl_adr)
  #define cr_iic_clk_sel_adr                             0x003201bc                                                   // pmu_adr_base + 0x000001bc
  #define cr_iic_clk_sel                                 (*(volatile unsigned int *)cr_iic_clk_sel_adr)
  #define cr_pds_lpo_cal_ctrl_adr                        0x00320300                                                   // pmu_adr_base + 0x00000300
  #define cr_pds_lpo_cal_ctrl                            (*(volatile unsigned int *)cr_pds_lpo_cal_ctrl_adr)
  #define cr_pds_lpo_cal_result_adr                      0x00320304                                                   // pmu_adr_base + 0x00000304
  #define cr_pds_lpo_cal_result                          (*(volatile unsigned int *)cr_pds_lpo_cal_result_adr)
  #define cr_smux_ctl_adr0                               0x0032011c                                                   // pmu_adr_base + 0x0000011c
  #define cr_smux_ctl0                                   (*(volatile unsigned int *)cr_smux_ctl_adr0)
  #define cr_smux_ctl_adr1                               0x00320120                                                   // pmu_adr_base + 0x00000120
  #define cr_smux_ctl1                                   (*(volatile unsigned int *)cr_smux_ctl_adr1)
  #define cr_smux_ctl_adr2                               0x00320124                                                   // pmu_adr_base + 0x00000124
  #define cr_smux_ctl2                                   (*(volatile unsigned int *)cr_smux_ctl_adr2)
  #define cr_smux_ctl_adr3                               0x00320128                                                   // pmu_adr_base + 0x00000128
  #define cr_smux_ctl3                                   (*(volatile unsigned int *)cr_smux_ctl_adr3)
  #define cr_smux_ctl_adr4                               0x0032012c                                                   // pmu_adr_base + 0x0000012c
  #define cr_smux_ctl4                                   (*(volatile unsigned int *)cr_smux_ctl_adr4)
  #define cr_smux_ctl_adr5                               0x00320130                                                   // pmu_adr_base + 0x00000130
  #define cr_smux_ctl5                                   (*(volatile unsigned int *)cr_smux_ctl_adr5)
  #define cr_smux_ctl_adr8                               0x00320134                                                   // pmu_adr_base + 0x00000134
  #define cr_smux_ctl8                                   (*(volatile unsigned int *)cr_smux_ctl_adr8)
  #define cr_smux_ctl_adr10                              0x00320154                                                   // pmu_adr_base + 0x00000154
  #define cr_smux_ctl10                                  (*(volatile unsigned int *)cr_smux_ctl_adr10)
  #define cr_smux_ctl_adr6                               0x00320138                                                   // pmu_adr_base + 0x00000138
  #define cr_smux_ctl6                                   (*(volatile unsigned int *)cr_smux_ctl_adr6)
  #define cr_smux_ctl_adr7                               0x0032013c                                                   // pmu_adr_base + 0x0000013c
  #define cr_smux_ctl7                                   (*(volatile unsigned int *)cr_smux_ctl_adr7)
  #define cr_smux_ctl_adr9                               0x00320150                                                   // pmu_adr_base + 0x00000150
  #define cr_smux_ctl9                                   (*(volatile unsigned int *)cr_smux_ctl_adr9)
  #define cr_err_ovr_val_adr                             0x00320140                                                   // pmu_adr_base + 0x00000140
  #define cr_err_ovr_val                                 (*(volatile unsigned int *)cr_err_ovr_val_adr)
  #define cr_err_format_adr                              0x00320144                                                   // pmu_adr_base + 0x00000144
  #define cr_err_format                                  (*(volatile unsigned int *)cr_err_format_adr)
  #define cr_sleep_slots_adr                             0x00320148                                                   // pmu_adr_base + 0x00000148
  #define cr_sleep_slots                                 (*(volatile unsigned int *)cr_sleep_slots_adr)
  #define cr_dap_clk_sel_adr                             0x0032014c                                                   // pmu_adr_base + 0x0000014c
  #define cr_dap_clk_sel                                 (*(volatile unsigned int *)cr_dap_clk_sel_adr)
  #define cr_gci_clk_sel_adr                             0x0032022c                                                   // pmu_adr_base + 0x0000022c
  #define cr_gci_clk_sel                                 (*(volatile unsigned int *)cr_gci_clk_sel_adr)
  #define cr_jtmode_status_adr                           0x00320180                                                   // pmu_adr_base + 0x00000180
  #define cr_jtmode_status                               (*(volatile unsigned int *)cr_jtmode_status_adr)
  #define cr_smuxo_inv_adr                               0x00320158                                                   // pmu_adr_base + 0x00000158
  #define cr_smuxo_inv                                   (*(volatile unsigned int *)cr_smuxo_inv_adr)
  #define cr_dmp_wr_ptr_adr                              0x00320160                                                   // pmu_adr_base + 0x00000160
  #define cr_dmp_wr_ptr                                  (*(volatile unsigned int *)cr_dmp_wr_ptr_adr)
  #define cr_dmp_rd_ptr_status_adr                       0x00320164                                                   // pmu_adr_base + 0x00000164
  #define cr_dmp_rd_ptr_status                           (*(volatile unsigned int *)cr_dmp_rd_ptr_status_adr)
  #define cr_dmp_p2s_config_adr                          0x00320168                                                   // pmu_adr_base + 0x00000168
  #define cr_dmp_p2s_config                              (*(volatile unsigned int *)cr_dmp_p2s_config_adr)
  #define cr_dmp_mem_adr                                 0x00320200                                                   // pmu_adr_base + 0x00000200
  #define cr_dmp_mem                                     (*(volatile unsigned int *)cr_dmp_mem_adr)
  #define cr_aes_clk_cfg_adr                             0x0032016c                                                   // pmu_adr_base + 0x0000016c
  #define cr_aes_clk_cfg                                 (*(volatile unsigned int *)cr_aes_clk_cfg_adr)
  #define epm_flash_pad_ctl_adr                          0x00320170                                                   // pmu_adr_base + 0x00000170
  #define epm_flash_pad_ctl                              (*(volatile unsigned int *)epm_flash_pad_ctl_adr)
  #define cr_pad_config_slim_adr                         0x00320174                                                   // pmu_adr_base + 0x00000174
  #define cr_pad_config_slim                             (*(volatile unsigned int *)cr_pad_config_slim_adr)
  #define cr_fmrc_count_adr                              0x00320178                                                   // pmu_adr_base + 0x00000178
  #define cr_fmrc_count                                  (*(volatile unsigned int *)cr_fmrc_count_adr)
  #define cr_fm_xtal_ctl_adr                             0x0032017c                                                   // pmu_adr_base + 0x0000017c
  #define cr_fm_xtal_ctl                                 (*(volatile unsigned int *)cr_fm_xtal_ctl_adr)
  #define cr_pad_config_src_adr                          0x0032015c                                                   // pmu_adr_base + 0x0000015c
  #define cr_pad_config_src                              (*(volatile unsigned int *)cr_pad_config_src_adr)
  #define bgldo_adr                                      0x00320184                                                   // pmu_adr_base + 0x00000184
  #define bgldo                                          (*(volatile unsigned int *)bgldo_adr)
  #define hvldo_adr                                      0x00320188                                                   // pmu_adr_base + 0x00000188
  #define hvldo                                          (*(volatile unsigned int *)hvldo_adr)
  #define lpldo_adr                                      0x0032018c                                                   // pmu_adr_base + 0x0000018c
  #define lpldo                                          (*(volatile unsigned int *)lpldo_adr)
  #define btldo_adr                                      0x00320190                                                   // pmu_adr_base + 0x00000190
  #define btldo                                          (*(volatile unsigned int *)btldo_adr)
  #define auxldo_adr                                     0x00320194                                                   // pmu_adr_base + 0x00000194
  #define auxldo                                         (*(volatile unsigned int *)auxldo_adr)
  #define gpsldo_adr                                     0x00320198                                                   // pmu_adr_base + 0x00000198
  #define gpsldo                                         (*(volatile unsigned int *)gpsldo_adr)
  #define gpsrfldo_adr                                   0x0032019c                                                   // pmu_adr_base + 0x0000019c
  #define gpsrfldo                                       (*(volatile unsigned int *)gpsrfldo_adr)
  #define cr_spi_clk_sel_adr                             0x003201a0                                                   // pmu_adr_base + 0x000001a0
  #define cr_spi_clk_sel                                 (*(volatile unsigned int *)cr_spi_clk_sel_adr)
  #define cr_pad_config_adr9                             0x003201a4                                                   // pmu_adr_base + 0x000001a4
  #define cr_pad_config9                                 (*(volatile unsigned int *)cr_pad_config_adr9)
  #define cr_pad_fcn_ctl_adr3                            0x003201a8                                                   // pmu_adr_base + 0x000001a8
  #define cr_pad_fcn_ctl3                                (*(volatile unsigned int *)cr_pad_fcn_ctl_adr3)
  #define cr_pad_config_adr10                            0x003201ac                                                   // pmu_adr_base + 0x000001ac
  #define cr_pad_config10                                (*(volatile unsigned int *)cr_pad_config_adr10)
  #define cr_pad_config_adr11                            0x003201b0                                                   // pmu_adr_base + 0x000001b0
  #define cr_pad_config11                                (*(volatile unsigned int *)cr_pad_config_adr11)
  #define cr_pad_config_adr12                            0x003201b4                                                   // pmu_adr_base + 0x000001b4
  #define cr_pad_config12                                (*(volatile unsigned int *)cr_pad_config_adr12)
  #define cr_pad_fcn_ctl_adr4                            0x003201b8                                                   // pmu_adr_base + 0x000001b8
  #define cr_pad_fcn_ctl4                                (*(volatile unsigned int *)cr_pad_fcn_ctl_adr4)
  #define cr_mem_stby_ctl_adr4                           0x003201c0                                                   // pmu_adr_base + 0x000001c0
  #define cr_mem_stby_ctl4                               (*(volatile unsigned int *)cr_mem_stby_ctl_adr4)
  #define cr_pad_fcn_ctl_ext_adr                         0x00320218                                                   // pmu_adr_base + 0x00000218
  #define cr_pad_fcn_ctl_ext                             (*(volatile unsigned int *)cr_pad_fcn_ctl_ext_adr)
  #define cr_pad_fcn_ctl_lhl_adr                         0x0032021c                                                   // pmu_adr_base + 0x0000021c
  #define cr_pad_fcn_ctl_lhl                             (*(volatile unsigned int *)cr_pad_fcn_ctl_lhl_adr)
  #define iso_cntl_adr                                   0x003201c4                                                   // pmu_adr_base + 0x000001c4
  #define iso_cntl                                       (*(volatile unsigned int *)iso_cntl_adr)
  #define bgldo_sleepcntl_adr                            0x003201c8                                                   // pmu_adr_base + 0x000001c8
  #define bgldo_sleepcntl                                (*(volatile unsigned int *)bgldo_sleepcntl_adr)
  #define hvldo_sleepcntl_adr                            0x003201cc                                                   // pmu_adr_base + 0x000001cc
  #define hvldo_sleepcntl                                (*(volatile unsigned int *)hvldo_sleepcntl_adr)
  #define lpldo_sleepcntl_adr                            0x003201d0                                                   // pmu_adr_base + 0x000001d0
  #define lpldo_sleepcntl                                (*(volatile unsigned int *)lpldo_sleepcntl_adr)
  #define btldo_sleepcntl_adr                            0x003201d4                                                   // pmu_adr_base + 0x000001d4
  #define btldo_sleepcntl                                (*(volatile unsigned int *)btldo_sleepcntl_adr)
  #define ldo_cntl_enable_adr                            0x003201d8                                                   // pmu_adr_base + 0x000001d8
  #define ldo_cntl_enable                                (*(volatile unsigned int *)ldo_cntl_enable_adr)
  #define otp_stby_mode_adr                              0x003201dc                                                   // pmu_adr_base + 0x000001dc
  #define otp_stby_mode                                  (*(volatile unsigned int *)otp_stby_mode_adr)
  #define cr_ptu_sda_adr                                 0x003201e0                                                   // pmu_adr_base + 0x000001e0
  #define cr_ptu_sda                                     (*(volatile unsigned int *)cr_ptu_sda_adr)
  #define cr_tcxo_buf_warmup_cnt_adr                     0x003201e4                                                   // pmu_adr_base + 0x000001e4
  #define cr_tcxo_buf_warmup_cnt                         (*(volatile unsigned int *)cr_tcxo_buf_warmup_cnt_adr)
  #define cr_xo_tcxo_force_pd_adr                        0x003201e8                                                   // pmu_adr_base + 0x000001e8
  #define cr_xo_tcxo_force_pd                            (*(volatile unsigned int *)cr_xo_tcxo_force_pd_adr)
  #define cr_tport2_clk_sel_adr                          0x003201ec                                                   // pmu_adr_base + 0x000001ec
  #define cr_tport2_clk_sel                              (*(volatile unsigned int *)cr_tport2_clk_sel_adr)
  #define temp_adc_indadr_adr                            0x003201f0                                                   // pmu_adr_base + 0x000001f0
  #define temp_adc_indadr                                (*(volatile unsigned int *)temp_adc_indadr_adr)
  #define temp_adc_rdata_adr                             0x003201f4                                                   // pmu_adr_base + 0x000001f4
  #define temp_adc_rdata                                 (*(volatile unsigned int *)temp_adc_rdata_adr)
  #define temp_adc_wdata_adr                             0x003201f8                                                   // pmu_adr_base + 0x000001f8
  #define temp_adc_wdata                                 (*(volatile unsigned int *)temp_adc_wdata_adr)
  #define wlan_mem_sel_adr                               0x003201fc                                                   // pmu_adr_base + 0x000001fc
  #define wlan_mem_sel                                   (*(volatile unsigned int *)wlan_mem_sel_adr)
  #define gps_mem_sel_adr                                0x00320204                                                   // pmu_adr_base + 0x00000204
  #define gps_mem_sel                                    (*(volatile unsigned int *)gps_mem_sel_adr)
  #define nfc_scratch_pad1_adr                           0x00320208                                                   // pmu_adr_base + 0x00000208
  #define nfc_scratch_pad1                               (*(volatile unsigned int *)nfc_scratch_pad1_adr)
  #define nfc_scratch_pad2_adr                           0x0032020c                                                   // pmu_adr_base + 0x0000020c
  #define nfc_scratch_pad2                               (*(volatile unsigned int *)nfc_scratch_pad2_adr)
  #define nfc_scratch_pad3_adr                           0x00320210                                                   // pmu_adr_base + 0x00000210
  #define nfc_scratch_pad3                               (*(volatile unsigned int *)nfc_scratch_pad3_adr)
  #define nfc_scratch_pad4_adr                           0x00320214                                                   // pmu_adr_base + 0x00000214
  #define nfc_scratch_pad4                               (*(volatile unsigned int *)nfc_scratch_pad4_adr)
  #define cr_wake_int_en_3_adr                           0x00320220                                                   // pmu_adr_base + 0x00000220
  #define cr_wake_int_en_3                               (*(volatile unsigned int *)cr_wake_int_en_3_adr)
  #define cr_mac154_clk_cfg_adr                          0x00320224                                                   // pmu_adr_base + 0x00000224
  #define cr_mac154_clk_cfg                              (*(volatile unsigned int *)cr_mac154_clk_cfg_adr)
  #define cr_seceng_clk_cfg_adr                          0x00320228                                                   // pmu_adr_base + 0x00000228
  #define cr_seceng_clk_cfg                              (*(volatile unsigned int *)cr_seceng_clk_cfg_adr)
  #define cr_hidoff_dur_trk_ctl_adr                      0x00320250                                                   // pmu_adr_base + 0x00000250
  #define cr_hidoff_dur_trk_ctl                          (*(volatile unsigned int *)cr_hidoff_dur_trk_ctl_adr)
  #define sr_hidoff_natpclk_snap_adr                     0x00320254                                                   // pmu_adr_base + 0x00000254
  #define sr_hidoff_natpclk_snap                         (*(volatile unsigned int *)sr_hidoff_natpclk_snap_adr)
  #define sr_hidoff_natclk_snap_adr                      0x00320258                                                   // pmu_adr_base + 0x00000258
  #define sr_hidoff_natclk_snap                          (*(volatile unsigned int *)sr_hidoff_natclk_snap_adr)
  #define cr_pdm_cfg_adr                                 0x00320234                                                   // pmu_adr_base + 0x00000234
  #define cr_pdm_cfg                                     (*(volatile unsigned int *)cr_pdm_cfg_adr)
  #define cr_mstr_sleep_sel_adr                          0x00320400                                                   // pmu_adr_base + 0x00000400
  #define cr_mstr_sleep_sel                              (*(volatile unsigned int *)cr_mstr_sleep_sel_adr)
  #define cr_ifpll_on_adr                                0x00320404                                                   // pmu_adr_base + 0x00000404
  #define cr_ifpll_on                                    (*(volatile unsigned int *)cr_ifpll_on_adr)
  #define cr_rpu_1m_div_adr                              0x00320408                                                   // pmu_adr_base + 0x00000408
  #define cr_rpu_1m_div                                  (*(volatile unsigned int *)cr_rpu_1m_div_adr)
  #define cr_rpu_rpu_div_adr                             0x0032040c                                                   // pmu_adr_base + 0x0000040c
  #define cr_rpu_rpu_div                                 (*(volatile unsigned int *)cr_rpu_rpu_div_adr)
  #define cr_rpu_pause_div_adr                           0x00320410                                                   // pmu_adr_base + 0x00000410
  #define cr_rpu_pause_div                               (*(volatile unsigned int *)cr_rpu_pause_div_adr)
  #define cr_rpu_fast_pause_div_adr                      0x00320414                                                   // pmu_adr_base + 0x00000414
  #define cr_rpu_fast_pause_div                          (*(volatile unsigned int *)cr_rpu_fast_pause_div_adr)
  #define cr_rpu_wake_config_adr                         0x00320418                                                   // pmu_adr_base + 0x00000418
  #define cr_rpu_wake_config                             (*(volatile unsigned int *)cr_rpu_wake_config_adr)
  #define cr_rpu_sleep_en_adr                            0x0032041c                                                   // pmu_adr_base + 0x0000041c
  #define cr_rpu_sleep_en                                (*(volatile unsigned int *)cr_rpu_sleep_en_adr)
  #define cr_rpu_warmup_cnt_adr                          0x00320420                                                   // pmu_adr_base + 0x00000420
  #define cr_rpu_warmup_cnt                              (*(volatile unsigned int *)cr_rpu_warmup_cnt_adr)
  #define cr_rpu_pllwarm_cnt_adr                         0x00320424                                                   // pmu_adr_base + 0x00000424
  #define cr_rpu_pllwarm_cnt                             (*(volatile unsigned int *)cr_rpu_pllwarm_cnt_adr)
  #define cr_rpu_sleep_cnt_adr                           0x00320428                                                   // pmu_adr_base + 0x00000428
  #define cr_rpu_sleep_cnt                               (*(volatile unsigned int *)cr_rpu_sleep_cnt_adr)
  #define cr_rpu_N_div_adr                               0x00320430                                                   // pmu_adr_base + 0x00000430
  #define cr_rpu_N_div                                   (*(volatile unsigned int *)cr_rpu_N_div_adr)
  #define cr_rpu_M_div_adr                               0x00320434                                                   // pmu_adr_base + 0x00000434
  #define cr_rpu_M_div                                   (*(volatile unsigned int *)cr_rpu_M_div_adr)
  #define cr_rpu_div_en_adr                              0x00320438                                                   // pmu_adr_base + 0x00000438
  #define cr_rpu_div_en                                  (*(volatile unsigned int *)cr_rpu_div_en_adr)
  #define cr_rpu_div_update_adr                          0x0032043c                                                   // pmu_adr_base + 0x0000043c
  #define cr_rpu_div_update                              (*(volatile unsigned int *)cr_rpu_div_update_adr)
  #define cr_rpu_divMN_force_adr                         0x00320440                                                   // pmu_adr_base + 0x00000440
  #define cr_rpu_divMN_force                             (*(volatile unsigned int *)cr_rpu_divMN_force_adr)
  #define cr_bt_N_div_adr                                0x00320444                                                   // pmu_adr_base + 0x00000444
  #define cr_bt_N_div                                    (*(volatile unsigned int *)cr_bt_N_div_adr)
  #define cr_bt_M_div_adr                                0x00320448                                                   // pmu_adr_base + 0x00000448
  #define cr_bt_M_div                                    (*(volatile unsigned int *)cr_bt_M_div_adr)
  #define cr_bt_div_en_adr                               0x0032044c                                                   // pmu_adr_base + 0x0000044c
  #define cr_bt_div_en                                   (*(volatile unsigned int *)cr_bt_div_en_adr)
  #define cr_bt_div_update_adr                           0x00320450                                                   // pmu_adr_base + 0x00000450
  #define cr_bt_div_update                               (*(volatile unsigned int *)cr_bt_div_update_adr)
  #define cr_slim_src_sel_adr                            0x00320454                                                   // pmu_adr_base + 0x00000454
  #define cr_slim_src_sel                                (*(volatile unsigned int *)cr_slim_src_sel_adr)
  #define cr_slim_clk_en_adr                             0x00320458                                                   // pmu_adr_base + 0x00000458
  #define cr_slim_clk_en                                 (*(volatile unsigned int *)cr_slim_clk_en_adr)
  #define cr_ptu_N_div_adr                               0x0032045c                                                   // pmu_adr_base + 0x0000045c
  #define cr_ptu_N_div                                   (*(volatile unsigned int *)cr_ptu_N_div_adr)
  #define cr_ptu_M_div_adr                               0x00320460                                                   // pmu_adr_base + 0x00000460
  #define cr_ptu_M_div                                   (*(volatile unsigned int *)cr_ptu_M_div_adr)
  #define cr_ptu_div_en_adr                              0x00320464                                                   // pmu_adr_base + 0x00000464
  #define cr_ptu_div_en                                  (*(volatile unsigned int *)cr_ptu_div_en_adr)
  #define cr_ptu_div_update_adr                          0x00320468                                                   // pmu_adr_base + 0x00000468
  #define cr_ptu_div_update                              (*(volatile unsigned int *)cr_ptu_div_update_adr)
  #define gps_sleep_en_adr                               0x0032046c                                                   // pmu_adr_base + 0x0000046c
  #define gps_sleep_en                                   (*(volatile unsigned int *)gps_sleep_en_adr)
  #define gps_sleep_cnt_adr                              0x00320470                                                   // pmu_adr_base + 0x00000470
  #define gps_sleep_cnt                                  (*(volatile unsigned int *)gps_sleep_cnt_adr)
  #define gps_sleep_remain_adr                           0x00320474                                                   // pmu_adr_base + 0x00000474
  #define gps_sleep_remain                               (*(volatile unsigned int *)gps_sleep_remain_adr)
  #define cr_tsxo_adc_cntl_adr                           0x00320478                                                   // pmu_adr_base + 0x00000478
  #define cr_tsxo_adc_cntl                               (*(volatile unsigned int *)cr_tsxo_adc_cntl_adr)
  #define sr_rpu_sleep_remain0_adr                       0x0032047c                                                   // pmu_adr_base + 0x0000047c
  #define sr_rpu_sleep_remain0                           (*(volatile unsigned int *)sr_rpu_sleep_remain0_adr)
  #define sr_rpu_sleep_remain1_adr                       0x00320480                                                   // pmu_adr_base + 0x00000480
  #define sr_rpu_sleep_remain1                           (*(volatile unsigned int *)sr_rpu_sleep_remain1_adr)
  #define cr_hv3_warm_cnt_adr                            0x00320484                                                   // pmu_adr_base + 0x00000484
  #define cr_hv3_warm_cnt                                (*(volatile unsigned int *)cr_hv3_warm_cnt_adr)
  #define cr_dbg_mux_sel_adr                             0x00320488                                                   // pmu_adr_base + 0x00000488
  #define cr_dbg_mux_sel                                 (*(volatile unsigned int *)cr_dbg_mux_sel_adr)
  #define cr_smps_cnt_adr                                0x0032048c                                                   // pmu_adr_base + 0x0000048c
  #define cr_smps_cnt                                    (*(volatile unsigned int *)cr_smps_cnt_adr)
  #define cr_smps_en_adr                                 0x00320490                                                   // pmu_adr_base + 0x00000490
  #define cr_smps_en                                     (*(volatile unsigned int *)cr_smps_en_adr)
  #define cr_smps_config_adr                             0x00320494                                                   // pmu_adr_base + 0x00000494
  #define cr_smps_config                                 (*(volatile unsigned int *)cr_smps_config_adr)
  #define fm_cfg_adr                                     0x00320498                                                   // pmu_adr_base + 0x00000498
  #define fm_cfg                                         (*(volatile unsigned int *)fm_cfg_adr)
  #define adc_cap_dst_adr                                0x0032049c                                                   // pmu_adr_base + 0x0000049c
  #define adc_cap_dst                                    (*(volatile unsigned int *)adc_cap_dst_adr)
  #define adc_cap_cfg_adr                                0x003204a0                                                   // pmu_adr_base + 0x000004a0
  #define adc_cap_cfg                                    (*(volatile unsigned int *)adc_cap_cfg_adr)
  #define sr_ahb_bridge_status_adr                       0x003204a4                                                   // pmu_adr_base + 0x000004a4
  #define sr_ahb_bridge_status                           (*(volatile unsigned int *)sr_ahb_bridge_status_adr)
  #define sr_ahb_bridge_en_adr                           0x003204a8                                                   // pmu_adr_base + 0x000004a8
  #define sr_ahb_bridge_en                               (*(volatile unsigned int *)sr_ahb_bridge_en_adr)
  #define coex_rst_ctl_adr                               0x003204ac                                                   // pmu_adr_base + 0x000004ac
  #define coex_rst_ctl                                   (*(volatile unsigned int *)coex_rst_ctl_adr)
  #define fmadc_clk_ctl_adr                              0x003204b0                                                   // pmu_adr_base + 0x000004b0
  #define fmadc_clk_ctl                                  (*(volatile unsigned int *)fmadc_clk_ctl_adr)
  #define sr_fll_cal_adr                                 0x003204b4                                                   // pmu_adr_base + 0x000004b4
  #define sr_fll_cal                                     (*(volatile unsigned int *)sr_fll_cal_adr)
  #define ahb2ahb_sel_adr                                0x003204b8                                                   // pmu_adr_base + 0x000004b8
  #define ahb2ahb_sel                                    (*(volatile unsigned int *)ahb2ahb_sel_adr)
  #define cr_legacy_BTclk_div_en_adr                     0x003204bc                                                   // pmu_adr_base + 0x000004bc
  #define cr_legacy_BTclk_div_en                         (*(volatile unsigned int *)cr_legacy_BTclk_div_en_adr)
  #define cr_rc_osc_cntl_adr                             0x003204c0                                                   // pmu_adr_base + 0x000004c0
  #define cr_rc_osc_cntl                                 (*(volatile unsigned int *)cr_rc_osc_cntl_adr)
  #define sr_xtal_stable_cnt_adr                         0x003204c4                                                   // pmu_adr_base + 0x000004c4
  #define sr_xtal_stable_cnt                             (*(volatile unsigned int *)sr_xtal_stable_cnt_adr)
  #define cr_adpll_ver_adr                               0x00321000                                                   // pmu_adr_base + 0x00001000
  #define cr_adpll_ver                                   (*(volatile unsigned int *)cr_adpll_ver_adr)
  #define cr_adpll_ctrl0_adr                             0x00321004                                                   // pmu_adr_base + 0x00001004
  #define cr_adpll_ctrl0                                 (*(volatile unsigned int *)cr_adpll_ctrl0_adr)
  #define cr_adpll_div_ratio_adr                         0x00321008                                                   // pmu_adr_base + 0x00001008
  #define cr_adpll_div_ratio                             (*(volatile unsigned int *)cr_adpll_div_ratio_adr)
  #define cr_adpll_lpf_ctrl0_adr                         0x0032100c                                                   // pmu_adr_base + 0x0000100c
  #define cr_adpll_lpf_ctrl0                             (*(volatile unsigned int *)cr_adpll_lpf_ctrl0_adr)
  #define cr_adpll_lpf_ctrl1_adr                         0x00321010                                                   // pmu_adr_base + 0x00001010
  #define cr_adpll_lpf_ctrl1                             (*(volatile unsigned int *)cr_adpll_lpf_ctrl1_adr)
  #define cr_adpll_lpf_ctrl2_adr                         0x00321014                                                   // pmu_adr_base + 0x00001014
  #define cr_adpll_lpf_ctrl2                             (*(volatile unsigned int *)cr_adpll_lpf_ctrl2_adr)
  #define cr_adpll_dco_ctrl0_adr                         0x00321018                                                   // pmu_adr_base + 0x00001018
  #define cr_adpll_dco_ctrl0                             (*(volatile unsigned int *)cr_adpll_dco_ctrl0_adr)
  #define cr_adpll_dco_ctrl1_adr                         0x0032101c                                                   // pmu_adr_base + 0x0000101c
  #define cr_adpll_dco_ctrl1                             (*(volatile unsigned int *)cr_adpll_dco_ctrl1_adr)
  #define cr_adpll_dco_ctrl2_adr                         0x00321020                                                   // pmu_adr_base + 0x00001020
  #define cr_adpll_dco_ctrl2                             (*(volatile unsigned int *)cr_adpll_dco_ctrl2_adr)
  #define cr_adpll_dither_ctrl0_adr                      0x00321024                                                   // pmu_adr_base + 0x00001024
  #define cr_adpll_dither_ctrl0                          (*(volatile unsigned int *)cr_adpll_dither_ctrl0_adr)
  #define cr_adpll_dither_ctrl1_adr                      0x00321028                                                   // pmu_adr_base + 0x00001028
  #define cr_adpll_dither_ctrl1                          (*(volatile unsigned int *)cr_adpll_dither_ctrl1_adr)
  #define cr_adpll_dco_ctrl_spare_adr                    0x0032102c                                                   // pmu_adr_base + 0x0000102c
  #define cr_adpll_dco_ctrl_spare                        (*(volatile unsigned int *)cr_adpll_dco_ctrl_spare_adr)
  #define cr_adpll_test_ctrl0_adr                        0x00321030                                                   // pmu_adr_base + 0x00001030
  #define cr_adpll_test_ctrl0                            (*(volatile unsigned int *)cr_adpll_test_ctrl0_adr)
  #define cr_adpll_test_ctrl1_adr                        0x00321034                                                   // pmu_adr_base + 0x00001034
  #define cr_adpll_test_ctrl1                            (*(volatile unsigned int *)cr_adpll_test_ctrl1_adr)
  #define cr_adpll_test_ctrl2_adr                        0x00321038                                                   // pmu_adr_base + 0x00001038
  #define cr_adpll_test_ctrl2                            (*(volatile unsigned int *)cr_adpll_test_ctrl2_adr)
  #define cr_adpll_test_ctrl3_adr                        0x0032103c                                                   // pmu_adr_base + 0x0000103c
  #define cr_adpll_test_ctrl3                            (*(volatile unsigned int *)cr_adpll_test_ctrl3_adr)
  #define cr_adpll_ol_ctrl0_adr                          0x00321040                                                   // pmu_adr_base + 0x00001040
  #define cr_adpll_ol_ctrl0                              (*(volatile unsigned int *)cr_adpll_ol_ctrl0_adr)
  #define cr_adpll_ol_ctrl1_adr                          0x00321044                                                   // pmu_adr_base + 0x00001044
  #define cr_adpll_ol_ctrl1                              (*(volatile unsigned int *)cr_adpll_ol_ctrl1_adr)
  #define cr_adpll_ol_ctrl2_adr                          0x00321048                                                   // pmu_adr_base + 0x00001048
  #define cr_adpll_ol_ctrl2                              (*(volatile unsigned int *)cr_adpll_ol_ctrl2_adr)
  #define cr_spm_ctrl0_adr                               0x00321200                                                   // pmu_adr_base + 0x00001200
  #define cr_spm_ctrl0                                   (*(volatile unsigned int *)cr_spm_ctrl0_adr)
  #define cr_spm_ctrl1_adr                               0x00321204                                                   // pmu_adr_base + 0x00001204
  #define cr_spm_ctrl1                                   (*(volatile unsigned int *)cr_spm_ctrl1_adr)
  #define cr_spm_ctrl2_adr                               0x00321208                                                   // pmu_adr_base + 0x00001208
  #define cr_spm_ctrl2                                   (*(volatile unsigned int *)cr_spm_ctrl2_adr)
  #define cr_spm_status_adr                              0x0032120c                                                   // pmu_adr_base + 0x0000120c
  #define cr_spm_status                                  (*(volatile unsigned int *)cr_spm_status_adr)
  #define cr_spm_ro_cnt0_adr                             0x00321210                                                   // pmu_adr_base + 0x00001210
  #define cr_spm_ro_cnt0                                 (*(volatile unsigned int *)cr_spm_ro_cnt0_adr)
  #define cr_spm_ro_cnt1_adr                             0x00321214                                                   // pmu_adr_base + 0x00001214
  #define cr_spm_ro_cnt1                                 (*(volatile unsigned int *)cr_spm_ro_cnt1_adr)
  #define cr_spm_ro_cnt2_adr                             0x00321218                                                   // pmu_adr_base + 0x00001218
  #define cr_spm_ro_cnt2                                 (*(volatile unsigned int *)cr_spm_ro_cnt2_adr)
  #define cr_spm_ro_cnt3_adr                             0x0032121c                                                   // pmu_adr_base + 0x0000121c
  #define cr_spm_ro_cnt3                                 (*(volatile unsigned int *)cr_spm_ro_cnt3_adr)
  #define cr_spm_ro_cnt4_adr                             0x00321220                                                   // pmu_adr_base + 0x00001220
  #define cr_spm_ro_cnt4                                 (*(volatile unsigned int *)cr_spm_ro_cnt4_adr)
  #define cr_spm_ro_cnt5_adr                             0x00321224                                                   // pmu_adr_base + 0x00001224
  #define cr_spm_ro_cnt5                                 (*(volatile unsigned int *)cr_spm_ro_cnt5_adr)
  #define cr_spm_ro_cnt6_adr                             0x00321228                                                   // pmu_adr_base + 0x00001228
  #define cr_spm_ro_cnt6                                 (*(volatile unsigned int *)cr_spm_ro_cnt6_adr)
  #define cr_spm_ro_cnt7_adr                             0x0032122c                                                   // pmu_adr_base + 0x0000122c
  #define cr_spm_ro_cnt7                                 (*(volatile unsigned int *)cr_spm_ro_cnt7_adr)
  #define cr_spm_ro_cnt8_adr                             0x00321230                                                   // pmu_adr_base + 0x00001230
  #define cr_spm_ro_cnt8                                 (*(volatile unsigned int *)cr_spm_ro_cnt8_adr)
  #define cr_spm_ro_cnt9_adr                             0x00321234                                                   // pmu_adr_base + 0x00001234
  #define cr_spm_ro_cnt9                                 (*(volatile unsigned int *)cr_spm_ro_cnt9_adr)
  #define cr_spm_ro_cnt10_adr                            0x00321238                                                   // pmu_adr_base + 0x00001238
  #define cr_spm_ro_cnt10                                (*(volatile unsigned int *)cr_spm_ro_cnt10_adr)
  #define cr_spm_ro_cnt11_adr                            0x0032123c                                                   // pmu_adr_base + 0x0000123c
  #define cr_spm_ro_cnt11                                (*(volatile unsigned int *)cr_spm_ro_cnt11_adr)
  #define cr_spm_ro_cnt12_adr                            0x00321240                                                   // pmu_adr_base + 0x00001240
  #define cr_spm_ro_cnt12                                (*(volatile unsigned int *)cr_spm_ro_cnt12_adr)
  #define cr_spm_ro_cnt13_adr                            0x00321244                                                   // pmu_adr_base + 0x00001244
  #define cr_spm_ro_cnt13                                (*(volatile unsigned int *)cr_spm_ro_cnt13_adr)
  #define cr_spm_ro_cnt14_adr                            0x00321248                                                   // pmu_adr_base + 0x00001248
  #define cr_spm_ro_cnt14                                (*(volatile unsigned int *)cr_spm_ro_cnt14_adr)
  #define cr_spm_ro_cnt15_adr                            0x0032124c                                                   // pmu_adr_base + 0x0000124c
  #define cr_spm_ro_cnt15                                (*(volatile unsigned int *)cr_spm_ro_cnt15_adr)
  #define cr_spm_ro_cnt16_adr                            0x00321250                                                   // pmu_adr_base + 0x00001250
  #define cr_spm_ro_cnt16                                (*(volatile unsigned int *)cr_spm_ro_cnt16_adr)
  #define cr_spm_ro_cnt17_adr                            0x00321254                                                   // pmu_adr_base + 0x00001254
  #define cr_spm_ro_cnt17                                (*(volatile unsigned int *)cr_spm_ro_cnt17_adr)
  #define cr_spm_ro_cnt18_adr                            0x00321258                                                   // pmu_adr_base + 0x00001258
  #define cr_spm_ro_cnt18                                (*(volatile unsigned int *)cr_spm_ro_cnt18_adr)
  #define cr_spm_ro_cnt19_adr                            0x0032125c                                                   // pmu_adr_base + 0x0000125c
  #define cr_spm_ro_cnt19                                (*(volatile unsigned int *)cr_spm_ro_cnt19_adr)
  #define cr_spm_ro_cnt20_adr                            0x00321260                                                   // pmu_adr_base + 0x00001260
  #define cr_spm_ro_cnt20                                (*(volatile unsigned int *)cr_spm_ro_cnt20_adr)
  #define cr_disable_wlan_xtal_ok_adr                    0x0032143c                                                   // pmu_adr_base + 0x0000143c
  #define cr_disable_wlan_xtal_ok                        (*(volatile unsigned int *)cr_disable_wlan_xtal_ok_adr)
  #define cr_current_sensor_ctl_adr                      0x00321500                                                   // pmu_adr_base + 0x00001500
  #define cr_current_sensor_ctl                          (*(volatile unsigned int *)cr_current_sensor_ctl_adr)
  #define cr_current_sensor_dir_adr                      0x00321504                                                   // pmu_adr_base + 0x00001504
  #define cr_current_sensor_dir                          (*(volatile unsigned int *)cr_current_sensor_dir_adr)
  #define cr_current_sensor_sts_adr                      0x00321508                                                   // pmu_adr_base + 0x00001508
  #define cr_current_sensor_sts                          (*(volatile unsigned int *)cr_current_sensor_sts_adr)
  #define cr_armjtag_cfg_adr                             0x0032150c                                                   // pmu_adr_base + 0x0000150c
  #define cr_armjtag_cfg                                 (*(volatile unsigned int *)cr_armjtag_cfg_adr)
  #define pwrwdog_ctrl_adr                               0x00390000                                                   // base_power_WD + 0x00000000 * 0x00000004
  #define pwrwdog_ctrl                                   (*(volatile unsigned int *)pwrwdog_ctrl_adr)
  #define pwrwdog_stat_adr                               0x00390004                                                   // base_power_WD + 0x00000001 * 0x00000004
  #define pwrwdog_stat                                   (*(volatile unsigned int *)pwrwdog_stat_adr)
  #define pwrwdog_dlyen_cnt_adr                          0x00390008                                                   // base_power_WD + 0x00000002 * 0x00000004
  #define pwrwdog_dlyen_cnt                              (*(volatile unsigned int *)pwrwdog_dlyen_cnt_adr)
  #define pwrwdog_stat_cnt_adr                           0x0039000c                                                   // base_power_WD + 0x00000003 * 0x00000004
  #define pwrwdog_stat_cnt                               (*(volatile unsigned int *)pwrwdog_stat_cnt_adr)
  #define pwrwdog_accu_ctrl_adr                          0x00390010                                                   // base_power_WD + 0x00000004 * 0x00000004
  #define pwrwdog_accu_ctrl                              (*(volatile unsigned int *)pwrwdog_accu_ctrl_adr)
  #define pwrwdog_accu_stat_adr                          0x00390014                                                   // base_power_WD + 0x00000005 * 0x00000004
  #define pwrwdog_accu_stat                              (*(volatile unsigned int *)pwrwdog_accu_stat_adr)
  #define pwrwdog_ctrl1_adr                              0x00391000                                                   // base_power_WD + 0x00000000 * 0x00000004 + 0x00001000
  #define pwrwdog_ctrl1                                  (*(volatile unsigned int *)pwrwdog_ctrl1_adr)
  #define pwrwdog_stat1_adr                              0x00391004                                                   // base_power_WD + 0x00000001 * 0x00000004 + 0x00001000
  #define pwrwdog_stat1                                  (*(volatile unsigned int *)pwrwdog_stat1_adr)
  #define pwrwdog_dlyen_cnt1_adr                         0x00391008                                                   // base_power_WD + 0x00000002 * 0x00000004 + 0x00001000
  #define pwrwdog_dlyen_cnt1                             (*(volatile unsigned int *)pwrwdog_dlyen_cnt1_adr)
  #define pwrwdog_stat_cnt1_adr                          0x0039100c                                                   // base_power_WD + 0x00000003 * 0x00000004 + 0x00001000
  #define pwrwdog_stat_cnt1                              (*(volatile unsigned int *)pwrwdog_stat_cnt1_adr)
  #define pwrwdog_accu_ctrl1_adr                         0x00391010                                                   // base_power_WD + 0x00000004 * 0x00000004 + 0x00001000
  #define pwrwdog_accu_ctrl1                             (*(volatile unsigned int *)pwrwdog_accu_ctrl1_adr)
  #define pwrwdog_accu_stat1_adr                         0x00391014                                                   // base_power_WD + 0x00000005 * 0x00000004 + 0x00001000
  #define pwrwdog_accu_stat1                             (*(volatile unsigned int *)pwrwdog_accu_stat1_adr)
  #define cr_pds_cfg0_adr                                0x00321510                                                   // pmu_adr_base + 0x00001510
  #define cr_pds_cfg0                                    (*(volatile unsigned int *)cr_pds_cfg0_adr)
  #define cr_pds_cfg1_adr                                0x00321514                                                   // pmu_adr_base + 0x00001514
  #define cr_pds_cfg1                                    (*(volatile unsigned int *)cr_pds_cfg1_adr)
  #define cr_pds_cfg2_adr                                0x00321518                                                   // pmu_adr_base + 0x00001518
  #define cr_pds_cfg2                                    (*(volatile unsigned int *)cr_pds_cfg2_adr)
  #define cr_pds_cfg3_adr                                0x0032151c                                                   // pmu_adr_base + 0x0000151c
  #define cr_pds_cfg3                                    (*(volatile unsigned int *)cr_pds_cfg3_adr)
  #define cr_pds_ctrl_adr                                0x00321520                                                   // pmu_adr_base + 0x00001520
  #define cr_pds_ctrl                                    (*(volatile unsigned int *)cr_pds_ctrl_adr)
  #define cr_pds_cfg4_adr                                0x00321524                                                   // pmu_adr_base + 0x00001524
  #define cr_pds_cfg4                                    (*(volatile unsigned int *)cr_pds_cfg4_adr)
  #define cr_pds_cfg5_adr                                0x00321528                                                   // pmu_adr_base + 0x00001528
  #define cr_pds_cfg5                                    (*(volatile unsigned int *)cr_pds_cfg5_adr)
  #define cr_pds_cfg6_adr                                0x00321534                                                   // pmu_adr_base + 0x00001534
  #define cr_pds_cfg6                                    (*(volatile unsigned int *)cr_pds_cfg6_adr)
  #define cr_pds_cfg7_adr                                0x00321538                                                   // pmu_adr_base + 0x00001538
  #define cr_pds_cfg7                                    (*(volatile unsigned int *)cr_pds_cfg7_adr)
  #define cr_pds_cfg8_adr                                0x00321550                                                   // pmu_adr_base + 0x00001550
  #define cr_pds_cfg8                                    (*(volatile unsigned int *)cr_pds_cfg8_adr)
  #define cr_ptu_aux_src_sel_adr                         0x0032152c                                                   // pmu_adr_base + 0x0000152c
  #define cr_ptu_aux_src_sel                             (*(volatile unsigned int *)cr_ptu_aux_src_sel_adr)
  #define gps_uart_mux_mode_adr                          0x00321530                                                   // pmu_adr_base + 0x00001530
  #define gps_uart_mux_mode                              (*(volatile unsigned int *)gps_uart_mux_mode_adr)
  #define cr_bt_sdio_intr_ctrl_adr                       0x0032153c                                                   // pmu_adr_base + 0x0000153c
  #define cr_bt_sdio_intr_ctrl                           (*(volatile unsigned int *)cr_bt_sdio_intr_ctrl_adr)
  #define cr_bt_sdio_intr_mask_adr                       0x00321540                                                   // pmu_adr_base + 0x00001540
  #define cr_bt_sdio_intr_mask                           (*(volatile unsigned int *)cr_bt_sdio_intr_mask_adr)
  #define cr_baja_temp_adr                               0x00321544                                                   // pmu_adr_base + 0x00001544
  #define cr_baja_temp                                   (*(volatile unsigned int *)cr_baja_temp_adr)
  #define cr_bt_to_wlan_misc_intr_ctrl_adr               0x00321548                                                   // pmu_adr_base + 0x00001548
  #define cr_bt_to_wlan_misc_intr_ctrl                   (*(volatile unsigned int *)cr_bt_to_wlan_misc_intr_ctrl_adr)
  #define cr_bt_to_wlan_misc_intr_mask_adr               0x0032154c                                                   // pmu_adr_base + 0x0000154c
  #define cr_bt_to_wlan_misc_intr_mask                   (*(volatile unsigned int *)cr_bt_to_wlan_misc_intr_mask_adr)
  #define adc2pmu_probe_adr                              0x00321564                                                   // pmu_adr_base + 0x00001564
  #define adc2pmu_probe                                  (*(volatile unsigned int *)adc2pmu_probe_adr)
  #define adc2pmu_dma_data_adr                           0x00321554                                                   // pmu_adr_base + 0x00001554
  #define adc2pmu_dma_data                               (*(volatile unsigned int *)adc2pmu_dma_data_adr)
  #define adc2pmu_dma_status_adr                         0x00321558                                                   // pmu_adr_base + 0x00001558
  #define adc2pmu_dma_status                             (*(volatile unsigned int *)adc2pmu_dma_status_adr)
  #define adc2pmu_dma_data_ch2_adr                       0x0032155c                                                   // pmu_adr_base + 0x0000155c
  #define adc2pmu_dma_data_ch2                           (*(volatile unsigned int *)adc2pmu_dma_data_ch2_adr)
  #define cr_otp_clk_en_adr                              0x00321560                                                   // pmu_adr_base + 0x00001560
  #define cr_otp_clk_en                                  (*(volatile unsigned int *)cr_otp_clk_en_adr)
  #define cr_mia_clk_cfg_adr                             0x00320230                                                   // pmu_adr_base + 0x00000230
  #define cr_mia_clk_cfg                                 (*(volatile unsigned int *)cr_mia_clk_cfg_adr)
  #define cm4_dbg_disable_adr                            0x00321fdc                                                   // pmu_adr_base + 0x00001fdc
  #define cm4_dbg_disable                                (*(volatile unsigned int *)cm4_dbg_disable_adr)
  #define cm4_gatehclk_en_adr                            0x00321568                                                   // pmu_adr_base + 0x00001568
  #define cm4_gatehclk_en                                (*(volatile unsigned int *)cm4_gatehclk_en_adr)
  #define retram_wait_adr                                0x0032156c                                                   // pmu_adr_base + 0x0000156c
  #define retram_wait                                    (*(volatile unsigned int *)retram_wait_adr)
  #define retram_tst_ctl_adr                             0x00321570                                                   // pmu_adr_base + 0x00001570
  #define retram_tst_ctl                                 (*(volatile unsigned int *)retram_tst_ctl_adr)
  #define dmac_clk_en_adr                                0x00321578                                                   // pmu_adr_base + 0x00001578
  #define dmac_clk_en                                    (*(volatile unsigned int *)dmac_clk_en_adr)
  #define ptu_top_clk_en_adr                             0x0032157c                                                   // pmu_adr_base + 0x0000157c
  #define ptu_top_clk_en                                 (*(volatile unsigned int *)ptu_top_clk_en_adr)
  #define mem_protect_base_adr                           0x00321580                                                   // pmu_adr_base + 0x00001580
  #define mem_protect_base                               (*(volatile unsigned int *)mem_protect_base_adr)
  #define mem_protect_last_adr                           0x00321584                                                   // pmu_adr_base + 0x00001584
  #define mem_protect_last                               (*(volatile unsigned int *)mem_protect_last_adr)
  #define mem_protect_addr_adr                           0x00321588                                                   // pmu_adr_base + 0x00001588
  #define mem_protect_addr                               (*(volatile unsigned int *)mem_protect_addr_adr)
  #define cr_capscan_clk_cfg_adr                         0x00321590                                                   // pmu_adr_base + 0x00001590
  #define cr_capscan_clk_cfg                             (*(volatile unsigned int *)cr_capscan_clk_cfg_adr)
  #define cpu_int_mask_0_adr                             0x00321f00                                                   // pmu_adr_base + 0x00001f00
  #define cpu_int_mask_0                                 (*(volatile unsigned int *)cpu_int_mask_0_adr)
  #define cpu_int_mask_1_adr                             0x00321f04                                                   // pmu_adr_base + 0x00001f04
  #define cpu_int_mask_1                                 (*(volatile unsigned int *)cpu_int_mask_1_adr)
  #define cpu_int_mask_2_adr                             0x00321f08                                                   // pmu_adr_base + 0x00001f08
  #define cpu_int_mask_2                                 (*(volatile unsigned int *)cpu_int_mask_2_adr)
  #define cpu_int_mask_3_adr                             0x00321f0c                                                   // pmu_adr_base + 0x00001f0c
  #define cpu_int_mask_3                                 (*(volatile unsigned int *)cpu_int_mask_3_adr)
  #define cpu_int_mask_4_adr                             0x00321f10                                                   // pmu_adr_base + 0x00001f10
  #define cpu_int_mask_4                                 (*(volatile unsigned int *)cpu_int_mask_4_adr)
  #define cpu_int_mask_5_adr                             0x00321f14                                                   // pmu_adr_base + 0x00001f14
  #define cpu_int_mask_5                                 (*(volatile unsigned int *)cpu_int_mask_5_adr)
  #define cpu_int_mask_6_adr                             0x00321f18                                                   // pmu_adr_base + 0x00001f18
  #define cpu_int_mask_6                                 (*(volatile unsigned int *)cpu_int_mask_6_adr)
  #define cpu_int_mask_7_adr                             0x00321f1c                                                   // pmu_adr_base + 0x00001f1c
  #define cpu_int_mask_7                                 (*(volatile unsigned int *)cpu_int_mask_7_adr)
  #define cpu_int_raw_0_adr                              0x00321f20                                                   // pmu_adr_base + 0x00001f20
  #define cpu_int_raw_0                                  (*(volatile unsigned int *)cpu_int_raw_0_adr)
  #define cpu_int_raw_1_adr                              0x00321f24                                                   // pmu_adr_base + 0x00001f24
  #define cpu_int_raw_1                                  (*(volatile unsigned int *)cpu_int_raw_1_adr)
  #define cpu_int_raw_2_adr                              0x00321f28                                                   // pmu_adr_base + 0x00001f28
  #define cpu_int_raw_2                                  (*(volatile unsigned int *)cpu_int_raw_2_adr)
  #define cpu_int_raw_3_adr                              0x00321f2c                                                   // pmu_adr_base + 0x00001f2c
  #define cpu_int_raw_3                                  (*(volatile unsigned int *)cpu_int_raw_3_adr)
  #define cpu_int_raw_4_adr                              0x00321f30                                                   // pmu_adr_base + 0x00001f30
  #define cpu_int_raw_4                                  (*(volatile unsigned int *)cpu_int_raw_4_adr)
  #define cpu_int_raw_5_adr                              0x00321f34                                                   // pmu_adr_base + 0x00001f34
  #define cpu_int_raw_5                                  (*(volatile unsigned int *)cpu_int_raw_5_adr)
  #define cpu_int_raw_6_adr                              0x00321f38                                                   // pmu_adr_base + 0x00001f38
  #define cpu_int_raw_6                                  (*(volatile unsigned int *)cpu_int_raw_6_adr)
  #define cpu_int_raw_7_adr                              0x00321f3c                                                   // pmu_adr_base + 0x00001f3c
  #define cpu_int_raw_7                                  (*(volatile unsigned int *)cpu_int_raw_7_adr)
  #define cpu_int_res_0_adr                              0x00321f40                                                   // pmu_adr_base + 0x00001f40
  #define cpu_int_res_0                                  (*(volatile unsigned int *)cpu_int_res_0_adr)
  #define cpu_int_res_1_adr                              0x00321f44                                                   // pmu_adr_base + 0x00001f44
  #define cpu_int_res_1                                  (*(volatile unsigned int *)cpu_int_res_1_adr)
  #define cpu_int_res_2_adr                              0x00321f48                                                   // pmu_adr_base + 0x00001f48
  #define cpu_int_res_2                                  (*(volatile unsigned int *)cpu_int_res_2_adr)
  #define cpu_int_res_3_adr                              0x00321f4c                                                   // pmu_adr_base + 0x00001f4c
  #define cpu_int_res_3                                  (*(volatile unsigned int *)cpu_int_res_3_adr)
  #define cpu_int_res_4_adr                              0x00321f50                                                   // pmu_adr_base + 0x00001f50
  #define cpu_int_res_4                                  (*(volatile unsigned int *)cpu_int_res_4_adr)
  #define cpu_int_res_5_adr                              0x00321f54                                                   // pmu_adr_base + 0x00001f54
  #define cpu_int_res_5                                  (*(volatile unsigned int *)cpu_int_res_5_adr)
  #define cpu_int_res_6_adr                              0x00321f58                                                   // pmu_adr_base + 0x00001f58
  #define cpu_int_res_6                                  (*(volatile unsigned int *)cpu_int_res_6_adr)
  #define cpu_int_res_7_adr                              0x00321f5c                                                   // pmu_adr_base + 0x00001f5c
  #define cpu_int_res_7                                  (*(volatile unsigned int *)cpu_int_res_7_adr)
  #define dc_ptu_addr_adr                                0x00360000                                                   // ptu_adr_base + 0x00000000
  #define dc_ptu_addr                                    (*(volatile unsigned int *)dc_ptu_addr_adr)
  #define dp_ep2i_hci_pkglen_adr                         0x00360004                                                   // ptu_adr_base + 0x00000004
  #define dp_ep2i_hci_pkglen                             (*(volatile unsigned int *)dp_ep2i_hci_pkglen_adr)
  #define dc_ptu_rw_adr                                  0x00360008                                                   // ptu_adr_base + 0x00000008
  #define dc_ptu_rw                                      (*(volatile unsigned int *)dc_ptu_rw_adr)
  #define dc_ptu_status_adr                              0x0036000c                                                   // ptu_adr_base + 0x0000000c
  #define dc_ptu_status                                  (*(volatile unsigned int *)dc_ptu_status_adr)
  #define dc_ptu_hci_sel_adr                             0x00360010                                                   // ptu_adr_base + 0x00000010
  #define dc_ptu_hci_sel                                 (*(volatile unsigned int *)dc_ptu_hci_sel_adr)
  #define dc_ptu_hc_sel_adr                              0x00360014                                                   // ptu_adr_base + 0x00000014
  #define dc_ptu_hc_sel                                  (*(volatile unsigned int *)dc_ptu_hc_sel_adr)
  #define dc_ptu_sel_ctl_adr                             0x00360018                                                   // ptu_adr_base + 0x00000018
  #define dc_ptu_sel_ctl                                 (*(volatile unsigned int *)dc_ptu_sel_ctl_adr)
  #define dp_uart_data_adr                               0x0036001c                                                   // ptu_adr_base + 0x0000001c
  #define dp_uart_data                                   (*(volatile unsigned int *)dp_uart_data_adr)
  #define dp_ep0_data_adr                                0x00360020                                                   // ptu_adr_base + 0x00000020
  #define dp_ep0_data                                    (*(volatile unsigned int *)dp_ep0_data_adr)
  #define dp_ep1_data_adr                                0x00360024                                                   // ptu_adr_base + 0x00000024
  #define dp_ep1_data                                    (*(volatile unsigned int *)dp_ep1_data_adr)
  #define dp_ep2_data_adr                                0x00360028                                                   // ptu_adr_base + 0x00000028
  #define dp_ep2_data                                    (*(volatile unsigned int *)dp_ep2_data_adr)
  #define dp_ep3_data_adr                                0x0036002c                                                   // ptu_adr_base + 0x0000002c
  #define dp_ep3_data                                    (*(volatile unsigned int *)dp_ep3_data_adr)
  #define dp_ep4_data_adr                                0x00360030                                                   // ptu_adr_base + 0x00000030
  #define dp_ep4_data                                    (*(volatile unsigned int *)dp_ep4_data_adr)
  #define dp_ep_trg_adr                                  0x00360034                                                   // ptu_adr_base + 0x00000034
  #define dp_ep_trg                                      (*(volatile unsigned int *)dp_ep_trg_adr)
  #define dp_ep0_pklen_adr                               0x00360038                                                   // ptu_adr_base + 0x00000038
  #define dp_ep0_pklen                                   (*(volatile unsigned int *)dp_ep0_pklen_adr)
  #define dp_ep2_pklen_adr                               0x0036003c                                                   // ptu_adr_base + 0x0000003c
  #define dp_ep2_pklen                                   (*(volatile unsigned int *)dp_ep2_pklen_adr)
  #define dp_ep3_pklen_adr                               0x00360040                                                   // ptu_adr_base + 0x00000040
  #define dp_ep3_pklen                                   (*(volatile unsigned int *)dp_ep3_pklen_adr)
  #define dp_ep4_pklen_adr                               0x00360044                                                   // ptu_adr_base + 0x00000044
  #define dp_ep4_pklen                                   (*(volatile unsigned int *)dp_ep4_pklen_adr)
  #define dp_ep2_dp_adr                                  0x00360048                                                   // ptu_adr_base + 0x00000048
  #define dp_ep2_dp                                      (*(volatile unsigned int *)dp_ep2_dp_adr)
  #define dp2_ep0_data_adr                               0x0036004c                                                   // ptu_adr_base + 0x0000004c
  #define dp2_ep0_data                                   (*(volatile unsigned int *)dp2_ep0_data_adr)
  #define dp2_ep1_data_adr                               0x00360050                                                   // ptu_adr_base + 0x00000050
  #define dp2_ep1_data                                   (*(volatile unsigned int *)dp2_ep1_data_adr)
  #define dp2_ep_trg_adr                                 0x00360054                                                   // ptu_adr_base + 0x00000054
  #define dp2_ep_trg                                     (*(volatile unsigned int *)dp2_ep_trg_adr)
  #define dp2_ep0_pklen_adr                              0x00360058                                                   // ptu_adr_base + 0x00000058
  #define dp2_ep0_pklen                                  (*(volatile unsigned int *)dp2_ep0_pklen_adr)
  #define dp3_ep0_data_adr                               0x0036005c                                                   // ptu_adr_base + 0x0000005c
  #define dp3_ep0_data                                   (*(volatile unsigned int *)dp3_ep0_data_adr)
  #define dp3_ep1_data_adr                               0x00360060                                                   // ptu_adr_base + 0x00000060
  #define dp3_ep1_data                                   (*(volatile unsigned int *)dp3_ep1_data_adr)
  #define dp3_ep_trg_adr                                 0x00360064                                                   // ptu_adr_base + 0x00000064
  #define dp3_ep_trg                                     (*(volatile unsigned int *)dp3_ep_trg_adr)
  #define dp3_ep0_pklen_adr                              0x00360068                                                   // ptu_adr_base + 0x00000068
  #define dp3_ep0_pklen                                  (*(volatile unsigned int *)dp3_ep0_pklen_adr)
  #define dc_ptu_hubcur_adr                              0x0036006c                                                   // ptu_adr_base + 0x0000006c
  #define dc_ptu_hubcur                                  (*(volatile unsigned int *)dc_ptu_hubcur_adr)
  #define srptu_base                                     0x00360074                                                   // dp_tail + 0x00000004
  #define sr_ptu_status_adr0                             0x00360074                                                   // srptu_base + 0x00000000
  #define sr_ptu_status0                                 (*(volatile unsigned int *)sr_ptu_status_adr0)
  #define sr_ptu_status_adr1                             0x00360078                                                   // srptu_base + 0x00000004
  #define sr_ptu_status1                                 (*(volatile unsigned int *)sr_ptu_status_adr1)
  #define sr_ptu_status_adr2                             0x0036007c                                                   // srptu_base + 0x00000008
  #define sr_ptu_status2                                 (*(volatile unsigned int *)sr_ptu_status_adr2)
  #define sr_ptu_status_adr3                             0x00360080                                                   // srptu_base + 0x0000000c
  #define sr_ptu_status3                                 (*(volatile unsigned int *)sr_ptu_status_adr3)
  #define sr_ptu_status_adr4                             0x00360084                                                   // srptu_base + 0x00000010
  #define sr_ptu_status4                                 (*(volatile unsigned int *)sr_ptu_status_adr4)
  #define sr_ptu_status_adr5                             0x00360088                                                   // srptu_base + 0x00000014
  #define sr_ptu_status5                                 (*(volatile unsigned int *)sr_ptu_status_adr5)
  #define sr_ptu_status_adr6                             0x0036008c                                                   // srptu_base + 0x00000018
  #define sr_ptu_status6                                 (*(volatile unsigned int *)sr_ptu_status_adr6)
  #define sr_ptu_status_adr7                             0x00360090                                                   // srptu_base + 0x0000001c
  #define sr_ptu_status7                                 (*(volatile unsigned int *)sr_ptu_status_adr7)
  #define sr_ptu_status_adr8                             0x00360094                                                   // srptu_base + 0x00000020
  #define sr_ptu_status8                                 (*(volatile unsigned int *)sr_ptu_status_adr8)
  #define sr_ptu_en_adr0                                 0x00360098                                                   // srptu_base + 0x00000024
  #define sr_ptu_en0                                     (*(volatile unsigned int *)sr_ptu_en_adr0)
  #define sr_ptu_en_adr1                                 0x0036009c                                                   // srptu_base + 0x00000028
  #define sr_ptu_en1                                     (*(volatile unsigned int *)sr_ptu_en_adr1)
  #define sr_ptu_en_adr2                                 0x003600a0                                                   // srptu_base + 0x0000002c
  #define sr_ptu_en2                                     (*(volatile unsigned int *)sr_ptu_en_adr2)
  #define sr_ptu_en_adr3                                 0x003600a4                                                   // srptu_base + 0x00000030
  #define sr_ptu_en3                                     (*(volatile unsigned int *)sr_ptu_en_adr3)
  #define sr_ptu_en_adr4                                 0x003600a8                                                   // srptu_base + 0x00000034
  #define sr_ptu_en4                                     (*(volatile unsigned int *)sr_ptu_en_adr4)
  #define sr_ptu_en_adr5                                 0x003600ac                                                   // srptu_base + 0x00000038
  #define sr_ptu_en5                                     (*(volatile unsigned int *)sr_ptu_en_adr5)
  #define sr_ptu_en_adr6                                 0x003600b0                                                   // srptu_base + 0x0000003c
  #define sr_ptu_en6                                     (*(volatile unsigned int *)sr_ptu_en_adr6)
  #define sr_ptu_en_adr7                                 0x003600b4                                                   // srptu_base + 0x00000040
  #define sr_ptu_en7                                     (*(volatile unsigned int *)sr_ptu_en_adr7)
  #define sr_ptu_en_adr8                                 0x003600b8                                                   // srptu_base + 0x00000044
  #define sr_ptu_en8                                     (*(volatile unsigned int *)sr_ptu_en_adr8)
  #define sr_ptu_dis_adr0                                0x003600bc                                                   // srptu_base + 0x00000048
  #define sr_ptu_dis0                                    (*(volatile unsigned int *)sr_ptu_dis_adr0)
  #define sr_ptu_dis_adr1                                0x003600c0                                                   // srptu_base + 0x0000004c
  #define sr_ptu_dis1                                    (*(volatile unsigned int *)sr_ptu_dis_adr1)
  #define sr_ptu_dis_adr2                                0x003600c4                                                   // srptu_base + 0x00000050
  #define sr_ptu_dis2                                    (*(volatile unsigned int *)sr_ptu_dis_adr2)
  #define sr_ptu_dis_adr3                                0x003600c8                                                   // srptu_base + 0x00000054
  #define sr_ptu_dis3                                    (*(volatile unsigned int *)sr_ptu_dis_adr3)
  #define sr_ptu_dis_adr4                                0x003600cc                                                   // srptu_base + 0x00000058
  #define sr_ptu_dis4                                    (*(volatile unsigned int *)sr_ptu_dis_adr4)
  #define sr_ptu_test_adr0                               0x003600d0                                                   // srptu_base + 0x0000005c
  #define sr_ptu_test0                                   (*(volatile unsigned int *)sr_ptu_test_adr0)
  #define sr_ptu_test_adr1                               0x003600d4                                                   // srptu_base + 0x00000060
  #define sr_ptu_test1                                   (*(volatile unsigned int *)sr_ptu_test_adr1)
  #define sr_ptu_test_adr2                               0x003600d8                                                   // srptu_base + 0x00000064
  #define sr_ptu_test2                                   (*(volatile unsigned int *)sr_ptu_test_adr2)
  #define sr_ptu_test_adr3                               0x003600dc                                                   // srptu_base + 0x00000068
  #define sr_ptu_test3                                   (*(volatile unsigned int *)sr_ptu_test_adr3)
  #define sr_ptu_test_adr4                               0x003600e0                                                   // srptu_base + 0x0000006c
  #define sr_ptu_test4                                   (*(volatile unsigned int *)sr_ptu_test_adr4)
  #define sr_ptu_inv_adr                                 0x003600e4                                                   // srptu_base + 0x00000070
  #define sr_ptu_inv                                     (*(volatile unsigned int *)sr_ptu_inv_adr)
  #define dc_ptu_pwron2good_adr                          0x003600e8                                                   // srptu_base + 0x00000074
  #define dc_ptu_pwron2good                              (*(volatile unsigned int *)dc_ptu_pwron2good_adr)
  #define sr_ptu_status_adr9                             0x003600ec                                                   // srptu_base + 0x00000078
  #define sr_ptu_status9                                 (*(volatile unsigned int *)sr_ptu_status_adr9)
  #define sr_ptu_en_adr9                                 0x003600f0                                                   // srptu_base + 0x0000007c
  #define sr_ptu_en9                                     (*(volatile unsigned int *)sr_ptu_en_adr9)
  #define sr_ptu_dis_adr9                                0x003600f4                                                   // srptu_base + 0x00000080
  #define sr_ptu_dis9                                    (*(volatile unsigned int *)sr_ptu_dis_adr9)
  #define sr_ptu_test_adr9                               0x003600f8                                                   // srptu_base + 0x00000084
  #define sr_ptu_test9                                   (*(volatile unsigned int *)sr_ptu_test_adr9)
  #define dp_ep2o_hci_pkglen_adr                         0x003600fc                                                   // srptu_base + 0x00000088
  #define dp_ep2o_hci_pkglen                             (*(volatile unsigned int *)dp_ep2o_hci_pkglen_adr)
  #define WLAN_status_adr                                0x00360100                                                   // srptu_base + 0x0000008c
  #define WLAN_status                                    (*(volatile unsigned int *)WLAN_status_adr)
  #define WLAN_ctrl_adr                                  0x00360104                                                   // srptu_base + 0x00000090
  #define WLAN_ctrl                                      (*(volatile unsigned int *)WLAN_ctrl_adr)
  #define WLAN_dis_adr                                   0x00360108                                                   // srptu_base + 0x00000094
  #define WLAN_dis                                       (*(volatile unsigned int *)WLAN_dis_adr)
  #define WLAN_level_mask_adr                            0x0036010c                                                   // srptu_base + 0x00000098
  #define WLAN_level_mask                                (*(volatile unsigned int *)WLAN_level_mask_adr)
  #define WLAN_edge_mode_adr                             0x00360110                                                   // srptu_base + 0x0000009c
  #define WLAN_edge_mode                                 (*(volatile unsigned int *)WLAN_edge_mode_adr)
  #define dc_ptu_dbg_sel_adr                             0x00360114                                                   // srptu_base + 0x000000a0
  #define dc_ptu_dbg_sel                                 (*(volatile unsigned int *)dc_ptu_dbg_sel_adr)
  #define uart_base                                      0x00360400                                                   // ptu_adr_base + 0x00000400
  #define iic_base                                       0x00364000                                                   // ptu_adr_base + 0x00004000
  #define iic2_base                                      0x00365000                                                   // ptu_adr_base + 0x00005000
  #define spi_base                                       0x00360600                                                   // ptu_adr_base + 0x00000600
  #define aa_base                                        0x00360700                                                   // ptu_adr_base + 0x00000700
  #define db_uart_base                                   0x00360800                                                   // ptu_adr_base + 0x00000800
  #define rtc_base                                       0x00360900                                                   // ptu_adr_base + 0x00000900
  #define dsdio_base                                     0x00361000                                                   // ptu_adr_base + 0x00001000
  #define hub_base                                       0x00362000                                                   // ptu_adr_base + 0x00002000
  #define usb0_usb_base                                  0x00363000                                                   // ptu_adr_base + 0x00003000
  #define usb1_usb_base                                  0x00363400                                                   // ptu_adr_base + 0x00003400
  #define usb2_usb_base                                  0x00363800                                                   // ptu_adr_base + 0x00003800
  #define xyz_base                                       0x00363000                                                   // ptu_adr_base + 0x00003000
  #define dc_ptu_uart_dhbr_adr                           0x00360400                                                   // uart_base + 0x00000000
  #define dc_ptu_uart_dhbr                               (*(volatile unsigned int *)dc_ptu_uart_dhbr_adr)
  #define dc_ptu_uart_dlbr_adr                           0x00360404                                                   // uart_base + 0x00000004
  #define dc_ptu_uart_dlbr                               (*(volatile unsigned int *)dc_ptu_uart_dlbr_adr)
  #define dc_ptu_uart_ab0_adr                            0x00360408                                                   // uart_base + 0x00000008
  #define dc_ptu_uart_ab0                                (*(volatile unsigned int *)dc_ptu_uart_ab0_adr)
  #define dc_ptu_uart_fcr_adr                            0x00360410                                                   // uart_base + 0x00000010
  #define dc_ptu_uart_fcr                                (*(volatile unsigned int *)dc_ptu_uart_fcr_adr)
  #define dc_ptu_uart_ab1_adr                            0x00360414                                                   // uart_base + 0x00000014
  #define dc_ptu_uart_ab1                                (*(volatile unsigned int *)dc_ptu_uart_ab1_adr)
  #define dc_ptu_uart_lcr_adr                            0x0036041c                                                   // uart_base + 0x0000001c
  #define dc_ptu_uart_lcr                                (*(volatile unsigned int *)dc_ptu_uart_lcr_adr)
  #define dc_ptu_uart_mcr_adr                            0x00360420                                                   // uart_base + 0x00000020
  #define dc_ptu_uart_mcr                                (*(volatile unsigned int *)dc_ptu_uart_mcr_adr)
  #define dc_ptu_uart_lsr_adr                            0x00360424                                                   // uart_base + 0x00000024
  #define dc_ptu_uart_lsr                                (*(volatile unsigned int *)dc_ptu_uart_lsr_adr)
  #define dc_ptu_uart_msr_adr                            0x00360428                                                   // uart_base + 0x00000028
  #define dc_ptu_uart_msr                                (*(volatile unsigned int *)dc_ptu_uart_msr_adr)
  #define dc_ptu_uart_rfl_adr                            0x0036042c                                                   // uart_base + 0x0000002c
  #define dc_ptu_uart_rfl                                (*(volatile unsigned int *)dc_ptu_uart_rfl_adr)
  #define dc_ptu_uart_tfl_adr                            0x00360430                                                   // uart_base + 0x00000030
  #define dc_ptu_uart_tfl                                (*(volatile unsigned int *)dc_ptu_uart_tfl_adr)
  #define dc_ptu_uart_rfc_adr                            0x00360434                                                   // uart_base + 0x00000034
  #define dc_ptu_uart_rfc                                (*(volatile unsigned int *)dc_ptu_uart_rfc_adr)
  #define dc_ptu_uart_esc_adr                            0x00360438                                                   // uart_base + 0x00000038
  #define dc_ptu_uart_esc                                (*(volatile unsigned int *)dc_ptu_uart_esc_adr)
  #define dc_ptu_uart_abr_adr                            0x0036043c                                                   // uart_base + 0x0000003c
  #define dc_ptu_uart_abr                                (*(volatile unsigned int *)dc_ptu_uart_abr_adr)
  #define dc_free32_adr                                  0x00360440                                                   // uart_base + 0x00000040
  #define dc_free32                                      (*(volatile unsigned int *)dc_free32_adr)
  #define dc_free32_ctl_adr                              0x00360444                                                   // uart_base + 0x00000044
  #define dc_free32_ctl                                  (*(volatile unsigned int *)dc_free32_ctl_adr)
  #define uart_ho_pklen_adr                              0x00360448                                                   // uart_base + 0x00000048
  #define uart_ho_pklen                                  (*(volatile unsigned int *)uart_ho_pklen_adr)
  #define uart_hi_pklen_adr                              0x0036044c                                                   // uart_base + 0x0000004c
  #define uart_hi_pklen                                  (*(volatile unsigned int *)uart_hi_pklen_adr)
  #define uart_ho_dma_ctl_adr                            0x00360450                                                   // uart_base + 0x00000050
  #define uart_ho_dma_ctl                                (*(volatile unsigned int *)uart_ho_dma_ctl_adr)
  #define uart_hi_dma_ctl_adr                            0x00360454                                                   // uart_base + 0x00000054
  #define uart_hi_dma_ctl                                (*(volatile unsigned int *)uart_hi_dma_ctl_adr)
  #define uart_ho_bsize_adr                              0x00360458                                                   // uart_base + 0x00000058
  #define uart_ho_bsize                                  (*(volatile unsigned int *)uart_ho_bsize_adr)
  #define uart_hi_bsize_adr                              0x0036045c                                                   // uart_base + 0x0000005c
  #define uart_hi_bsize                                  (*(volatile unsigned int *)uart_hi_bsize_adr)
  #define fpga_id_adr                                    0x00360460                                                   // uart_base + 0x00000060
  #define fpga_id                                        (*(volatile unsigned int *)fpga_id_adr)
  #define dc_ptu_uart_extra_ctrl_adr                     0x00360464                                                   // uart_base + 0x00000064
  #define dc_ptu_uart_extra_ctrl                         (*(volatile unsigned int *)dc_ptu_uart_extra_ctrl_adr)
  #define iic_caddr_wctl_adr                             0x00364000                                                   // iic_base + 0x00000000
  #define iic_caddr_wctl                                 (*(volatile unsigned int *)iic_caddr_wctl_adr)
  #define iic_scl_maxcnt_adr                             0x00364004                                                   // iic_base + 0x00000004
  #define iic_scl_maxcnt                                 (*(volatile unsigned int *)iic_scl_maxcnt_adr)
  #define iic_scl_maxcnt_adr1                            0x00364008                                                   // iic_base + 0x00000008
  #define iic_scl_maxcnt1                                (*(volatile unsigned int *)iic_scl_maxcnt_adr1)
  #define iic_scl_div_adr                                0x0036400c                                                   // iic_base + 0x0000000c
  #define iic_scl_div                                    (*(volatile unsigned int *)iic_scl_div_adr)
  #define iic_scl_div_adr1                               0x00364010                                                   // iic_base + 0x00000010
  #define iic_scl_div1                                   (*(volatile unsigned int *)iic_scl_div_adr1)
  #define iic_byte_cnt_adr                               0x00364014                                                   // iic_base + 0x00000014
  #define iic_byte_cnt                                   (*(volatile unsigned int *)iic_byte_cnt_adr)
  #define iic_ctl_adr                                    0x00364018                                                   // iic_base + 0x00000018
  #define iic_ctl                                        (*(volatile unsigned int *)iic_ctl_adr)
  #define iic_rd_en_int_adr                              0x0036401c                                                   // iic_base + 0x0000001c
  #define iic_rd_en_int                                  (*(volatile unsigned int *)iic_rd_en_int_adr)
  #define iic_wdata_adr0                                 0x00364030                                                   // iic_base + 0x00000030
  #define iic_wdata0                                     (*(volatile unsigned int *)iic_wdata_adr0)
  #define iic_wdata_adr1                                 0x00364034                                                   // iic_base + 0x00000034
  #define iic_wdata1                                     (*(volatile unsigned int *)iic_wdata_adr1)
  #define iic_wdata_adr2                                 0x00364038                                                   // iic_base + 0x00000038
  #define iic_wdata2                                     (*(volatile unsigned int *)iic_wdata_adr2)
  #define iic_wdata_adr3                                 0x0036403c                                                   // iic_base + 0x0000003c
  #define iic_wdata3                                     (*(volatile unsigned int *)iic_wdata_adr3)
  #define iic_wdata_adr4                                 0x00364040                                                   // iic_base + 0x00000040
  #define iic_wdata4                                     (*(volatile unsigned int *)iic_wdata_adr4)
  #define iic_wdata_adr5                                 0x00364044                                                   // iic_base + 0x00000044
  #define iic_wdata5                                     (*(volatile unsigned int *)iic_wdata_adr5)
  #define iic_wdata_adr6                                 0x00364048                                                   // iic_base + 0x00000048
  #define iic_wdata6                                     (*(volatile unsigned int *)iic_wdata_adr6)
  #define iic_wdata_adr7                                 0x0036404c                                                   // iic_base + 0x0000004c
  #define iic_wdata7                                     (*(volatile unsigned int *)iic_wdata_adr7)
  #define iic_wdata_adr8                                 0x00364050                                                   // iic_base + 0x00000050
  #define iic_wdata8                                     (*(volatile unsigned int *)iic_wdata_adr8)
  #define iic_wdata_adr9                                 0x00364054                                                   // iic_base + 0x00000054
  #define iic_wdata9                                     (*(volatile unsigned int *)iic_wdata_adr9)
  #define iic_wdata_adr10                                0x00364058                                                   // iic_base + 0x00000058
  #define iic_wdata10                                    (*(volatile unsigned int *)iic_wdata_adr10)
  #define iic_wdata_adr11                                0x0036405c                                                   // iic_base + 0x0000005c
  #define iic_wdata11                                    (*(volatile unsigned int *)iic_wdata_adr11)
  #define iic_wdata_adr12                                0x00364060                                                   // iic_base + 0x00000060
  #define iic_wdata12                                    (*(volatile unsigned int *)iic_wdata_adr12)
  #define iic_wdata_adr13                                0x00364064                                                   // iic_base + 0x00000064
  #define iic_wdata13                                    (*(volatile unsigned int *)iic_wdata_adr13)
  #define iic_wdata_adr14                                0x00364068                                                   // iic_base + 0x00000068
  #define iic_wdata14                                    (*(volatile unsigned int *)iic_wdata_adr14)
  #define iic_wdata_adr15                                0x0036406c                                                   // iic_base + 0x0000006c
  #define iic_wdata15                                    (*(volatile unsigned int *)iic_wdata_adr15)
  #define iic_wdata_adr16                                0x00364070                                                   // iic_base + 0x00000070
  #define iic_wdata16                                    (*(volatile unsigned int *)iic_wdata_adr16)
  #define iic_wdata_adr17                                0x00364074                                                   // iic_base + 0x00000074
  #define iic_wdata17                                    (*(volatile unsigned int *)iic_wdata_adr17)
  #define iic_wdata_adr18                                0x00364078                                                   // iic_base + 0x00000078
  #define iic_wdata18                                    (*(volatile unsigned int *)iic_wdata_adr18)
  #define iic_wdata_adr19                                0x0036407c                                                   // iic_base + 0x0000007c
  #define iic_wdata19                                    (*(volatile unsigned int *)iic_wdata_adr19)
  #define iic_wdata_adr20                                0x00364080                                                   // iic_base + 0x00000080
  #define iic_wdata20                                    (*(volatile unsigned int *)iic_wdata_adr20)
  #define iic_wdata_adr21                                0x00364084                                                   // iic_base + 0x00000084
  #define iic_wdata21                                    (*(volatile unsigned int *)iic_wdata_adr21)
  #define iic_wdata_adr22                                0x00364088                                                   // iic_base + 0x00000088
  #define iic_wdata22                                    (*(volatile unsigned int *)iic_wdata_adr22)
  #define iic_wdata_adr23                                0x0036408c                                                   // iic_base + 0x0000008c
  #define iic_wdata23                                    (*(volatile unsigned int *)iic_wdata_adr23)
  #define iic_wdata_adr24                                0x00364090                                                   // iic_base + 0x00000090
  #define iic_wdata24                                    (*(volatile unsigned int *)iic_wdata_adr24)
  #define iic_wdata_adr25                                0x00364094                                                   // iic_base + 0x00000094
  #define iic_wdata25                                    (*(volatile unsigned int *)iic_wdata_adr25)
  #define iic_wdata_adr26                                0x00364098                                                   // iic_base + 0x00000098
  #define iic_wdata26                                    (*(volatile unsigned int *)iic_wdata_adr26)
  #define iic_wdata_adr27                                0x0036409c                                                   // iic_base + 0x0000009c
  #define iic_wdata27                                    (*(volatile unsigned int *)iic_wdata_adr27)
  #define iic_wdata_adr28                                0x003640a0                                                   // iic_base + 0x000000a0
  #define iic_wdata28                                    (*(volatile unsigned int *)iic_wdata_adr28)
  #define iic_wdata_adr29                                0x003640a4                                                   // iic_base + 0x000000a4
  #define iic_wdata29                                    (*(volatile unsigned int *)iic_wdata_adr29)
  #define iic_wdata_adr30                                0x003640a8                                                   // iic_base + 0x000000a8
  #define iic_wdata30                                    (*(volatile unsigned int *)iic_wdata_adr30)
  #define iic_wdata_adr31                                0x003640ac                                                   // iic_base + 0x000000ac
  #define iic_wdata31                                    (*(volatile unsigned int *)iic_wdata_adr31)
  #define iic_wdata_adr32                                0x003640b0                                                   // iic_base + 0x000000b0
  #define iic_wdata32                                    (*(volatile unsigned int *)iic_wdata_adr32)
  #define iic_wdata_adr33                                0x003640b4                                                   // iic_base + 0x000000b4
  #define iic_wdata33                                    (*(volatile unsigned int *)iic_wdata_adr33)
  #define iic_wdata_adr34                                0x003640b8                                                   // iic_base + 0x000000b8
  #define iic_wdata34                                    (*(volatile unsigned int *)iic_wdata_adr34)
  #define iic_wdata_adr35                                0x003640bc                                                   // iic_base + 0x000000bc
  #define iic_wdata35                                    (*(volatile unsigned int *)iic_wdata_adr35)
  #define iic_wdata_adr36                                0x003640c0                                                   // iic_base + 0x000000c0
  #define iic_wdata36                                    (*(volatile unsigned int *)iic_wdata_adr36)
  #define iic_wdata_adr37                                0x003640c4                                                   // iic_base + 0x000000c4
  #define iic_wdata37                                    (*(volatile unsigned int *)iic_wdata_adr37)
  #define iic_wdata_adr38                                0x003640c8                                                   // iic_base + 0x000000c8
  #define iic_wdata38                                    (*(volatile unsigned int *)iic_wdata_adr38)
  #define iic_wdata_adr39                                0x003640cc                                                   // iic_base + 0x000000cc
  #define iic_wdata39                                    (*(volatile unsigned int *)iic_wdata_adr39)
  #define iic_wdata_adr40                                0x003640d0                                                   // iic_base + 0x000000d0
  #define iic_wdata40                                    (*(volatile unsigned int *)iic_wdata_adr40)
  #define iic_wdata_adr41                                0x003640d4                                                   // iic_base + 0x000000d4
  #define iic_wdata41                                    (*(volatile unsigned int *)iic_wdata_adr41)
  #define iic_wdata_adr42                                0x003640d8                                                   // iic_base + 0x000000d8
  #define iic_wdata42                                    (*(volatile unsigned int *)iic_wdata_adr42)
  #define iic_wdata_adr43                                0x003640dc                                                   // iic_base + 0x000000dc
  #define iic_wdata43                                    (*(volatile unsigned int *)iic_wdata_adr43)
  #define iic_wdata_adr44                                0x003640e0                                                   // iic_base + 0x000000e0
  #define iic_wdata44                                    (*(volatile unsigned int *)iic_wdata_adr44)
  #define iic_wdata_adr45                                0x003640e4                                                   // iic_base + 0x000000e4
  #define iic_wdata45                                    (*(volatile unsigned int *)iic_wdata_adr45)
  #define iic_wdata_adr46                                0x003640e8                                                   // iic_base + 0x000000e8
  #define iic_wdata46                                    (*(volatile unsigned int *)iic_wdata_adr46)
  #define iic_wdata_adr47                                0x003640ec                                                   // iic_base + 0x000000ec
  #define iic_wdata47                                    (*(volatile unsigned int *)iic_wdata_adr47)
  #define iic_wdata_adr48                                0x003640f0                                                   // iic_base + 0x000000f0
  #define iic_wdata48                                    (*(volatile unsigned int *)iic_wdata_adr48)
  #define iic_wdata_adr49                                0x003640f4                                                   // iic_base + 0x000000f4
  #define iic_wdata49                                    (*(volatile unsigned int *)iic_wdata_adr49)
  #define iic_wdata_adr50                                0x003640f8                                                   // iic_base + 0x000000f8
  #define iic_wdata50                                    (*(volatile unsigned int *)iic_wdata_adr50)
  #define iic_wdata_adr51                                0x003640fc                                                   // iic_base + 0x000000fc
  #define iic_wdata51                                    (*(volatile unsigned int *)iic_wdata_adr51)
  #define iic_wdata_adr52                                0x00364100                                                   // iic_base + 0x00000100
  #define iic_wdata52                                    (*(volatile unsigned int *)iic_wdata_adr52)
  #define iic_wdata_adr53                                0x00364104                                                   // iic_base + 0x00000104
  #define iic_wdata53                                    (*(volatile unsigned int *)iic_wdata_adr53)
  #define iic_wdata_adr54                                0x00364108                                                   // iic_base + 0x00000108
  #define iic_wdata54                                    (*(volatile unsigned int *)iic_wdata_adr54)
  #define iic_wdata_adr55                                0x0036410c                                                   // iic_base + 0x0000010c
  #define iic_wdata55                                    (*(volatile unsigned int *)iic_wdata_adr55)
  #define iic_wdata_adr56                                0x00364110                                                   // iic_base + 0x00000110
  #define iic_wdata56                                    (*(volatile unsigned int *)iic_wdata_adr56)
  #define iic_wdata_adr57                                0x00364114                                                   // iic_base + 0x00000114
  #define iic_wdata57                                    (*(volatile unsigned int *)iic_wdata_adr57)
  #define iic_wdata_adr58                                0x00364118                                                   // iic_base + 0x00000118
  #define iic_wdata58                                    (*(volatile unsigned int *)iic_wdata_adr58)
  #define iic_wdata_adr59                                0x0036411c                                                   // iic_base + 0x0000011c
  #define iic_wdata59                                    (*(volatile unsigned int *)iic_wdata_adr59)
  #define iic_wdata_adr60                                0x00364120                                                   // iic_base + 0x00000120
  #define iic_wdata60                                    (*(volatile unsigned int *)iic_wdata_adr60)
  #define iic_wdata_adr61                                0x00364124                                                   // iic_base + 0x00000124
  #define iic_wdata61                                    (*(volatile unsigned int *)iic_wdata_adr61)
  #define iic_wdata_adr62                                0x00364128                                                   // iic_base + 0x00000128
  #define iic_wdata62                                    (*(volatile unsigned int *)iic_wdata_adr62)
  #define iic_wdata_adr63                                0x0036412c                                                   // iic_base + 0x0000012c
  #define iic_wdata63                                    (*(volatile unsigned int *)iic_wdata_adr63)
  #define iic_rdata_adr0                                 0x00364130                                                   // iic_base + 0x00000130
  #define iic_rdata0                                     (*(volatile unsigned int *)iic_rdata_adr0)
  #define iic_rdata_adr1                                 0x00364134                                                   // iic_base + 0x00000134
  #define iic_rdata1                                     (*(volatile unsigned int *)iic_rdata_adr1)
  #define iic_rdata_adr2                                 0x00364138                                                   // iic_base + 0x00000138
  #define iic_rdata2                                     (*(volatile unsigned int *)iic_rdata_adr2)
  #define iic_rdata_adr3                                 0x0036413c                                                   // iic_base + 0x0000013c
  #define iic_rdata3                                     (*(volatile unsigned int *)iic_rdata_adr3)
  #define iic_rdata_adr4                                 0x00364140                                                   // iic_base + 0x00000140
  #define iic_rdata4                                     (*(volatile unsigned int *)iic_rdata_adr4)
  #define iic_rdata_adr5                                 0x00364144                                                   // iic_base + 0x00000144
  #define iic_rdata5                                     (*(volatile unsigned int *)iic_rdata_adr5)
  #define iic_rdata_adr6                                 0x00364148                                                   // iic_base + 0x00000148
  #define iic_rdata6                                     (*(volatile unsigned int *)iic_rdata_adr6)
  #define iic_rdata_adr7                                 0x0036414c                                                   // iic_base + 0x0000014c
  #define iic_rdata7                                     (*(volatile unsigned int *)iic_rdata_adr7)
  #define iic_rdata_adr8                                 0x00364150                                                   // iic_base + 0x00000150
  #define iic_rdata8                                     (*(volatile unsigned int *)iic_rdata_adr8)
  #define iic_rdata_adr9                                 0x00364154                                                   // iic_base + 0x00000154
  #define iic_rdata9                                     (*(volatile unsigned int *)iic_rdata_adr9)
  #define iic_rdata_adr10                                0x00364158                                                   // iic_base + 0x00000158
  #define iic_rdata10                                    (*(volatile unsigned int *)iic_rdata_adr10)
  #define iic_rdata_adr11                                0x0036415c                                                   // iic_base + 0x0000015c
  #define iic_rdata11                                    (*(volatile unsigned int *)iic_rdata_adr11)
  #define iic_rdata_adr12                                0x00364160                                                   // iic_base + 0x00000160
  #define iic_rdata12                                    (*(volatile unsigned int *)iic_rdata_adr12)
  #define iic_rdata_adr13                                0x00364164                                                   // iic_base + 0x00000164
  #define iic_rdata13                                    (*(volatile unsigned int *)iic_rdata_adr13)
  #define iic_rdata_adr14                                0x00364168                                                   // iic_base + 0x00000168
  #define iic_rdata14                                    (*(volatile unsigned int *)iic_rdata_adr14)
  #define iic_rdata_adr15                                0x0036416c                                                   // iic_base + 0x0000016c
  #define iic_rdata15                                    (*(volatile unsigned int *)iic_rdata_adr15)
  #define iic_rdata_adr16                                0x00364170                                                   // iic_base + 0x00000170
  #define iic_rdata16                                    (*(volatile unsigned int *)iic_rdata_adr16)
  #define iic_rdata_adr17                                0x00364174                                                   // iic_base + 0x00000174
  #define iic_rdata17                                    (*(volatile unsigned int *)iic_rdata_adr17)
  #define iic_rdata_adr18                                0x00364178                                                   // iic_base + 0x00000178
  #define iic_rdata18                                    (*(volatile unsigned int *)iic_rdata_adr18)
  #define iic_rdata_adr19                                0x0036417c                                                   // iic_base + 0x0000017c
  #define iic_rdata19                                    (*(volatile unsigned int *)iic_rdata_adr19)
  #define iic_rdata_adr20                                0x00364180                                                   // iic_base + 0x00000180
  #define iic_rdata20                                    (*(volatile unsigned int *)iic_rdata_adr20)
  #define iic_rdata_adr21                                0x00364184                                                   // iic_base + 0x00000184
  #define iic_rdata21                                    (*(volatile unsigned int *)iic_rdata_adr21)
  #define iic_rdata_adr22                                0x00364188                                                   // iic_base + 0x00000188
  #define iic_rdata22                                    (*(volatile unsigned int *)iic_rdata_adr22)
  #define iic_rdata_adr23                                0x0036418c                                                   // iic_base + 0x0000018c
  #define iic_rdata23                                    (*(volatile unsigned int *)iic_rdata_adr23)
  #define iic_rdata_adr24                                0x00364190                                                   // iic_base + 0x00000190
  #define iic_rdata24                                    (*(volatile unsigned int *)iic_rdata_adr24)
  #define iic_rdata_adr25                                0x00364194                                                   // iic_base + 0x00000194
  #define iic_rdata25                                    (*(volatile unsigned int *)iic_rdata_adr25)
  #define iic_rdata_adr26                                0x00364198                                                   // iic_base + 0x00000198
  #define iic_rdata26                                    (*(volatile unsigned int *)iic_rdata_adr26)
  #define iic_rdata_adr27                                0x0036419c                                                   // iic_base + 0x0000019c
  #define iic_rdata27                                    (*(volatile unsigned int *)iic_rdata_adr27)
  #define iic_rdata_adr28                                0x003641a0                                                   // iic_base + 0x000001a0
  #define iic_rdata28                                    (*(volatile unsigned int *)iic_rdata_adr28)
  #define iic_rdata_adr29                                0x003641a4                                                   // iic_base + 0x000001a4
  #define iic_rdata29                                    (*(volatile unsigned int *)iic_rdata_adr29)
  #define iic_rdata_adr30                                0x003641a8                                                   // iic_base + 0x000001a8
  #define iic_rdata30                                    (*(volatile unsigned int *)iic_rdata_adr30)
  #define iic_rdata_adr31                                0x003641ac                                                   // iic_base + 0x000001ac
  #define iic_rdata31                                    (*(volatile unsigned int *)iic_rdata_adr31)
  #define iic_rdata_adr32                                0x003641b0                                                   // iic_base + 0x000001b0
  #define iic_rdata32                                    (*(volatile unsigned int *)iic_rdata_adr32)
  #define iic_rdata_adr33                                0x003641b4                                                   // iic_base + 0x000001b4
  #define iic_rdata33                                    (*(volatile unsigned int *)iic_rdata_adr33)
  #define iic_rdata_adr34                                0x003641b8                                                   // iic_base + 0x000001b8
  #define iic_rdata34                                    (*(volatile unsigned int *)iic_rdata_adr34)
  #define iic_rdata_adr35                                0x003641bc                                                   // iic_base + 0x000001bc
  #define iic_rdata35                                    (*(volatile unsigned int *)iic_rdata_adr35)
  #define iic_rdata_adr36                                0x003641c0                                                   // iic_base + 0x000001c0
  #define iic_rdata36                                    (*(volatile unsigned int *)iic_rdata_adr36)
  #define iic_rdata_adr37                                0x003641c4                                                   // iic_base + 0x000001c4
  #define iic_rdata37                                    (*(volatile unsigned int *)iic_rdata_adr37)
  #define iic_rdata_adr38                                0x003641c8                                                   // iic_base + 0x000001c8
  #define iic_rdata38                                    (*(volatile unsigned int *)iic_rdata_adr38)
  #define iic_rdata_adr39                                0x003641cc                                                   // iic_base + 0x000001cc
  #define iic_rdata39                                    (*(volatile unsigned int *)iic_rdata_adr39)
  #define iic_rdata_adr40                                0x003641d0                                                   // iic_base + 0x000001d0
  #define iic_rdata40                                    (*(volatile unsigned int *)iic_rdata_adr40)
  #define iic_rdata_adr41                                0x003641d4                                                   // iic_base + 0x000001d4
  #define iic_rdata41                                    (*(volatile unsigned int *)iic_rdata_adr41)
  #define iic_rdata_adr42                                0x003641d8                                                   // iic_base + 0x000001d8
  #define iic_rdata42                                    (*(volatile unsigned int *)iic_rdata_adr42)
  #define iic_rdata_adr43                                0x003641dc                                                   // iic_base + 0x000001dc
  #define iic_rdata43                                    (*(volatile unsigned int *)iic_rdata_adr43)
  #define iic_rdata_adr44                                0x003641e0                                                   // iic_base + 0x000001e0
  #define iic_rdata44                                    (*(volatile unsigned int *)iic_rdata_adr44)
  #define iic_rdata_adr45                                0x003641e4                                                   // iic_base + 0x000001e4
  #define iic_rdata45                                    (*(volatile unsigned int *)iic_rdata_adr45)
  #define iic_rdata_adr46                                0x003641e8                                                   // iic_base + 0x000001e8
  #define iic_rdata46                                    (*(volatile unsigned int *)iic_rdata_adr46)
  #define iic_rdata_adr47                                0x003641ec                                                   // iic_base + 0x000001ec
  #define iic_rdata47                                    (*(volatile unsigned int *)iic_rdata_adr47)
  #define iic_rdata_adr48                                0x003641f0                                                   // iic_base + 0x000001f0
  #define iic_rdata48                                    (*(volatile unsigned int *)iic_rdata_adr48)
  #define iic_rdata_adr49                                0x003641f4                                                   // iic_base + 0x000001f4
  #define iic_rdata49                                    (*(volatile unsigned int *)iic_rdata_adr49)
  #define iic_rdata_adr50                                0x003641f8                                                   // iic_base + 0x000001f8
  #define iic_rdata50                                    (*(volatile unsigned int *)iic_rdata_adr50)
  #define iic_rdata_adr51                                0x003641fc                                                   // iic_base + 0x000001fc
  #define iic_rdata51                                    (*(volatile unsigned int *)iic_rdata_adr51)
  #define iic_rdata_adr52                                0x00364200                                                   // iic_base + 0x00000200
  #define iic_rdata52                                    (*(volatile unsigned int *)iic_rdata_adr52)
  #define iic_rdata_adr53                                0x00364204                                                   // iic_base + 0x00000204
  #define iic_rdata53                                    (*(volatile unsigned int *)iic_rdata_adr53)
  #define iic_rdata_adr54                                0x00364208                                                   // iic_base + 0x00000208
  #define iic_rdata54                                    (*(volatile unsigned int *)iic_rdata_adr54)
  #define iic_rdata_adr55                                0x0036420c                                                   // iic_base + 0x0000020c
  #define iic_rdata55                                    (*(volatile unsigned int *)iic_rdata_adr55)
  #define iic_rdata_adr56                                0x00364210                                                   // iic_base + 0x00000210
  #define iic_rdata56                                    (*(volatile unsigned int *)iic_rdata_adr56)
  #define iic_rdata_adr57                                0x00364214                                                   // iic_base + 0x00000214
  #define iic_rdata57                                    (*(volatile unsigned int *)iic_rdata_adr57)
  #define iic_rdata_adr58                                0x00364218                                                   // iic_base + 0x00000218
  #define iic_rdata58                                    (*(volatile unsigned int *)iic_rdata_adr58)
  #define iic_rdata_adr59                                0x0036421c                                                   // iic_base + 0x0000021c
  #define iic_rdata59                                    (*(volatile unsigned int *)iic_rdata_adr59)
  #define iic_rdata_adr60                                0x00364220                                                   // iic_base + 0x00000220
  #define iic_rdata60                                    (*(volatile unsigned int *)iic_rdata_adr60)
  #define iic_rdata_adr61                                0x00364224                                                   // iic_base + 0x00000224
  #define iic_rdata61                                    (*(volatile unsigned int *)iic_rdata_adr61)
  #define iic_rdata_adr62                                0x00364228                                                   // iic_base + 0x00000228
  #define iic_rdata62                                    (*(volatile unsigned int *)iic_rdata_adr62)
  #define iic_rdata_adr63                                0x0036422c                                                   // iic_base + 0x0000022c
  #define iic_rdata63                                    (*(volatile unsigned int *)iic_rdata_adr63)
  #define iic2_caddr_wctl_adr                            0x00365000                                                   // iic2_base + 0x00000000
  #define iic2_caddr_wctl                                (*(volatile unsigned int *)iic2_caddr_wctl_adr)
  #define iic2_saddr_wctl_adr                            0x00365004                                                   // iic2_base + 0x00000004
  #define iic2_saddr_wctl                                (*(volatile unsigned int *)iic2_saddr_wctl_adr)
  #define iic2_byte_cnt_adr                              0x00365008                                                   // iic2_base + 0x00000008
  #define iic2_byte_cnt                                  (*(volatile unsigned int *)iic2_byte_cnt_adr)
  #define iic2_ctl_adr                                   0x0036500c                                                   // iic2_base + 0x0000000c
  #define iic2_ctl                                       (*(volatile unsigned int *)iic2_ctl_adr)
  #define iic2_rd_en_int_adr                             0x00365010                                                   // iic2_base + 0x00000010
  #define iic2_rd_en_int                                 (*(volatile unsigned int *)iic2_rd_en_int_adr)
  #define iic2_slv_ctl_adr                               0x00365014                                                   // iic2_base + 0x00000014
  #define iic2_slv_ctl                                   (*(volatile unsigned int *)iic2_slv_ctl_adr)
  #define iic2_mstr_status_adr                           0x00365018                                                   // iic2_base + 0x00000018
  #define iic2_mstr_status                               (*(volatile unsigned int *)iic2_mstr_status_adr)
  #define iic2_slv_status_adr                            0x0036501c                                                   // iic2_base + 0x0000001c
  #define iic2_slv_status                                (*(volatile unsigned int *)iic2_slv_status_adr)
  #define dc_ptu_iicm_rfl_adr                            0x00365024                                                   // iic2_base + 0x00000024
  #define dc_ptu_iicm_rfl                                (*(volatile unsigned int *)dc_ptu_iicm_rfl_adr)
  #define dc_ptu_iicm_tfl_adr                            0x00365028                                                   // iic2_base + 0x00000028
  #define dc_ptu_iicm_tfl                                (*(volatile unsigned int *)dc_ptu_iicm_tfl_adr)
  #define dc_ptu_iicm_rfc_adr                            0x0036502c                                                   // iic2_base + 0x0000002c
  #define dc_ptu_iicm_rfc                                (*(volatile unsigned int *)dc_ptu_iicm_rfc_adr)
  #define iicm_ho_pklen_adr                              0x00365030                                                   // iic2_base + 0x00000030
  #define iicm_ho_pklen                                  (*(volatile unsigned int *)iicm_ho_pklen_adr)
  #define iicm_hi_pklen_adr                              0x00365034                                                   // iic2_base + 0x00000034
  #define iicm_hi_pklen                                  (*(volatile unsigned int *)iicm_hi_pklen_adr)
  #define iicm_ho_dma_ctl_adr                            0x00365038                                                   // iic2_base + 0x00000038
  #define iicm_ho_dma_ctl                                (*(volatile unsigned int *)iicm_ho_dma_ctl_adr)
  #define iicm_hi_dma_ctl_adr                            0x0036503c                                                   // iic2_base + 0x0000003c
  #define iicm_hi_dma_ctl                                (*(volatile unsigned int *)iicm_hi_dma_ctl_adr)
  #define iicm_ho_bsize_adr                              0x00365040                                                   // iic2_base + 0x00000040
  #define iicm_ho_bsize                                  (*(volatile unsigned int *)iicm_ho_bsize_adr)
  #define iicm_hi_bsize_adr                              0x00365044                                                   // iic2_base + 0x00000044
  #define iicm_hi_bsize                                  (*(volatile unsigned int *)iicm_hi_bsize_adr)
  #define dc_ptu_iics_rfl_adr                            0x00365048                                                   // iic2_base + 0x00000048
  #define dc_ptu_iics_rfl                                (*(volatile unsigned int *)dc_ptu_iics_rfl_adr)
  #define dc_ptu_iics_tfl_adr                            0x0036504c                                                   // iic2_base + 0x0000004c
  #define dc_ptu_iics_tfl                                (*(volatile unsigned int *)dc_ptu_iics_tfl_adr)
  #define dc_ptu_iics_rfc_adr                            0x00365050                                                   // iic2_base + 0x00000050
  #define dc_ptu_iics_rfc                                (*(volatile unsigned int *)dc_ptu_iics_rfc_adr)
  #define iics_ho_pklen_adr                              0x00365054                                                   // iic2_base + 0x00000054
  #define iics_ho_pklen                                  (*(volatile unsigned int *)iics_ho_pklen_adr)
  #define iics_hi_pklen_adr                              0x00365058                                                   // iic2_base + 0x00000058
  #define iics_hi_pklen                                  (*(volatile unsigned int *)iics_hi_pklen_adr)
  #define iics_ho_dma_ctl_adr                            0x0036505c                                                   // iic2_base + 0x0000005c
  #define iics_ho_dma_ctl                                (*(volatile unsigned int *)iics_ho_dma_ctl_adr)
  #define iics_hi_dma_ctl_adr                            0x00365060                                                   // iic2_base + 0x00000060
  #define iics_hi_dma_ctl                                (*(volatile unsigned int *)iics_hi_dma_ctl_adr)
  #define iics_ho_bsize_adr                              0x00365064                                                   // iic2_base + 0x00000064
  #define iics_ho_bsize                                  (*(volatile unsigned int *)iics_ho_bsize_adr)
  #define iics_hi_bsize_adr                              0x00365068                                                   // iic2_base + 0x00000068
  #define iics_hi_bsize                                  (*(volatile unsigned int *)iics_hi_bsize_adr)
  #define dp_iic_fstat_adr                               0x00365070                                                   // iic2_base + 0x00000070
  #define dp_iic_fstat                                   (*(volatile unsigned int *)dp_iic_fstat_adr)
  #define iics_rx_bytecnt_default_adr                    0x00365074                                                   // iic2_base + 0x00000074
  #define iics_rx_bytecnt_default                        (*(volatile unsigned int *)iics_rx_bytecnt_default_adr)
  #define iics_tx_bytecnt_default_adr                    0x00365078                                                   // iic2_base + 0x00000078
  #define iics_tx_bytecnt_default                        (*(volatile unsigned int *)iics_tx_bytecnt_default_adr)
  #define iics_tx_last_bytecnt_adr                       0x0036507c                                                   // iic2_base + 0x0000007c
  #define iics_tx_last_bytecnt                           (*(volatile unsigned int *)iics_tx_last_bytecnt_adr)
  #define iics_rx_last_bytecnt_adr                       0x00365080                                                   // iic2_base + 0x00000080
  #define iics_rx_last_bytecnt                           (*(volatile unsigned int *)iics_rx_last_bytecnt_adr)
  #define iic2_addr_ctl_adr                              0x00365084                                                   // iic2_base + 0x00000084
  #define iic2_addr_ctl                                  (*(volatile unsigned int *)iic2_addr_ctl_adr)
  #define iic2_addr0_adr                                 0x00365088                                                   // iic2_base + 0x00000088
  #define iic2_addr0                                     (*(volatile unsigned int *)iic2_addr0_adr)
  #define iic2_addr1_adr                                 0x0036508c                                                   // iic2_base + 0x0000008c
  #define iic2_addr1                                     (*(volatile unsigned int *)iic2_addr1_adr)
  #define iic2_addr2_adr                                 0x00365090                                                   // iic2_base + 0x00000090
  #define iic2_addr2                                     (*(volatile unsigned int *)iic2_addr2_adr)
  #define iic2_addr3_adr                                 0x00365094                                                   // iic2_base + 0x00000094
  #define iic2_addr3                                     (*(volatile unsigned int *)iic2_addr3_adr)
  #define iic2_addr_valid_adr                            0x00365098                                                   // iic2_base + 0x00000098
  #define iic2_addr_valid                                (*(volatile unsigned int *)iic2_addr_valid_adr)
  #define iic2_match_index_adr                           0x0036509c                                                   // iic2_base + 0x0000009c
  #define iic2_match_index                               (*(volatile unsigned int *)iic2_match_index_adr)
  #define dp_iics_data_adr                               0x00365100                                                   // iic2_base + 0x00000100
  #define dp_iics_data                                   (*(volatile unsigned int *)dp_iics_data_adr)
  #define dp_iics_data1_adr                              0x00365104                                                   // iic2_base + 0x00000104
  #define dp_iics_data1                                  (*(volatile unsigned int *)dp_iics_data1_adr)
  #define dp_iics_data2_adr                              0x00365108                                                   // iic2_base + 0x00000108
  #define dp_iics_data2                                  (*(volatile unsigned int *)dp_iics_data2_adr)
  #define dp_iics_data3_adr                              0x0036510c                                                   // iic2_base + 0x0000010c
  #define dp_iics_data3                                  (*(volatile unsigned int *)dp_iics_data3_adr)
  #define dp_iics_data4_adr                              0x00365210                                                   // iic2_base + 0x00000210
  #define dp_iics_data4                                  (*(volatile unsigned int *)dp_iics_data4_adr)
  #define dp_iics_data5_adr                              0x00365214                                                   // iic2_base + 0x00000214
  #define dp_iics_data5                                  (*(volatile unsigned int *)dp_iics_data5_adr)
  #define dp_iics_data6_adr                              0x00365218                                                   // iic2_base + 0x00000218
  #define dp_iics_data6                                  (*(volatile unsigned int *)dp_iics_data6_adr)
  #define dp_iics_data7_adr                              0x0036521c                                                   // iic2_base + 0x0000021c
  #define dp_iics_data7                                  (*(volatile unsigned int *)dp_iics_data7_adr)
  #define i2c_req_adr                                    0x00365220                                                   // iic2_base + 0x00000220
  #define i2c_req                                        (*(volatile unsigned int *)i2c_req_adr)
  #define db_uart_dhbr_adr                               0x00360800                                                   // db_uart_base + 0x00000000
  #define db_uart_dhbr                                   (*(volatile unsigned int *)db_uart_dhbr_adr)
  #define db_uart_dlbr_adr                               0x00360804                                                   // db_uart_base + 0x00000004
  #define db_uart_dlbr                                   (*(volatile unsigned int *)db_uart_dlbr_adr)
  #define db_uart_fcr_adr                                0x00360808                                                   // db_uart_base + 0x00000008
  #define db_uart_fcr                                    (*(volatile unsigned int *)db_uart_fcr_adr)
  #define db_uart_lcr_adr                                0x0036080c                                                   // db_uart_base + 0x0000000c
  #define db_uart_lcr                                    (*(volatile unsigned int *)db_uart_lcr_adr)
  #define db_uart_mcr_adr                                0x00360810                                                   // db_uart_base + 0x00000010
  #define db_uart_mcr                                    (*(volatile unsigned int *)db_uart_mcr_adr)
  #define db_uart_lsr_adr                                0x00360814                                                   // db_uart_base + 0x00000014
  #define db_uart_lsr                                    (*(volatile unsigned int *)db_uart_lsr_adr)
  #define db_uart_msr_adr                                0x00360818                                                   // db_uart_base + 0x00000018
  #define db_uart_msr                                    (*(volatile unsigned int *)db_uart_msr_adr)
  #define db_uart_data_adr                               0x0036081c                                                   // db_uart_base + 0x0000001c
  #define db_uart_data                                   (*(volatile unsigned int *)db_uart_data_adr)
  #define db_uart_snap_adr                               0x00360820                                                   // db_uart_base + 0x00000020
  #define db_uart_snap                                   (*(volatile unsigned int *)db_uart_snap_adr)
  #define db_uart_txw_adr                                0x00360824                                                   // db_uart_base + 0x00000024
  #define db_uart_txw                                    (*(volatile unsigned int *)db_uart_txw_adr)
  #define db_uart_rxw_adr                                0x00360828                                                   // db_uart_base + 0x00000028
  #define db_uart_rxw                                    (*(volatile unsigned int *)db_uart_rxw_adr)
  #define rtc_ucodem_start_adr                           0x00360900                                                   // rtc_base + 0x00000000
  #define rtc_ucodem_start                               (*(volatile unsigned int *)rtc_ucodem_start_adr)
  #define rtc_ucodem_stop_adr                            0x00360aff                                                   // rtc_base + 0x000001ff
  #define rtc_ucodem_stop                                (*(volatile unsigned int *)rtc_ucodem_stop_adr)
  #define rtc_tapm_start_adr                             0x00360b00                                                   // rtc_base + 0x00000200
  #define rtc_tapm_start                                 (*(volatile unsigned int *)rtc_tapm_start_adr)
  #define rtc_tapm_stop_adr                              0x00360bff                                                   // rtc_base + 0x000002ff
  #define rtc_tapm_stop                                  (*(volatile unsigned int *)rtc_tapm_stop_adr)
  #define rtc_coeffm_start_adr                           0x00360c00                                                   // rtc_base + 0x00000300
  #define rtc_coeffm_start                               (*(volatile unsigned int *)rtc_coeffm_start_adr)
  #define rtc_coeffm_stop_adr                            0x00360cff                                                   // rtc_base + 0x000003ff
  #define rtc_coeffm_stop                                (*(volatile unsigned int *)rtc_coeffm_stop_adr)
  #define rtc_integerd_adr                               0x00360d00                                                   // rtc_base + 0x00000400
  #define rtc_integerd                                   (*(volatile unsigned int *)rtc_integerd_adr)
  #define rtc_fractiond_adr                              0x00360d04                                                   // rtc_base + 0x00000404
  #define rtc_fractiond                                  (*(volatile unsigned int *)rtc_fractiond_adr)
  #define rtc_initial_pc_adr                             0x00360d08                                                   // rtc_base + 0x00000408
  #define rtc_initial_pc                                 (*(volatile unsigned int *)rtc_initial_pc_adr)
  #define rtc_config_adr                                 0x00360d0c                                                   // rtc_base + 0x0000040c
  #define rtc_config                                     (*(volatile unsigned int *)rtc_config_adr)
  #define dc_ptu_aux_rw_adr                              0x00350000                                                   // ptu_aux_adr_base + 0x00000000
  #define dc_ptu_aux_rw                                  (*(volatile unsigned int *)dc_ptu_aux_rw_adr)
  #define dc_ptu_aux_status_adr                          0x00350004                                                   // ptu_aux_adr_base + 0x00000004
  #define dc_ptu_aux_status                              (*(volatile unsigned int *)dc_ptu_aux_status_adr)
  #define dc_ptu_aux_hci_sel_adr                         0x00350008                                                   // ptu_aux_adr_base + 0x00000008
  #define dc_ptu_aux_hci_sel                             (*(volatile unsigned int *)dc_ptu_aux_hci_sel_adr)
  #define dc_ptu_aux_hc_sel_adr                          0x0035000c                                                   // ptu_aux_adr_base + 0x0000000c
  #define dc_ptu_aux_hc_sel                              (*(volatile unsigned int *)dc_ptu_aux_hc_sel_adr)
  #define dc_ptu_aux_sel_ctl_adr                         0x00350010                                                   // ptu_aux_adr_base + 0x00000010
  #define dc_ptu_aux_sel_ctl                             (*(volatile unsigned int *)dc_ptu_aux_sel_ctl_adr)
  #define dc_ptu_aux_ws_cfg_adr                          0x00350014                                                   // ptu_aux_adr_base + 0x00000014
  #define dc_ptu_aux_ws_cfg                              (*(volatile unsigned int *)dc_ptu_aux_ws_cfg_adr)
  #define dc_ptu_aux_reset_level_adr                     0x00350018                                                   // ptu_aux_adr_base + 0x00000018
  #define dc_ptu_aux_reset_level                         (*(volatile unsigned int *)dc_ptu_aux_reset_level_adr)
  #define dc_ptu_aux_reset_pulse_adr                     0x0035001c                                                   // ptu_aux_adr_base + 0x0000001c
  #define dc_ptu_aux_reset_pulse                         (*(volatile unsigned int *)dc_ptu_aux_reset_pulse_adr)
  #define dc_ptu_aux_clk_cfg_adr                         0x00350020                                                   // ptu_aux_adr_base + 0x00000020
  #define dc_ptu_aux_clk_cfg                             (*(volatile unsigned int *)dc_ptu_aux_clk_cfg_adr)
  #define srptuaux_base                                  0x00350024                                                   // dc_ptu_aux_tail
  #define sr_ptu_aux_status_adr0                         0x00350024                                                   // srptuaux_base + 0x00000000
  #define sr_ptu_aux_status0                             (*(volatile unsigned int *)sr_ptu_aux_status_adr0)
  #define sr_ptu_aux_en_adr0                             0x00350028                                                   // srptuaux_base + 0x00000004
  #define sr_ptu_aux_en0                                 (*(volatile unsigned int *)sr_ptu_aux_en_adr0)
  #define crptuaux_base                                  0x0035002c                                                   // sr_ptu_aux_tail
  #define cr_pulse_reset_ptu_aux_adr                     0x0035002c                                                   // crptuaux_base + 0x00000000
  #define cr_pulse_reset_ptu_aux                         (*(volatile unsigned int *)cr_pulse_reset_ptu_aux_adr)
  #define cr_level_reset_ptu_aux_adr                     0x00350030                                                   // crptuaux_base + 0x00000004
  #define cr_level_reset_ptu_aux                         (*(volatile unsigned int *)cr_level_reset_ptu_aux_adr)
  #define cr_ptu_aux_clk_en_adr                          0x00350034                                                   // crptuaux_base + 0x00000008
  #define cr_ptu_aux_clk_en                              (*(volatile unsigned int *)cr_ptu_aux_clk_en_adr)
  #define cr_ptu_aux_clk_gate_on_adr                     0x00350038                                                   // crptuaux_base + 0x0000000c
  #define cr_ptu_aux_clk_gate_on                         (*(volatile unsigned int *)cr_ptu_aux_clk_gate_on_adr)
  #define cr_ptu_aux_clk_gate_off_adr                    0x0035003c                                                   // crptuaux_base + 0x00000010
  #define cr_ptu_aux_clk_gate_off                        (*(volatile unsigned int *)cr_ptu_aux_clk_gate_off_adr)
  #define ptu_aux_dbg_sel_adr                            0x00350040                                                   // crptuaux_base + 0x00000014
  #define ptu_aux_dbg_sel                                (*(volatile unsigned int *)ptu_aux_dbg_sel_adr)
  #define aud_fdiv_slim_btp_sel_adr                      0x00350044                                                   // crptuaux_base + 0x00000018
  #define aud_fdiv_slim_btp_sel                          (*(volatile unsigned int *)aud_fdiv_slim_btp_sel_adr)
  #define pcm_base                                       0x00351000                                                   // ptu_aux_adr_base + 0x00001000
  #define slim_base                                      0x0035c000                                                   // ptu_aux_adr_base + 0x0000c000
  #define aburst_base                                    0x00352000                                                   // ptu_aux_adr_base + 0x00002000
  #define pcm2_base                                      0x00352100                                                   // ptu_aux_adr_base + 0x00002100
  #define uart2_base                                     0x00352200                                                   // ptu_aux_adr_base + 0x00002200
  #define uart2_hc_base                                  0x00352300                                                   // ptu_aux_adr_base + 0x00002300
  #define spiffy2_base                                   0x00352400                                                   // ptu_aux_adr_base + 0x00002400
  #define rbg_base                                       0x00352600                                                   // ptu_aux_adr_base + 0x00002600
  #define rbg_control_adr                                0x00352600                                                   // rbg_base + 0x00000000
  #define rbg_control                                    (*(volatile unsigned int *)rbg_control_adr)
  #define rbg_status_adr                                 0x00352604                                                   // rbg_base + 0x00000004
  #define rbg_status                                     (*(volatile unsigned int *)rbg_status_adr)
  #define rbg_random_num_adr                             0x00352608                                                   // rbg_base + 0x00000008
  #define rbg_random_num                                 (*(volatile unsigned int *)rbg_random_num_adr)
  #define dc_ptu_uart2_dhbr_adr                          0x00352200                                                   // uart2_base + 0x00000000
  #define dc_ptu_uart2_dhbr                              (*(volatile unsigned int *)dc_ptu_uart2_dhbr_adr)
  #define dc_ptu_uart2_dlbr_adr                          0x00352204                                                   // uart2_base + 0x00000004
  #define dc_ptu_uart2_dlbr                              (*(volatile unsigned int *)dc_ptu_uart2_dlbr_adr)
  #define dc_ptu_uart2_ab0_adr                           0x00352208                                                   // uart2_base + 0x00000008
  #define dc_ptu_uart2_ab0                               (*(volatile unsigned int *)dc_ptu_uart2_ab0_adr)
  #define dc_ptu_uart2_fcr_adr                           0x00352210                                                   // uart2_base + 0x00000010
  #define dc_ptu_uart2_fcr                               (*(volatile unsigned int *)dc_ptu_uart2_fcr_adr)
  #define dc_ptu_uart2_ab1_adr                           0x00352214                                                   // uart2_base + 0x00000014
  #define dc_ptu_uart2_ab1                               (*(volatile unsigned int *)dc_ptu_uart2_ab1_adr)
  #define dc_ptu_uart2_extra_ctrl_adr                    0x00352218                                                   // uart2_base + 0x00000018
  #define dc_ptu_uart2_extra_ctrl                        (*(volatile unsigned int *)dc_ptu_uart2_extra_ctrl_adr)
  #define dc_ptu_uart2_lcr_adr                           0x0035221c                                                   // uart2_base + 0x0000001c
  #define dc_ptu_uart2_lcr                               (*(volatile unsigned int *)dc_ptu_uart2_lcr_adr)
  #define dc_ptu_uart2_mcr_adr                           0x00352220                                                   // uart2_base + 0x00000020
  #define dc_ptu_uart2_mcr                               (*(volatile unsigned int *)dc_ptu_uart2_mcr_adr)
  #define dc_ptu_uart2_lsr_adr                           0x00352224                                                   // uart2_base + 0x00000024
  #define dc_ptu_uart2_lsr                               (*(volatile unsigned int *)dc_ptu_uart2_lsr_adr)
  #define dc_ptu_uart2_msr_adr                           0x00352228                                                   // uart2_base + 0x00000028
  #define dc_ptu_uart2_msr                               (*(volatile unsigned int *)dc_ptu_uart2_msr_adr)
  #define dc_ptu_uart2_rfl_adr                           0x0035222c                                                   // uart2_base + 0x0000002c
  #define dc_ptu_uart2_rfl                               (*(volatile unsigned int *)dc_ptu_uart2_rfl_adr)
  #define dc_ptu_uart2_tfl_adr                           0x00352230                                                   // uart2_base + 0x00000030
  #define dc_ptu_uart2_tfl                               (*(volatile unsigned int *)dc_ptu_uart2_tfl_adr)
  #define dc_ptu_uart2_rfc_adr                           0x00352234                                                   // uart2_base + 0x00000034
  #define dc_ptu_uart2_rfc                               (*(volatile unsigned int *)dc_ptu_uart2_rfc_adr)
  #define dc_ptu_uart2_esc_adr                           0x00352238                                                   // uart2_base + 0x00000038
  #define dc_ptu_uart2_esc                               (*(volatile unsigned int *)dc_ptu_uart2_esc_adr)
  #define dc_ptu_uart2_abr_adr                           0x0035223c                                                   // uart2_base + 0x0000003c
  #define dc_ptu_uart2_abr                               (*(volatile unsigned int *)dc_ptu_uart2_abr_adr)
  #define uart_hc_ho_pklen_adr                           0x00352300                                                   // uart2_hc_base + 0x00000000
  #define uart_hc_ho_pklen                               (*(volatile unsigned int *)uart_hc_ho_pklen_adr)
  #define uart_hc_hi_pklen_adr                           0x00352304                                                   // uart2_hc_base + 0x00000004
  #define uart_hc_hi_pklen                               (*(volatile unsigned int *)uart_hc_hi_pklen_adr)
  #define uart_hc_ho_dma_ctl_adr                         0x00352308                                                   // uart2_hc_base + 0x00000008
  #define uart_hc_ho_dma_ctl                             (*(volatile unsigned int *)uart_hc_ho_dma_ctl_adr)
  #define uart_hc_hi_dma_ctl_adr                         0x0035230c                                                   // uart2_hc_base + 0x0000000c
  #define uart_hc_hi_dma_ctl                             (*(volatile unsigned int *)uart_hc_hi_dma_ctl_adr)
  #define uart_hc_ho_bsize_adr                           0x00352310                                                   // uart2_hc_base + 0x00000010
  #define uart_hc_ho_bsize                               (*(volatile unsigned int *)uart_hc_ho_bsize_adr)
  #define uart_hc_hi_bsize_adr                           0x00352314                                                   // uart2_hc_base + 0x00000014
  #define uart_hc_hi_bsize                               (*(volatile unsigned int *)uart_hc_hi_bsize_adr)
  #define uart_hc_int_status_adr                         0x00352318                                                   // uart2_hc_base + 0x00000018
  #define uart_hc_int_status                             (*(volatile unsigned int *)uart_hc_int_status_adr)
  #define uart_hc_int_enable_adr                         0x0035231c                                                   // uart2_hc_base + 0x0000001c
  #define uart_hc_int_enable                             (*(volatile unsigned int *)uart_hc_int_enable_adr)
  #define uart_hc_data_adr                               0x00352320                                                   // uart2_hc_base + 0x00000020
  #define uart_hc_data                                   (*(volatile unsigned int *)uart_hc_data_adr)
  #define dmacintstat_adr                                0x00300000                                                   // dmac_adr_base + 0x00000000
  #define dmacintstat                                    (*(volatile unsigned int *)dmacintstat_adr)
  #define dmacinttcstat_adr                              0x00300004                                                   // dmac_adr_base + 0x00000004
  #define dmacinttcstat                                  (*(volatile unsigned int *)dmacinttcstat_adr)
  #define dmacinttcclr_adr                               0x00300008                                                   // dmac_adr_base + 0x00000008
  #define dmacinttcclr                                   (*(volatile unsigned int *)dmacinttcclr_adr)
  #define dmacinterrstat_adr                             0x0030000c                                                   // dmac_adr_base + 0x0000000c
  #define dmacinterrstat                                 (*(volatile unsigned int *)dmacinterrstat_adr)
  #define dmacinterrclr_adr                              0x00300010                                                   // dmac_adr_base + 0x00000010
  #define dmacinterrclr                                  (*(volatile unsigned int *)dmacinterrclr_adr)
  #define dmacrawintc_adr                                0x00300014                                                   // dmac_adr_base + 0x00000014
  #define dmacrawintc                                    (*(volatile unsigned int *)dmacrawintc_adr)
  #define dmacrawinterr_adr                              0x00300018                                                   // dmac_adr_base + 0x00000018
  #define dmacrawinterr                                  (*(volatile unsigned int *)dmacrawinterr_adr)
  #define dmacenbldchns_adr                              0x0030001c                                                   // dmac_adr_base + 0x0000001c
  #define dmacenbldchns                                  (*(volatile unsigned int *)dmacenbldchns_adr)
  #define dmacsoftbreq_adr                               0x00300020                                                   // dmac_adr_base + 0x00000020
  #define dmacsoftbreq                                   (*(volatile unsigned int *)dmacsoftbreq_adr)
  #define dmacsoftsreq_adr                               0x00300024                                                   // dmac_adr_base + 0x00000024
  #define dmacsoftsreq                                   (*(volatile unsigned int *)dmacsoftsreq_adr)
  #define dmacsoftlbreq_adr                              0x00300028                                                   // dmac_adr_base + 0x00000028
  #define dmacsoftlbreq                                  (*(volatile unsigned int *)dmacsoftlbreq_adr)
  #define dmacsoftlsreq_adr                              0x0030002c                                                   // dmac_adr_base + 0x0000002c
  #define dmacsoftlsreq                                  (*(volatile unsigned int *)dmacsoftlsreq_adr)
  #define dmacconfig_adr                                 0x00300030                                                   // dmac_adr_base + 0x00000030
  #define dmacconfig                                     (*(volatile unsigned int *)dmacconfig_adr)
  #define dmacsync_adr                                   0x00300034                                                   // dmac_adr_base + 0x00000034
  #define dmacsync                                       (*(volatile unsigned int *)dmacsync_adr)
  #define dmacc0srcaddr_adr                              0x00300100                                                   // dmac_adr_base + 0x00000100
  #define dmacc0srcaddr                                  (*(volatile unsigned int *)dmacc0srcaddr_adr)
  #define dmacc0destaddr_adr                             0x00300104                                                   // dmac_adr_base + 0x00000104
  #define dmacc0destaddr                                 (*(volatile unsigned int *)dmacc0destaddr_adr)
  #define dmacc0llireg_adr                               0x00300108                                                   // dmac_adr_base + 0x00000108
  #define dmacc0llireg                                   (*(volatile unsigned int *)dmacc0llireg_adr)
  #define dmacc0control_adr                              0x0030010c                                                   // dmac_adr_base + 0x0000010c
  #define dmacc0control                                  (*(volatile unsigned int *)dmacc0control_adr)
  #define dmacc0config_adr                               0x00300110                                                   // dmac_adr_base + 0x00000110
  #define dmacc0config                                   (*(volatile unsigned int *)dmacc0config_adr)
  #define dmacc1srcaddr_adr                              0x00300120                                                   // dmac_adr_base + 0x00000120
  #define dmacc1srcaddr                                  (*(volatile unsigned int *)dmacc1srcaddr_adr)
  #define dmacc1destaddr_adr                             0x00300124                                                   // dmac_adr_base + 0x00000124
  #define dmacc1destaddr                                 (*(volatile unsigned int *)dmacc1destaddr_adr)
  #define dmacc1llireg_adr                               0x00300128                                                   // dmac_adr_base + 0x00000128
  #define dmacc1llireg                                   (*(volatile unsigned int *)dmacc1llireg_adr)
  #define dmacc1control_adr                              0x0030012c                                                   // dmac_adr_base + 0x0000012c
  #define dmacc1control                                  (*(volatile unsigned int *)dmacc1control_adr)
  #define dmacc1config_adr                               0x00300130                                                   // dmac_adr_base + 0x00000130
  #define dmacc1config                                   (*(volatile unsigned int *)dmacc1config_adr)
  #define dmacc2srcaddr_adr                              0x00300140                                                   // dmac_adr_base + 0x00000140
  #define dmacc2srcaddr                                  (*(volatile unsigned int *)dmacc2srcaddr_adr)
  #define dmacc2destaddr_adr                             0x00300144                                                   // dmac_adr_base + 0x00000144
  #define dmacc2destaddr                                 (*(volatile unsigned int *)dmacc2destaddr_adr)
  #define dmacc2llireg_adr                               0x00300148                                                   // dmac_adr_base + 0x00000148
  #define dmacc2llireg                                   (*(volatile unsigned int *)dmacc2llireg_adr)
  #define dmacc2control_adr                              0x0030014c                                                   // dmac_adr_base + 0x0000014c
  #define dmacc2control                                  (*(volatile unsigned int *)dmacc2control_adr)
  #define dmacc2config_adr                               0x00300150                                                   // dmac_adr_base + 0x00000150
  #define dmacc2config                                   (*(volatile unsigned int *)dmacc2config_adr)
  #define dmacc3srcaddr_adr                              0x00300160                                                   // dmac_adr_base + 0x00000160
  #define dmacc3srcaddr                                  (*(volatile unsigned int *)dmacc3srcaddr_adr)
  #define dmacc3destaddr_adr                             0x00300164                                                   // dmac_adr_base + 0x00000164
  #define dmacc3destaddr                                 (*(volatile unsigned int *)dmacc3destaddr_adr)
  #define dmacc3llireg_adr                               0x00300168                                                   // dmac_adr_base + 0x00000168
  #define dmacc3llireg                                   (*(volatile unsigned int *)dmacc3llireg_adr)
  #define dmacc3control_adr                              0x0030016c                                                   // dmac_adr_base + 0x0000016c
  #define dmacc3control                                  (*(volatile unsigned int *)dmacc3control_adr)
  #define dmacc3config_adr                               0x00300170                                                   // dmac_adr_base + 0x00000170
  #define dmacc3config                                   (*(volatile unsigned int *)dmacc3config_adr)
  #define dmacc4srcaddr_adr                              0x00300180                                                   // dmac_adr_base + 0x00000180
  #define dmacc4srcaddr                                  (*(volatile unsigned int *)dmacc4srcaddr_adr)
  #define dmacc4destaddr_adr                             0x00300184                                                   // dmac_adr_base + 0x00000184
  #define dmacc4destaddr                                 (*(volatile unsigned int *)dmacc4destaddr_adr)
  #define dmacc4llireg_adr                               0x00300188                                                   // dmac_adr_base + 0x00000188
  #define dmacc4llireg                                   (*(volatile unsigned int *)dmacc4llireg_adr)
  #define dmacc4control_adr                              0x0030018c                                                   // dmac_adr_base + 0x0000018c
  #define dmacc4control                                  (*(volatile unsigned int *)dmacc4control_adr)
  #define dmacc4config_adr                               0x00300190                                                   // dmac_adr_base + 0x00000190
  #define dmacc4config                                   (*(volatile unsigned int *)dmacc4config_adr)
  #define dmacc5srcaddr_adr                              0x003001a0                                                   // dmac_adr_base + 0x000001a0
  #define dmacc5srcaddr                                  (*(volatile unsigned int *)dmacc5srcaddr_adr)
  #define dmacc5destaddr_adr                             0x003001a4                                                   // dmac_adr_base + 0x000001a4
  #define dmacc5destaddr                                 (*(volatile unsigned int *)dmacc5destaddr_adr)
  #define dmacc5llireg_adr                               0x003001a8                                                   // dmac_adr_base + 0x000001a8
  #define dmacc5llireg                                   (*(volatile unsigned int *)dmacc5llireg_adr)
  #define dmacc5control_adr                              0x003001ac                                                   // dmac_adr_base + 0x000001ac
  #define dmacc5control                                  (*(volatile unsigned int *)dmacc5control_adr)
  #define dmacc5config_adr                               0x003001b0                                                   // dmac_adr_base + 0x000001b0
  #define dmacc5config                                   (*(volatile unsigned int *)dmacc5config_adr)
  #define dmacc6srcaddr_adr                              0x003001c0                                                   // dmac_adr_base + 0x000001c0
  #define dmacc6srcaddr                                  (*(volatile unsigned int *)dmacc6srcaddr_adr)
  #define dmacc6destaddr_adr                             0x003001c4                                                   // dmac_adr_base + 0x000001c4
  #define dmacc6destaddr                                 (*(volatile unsigned int *)dmacc6destaddr_adr)
  #define dmacc6llireg_adr                               0x003001c8                                                   // dmac_adr_base + 0x000001c8
  #define dmacc6llireg                                   (*(volatile unsigned int *)dmacc6llireg_adr)
  #define dmacc6control_adr                              0x003001cc                                                   // dmac_adr_base + 0x000001cc
  #define dmacc6control                                  (*(volatile unsigned int *)dmacc6control_adr)
  #define dmacc6config_adr                               0x003001d0                                                   // dmac_adr_base + 0x000001d0
  #define dmacc6config                                   (*(volatile unsigned int *)dmacc6config_adr)
  #define dmacc7srcaddr_adr                              0x003001e0                                                   // dmac_adr_base + 0x000001e0
  #define dmacc7srcaddr                                  (*(volatile unsigned int *)dmacc7srcaddr_adr)
  #define dmacc7destaddr_adr                             0x003001e4                                                   // dmac_adr_base + 0x000001e4
  #define dmacc7destaddr                                 (*(volatile unsigned int *)dmacc7destaddr_adr)
  #define dmacc7llireg_adr                               0x003001e8                                                   // dmac_adr_base + 0x000001e8
  #define dmacc7llireg                                   (*(volatile unsigned int *)dmacc7llireg_adr)
  #define dmacc7control_adr                              0x003001ec                                                   // dmac_adr_base + 0x000001ec
  #define dmacc7control                                  (*(volatile unsigned int *)dmacc7control_adr)
  #define dmacc7config_adr                               0x003001f0                                                   // dmac_adr_base + 0x000001f0
  #define dmacc7config                                   (*(volatile unsigned int *)dmacc7config_adr)
  #define dmactcr_adr                                    0x00300500                                                   // dmac_adr_base + 0x00000500
  #define dmactcr                                        (*(volatile unsigned int *)dmactcr_adr)
  #define dmacitop1_adr                                  0x00300504                                                   // dmac_adr_base + 0x00000504
  #define dmacitop1                                      (*(volatile unsigned int *)dmacitop1_adr)
  #define dmacitop2_adr                                  0x00300508                                                   // dmac_adr_base + 0x00000508
  #define dmacitop2                                      (*(volatile unsigned int *)dmacitop2_adr)
  #define dmacitop3_adr                                  0x0030050c                                                   // dmac_adr_base + 0x0000050c
  #define dmacitop3                                      (*(volatile unsigned int *)dmacitop3_adr)
  #define dmacperiphid0_adr                              0x00300fe0                                                   // dmac_adr_base + 0x00000fe0
  #define dmacperiphid0                                  (*(volatile unsigned int *)dmacperiphid0_adr)
  #define dmacperiphid1_adr                              0x00300fe4                                                   // dmac_adr_base + 0x00000fe4
  #define dmacperiphid1                                  (*(volatile unsigned int *)dmacperiphid1_adr)
  #define dmacperiphid2_adr                              0x00300fe8                                                   // dmac_adr_base + 0x00000fe8
  #define dmacperiphid2                                  (*(volatile unsigned int *)dmacperiphid2_adr)
  #define dmacperiphid3_adr                              0x00300fec                                                   // dmac_adr_base + 0x00000fec
  #define dmacperiphid3                                  (*(volatile unsigned int *)dmacperiphid3_adr)
  #define dmacpcellid0_adr                               0x00300ff0                                                   // dmac_adr_base + 0x00000ff0
  #define dmacpcellid0                                   (*(volatile unsigned int *)dmacpcellid0_adr)
  #define dmacpcellid1_adr                               0x00300ff4                                                   // dmac_adr_base + 0x00000ff4
  #define dmacpcellid1                                   (*(volatile unsigned int *)dmacpcellid1_adr)
  #define dmacpcellid2_adr                               0x00300ff8                                                   // dmac_adr_base + 0x00000ff8
  #define dmacpcellid2                                   (*(volatile unsigned int *)dmacpcellid2_adr)
  #define dmacpcellid3_adr                               0x00300ffc                                                   // dmac_adr_base + 0x00000ffc
  #define dmacpcellid3                                   (*(volatile unsigned int *)dmacpcellid3_adr)
  #define prc_brk_out0_adr                               0x00310000                                                   // prc_adr_base + 0x00000000
  #define prc_brk_out0                                   (*(volatile unsigned int *)prc_brk_out0_adr)
  #define prc_brk_out1_adr                               0x00310004                                                   // prc_adr_base + 0x00000004
  #define prc_brk_out1                                   (*(volatile unsigned int *)prc_brk_out1_adr)
  #define prc_brk_out2_adr                               0x00310008                                                   // prc_adr_base + 0x00000008
  #define prc_brk_out2                                   (*(volatile unsigned int *)prc_brk_out2_adr)
  #define prc_brk_out3_adr                               0x0031000c                                                   // prc_adr_base + 0x0000000c
  #define prc_brk_out3                                   (*(volatile unsigned int *)prc_brk_out3_adr)
  #define prc_brk_out4_adr                               0x00310010                                                   // prc_adr_base + 0x00000010
  #define prc_brk_out4                                   (*(volatile unsigned int *)prc_brk_out4_adr)
  #define prc_brk_out5_adr                               0x00310014                                                   // prc_adr_base + 0x00000014
  #define prc_brk_out5                                   (*(volatile unsigned int *)prc_brk_out5_adr)
  #define prc_brk_out6_adr                               0x00310018                                                   // prc_adr_base + 0x00000018
  #define prc_brk_out6                                   (*(volatile unsigned int *)prc_brk_out6_adr)
  #define prc_brk_out7_adr                               0x0031001c                                                   // prc_adr_base + 0x0000001c
  #define prc_brk_out7                                   (*(volatile unsigned int *)prc_brk_out7_adr)
  #define prc_brk_out8_adr                               0x00310020                                                   // prc_adr_base + 0x00000020
  #define prc_brk_out8                                   (*(volatile unsigned int *)prc_brk_out8_adr)
  #define prc_brk_out9_adr                               0x00310024                                                   // prc_adr_base + 0x00000024
  #define prc_brk_out9                                   (*(volatile unsigned int *)prc_brk_out9_adr)
  #define prc_brk_outA_adr                               0x00310028                                                   // prc_adr_base + 0x00000028
  #define prc_brk_outA                                   (*(volatile unsigned int *)prc_brk_outA_adr)
  #define prc_brk_outB_adr                               0x0031002c                                                   // prc_adr_base + 0x0000002c
  #define prc_brk_outB                                   (*(volatile unsigned int *)prc_brk_outB_adr)
  #define prc_brk_outC_adr                               0x00310030                                                   // prc_adr_base + 0x00000030
  #define prc_brk_outC                                   (*(volatile unsigned int *)prc_brk_outC_adr)
  #define prc_brk_outD_adr                               0x00310034                                                   // prc_adr_base + 0x00000034
  #define prc_brk_outD                                   (*(volatile unsigned int *)prc_brk_outD_adr)
  #define prc_brk_outE_adr                               0x00310038                                                   // prc_adr_base + 0x00000038
  #define prc_brk_outE                                   (*(volatile unsigned int *)prc_brk_outE_adr)
  #define prc_brk_outF_adr                               0x0031003c                                                   // prc_adr_base + 0x0000003c
  #define prc_brk_outF                                   (*(volatile unsigned int *)prc_brk_outF_adr)
  #define prc_brk_out10_adr                              0x00310040                                                   // prc_adr_base + 0x00000040
  #define prc_brk_out10                                  (*(volatile unsigned int *)prc_brk_out10_adr)
  #define prc_brk_out11_adr                              0x00310044                                                   // prc_adr_base + 0x00000044
  #define prc_brk_out11                                  (*(volatile unsigned int *)prc_brk_out11_adr)
  #define prc_brk_out12_adr                              0x00310048                                                   // prc_adr_base + 0x00000048
  #define prc_brk_out12                                  (*(volatile unsigned int *)prc_brk_out12_adr)
  #define prc_brk_out13_adr                              0x0031004c                                                   // prc_adr_base + 0x0000004c
  #define prc_brk_out13                                  (*(volatile unsigned int *)prc_brk_out13_adr)
  #define prc_brk_out14_adr                              0x00310050                                                   // prc_adr_base + 0x00000050
  #define prc_brk_out14                                  (*(volatile unsigned int *)prc_brk_out14_adr)
  #define prc_brk_out15_adr                              0x00310054                                                   // prc_adr_base + 0x00000054
  #define prc_brk_out15                                  (*(volatile unsigned int *)prc_brk_out15_adr)
  #define prc_brk_out16_adr                              0x00310058                                                   // prc_adr_base + 0x00000058
  #define prc_brk_out16                                  (*(volatile unsigned int *)prc_brk_out16_adr)
  #define prc_brk_out17_adr                              0x0031005c                                                   // prc_adr_base + 0x0000005c
  #define prc_brk_out17                                  (*(volatile unsigned int *)prc_brk_out17_adr)
  #define prc_brk_out18_adr                              0x00310060                                                   // prc_adr_base + 0x00000060
  #define prc_brk_out18                                  (*(volatile unsigned int *)prc_brk_out18_adr)
  #define prc_brk_out19_adr                              0x00310064                                                   // prc_adr_base + 0x00000064
  #define prc_brk_out19                                  (*(volatile unsigned int *)prc_brk_out19_adr)
  #define prc_brk_out1A_adr                              0x00310068                                                   // prc_adr_base + 0x00000068
  #define prc_brk_out1A                                  (*(volatile unsigned int *)prc_brk_out1A_adr)
  #define prc_brk_out1B_adr                              0x0031006c                                                   // prc_adr_base + 0x0000006c
  #define prc_brk_out1B                                  (*(volatile unsigned int *)prc_brk_out1B_adr)
  #define prc_brk_out1C_adr                              0x00310070                                                   // prc_adr_base + 0x00000070
  #define prc_brk_out1C                                  (*(volatile unsigned int *)prc_brk_out1C_adr)
  #define prc_brk_out1D_adr                              0x00310074                                                   // prc_adr_base + 0x00000074
  #define prc_brk_out1D                                  (*(volatile unsigned int *)prc_brk_out1D_adr)
  #define prc_brk_out1E_adr                              0x00310078                                                   // prc_adr_base + 0x00000078
  #define prc_brk_out1E                                  (*(volatile unsigned int *)prc_brk_out1E_adr)
  #define prc_brk_out1F_adr                              0x0031007c                                                   // prc_adr_base + 0x0000007c
  #define prc_brk_out1F                                  (*(volatile unsigned int *)prc_brk_out1F_adr)
  #define prc_brk_out20_adr                              0x00310080                                                   // prc_adr_base + 0x00000080
  #define prc_brk_out20                                  (*(volatile unsigned int *)prc_brk_out20_adr)
  #define prc_brk_out21_adr                              0x00310084                                                   // prc_adr_base + 0x00000084
  #define prc_brk_out21                                  (*(volatile unsigned int *)prc_brk_out21_adr)
  #define prc_brk_out22_adr                              0x00310088                                                   // prc_adr_base + 0x00000088
  #define prc_brk_out22                                  (*(volatile unsigned int *)prc_brk_out22_adr)
  #define prc_brk_out23_adr                              0x0031008c                                                   // prc_adr_base + 0x0000008c
  #define prc_brk_out23                                  (*(volatile unsigned int *)prc_brk_out23_adr)
  #define prc_brk_out24_adr                              0x00310090                                                   // prc_adr_base + 0x00000090
  #define prc_brk_out24                                  (*(volatile unsigned int *)prc_brk_out24_adr)
  #define prc_brk_out25_adr                              0x00310094                                                   // prc_adr_base + 0x00000094
  #define prc_brk_out25                                  (*(volatile unsigned int *)prc_brk_out25_adr)
  #define prc_brk_out26_adr                              0x00310098                                                   // prc_adr_base + 0x00000098
  #define prc_brk_out26                                  (*(volatile unsigned int *)prc_brk_out26_adr)
  #define prc_brk_out27_adr                              0x0031009c                                                   // prc_adr_base + 0x0000009c
  #define prc_brk_out27                                  (*(volatile unsigned int *)prc_brk_out27_adr)
  #define prc_brk_out28_adr                              0x003100a0                                                   // prc_adr_base + 0x000000a0
  #define prc_brk_out28                                  (*(volatile unsigned int *)prc_brk_out28_adr)
  #define prc_brk_out29_adr                              0x003100a4                                                   // prc_adr_base + 0x000000a4
  #define prc_brk_out29                                  (*(volatile unsigned int *)prc_brk_out29_adr)
  #define prc_brk_out2A_adr                              0x003100a8                                                   // prc_adr_base + 0x000000a8
  #define prc_brk_out2A                                  (*(volatile unsigned int *)prc_brk_out2A_adr)
  #define prc_brk_out2B_adr                              0x003100ac                                                   // prc_adr_base + 0x000000ac
  #define prc_brk_out2B                                  (*(volatile unsigned int *)prc_brk_out2B_adr)
  #define prc_brk_out2C_adr                              0x003100b0                                                   // prc_adr_base + 0x000000b0
  #define prc_brk_out2C                                  (*(volatile unsigned int *)prc_brk_out2C_adr)
  #define prc_brk_out2D_adr                              0x003100b4                                                   // prc_adr_base + 0x000000b4
  #define prc_brk_out2D                                  (*(volatile unsigned int *)prc_brk_out2D_adr)
  #define prc_brk_out2E_adr                              0x003100b8                                                   // prc_adr_base + 0x000000b8
  #define prc_brk_out2E                                  (*(volatile unsigned int *)prc_brk_out2E_adr)
  #define prc_brk_out2F_adr                              0x003100bc                                                   // prc_adr_base + 0x000000bc
  #define prc_brk_out2F                                  (*(volatile unsigned int *)prc_brk_out2F_adr)
  #define prc_brk_out30_adr                              0x003100c0                                                   // prc_adr_base + 0x000000c0
  #define prc_brk_out30                                  (*(volatile unsigned int *)prc_brk_out30_adr)
  #define prc_brk_out31_adr                              0x003100c4                                                   // prc_adr_base + 0x000000c4
  #define prc_brk_out31                                  (*(volatile unsigned int *)prc_brk_out31_adr)
  #define prc_brk_out32_adr                              0x003100c8                                                   // prc_adr_base + 0x000000c8
  #define prc_brk_out32                                  (*(volatile unsigned int *)prc_brk_out32_adr)
  #define prc_brk_out33_adr                              0x003100cc                                                   // prc_adr_base + 0x000000cc
  #define prc_brk_out33                                  (*(volatile unsigned int *)prc_brk_out33_adr)
  #define prc_brk_out34_adr                              0x003100d0                                                   // prc_adr_base + 0x000000d0
  #define prc_brk_out34                                  (*(volatile unsigned int *)prc_brk_out34_adr)
  #define prc_brk_out35_adr                              0x003100d4                                                   // prc_adr_base + 0x000000d4
  #define prc_brk_out35                                  (*(volatile unsigned int *)prc_brk_out35_adr)
  #define prc_brk_out36_adr                              0x003100d8                                                   // prc_adr_base + 0x000000d8
  #define prc_brk_out36                                  (*(volatile unsigned int *)prc_brk_out36_adr)
  #define prc_brk_out37_adr                              0x003100dc                                                   // prc_adr_base + 0x000000dc
  #define prc_brk_out37                                  (*(volatile unsigned int *)prc_brk_out37_adr)
  #define prc_brk_out38_adr                              0x003100e0                                                   // prc_adr_base + 0x000000e0
  #define prc_brk_out38                                  (*(volatile unsigned int *)prc_brk_out38_adr)
  #define prc_brk_out39_adr                              0x003100e4                                                   // prc_adr_base + 0x000000e4
  #define prc_brk_out39                                  (*(volatile unsigned int *)prc_brk_out39_adr)
  #define prc_brk_out3A_adr                              0x003100e8                                                   // prc_adr_base + 0x000000e8
  #define prc_brk_out3A                                  (*(volatile unsigned int *)prc_brk_out3A_adr)
  #define prc_brk_out3B_adr                              0x003100ec                                                   // prc_adr_base + 0x000000ec
  #define prc_brk_out3B                                  (*(volatile unsigned int *)prc_brk_out3B_adr)
  #define prc_brk_out3C_adr                              0x003100f0                                                   // prc_adr_base + 0x000000f0
  #define prc_brk_out3C                                  (*(volatile unsigned int *)prc_brk_out3C_adr)
  #define prc_brk_out3D_adr                              0x003100f4                                                   // prc_adr_base + 0x000000f4
  #define prc_brk_out3D                                  (*(volatile unsigned int *)prc_brk_out3D_adr)
  #define prc_brk_out3E_adr                              0x003100f8                                                   // prc_adr_base + 0x000000f8
  #define prc_brk_out3E                                  (*(volatile unsigned int *)prc_brk_out3E_adr)
  #define prc_brk_out3F_adr                              0x003100fc                                                   // prc_adr_base + 0x000000fc
  #define prc_brk_out3F                                  (*(volatile unsigned int *)prc_brk_out3F_adr)
  #define prc_brk_out40_adr                              0x00310100                                                   // prc_adr_base + 0x00000100
  #define prc_brk_out40                                  (*(volatile unsigned int *)prc_brk_out40_adr)
  #define prc_brk_out41_adr                              0x00310104                                                   // prc_adr_base + 0x00000104
  #define prc_brk_out41                                  (*(volatile unsigned int *)prc_brk_out41_adr)
  #define prc_brk_out42_adr                              0x00310108                                                   // prc_adr_base + 0x00000108
  #define prc_brk_out42                                  (*(volatile unsigned int *)prc_brk_out42_adr)
  #define prc_brk_out43_adr                              0x0031010c                                                   // prc_adr_base + 0x0000010c
  #define prc_brk_out43                                  (*(volatile unsigned int *)prc_brk_out43_adr)
  #define prc_brk_out44_adr                              0x00310110                                                   // prc_adr_base + 0x00000110
  #define prc_brk_out44                                  (*(volatile unsigned int *)prc_brk_out44_adr)
  #define prc_brk_out45_adr                              0x00310114                                                   // prc_adr_base + 0x00000114
  #define prc_brk_out45                                  (*(volatile unsigned int *)prc_brk_out45_adr)
  #define prc_brk_out46_adr                              0x00310118                                                   // prc_adr_base + 0x00000118
  #define prc_brk_out46                                  (*(volatile unsigned int *)prc_brk_out46_adr)
  #define prc_brk_out47_adr                              0x0031011c                                                   // prc_adr_base + 0x0000011c
  #define prc_brk_out47                                  (*(volatile unsigned int *)prc_brk_out47_adr)
  #define prc_brk_out48_adr                              0x00310120                                                   // prc_adr_base + 0x00000120
  #define prc_brk_out48                                  (*(volatile unsigned int *)prc_brk_out48_adr)
  #define prc_brk_out49_adr                              0x00310124                                                   // prc_adr_base + 0x00000124
  #define prc_brk_out49                                  (*(volatile unsigned int *)prc_brk_out49_adr)
  #define prc_brk_out4A_adr                              0x00310128                                                   // prc_adr_base + 0x00000128
  #define prc_brk_out4A                                  (*(volatile unsigned int *)prc_brk_out4A_adr)
  #define prc_brk_out4B_adr                              0x0031012c                                                   // prc_adr_base + 0x0000012c
  #define prc_brk_out4B                                  (*(volatile unsigned int *)prc_brk_out4B_adr)
  #define prc_brk_out4C_adr                              0x00310130                                                   // prc_adr_base + 0x00000130
  #define prc_brk_out4C                                  (*(volatile unsigned int *)prc_brk_out4C_adr)
  #define prc_brk_out4D_adr                              0x00310134                                                   // prc_adr_base + 0x00000134
  #define prc_brk_out4D                                  (*(volatile unsigned int *)prc_brk_out4D_adr)
  #define prc_brk_out4E_adr                              0x00310138                                                   // prc_adr_base + 0x00000138
  #define prc_brk_out4E                                  (*(volatile unsigned int *)prc_brk_out4E_adr)
  #define prc_brk_out4F_adr                              0x0031013c                                                   // prc_adr_base + 0x0000013c
  #define prc_brk_out4F                                  (*(volatile unsigned int *)prc_brk_out4F_adr)
  #define prc_brk_out50_adr                              0x00310140                                                   // prc_adr_base + 0x00000140
  #define prc_brk_out50                                  (*(volatile unsigned int *)prc_brk_out50_adr)
  #define prc_brk_out51_adr                              0x00310144                                                   // prc_adr_base + 0x00000144
  #define prc_brk_out51                                  (*(volatile unsigned int *)prc_brk_out51_adr)
  #define prc_brk_out52_adr                              0x00310148                                                   // prc_adr_base + 0x00000148
  #define prc_brk_out52                                  (*(volatile unsigned int *)prc_brk_out52_adr)
  #define prc_brk_out53_adr                              0x0031014c                                                   // prc_adr_base + 0x0000014c
  #define prc_brk_out53                                  (*(volatile unsigned int *)prc_brk_out53_adr)
  #define prc_brk_out54_adr                              0x00310150                                                   // prc_adr_base + 0x00000150
  #define prc_brk_out54                                  (*(volatile unsigned int *)prc_brk_out54_adr)
  #define prc_brk_out55_adr                              0x00310154                                                   // prc_adr_base + 0x00000154
  #define prc_brk_out55                                  (*(volatile unsigned int *)prc_brk_out55_adr)
  #define prc_brk_out56_adr                              0x00310158                                                   // prc_adr_base + 0x00000158
  #define prc_brk_out56                                  (*(volatile unsigned int *)prc_brk_out56_adr)
  #define prc_brk_out57_adr                              0x0031015c                                                   // prc_adr_base + 0x0000015c
  #define prc_brk_out57                                  (*(volatile unsigned int *)prc_brk_out57_adr)
  #define prc_brk_out58_adr                              0x00310160                                                   // prc_adr_base + 0x00000160
  #define prc_brk_out58                                  (*(volatile unsigned int *)prc_brk_out58_adr)
  #define prc_brk_out59_adr                              0x00310164                                                   // prc_adr_base + 0x00000164
  #define prc_brk_out59                                  (*(volatile unsigned int *)prc_brk_out59_adr)
  #define prc_brk_out5A_adr                              0x00310168                                                   // prc_adr_base + 0x00000168
  #define prc_brk_out5A                                  (*(volatile unsigned int *)prc_brk_out5A_adr)
  #define prc_brk_out5B_adr                              0x0031016c                                                   // prc_adr_base + 0x0000016c
  #define prc_brk_out5B                                  (*(volatile unsigned int *)prc_brk_out5B_adr)
  #define prc_brk_out5C_adr                              0x00310170                                                   // prc_adr_base + 0x00000170
  #define prc_brk_out5C                                  (*(volatile unsigned int *)prc_brk_out5C_adr)
  #define prc_brk_out5D_adr                              0x00310174                                                   // prc_adr_base + 0x00000174
  #define prc_brk_out5D                                  (*(volatile unsigned int *)prc_brk_out5D_adr)
  #define prc_brk_out5E_adr                              0x00310178                                                   // prc_adr_base + 0x00000178
  #define prc_brk_out5E                                  (*(volatile unsigned int *)prc_brk_out5E_adr)
  #define prc_brk_out5F_adr                              0x0031017c                                                   // prc_adr_base + 0x0000017c
  #define prc_brk_out5F                                  (*(volatile unsigned int *)prc_brk_out5F_adr)
  #define prc_brk_out60_adr                              0x00310180                                                   // prc_adr_base + 0x00000180
  #define prc_brk_out60                                  (*(volatile unsigned int *)prc_brk_out60_adr)
  #define prc_brk_out61_adr                              0x00310184                                                   // prc_adr_base + 0x00000184
  #define prc_brk_out61                                  (*(volatile unsigned int *)prc_brk_out61_adr)
  #define prc_brk_out62_adr                              0x00310188                                                   // prc_adr_base + 0x00000188
  #define prc_brk_out62                                  (*(volatile unsigned int *)prc_brk_out62_adr)
  #define prc_brk_out63_adr                              0x0031018c                                                   // prc_adr_base + 0x0000018c
  #define prc_brk_out63                                  (*(volatile unsigned int *)prc_brk_out63_adr)
  #define prc_brk_out64_adr                              0x00310190                                                   // prc_adr_base + 0x00000190
  #define prc_brk_out64                                  (*(volatile unsigned int *)prc_brk_out64_adr)
  #define prc_brk_out65_adr                              0x00310194                                                   // prc_adr_base + 0x00000194
  #define prc_brk_out65                                  (*(volatile unsigned int *)prc_brk_out65_adr)
  #define prc_brk_out66_adr                              0x00310198                                                   // prc_adr_base + 0x00000198
  #define prc_brk_out66                                  (*(volatile unsigned int *)prc_brk_out66_adr)
  #define prc_brk_out67_adr                              0x0031019c                                                   // prc_adr_base + 0x0000019c
  #define prc_brk_out67                                  (*(volatile unsigned int *)prc_brk_out67_adr)
  #define prc_brk_out68_adr                              0x003101a0                                                   // prc_adr_base + 0x000001a0
  #define prc_brk_out68                                  (*(volatile unsigned int *)prc_brk_out68_adr)
  #define prc_brk_out69_adr                              0x003101a4                                                   // prc_adr_base + 0x000001a4
  #define prc_brk_out69                                  (*(volatile unsigned int *)prc_brk_out69_adr)
  #define prc_brk_out6A_adr                              0x003101a8                                                   // prc_adr_base + 0x000001a8
  #define prc_brk_out6A                                  (*(volatile unsigned int *)prc_brk_out6A_adr)
  #define prc_brk_out6B_adr                              0x003101ac                                                   // prc_adr_base + 0x000001ac
  #define prc_brk_out6B                                  (*(volatile unsigned int *)prc_brk_out6B_adr)
  #define prc_brk_out6C_adr                              0x003101b0                                                   // prc_adr_base + 0x000001b0
  #define prc_brk_out6C                                  (*(volatile unsigned int *)prc_brk_out6C_adr)
  #define prc_brk_out6D_adr                              0x003101b4                                                   // prc_adr_base + 0x000001b4
  #define prc_brk_out6D                                  (*(volatile unsigned int *)prc_brk_out6D_adr)
  #define prc_brk_out6E_adr                              0x003101b8                                                   // prc_adr_base + 0x000001b8
  #define prc_brk_out6E                                  (*(volatile unsigned int *)prc_brk_out6E_adr)
  #define prc_brk_out6F_adr                              0x003101bc                                                   // prc_adr_base + 0x000001bc
  #define prc_brk_out6F                                  (*(volatile unsigned int *)prc_brk_out6F_adr)
  #define prc_brk_out70_adr                              0x003101c0                                                   // prc_adr_base + 0x000001c0
  #define prc_brk_out70                                  (*(volatile unsigned int *)prc_brk_out70_adr)
  #define prc_brk_out71_adr                              0x003101c4                                                   // prc_adr_base + 0x000001c4
  #define prc_brk_out71                                  (*(volatile unsigned int *)prc_brk_out71_adr)
  #define prc_brk_out72_adr                              0x003101c8                                                   // prc_adr_base + 0x000001c8
  #define prc_brk_out72                                  (*(volatile unsigned int *)prc_brk_out72_adr)
  #define prc_brk_out73_adr                              0x003101cc                                                   // prc_adr_base + 0x000001cc
  #define prc_brk_out73                                  (*(volatile unsigned int *)prc_brk_out73_adr)
  #define prc_brk_out74_adr                              0x003101d0                                                   // prc_adr_base + 0x000001d0
  #define prc_brk_out74                                  (*(volatile unsigned int *)prc_brk_out74_adr)
  #define prc_brk_out75_adr                              0x003101d4                                                   // prc_adr_base + 0x000001d4
  #define prc_brk_out75                                  (*(volatile unsigned int *)prc_brk_out75_adr)
  #define prc_brk_out76_adr                              0x003101d8                                                   // prc_adr_base + 0x000001d8
  #define prc_brk_out76                                  (*(volatile unsigned int *)prc_brk_out76_adr)
  #define prc_brk_out77_adr                              0x003101dc                                                   // prc_adr_base + 0x000001dc
  #define prc_brk_out77                                  (*(volatile unsigned int *)prc_brk_out77_adr)
  #define prc_brk_out78_adr                              0x003101e0                                                   // prc_adr_base + 0x000001e0
  #define prc_brk_out78                                  (*(volatile unsigned int *)prc_brk_out78_adr)
  #define prc_brk_out79_adr                              0x003101e4                                                   // prc_adr_base + 0x000001e4
  #define prc_brk_out79                                  (*(volatile unsigned int *)prc_brk_out79_adr)
  #define prc_brk_out7A_adr                              0x003101e8                                                   // prc_adr_base + 0x000001e8
  #define prc_brk_out7A                                  (*(volatile unsigned int *)prc_brk_out7A_adr)
  #define prc_brk_out7B_adr                              0x003101ec                                                   // prc_adr_base + 0x000001ec
  #define prc_brk_out7B                                  (*(volatile unsigned int *)prc_brk_out7B_adr)
  #define prc_brk_out7C_adr                              0x003101f0                                                   // prc_adr_base + 0x000001f0
  #define prc_brk_out7C                                  (*(volatile unsigned int *)prc_brk_out7C_adr)
  #define prc_brk_out7D_adr                              0x003101f4                                                   // prc_adr_base + 0x000001f4
  #define prc_brk_out7D                                  (*(volatile unsigned int *)prc_brk_out7D_adr)
  #define prc_brk_out7E_adr                              0x003101f8                                                   // prc_adr_base + 0x000001f8
  #define prc_brk_out7E                                  (*(volatile unsigned int *)prc_brk_out7E_adr)
  #define prc_brk_out7F_adr                              0x003101fc                                                   // prc_adr_base + 0x000001fc
  #define prc_brk_out7F                                  (*(volatile unsigned int *)prc_brk_out7F_adr)
  #define prc_brk_out80_adr                              0x00310200                                                   // prc_adr_base + 0x00000200
  #define prc_brk_out80                                  (*(volatile unsigned int *)prc_brk_out80_adr)
  #define prc_brk_out81_adr                              0x00310204                                                   // prc_adr_base + 0x00000204
  #define prc_brk_out81                                  (*(volatile unsigned int *)prc_brk_out81_adr)
  #define prc_brk_out82_adr                              0x00310208                                                   // prc_adr_base + 0x00000208
  #define prc_brk_out82                                  (*(volatile unsigned int *)prc_brk_out82_adr)
  #define prc_brk_out83_adr                              0x0031020c                                                   // prc_adr_base + 0x0000020c
  #define prc_brk_out83                                  (*(volatile unsigned int *)prc_brk_out83_adr)
  #define prc_brk_out84_adr                              0x00310210                                                   // prc_adr_base + 0x00000210
  #define prc_brk_out84                                  (*(volatile unsigned int *)prc_brk_out84_adr)
  #define prc_brk_out85_adr                              0x00310214                                                   // prc_adr_base + 0x00000214
  #define prc_brk_out85                                  (*(volatile unsigned int *)prc_brk_out85_adr)
  #define prc_brk_out86_adr                              0x00310218                                                   // prc_adr_base + 0x00000218
  #define prc_brk_out86                                  (*(volatile unsigned int *)prc_brk_out86_adr)
  #define prc_brk_out87_adr                              0x0031021c                                                   // prc_adr_base + 0x0000021c
  #define prc_brk_out87                                  (*(volatile unsigned int *)prc_brk_out87_adr)
  #define prc_brk_out88_adr                              0x00310220                                                   // prc_adr_base + 0x00000220
  #define prc_brk_out88                                  (*(volatile unsigned int *)prc_brk_out88_adr)
  #define prc_brk_out89_adr                              0x00310224                                                   // prc_adr_base + 0x00000224
  #define prc_brk_out89                                  (*(volatile unsigned int *)prc_brk_out89_adr)
  #define prc_brk_out8A_adr                              0x00310228                                                   // prc_adr_base + 0x00000228
  #define prc_brk_out8A                                  (*(volatile unsigned int *)prc_brk_out8A_adr)
  #define prc_brk_out8B_adr                              0x0031022c                                                   // prc_adr_base + 0x0000022c
  #define prc_brk_out8B                                  (*(volatile unsigned int *)prc_brk_out8B_adr)
  #define prc_brk_out8C_adr                              0x00310230                                                   // prc_adr_base + 0x00000230
  #define prc_brk_out8C                                  (*(volatile unsigned int *)prc_brk_out8C_adr)
  #define prc_brk_out8D_adr                              0x00310234                                                   // prc_adr_base + 0x00000234
  #define prc_brk_out8D                                  (*(volatile unsigned int *)prc_brk_out8D_adr)
  #define prc_brk_out8E_adr                              0x00310238                                                   // prc_adr_base + 0x00000238
  #define prc_brk_out8E                                  (*(volatile unsigned int *)prc_brk_out8E_adr)
  #define prc_brk_out8F_adr                              0x0031023c                                                   // prc_adr_base + 0x0000023c
  #define prc_brk_out8F                                  (*(volatile unsigned int *)prc_brk_out8F_adr)
  #define prc_brk_out90_adr                              0x00310240                                                   // prc_adr_base + 0x00000240
  #define prc_brk_out90                                  (*(volatile unsigned int *)prc_brk_out90_adr)
  #define prc_brk_out91_adr                              0x00310244                                                   // prc_adr_base + 0x00000244
  #define prc_brk_out91                                  (*(volatile unsigned int *)prc_brk_out91_adr)
  #define prc_brk_out92_adr                              0x00310248                                                   // prc_adr_base + 0x00000248
  #define prc_brk_out92                                  (*(volatile unsigned int *)prc_brk_out92_adr)
  #define prc_brk_out93_adr                              0x0031024c                                                   // prc_adr_base + 0x0000024c
  #define prc_brk_out93                                  (*(volatile unsigned int *)prc_brk_out93_adr)
  #define prc_brk_out94_adr                              0x00310250                                                   // prc_adr_base + 0x00000250
  #define prc_brk_out94                                  (*(volatile unsigned int *)prc_brk_out94_adr)
  #define prc_brk_out95_adr                              0x00310254                                                   // prc_adr_base + 0x00000254
  #define prc_brk_out95                                  (*(volatile unsigned int *)prc_brk_out95_adr)
  #define prc_brk_out96_adr                              0x00310258                                                   // prc_adr_base + 0x00000258
  #define prc_brk_out96                                  (*(volatile unsigned int *)prc_brk_out96_adr)
  #define prc_brk_out97_adr                              0x0031025c                                                   // prc_adr_base + 0x0000025c
  #define prc_brk_out97                                  (*(volatile unsigned int *)prc_brk_out97_adr)
  #define prc_brk_out98_adr                              0x00310260                                                   // prc_adr_base + 0x00000260
  #define prc_brk_out98                                  (*(volatile unsigned int *)prc_brk_out98_adr)
  #define prc_brk_out99_adr                              0x00310264                                                   // prc_adr_base + 0x00000264
  #define prc_brk_out99                                  (*(volatile unsigned int *)prc_brk_out99_adr)
  #define prc_brk_out9A_adr                              0x00310268                                                   // prc_adr_base + 0x00000268
  #define prc_brk_out9A                                  (*(volatile unsigned int *)prc_brk_out9A_adr)
  #define prc_brk_out9B_adr                              0x0031026c                                                   // prc_adr_base + 0x0000026c
  #define prc_brk_out9B                                  (*(volatile unsigned int *)prc_brk_out9B_adr)
  #define prc_brk_out9C_adr                              0x00310270                                                   // prc_adr_base + 0x00000270
  #define prc_brk_out9C                                  (*(volatile unsigned int *)prc_brk_out9C_adr)
  #define prc_brk_out9D_adr                              0x00310274                                                   // prc_adr_base + 0x00000274
  #define prc_brk_out9D                                  (*(volatile unsigned int *)prc_brk_out9D_adr)
  #define prc_brk_out9E_adr                              0x00310278                                                   // prc_adr_base + 0x00000278
  #define prc_brk_out9E                                  (*(volatile unsigned int *)prc_brk_out9E_adr)
  #define prc_brk_out9F_adr                              0x0031027c                                                   // prc_adr_base + 0x0000027c
  #define prc_brk_out9F                                  (*(volatile unsigned int *)prc_brk_out9F_adr)
  #define prc_brk_outA0_adr                              0x00310280                                                   // prc_adr_base + 0x00000280
  #define prc_brk_outA0                                  (*(volatile unsigned int *)prc_brk_outA0_adr)
  #define prc_brk_outA1_adr                              0x00310284                                                   // prc_adr_base + 0x00000284
  #define prc_brk_outA1                                  (*(volatile unsigned int *)prc_brk_outA1_adr)
  #define prc_brk_outA2_adr                              0x00310288                                                   // prc_adr_base + 0x00000288
  #define prc_brk_outA2                                  (*(volatile unsigned int *)prc_brk_outA2_adr)
  #define prc_brk_outA3_adr                              0x0031028c                                                   // prc_adr_base + 0x0000028c
  #define prc_brk_outA3                                  (*(volatile unsigned int *)prc_brk_outA3_adr)
  #define prc_brk_outA4_adr                              0x00310290                                                   // prc_adr_base + 0x00000290
  #define prc_brk_outA4                                  (*(volatile unsigned int *)prc_brk_outA4_adr)
  #define prc_brk_outA5_adr                              0x00310294                                                   // prc_adr_base + 0x00000294
  #define prc_brk_outA5                                  (*(volatile unsigned int *)prc_brk_outA5_adr)
  #define prc_brk_outA6_adr                              0x00310298                                                   // prc_adr_base + 0x00000298
  #define prc_brk_outA6                                  (*(volatile unsigned int *)prc_brk_outA6_adr)
  #define prc_brk_outA7_adr                              0x0031029c                                                   // prc_adr_base + 0x0000029c
  #define prc_brk_outA7                                  (*(volatile unsigned int *)prc_brk_outA7_adr)
  #define prc_brk_outA8_adr                              0x003102a0                                                   // prc_adr_base + 0x000002a0
  #define prc_brk_outA8                                  (*(volatile unsigned int *)prc_brk_outA8_adr)
  #define prc_brk_outA9_adr                              0x003102a4                                                   // prc_adr_base + 0x000002a4
  #define prc_brk_outA9                                  (*(volatile unsigned int *)prc_brk_outA9_adr)
  #define prc_brk_outAA_adr                              0x003102a8                                                   // prc_adr_base + 0x000002a8
  #define prc_brk_outAA                                  (*(volatile unsigned int *)prc_brk_outAA_adr)
  #define prc_brk_outAB_adr                              0x003102ac                                                   // prc_adr_base + 0x000002ac
  #define prc_brk_outAB                                  (*(volatile unsigned int *)prc_brk_outAB_adr)
  #define prc_brk_outAC_adr                              0x003102b0                                                   // prc_adr_base + 0x000002b0
  #define prc_brk_outAC                                  (*(volatile unsigned int *)prc_brk_outAC_adr)
  #define prc_brk_outAD_adr                              0x003102b4                                                   // prc_adr_base + 0x000002b4
  #define prc_brk_outAD                                  (*(volatile unsigned int *)prc_brk_outAD_adr)
  #define prc_brk_outAE_adr                              0x003102b8                                                   // prc_adr_base + 0x000002b8
  #define prc_brk_outAE                                  (*(volatile unsigned int *)prc_brk_outAE_adr)
  #define prc_brk_outAF_adr                              0x003102bc                                                   // prc_adr_base + 0x000002bc
  #define prc_brk_outAF                                  (*(volatile unsigned int *)prc_brk_outAF_adr)
  #define prc_brk_outB0_adr                              0x003102c0                                                   // prc_adr_base + 0x000002c0
  #define prc_brk_outB0                                  (*(volatile unsigned int *)prc_brk_outB0_adr)
  #define prc_brk_outB1_adr                              0x003102c4                                                   // prc_adr_base + 0x000002c4
  #define prc_brk_outB1                                  (*(volatile unsigned int *)prc_brk_outB1_adr)
  #define prc_brk_outB2_adr                              0x003102c8                                                   // prc_adr_base + 0x000002c8
  #define prc_brk_outB2                                  (*(volatile unsigned int *)prc_brk_outB2_adr)
  #define prc_brk_outB3_adr                              0x003102cc                                                   // prc_adr_base + 0x000002cc
  #define prc_brk_outB3                                  (*(volatile unsigned int *)prc_brk_outB3_adr)
  #define prc_brk_outB4_adr                              0x003102d0                                                   // prc_adr_base + 0x000002d0
  #define prc_brk_outB4                                  (*(volatile unsigned int *)prc_brk_outB4_adr)
  #define prc_brk_outB5_adr                              0x003102d4                                                   // prc_adr_base + 0x000002d4
  #define prc_brk_outB5                                  (*(volatile unsigned int *)prc_brk_outB5_adr)
  #define prc_brk_outB6_adr                              0x003102d8                                                   // prc_adr_base + 0x000002d8
  #define prc_brk_outB6                                  (*(volatile unsigned int *)prc_brk_outB6_adr)
  #define prc_brk_outB7_adr                              0x003102dc                                                   // prc_adr_base + 0x000002dc
  #define prc_brk_outB7                                  (*(volatile unsigned int *)prc_brk_outB7_adr)
  #define prc_brk_outB8_adr                              0x003102e0                                                   // prc_adr_base + 0x000002e0
  #define prc_brk_outB8                                  (*(volatile unsigned int *)prc_brk_outB8_adr)
  #define prc_brk_outB9_adr                              0x003102e4                                                   // prc_adr_base + 0x000002e4
  #define prc_brk_outB9                                  (*(volatile unsigned int *)prc_brk_outB9_adr)
  #define prc_brk_outBA_adr                              0x003102e8                                                   // prc_adr_base + 0x000002e8
  #define prc_brk_outBA                                  (*(volatile unsigned int *)prc_brk_outBA_adr)
  #define prc_brk_outBB_adr                              0x003102ec                                                   // prc_adr_base + 0x000002ec
  #define prc_brk_outBB                                  (*(volatile unsigned int *)prc_brk_outBB_adr)
  #define prc_brk_outBC_adr                              0x003102f0                                                   // prc_adr_base + 0x000002f0
  #define prc_brk_outBC                                  (*(volatile unsigned int *)prc_brk_outBC_adr)
  #define prc_brk_outBD_adr                              0x003102f4                                                   // prc_adr_base + 0x000002f4
  #define prc_brk_outBD                                  (*(volatile unsigned int *)prc_brk_outBD_adr)
  #define prc_brk_outBE_adr                              0x003102f8                                                   // prc_adr_base + 0x000002f8
  #define prc_brk_outBE                                  (*(volatile unsigned int *)prc_brk_outBE_adr)
  #define prc_brk_outBF_adr                              0x003102fc                                                   // prc_adr_base + 0x000002fc
  #define prc_brk_outBF                                  (*(volatile unsigned int *)prc_brk_outBF_adr)
  #define prc_brk_outC0_adr                              0x00310300                                                   // prc_adr_base + 0x00000300
  #define prc_brk_outC0                                  (*(volatile unsigned int *)prc_brk_outC0_adr)
  #define prc_brk_outC1_adr                              0x00310304                                                   // prc_adr_base + 0x00000304
  #define prc_brk_outC1                                  (*(volatile unsigned int *)prc_brk_outC1_adr)
  #define prc_brk_outC2_adr                              0x00310308                                                   // prc_adr_base + 0x00000308
  #define prc_brk_outC2                                  (*(volatile unsigned int *)prc_brk_outC2_adr)
  #define prc_brk_outC3_adr                              0x0031030c                                                   // prc_adr_base + 0x0000030c
  #define prc_brk_outC3                                  (*(volatile unsigned int *)prc_brk_outC3_adr)
  #define prc_brk_outC4_adr                              0x00310310                                                   // prc_adr_base + 0x00000310
  #define prc_brk_outC4                                  (*(volatile unsigned int *)prc_brk_outC4_adr)
  #define prc_brk_outC5_adr                              0x00310314                                                   // prc_adr_base + 0x00000314
  #define prc_brk_outC5                                  (*(volatile unsigned int *)prc_brk_outC5_adr)
  #define prc_brk_outC6_adr                              0x00310318                                                   // prc_adr_base + 0x00000318
  #define prc_brk_outC6                                  (*(volatile unsigned int *)prc_brk_outC6_adr)
  #define prc_brk_outC7_adr                              0x0031031c                                                   // prc_adr_base + 0x0000031c
  #define prc_brk_outC7                                  (*(volatile unsigned int *)prc_brk_outC7_adr)
  #define prc_brk_outC8_adr                              0x00310320                                                   // prc_adr_base + 0x00000320
  #define prc_brk_outC8                                  (*(volatile unsigned int *)prc_brk_outC8_adr)
  #define prc_brk_outC9_adr                              0x00310324                                                   // prc_adr_base + 0x00000324
  #define prc_brk_outC9                                  (*(volatile unsigned int *)prc_brk_outC9_adr)
  #define prc_brk_outCA_adr                              0x00310328                                                   // prc_adr_base + 0x00000328
  #define prc_brk_outCA                                  (*(volatile unsigned int *)prc_brk_outCA_adr)
  #define prc_brk_outCB_adr                              0x0031032c                                                   // prc_adr_base + 0x0000032c
  #define prc_brk_outCB                                  (*(volatile unsigned int *)prc_brk_outCB_adr)
  #define prc_brk_outCC_adr                              0x00310330                                                   // prc_adr_base + 0x00000330
  #define prc_brk_outCC                                  (*(volatile unsigned int *)prc_brk_outCC_adr)
  #define prc_brk_outCD_adr                              0x00310334                                                   // prc_adr_base + 0x00000334
  #define prc_brk_outCD                                  (*(volatile unsigned int *)prc_brk_outCD_adr)
  #define prc_brk_outCE_adr                              0x00310338                                                   // prc_adr_base + 0x00000338
  #define prc_brk_outCE                                  (*(volatile unsigned int *)prc_brk_outCE_adr)
  #define prc_brk_outCF_adr                              0x0031033c                                                   // prc_adr_base + 0x0000033c
  #define prc_brk_outCF                                  (*(volatile unsigned int *)prc_brk_outCF_adr)
  #define prc_brk_outD0_adr                              0x00310340                                                   // prc_adr_base + 0x00000340
  #define prc_brk_outD0                                  (*(volatile unsigned int *)prc_brk_outD0_adr)
  #define prc_brk_outD1_adr                              0x00310344                                                   // prc_adr_base + 0x00000344
  #define prc_brk_outD1                                  (*(volatile unsigned int *)prc_brk_outD1_adr)
  #define prc_brk_outD2_adr                              0x00310348                                                   // prc_adr_base + 0x00000348
  #define prc_brk_outD2                                  (*(volatile unsigned int *)prc_brk_outD2_adr)
  #define prc_brk_outD3_adr                              0x0031034c                                                   // prc_adr_base + 0x0000034c
  #define prc_brk_outD3                                  (*(volatile unsigned int *)prc_brk_outD3_adr)
  #define prc_brk_outD4_adr                              0x00310350                                                   // prc_adr_base + 0x00000350
  #define prc_brk_outD4                                  (*(volatile unsigned int *)prc_brk_outD4_adr)
  #define prc_brk_outD5_adr                              0x00310354                                                   // prc_adr_base + 0x00000354
  #define prc_brk_outD5                                  (*(volatile unsigned int *)prc_brk_outD5_adr)
  #define prc_brk_outD6_adr                              0x00310358                                                   // prc_adr_base + 0x00000358
  #define prc_brk_outD6                                  (*(volatile unsigned int *)prc_brk_outD6_adr)
  #define prc_brk_outD7_adr                              0x0031035c                                                   // prc_adr_base + 0x0000035c
  #define prc_brk_outD7                                  (*(volatile unsigned int *)prc_brk_outD7_adr)
  #define prc_brk_outD8_adr                              0x00310360                                                   // prc_adr_base + 0x00000360
  #define prc_brk_outD8                                  (*(volatile unsigned int *)prc_brk_outD8_adr)
  #define prc_brk_outD9_adr                              0x00310364                                                   // prc_adr_base + 0x00000364
  #define prc_brk_outD9                                  (*(volatile unsigned int *)prc_brk_outD9_adr)
  #define prc_brk_outDA_adr                              0x00310368                                                   // prc_adr_base + 0x00000368
  #define prc_brk_outDA                                  (*(volatile unsigned int *)prc_brk_outDA_adr)
  #define prc_brk_outDB_adr                              0x0031036c                                                   // prc_adr_base + 0x0000036c
  #define prc_brk_outDB                                  (*(volatile unsigned int *)prc_brk_outDB_adr)
  #define prc_brk_outDC_adr                              0x00310370                                                   // prc_adr_base + 0x00000370
  #define prc_brk_outDC                                  (*(volatile unsigned int *)prc_brk_outDC_adr)
  #define prc_brk_outDD_adr                              0x00310374                                                   // prc_adr_base + 0x00000374
  #define prc_brk_outDD                                  (*(volatile unsigned int *)prc_brk_outDD_adr)
  #define prc_brk_outDE_adr                              0x00310378                                                   // prc_adr_base + 0x00000378
  #define prc_brk_outDE                                  (*(volatile unsigned int *)prc_brk_outDE_adr)
  #define prc_brk_outDF_adr                              0x0031037c                                                   // prc_adr_base + 0x0000037c
  #define prc_brk_outDF                                  (*(volatile unsigned int *)prc_brk_outDF_adr)
  #define prc_brk_outE0_adr                              0x00310380                                                   // prc_adr_base + 0x00000380
  #define prc_brk_outE0                                  (*(volatile unsigned int *)prc_brk_outE0_adr)
  #define prc_brk_outE1_adr                              0x00310384                                                   // prc_adr_base + 0x00000384
  #define prc_brk_outE1                                  (*(volatile unsigned int *)prc_brk_outE1_adr)
  #define prc_brk_outE2_adr                              0x00310388                                                   // prc_adr_base + 0x00000388
  #define prc_brk_outE2                                  (*(volatile unsigned int *)prc_brk_outE2_adr)
  #define prc_brk_outE3_adr                              0x0031038c                                                   // prc_adr_base + 0x0000038c
  #define prc_brk_outE3                                  (*(volatile unsigned int *)prc_brk_outE3_adr)
  #define prc_brk_outE4_adr                              0x00310390                                                   // prc_adr_base + 0x00000390
  #define prc_brk_outE4                                  (*(volatile unsigned int *)prc_brk_outE4_adr)
  #define prc_brk_outE5_adr                              0x00310394                                                   // prc_adr_base + 0x00000394
  #define prc_brk_outE5                                  (*(volatile unsigned int *)prc_brk_outE5_adr)
  #define prc_brk_outE6_adr                              0x00310398                                                   // prc_adr_base + 0x00000398
  #define prc_brk_outE6                                  (*(volatile unsigned int *)prc_brk_outE6_adr)
  #define prc_brk_outE7_adr                              0x0031039c                                                   // prc_adr_base + 0x0000039c
  #define prc_brk_outE7                                  (*(volatile unsigned int *)prc_brk_outE7_adr)
  #define prc_brk_outE8_adr                              0x003103a0                                                   // prc_adr_base + 0x000003a0
  #define prc_brk_outE8                                  (*(volatile unsigned int *)prc_brk_outE8_adr)
  #define prc_brk_outE9_adr                              0x003103a4                                                   // prc_adr_base + 0x000003a4
  #define prc_brk_outE9                                  (*(volatile unsigned int *)prc_brk_outE9_adr)
  #define prc_brk_outEA_adr                              0x003103a8                                                   // prc_adr_base + 0x000003a8
  #define prc_brk_outEA                                  (*(volatile unsigned int *)prc_brk_outEA_adr)
  #define prc_brk_outEB_adr                              0x003103ac                                                   // prc_adr_base + 0x000003ac
  #define prc_brk_outEB                                  (*(volatile unsigned int *)prc_brk_outEB_adr)
  #define prc_brk_outEC_adr                              0x003103b0                                                   // prc_adr_base + 0x000003b0
  #define prc_brk_outEC                                  (*(volatile unsigned int *)prc_brk_outEC_adr)
  #define prc_brk_outED_adr                              0x003103b4                                                   // prc_adr_base + 0x000003b4
  #define prc_brk_outED                                  (*(volatile unsigned int *)prc_brk_outED_adr)
  #define prc_brk_outEE_adr                              0x003103b8                                                   // prc_adr_base + 0x000003b8
  #define prc_brk_outEE                                  (*(volatile unsigned int *)prc_brk_outEE_adr)
  #define prc_brk_outEF_adr                              0x003103bc                                                   // prc_adr_base + 0x000003bc
  #define prc_brk_outEF                                  (*(volatile unsigned int *)prc_brk_outEF_adr)
  #define prc_brk_outF0_adr                              0x003103c0                                                   // prc_adr_base + 0x000003c0
  #define prc_brk_outF0                                  (*(volatile unsigned int *)prc_brk_outF0_adr)
  #define prc_brk_outF1_adr                              0x003103c4                                                   // prc_adr_base + 0x000003c4
  #define prc_brk_outF1                                  (*(volatile unsigned int *)prc_brk_outF1_adr)
  #define prc_brk_outF2_adr                              0x003103c8                                                   // prc_adr_base + 0x000003c8
  #define prc_brk_outF2                                  (*(volatile unsigned int *)prc_brk_outF2_adr)
  #define prc_brk_outF3_adr                              0x003103cc                                                   // prc_adr_base + 0x000003cc
  #define prc_brk_outF3                                  (*(volatile unsigned int *)prc_brk_outF3_adr)
  #define prc_brk_outF4_adr                              0x003103d0                                                   // prc_adr_base + 0x000003d0
  #define prc_brk_outF4                                  (*(volatile unsigned int *)prc_brk_outF4_adr)
  #define prc_brk_outF5_adr                              0x003103d4                                                   // prc_adr_base + 0x000003d4
  #define prc_brk_outF5                                  (*(volatile unsigned int *)prc_brk_outF5_adr)
  #define prc_brk_outF6_adr                              0x003103d8                                                   // prc_adr_base + 0x000003d8
  #define prc_brk_outF6                                  (*(volatile unsigned int *)prc_brk_outF6_adr)
  #define prc_brk_outF7_adr                              0x003103dc                                                   // prc_adr_base + 0x000003dc
  #define prc_brk_outF7                                  (*(volatile unsigned int *)prc_brk_outF7_adr)
  #define prc_brk_outF8_adr                              0x003103e0                                                   // prc_adr_base + 0x000003e0
  #define prc_brk_outF8                                  (*(volatile unsigned int *)prc_brk_outF8_adr)
  #define prc_brk_outF9_adr                              0x003103e4                                                   // prc_adr_base + 0x000003e4
  #define prc_brk_outF9                                  (*(volatile unsigned int *)prc_brk_outF9_adr)
  #define prc_brk_outFA_adr                              0x003103e8                                                   // prc_adr_base + 0x000003e8
  #define prc_brk_outFA                                  (*(volatile unsigned int *)prc_brk_outFA_adr)
  #define prc_brk_outFB_adr                              0x003103ec                                                   // prc_adr_base + 0x000003ec
  #define prc_brk_outFB                                  (*(volatile unsigned int *)prc_brk_outFB_adr)
  #define prc_brk_outFC_adr                              0x003103f0                                                   // prc_adr_base + 0x000003f0
  #define prc_brk_outFC                                  (*(volatile unsigned int *)prc_brk_outFC_adr)
  #define prc_brk_outFD_adr                              0x003103f4                                                   // prc_adr_base + 0x000003f4
  #define prc_brk_outFD                                  (*(volatile unsigned int *)prc_brk_outFD_adr)
  #define prc_brk_outFE_adr                              0x003103f8                                                   // prc_adr_base + 0x000003f8
  #define prc_brk_outFE                                  (*(volatile unsigned int *)prc_brk_outFE_adr)
  #define prc_brk_outFF_adr                              0x003103fc                                                   // prc_adr_base + 0x000003fc
  #define prc_brk_outFF                                  (*(volatile unsigned int *)prc_brk_outFF_adr)
  #define prc_patch_in_adr                               0x00310400                                                   // prc_adr_base + 0x00000400
  #define prc_patch_in                                   (*(volatile unsigned int *)prc_patch_in_adr)
  #define prc_patch_reg_en0_adr                          0x00310404                                                   // prc_adr_base + 0x00000404
  #define prc_patch_reg_en0                              (*(volatile unsigned int *)prc_patch_reg_en0_adr)
  #define prc_patch_reg_en1_adr                          0x00310408                                                   // prc_adr_base + 0x00000408
  #define prc_patch_reg_en1                              (*(volatile unsigned int *)prc_patch_reg_en1_adr)
  #define prc_patch_reg_en2_adr                          0x0031040c                                                   // prc_adr_base + 0x0000040c
  #define prc_patch_reg_en2                              (*(volatile unsigned int *)prc_patch_reg_en2_adr)
  #define prc_patch_reg_en3_adr                          0x00310410                                                   // prc_adr_base + 0x00000410
  #define prc_patch_reg_en3                              (*(volatile unsigned int *)prc_patch_reg_en3_adr)
  #define prc_patch_reg_en4_adr                          0x00310414                                                   // prc_adr_base + 0x00000414
  #define prc_patch_reg_en4                              (*(volatile unsigned int *)prc_patch_reg_en4_adr)
  #define prc_patch_reg_en5_adr                          0x00310418                                                   // prc_adr_base + 0x00000418
  #define prc_patch_reg_en5                              (*(volatile unsigned int *)prc_patch_reg_en5_adr)
  #define prc_patch_reg_en6_adr                          0x0031041c                                                   // prc_adr_base + 0x0000041c
  #define prc_patch_reg_en6                              (*(volatile unsigned int *)prc_patch_reg_en6_adr)
  #define prc_patch_reg_en7_adr                          0x00310420                                                   // prc_adr_base + 0x00000420
  #define prc_patch_reg_en7                              (*(volatile unsigned int *)prc_patch_reg_en7_adr)
  #define prc_dpatch_en_adr                              0x00310430                                                   // prc_adr_base + 0x00000430
  #define prc_dpatch_en                                  (*(volatile unsigned int *)prc_dpatch_en_adr)
  #define prc_data_brk0_adr                              0x00310440                                                   // prc_adr_base + 0x00000440
  #define prc_data_brk0                                  (*(volatile unsigned int *)prc_data_brk0_adr)
  #define prc_data_brk1_adr                              0x00310444                                                   // prc_adr_base + 0x00000444
  #define prc_data_brk1                                  (*(volatile unsigned int *)prc_data_brk1_adr)
  #define prc_data_brk2_adr                              0x00310448                                                   // prc_adr_base + 0x00000448
  #define prc_data_brk2                                  (*(volatile unsigned int *)prc_data_brk2_adr)
  #define prc_data_brk3_adr                              0x0031044c                                                   // prc_adr_base + 0x0000044c
  #define prc_data_brk3                                  (*(volatile unsigned int *)prc_data_brk3_adr)
  #define prc_data_pat0_adr                              0x00310450                                                   // prc_adr_base + 0x00000450
  #define prc_data_pat0                                  (*(volatile unsigned int *)prc_data_pat0_adr)
  #define prc_data_pat1_adr                              0x00310454                                                   // prc_adr_base + 0x00000454
  #define prc_data_pat1                                  (*(volatile unsigned int *)prc_data_pat1_adr)
  #define prc_data_pat2_adr                              0x00310458                                                   // prc_adr_base + 0x00000458
  #define prc_data_pat2                                  (*(volatile unsigned int *)prc_data_pat2_adr)
  #define prc_data_pat3_adr                              0x0031045c                                                   // prc_adr_base + 0x0000045c
  #define prc_data_pat3                                  (*(volatile unsigned int *)prc_data_pat3_adr)
  #define prcprotection_adr                              0x00310500                                                   // prc_adr_base + 0x00000500
  #define prcprotection                                  (*(volatile unsigned int *)prcprotection_adr)
  #define prc_periphid0_adr                              0x00310fe0                                                   // prc_adr_base + 0x00000fe0
  #define prc_periphid0                                  (*(volatile unsigned int *)prc_periphid0_adr)
  #define prc_periphid1_adr                              0x00310fe4                                                   // prc_adr_base + 0x00000fe4
  #define prc_periphid1                                  (*(volatile unsigned int *)prc_periphid1_adr)
  #define prc_periphid2_adr                              0x00310fe8                                                   // prc_adr_base + 0x00000fe8
  #define prc_periphid2                                  (*(volatile unsigned int *)prc_periphid2_adr)
  #define prc_periphid3_adr                              0x00310fec                                                   // prc_adr_base + 0x00000fec
  #define prc_periphid3                                  (*(volatile unsigned int *)prc_periphid3_adr)
  #define prc_pcellid0_adr                               0x00310ff0                                                   // prc_adr_base + 0x00000ff0
  #define prc_pcellid0                                   (*(volatile unsigned int *)prc_pcellid0_adr)
  #define prc_pcellid1_adr                               0x00310ff4                                                   // prc_adr_base + 0x00000ff4
  #define prc_pcellid1                                   (*(volatile unsigned int *)prc_pcellid1_adr)
  #define prc_pcellid2_adr                               0x00310ff8                                                   // prc_adr_base + 0x00000ff8
  #define prc_pcellid2                                   (*(volatile unsigned int *)prc_pcellid2_adr)
  #define prc_pcellid3_adr                               0x00310ffc                                                   // prc_adr_base + 0x00000ffc
  #define prc_pcellid3                                   (*(volatile unsigned int *)prc_pcellid3_adr)
  #define smbidcyr0_adr                                  0x00308000                                                   // smi_ahb_adr_base + 0x00000000
  #define smbidcyr0                                      (*(volatile unsigned int *)smbidcyr0_adr)
  #define smbwst1r0_adr                                  0x00308004                                                   // smi_ahb_adr_base + 0x00000004
  #define smbwst1r0                                      (*(volatile unsigned int *)smbwst1r0_adr)
  #define smbwst2r0_adr                                  0x00308008                                                   // smi_ahb_adr_base + 0x00000008
  #define smbwst2r0                                      (*(volatile unsigned int *)smbwst2r0_adr)
  #define smbwstoenr0_adr                                0x0030800c                                                   // smi_ahb_adr_base + 0x0000000c
  #define smbwstoenr0                                    (*(volatile unsigned int *)smbwstoenr0_adr)
  #define smbwstwenr0_adr                                0x00308010                                                   // smi_ahb_adr_base + 0x00000010
  #define smbwstwenr0                                    (*(volatile unsigned int *)smbwstwenr0_adr)
  #define smbcr0_adr                                     0x00308014                                                   // smi_ahb_adr_base + 0x00000014
  #define smbcr0                                         (*(volatile unsigned int *)smbcr0_adr)
  #define smbsr0_adr                                     0x00308018                                                   // smi_ahb_adr_base + 0x00000018
  #define smbsr0                                         (*(volatile unsigned int *)smbsr0_adr)
  #define smbidcyr1_adr                                  0x0030801c                                                   // smi_ahb_adr_base + 0x0000001c
  #define smbidcyr1                                      (*(volatile unsigned int *)smbidcyr1_adr)
  #define smbwst1r1_adr                                  0x00308020                                                   // smi_ahb_adr_base + 0x00000020
  #define smbwst1r1                                      (*(volatile unsigned int *)smbwst1r1_adr)
  #define smbwst2r1_adr                                  0x00308024                                                   // smi_ahb_adr_base + 0x00000024
  #define smbwst2r1                                      (*(volatile unsigned int *)smbwst2r1_adr)
  #define smbwstoenr1_adr                                0x00308028                                                   // smi_ahb_adr_base + 0x00000028
  #define smbwstoenr1                                    (*(volatile unsigned int *)smbwstoenr1_adr)
  #define smbwstwenr1_adr                                0x0030802c                                                   // smi_ahb_adr_base + 0x0000002c
  #define smbwstwenr1                                    (*(volatile unsigned int *)smbwstwenr1_adr)
  #define smbcr1_adr                                     0x00308030                                                   // smi_ahb_adr_base + 0x00000030
  #define smbcr1                                         (*(volatile unsigned int *)smbcr1_adr)
  #define smbsr1_adr                                     0x00308034                                                   // smi_ahb_adr_base + 0x00000034
  #define smbsr1                                         (*(volatile unsigned int *)smbsr1_adr)
  #define smbidcyr2_adr                                  0x00308038                                                   // smi_ahb_adr_base + 0x00000038
  #define smbidcyr2                                      (*(volatile unsigned int *)smbidcyr2_adr)
  #define smbwst1r2_adr                                  0x0030803c                                                   // smi_ahb_adr_base + 0x0000003c
  #define smbwst1r2                                      (*(volatile unsigned int *)smbwst1r2_adr)
  #define smbwst2r2_adr                                  0x00308040                                                   // smi_ahb_adr_base + 0x00000040
  #define smbwst2r2                                      (*(volatile unsigned int *)smbwst2r2_adr)
  #define smbwstoenr2_adr                                0x00308044                                                   // smi_ahb_adr_base + 0x00000044
  #define smbwstoenr2                                    (*(volatile unsigned int *)smbwstoenr2_adr)
  #define smbwstwenr2_adr                                0x00308048                                                   // smi_ahb_adr_base + 0x00000048
  #define smbwstwenr2                                    (*(volatile unsigned int *)smbwstwenr2_adr)
  #define smbcr2_adr                                     0x0030804c                                                   // smi_ahb_adr_base + 0x0000004c
  #define smbcr2                                         (*(volatile unsigned int *)smbcr2_adr)
  #define smbsr2_adr                                     0x00308050                                                   // smi_ahb_adr_base + 0x00000050
  #define smbsr2                                         (*(volatile unsigned int *)smbsr2_adr)
  #define smbidcyr3_adr                                  0x00308054                                                   // smi_ahb_adr_base + 0x00000054
  #define smbidcyr3                                      (*(volatile unsigned int *)smbidcyr3_adr)
  #define smbwst1r3_adr                                  0x00308058                                                   // smi_ahb_adr_base + 0x00000058
  #define smbwst1r3                                      (*(volatile unsigned int *)smbwst1r3_adr)
  #define smbwst2r3_adr                                  0x0030805c                                                   // smi_ahb_adr_base + 0x0000005c
  #define smbwst2r3                                      (*(volatile unsigned int *)smbwst2r3_adr)
  #define smbwstoenr3_adr                                0x00308060                                                   // smi_ahb_adr_base + 0x00000060
  #define smbwstoenr3                                    (*(volatile unsigned int *)smbwstoenr3_adr)
  #define smbwstwenr3_adr                                0x00308064                                                   // smi_ahb_adr_base + 0x00000064
  #define smbwstwenr3                                    (*(volatile unsigned int *)smbwstwenr3_adr)
  #define smbcr3_adr                                     0x00308068                                                   // smi_ahb_adr_base + 0x00000068
  #define smbcr3                                         (*(volatile unsigned int *)smbcr3_adr)
  #define smbsr3_adr                                     0x0030806c                                                   // smi_ahb_adr_base + 0x0000006c
  #define smbsr3                                         (*(volatile unsigned int *)smbsr3_adr)
  #define smbidcyr4_adr                                  0x00308070                                                   // smi_ahb_adr_base + 0x00000070
  #define smbidcyr4                                      (*(volatile unsigned int *)smbidcyr4_adr)
  #define smbwst1r4_adr                                  0x00308074                                                   // smi_ahb_adr_base + 0x00000074
  #define smbwst1r4                                      (*(volatile unsigned int *)smbwst1r4_adr)
  #define smbwst2r4_adr                                  0x00308078                                                   // smi_ahb_adr_base + 0x00000078
  #define smbwst2r4                                      (*(volatile unsigned int *)smbwst2r4_adr)
  #define smbwstoenr4_adr                                0x0030807c                                                   // smi_ahb_adr_base + 0x0000007c
  #define smbwstoenr4                                    (*(volatile unsigned int *)smbwstoenr4_adr)
  #define smbwstwenr4_adr                                0x00308080                                                   // smi_ahb_adr_base + 0x00000080
  #define smbwstwenr4                                    (*(volatile unsigned int *)smbwstwenr4_adr)
  #define smbcr4_adr                                     0x00308084                                                   // smi_ahb_adr_base + 0x00000084
  #define smbcr4                                         (*(volatile unsigned int *)smbcr4_adr)
  #define smbsr4_adr                                     0x00308088                                                   // smi_ahb_adr_base + 0x00000088
  #define smbsr4                                         (*(volatile unsigned int *)smbsr4_adr)
  #define smbidcyr5_adr                                  0x0030808c                                                   // smi_ahb_adr_base + 0x0000008c
  #define smbidcyr5                                      (*(volatile unsigned int *)smbidcyr5_adr)
  #define smbwst1r5_adr                                  0x00308090                                                   // smi_ahb_adr_base + 0x00000090
  #define smbwst1r5                                      (*(volatile unsigned int *)smbwst1r5_adr)
  #define smbwst2r5_adr                                  0x00308094                                                   // smi_ahb_adr_base + 0x00000094
  #define smbwst2r5                                      (*(volatile unsigned int *)smbwst2r5_adr)
  #define smbwstoenr5_adr                                0x00308098                                                   // smi_ahb_adr_base + 0x00000098
  #define smbwstoenr5                                    (*(volatile unsigned int *)smbwstoenr5_adr)
  #define smbwstwenr5_adr                                0x0030809c                                                   // smi_ahb_adr_base + 0x0000009c
  #define smbwstwenr5                                    (*(volatile unsigned int *)smbwstwenr5_adr)
  #define smbcr5_adr                                     0x003080a0                                                   // smi_ahb_adr_base + 0x000000a0
  #define smbcr5                                         (*(volatile unsigned int *)smbcr5_adr)
  #define smbsr5_adr                                     0x003080a4                                                   // smi_ahb_adr_base + 0x000000a4
  #define smbsr5                                         (*(volatile unsigned int *)smbsr5_adr)
  #define smbidcyr6_adr                                  0x003080a8                                                   // smi_ahb_adr_base + 0x000000a8
  #define smbidcyr6                                      (*(volatile unsigned int *)smbidcyr6_adr)
  #define smbwst1r6_adr                                  0x003080ac                                                   // smi_ahb_adr_base + 0x000000ac
  #define smbwst1r6                                      (*(volatile unsigned int *)smbwst1r6_adr)
  #define smbwst2r6_adr                                  0x003080b0                                                   // smi_ahb_adr_base + 0x000000b0
  #define smbwst2r6                                      (*(volatile unsigned int *)smbwst2r6_adr)
  #define smbwstoenr6_adr                                0x003080b4                                                   // smi_ahb_adr_base + 0x000000b4
  #define smbwstoenr6                                    (*(volatile unsigned int *)smbwstoenr6_adr)
  #define smbwstwenr6_adr                                0x003080b8                                                   // smi_ahb_adr_base + 0x000000b8
  #define smbwstwenr6                                    (*(volatile unsigned int *)smbwstwenr6_adr)
  #define smbcr6_adr                                     0x003080bc                                                   // smi_ahb_adr_base + 0x000000bc
  #define smbcr6                                         (*(volatile unsigned int *)smbcr6_adr)
  #define smbsr6_adr                                     0x003080c0                                                   // smi_ahb_adr_base + 0x000000c0
  #define smbsr6                                         (*(volatile unsigned int *)smbsr6_adr)
  #define smbidcyr7_adr                                  0x003080c4                                                   // smi_ahb_adr_base + 0x000000c4
  #define smbidcyr7                                      (*(volatile unsigned int *)smbidcyr7_adr)
  #define smbwst1r7_adr                                  0x003080c8                                                   // smi_ahb_adr_base + 0x000000c8
  #define smbwst1r7                                      (*(volatile unsigned int *)smbwst1r7_adr)
  #define smbwst2r7_adr                                  0x003080cc                                                   // smi_ahb_adr_base + 0x000000cc
  #define smbwst2r7                                      (*(volatile unsigned int *)smbwst2r7_adr)
  #define smbwstoenr7_adr                                0x003080d0                                                   // smi_ahb_adr_base + 0x000000d0
  #define smbwstoenr7                                    (*(volatile unsigned int *)smbwstoenr7_adr)
  #define smbwstwenr7_adr                                0x003080d4                                                   // smi_ahb_adr_base + 0x000000d4
  #define smbwstwenr7                                    (*(volatile unsigned int *)smbwstwenr7_adr)
  #define smbcr7_adr                                     0x003080d8                                                   // smi_ahb_adr_base + 0x000000d8
  #define smbcr7                                         (*(volatile unsigned int *)smbcr7_adr)
  #define smbsr7_adr                                     0x003080dc                                                   // smi_ahb_adr_base + 0x000000dc
  #define smbsr7                                         (*(volatile unsigned int *)smbsr7_adr)
  #define smbews_adr                                     0x003080e0                                                   // smi_ahb_adr_base + 0x000000e0
  #define smbews                                         (*(volatile unsigned int *)smbews_adr)
  #define smcperiphid0_adr                               0x00308fe0                                                   // smi_ahb_adr_base + 0x00000fe0
  #define smcperiphid0                                   (*(volatile unsigned int *)smcperiphid0_adr)
  #define smcperiphid1_adr                               0x00308fe4                                                   // smi_ahb_adr_base + 0x00000fe4
  #define smcperiphid1                                   (*(volatile unsigned int *)smcperiphid1_adr)
  #define smcperiphid2_adr                               0x00308fe8                                                   // smi_ahb_adr_base + 0x00000fe8
  #define smcperiphid2                                   (*(volatile unsigned int *)smcperiphid2_adr)
  #define smcperiphid3_adr                               0x00308fec                                                   // smi_ahb_adr_base + 0x00000fec
  #define smcperiphid3                                   (*(volatile unsigned int *)smcperiphid3_adr)
  #define smcpcellid0_adr                                0x00308ff0                                                   // smi_ahb_adr_base + 0x00000ff0
  #define smcpcellid0                                    (*(volatile unsigned int *)smcpcellid0_adr)
  #define smcpcellid1_adr                                0x00308ff4                                                   // smi_ahb_adr_base + 0x00000ff4
  #define smcpcellid1                                    (*(volatile unsigned int *)smcpcellid1_adr)
  #define smcpcellid2_adr                                0x00308ff8                                                   // smi_ahb_adr_base + 0x00000ff8
  #define smcpcellid2                                    (*(volatile unsigned int *)smcpcellid2_adr)
  #define smcpcellid3_adr                                0x00308ffc                                                   // smi_ahb_adr_base + 0x00000ffc
  #define smcpcellid3                                    (*(volatile unsigned int *)smcpcellid3_adr)
  #define bpl_base                                       0x00318000                                                   // phy_adr_base + 0x00000000
  #define cr_base                                        0x00318000                                                   // bpl_base + 0x00000000
  #define fisrt_grp_base                                 0x00318000                                                   // cr_base
  #define cr_adr0                                        0x00318000                                                   // cr_base + 0x00000000
  #define cr0                                            (*(volatile unsigned int *)cr_adr0)
  #define sr_op_state_adr                                0x00318004                                                   // cr_adr0 + 0x00000004
  #define sr_op_state                                    (*(volatile unsigned int *)sr_op_state_adr)
  #define sr_base                                        0x00318008                                                   // sr_op_state_adr + 0x00000004
  #define wib_cr_op_state_adr                            0x00318014                                                   // sr_base + 0x0000000c
  #define wib_cr_op_state                                (*(volatile unsigned int *)wib_cr_op_state_adr)
  #define cr_adr1                                        0x00318018                                                   // sr_base + 0x00000010
  #define cr1                                            (*(volatile unsigned int *)cr_adr1)
  #define wib_time_offset_adr                            0x0031801c                                                   // sr_base + 0x00000014
  #define wib_time_offset                                (*(volatile unsigned int *)wib_time_offset_adr)
  #define dc_base                                        0x00318024                                                   // phy_tail + 0x00000004
  #define dc_pc_ctx_idx_adr                              0x00318024                                                   // dc_base + 0x00000000
  #define dc_pc_ctx_idx                                  (*(volatile unsigned int *)dc_pc_ctx_idx_adr)
  #define dc_hopst_adr                                   0x00318028                                                   // dc_base + 0x00000004
  #define dc_hopst                                       (*(volatile unsigned int *)dc_hopst_adr)
  #define dc_pcx_pclkdiff_adr                            0x0031802c                                                   // dc_base + 0x00000008
  #define dc_pcx_pclkdiff                                (*(volatile unsigned int *)dc_pcx_pclkdiff_adr)
  #define dc_prty_lo_adr                                 0x00318030                                                   // dc_base + 0x0000000c
  #define dc_prty_lo                                     (*(volatile unsigned int *)dc_prty_lo_adr)
  #define dc_prty_hi_adr                                 0x00318034                                                   // dc_base + 0x00000010
  #define dc_prty_hi                                     (*(volatile unsigned int *)dc_prty_hi_adr)
  #define dc_bta_lo_adr                                  0x00318038                                                   // dc_base + 0x00000014
  #define dc_bta_lo                                      (*(volatile unsigned int *)dc_bta_lo_adr)
  #define dc_bta_hi_adr                                  0x0031803c                                                   // dc_base + 0x00000018
  #define dc_bta_hi                                      (*(volatile unsigned int *)dc_bta_hi_adr)
  #define dc_clsdev_adr                                  0x00318040                                                   // dc_base + 0x0000001c
  #define dc_clsdev                                      (*(volatile unsigned int *)dc_clsdev_adr)
  #define dc_ipa_lo_adr                                  0x00318044                                                   // dc_base + 0x00000020
  #define dc_ipa_lo                                      (*(volatile unsigned int *)dc_ipa_lo_adr)
  #define dc_ipa_hi_adr                                  0x00318048                                                   // dc_base + 0x00000024
  #define dc_ipa_hi                                      (*(volatile unsigned int *)dc_ipa_hi_adr)
  #define dc_pg_uap_adr                                  0x0031804c                                                   // dc_base + 0x00000028
  #define dc_pg_uap                                      (*(volatile unsigned int *)dc_pg_uap_adr)
  #define dc_fhs_pyld_adr                                0x00318050                                                   // dc_base + 0x0000002c
  #define dc_fhs_pyld                                    (*(volatile unsigned int *)dc_fhs_pyld_adr)
  #define dc_n_iq_adr                                    0x00318054                                                   // dc_base + 0x00000030
  #define dc_n_iq                                        (*(volatile unsigned int *)dc_n_iq_adr)
  #define dc_iq_to_adr                                   0x00318058                                                   // dc_base + 0x00000034
  #define dc_iq_to                                       (*(volatile unsigned int *)dc_iq_to_adr)
  #define dc_iq_respto_adr                               0x0031805c                                                   // dc_base + 0x00000038
  #define dc_iq_respto                                   (*(volatile unsigned int *)dc_iq_respto_adr)
  #define dc_n_pg_adr                                    0x00318060                                                   // dc_base + 0x0000003c
  #define dc_n_pg                                        (*(volatile unsigned int *)dc_n_pg_adr)
  #define dc_pg_to_adr                                   0x00318064                                                   // dc_base + 0x00000040
  #define dc_pg_to                                       (*(volatile unsigned int *)dc_pg_to_adr)
  #define dc_pg_respto_adr                               0x00318068                                                   // dc_base + 0x00000044
  #define dc_pg_respto                                   (*(volatile unsigned int *)dc_pg_respto_adr)
  #define dc_newcon_to_adr                               0x0031806c                                                   // dc_base + 0x00000048
  #define dc_newcon_to                                   (*(volatile unsigned int *)dc_newcon_to_adr)
  #define dc_pg_ckoff_adr                                0x00318070                                                   // dc_base + 0x0000004c
  #define dc_pg_ckoff                                    (*(volatile unsigned int *)dc_pg_ckoff_adr)
  #define dc_n_pclk_oft_adr                              0x00318074                                                   // dc_base + 0x00000050
  #define dc_n_pclk_oft                                  (*(volatile unsigned int *)dc_n_pclk_oft_adr)
  #define dc_n_clk_oft_adr                               0x00318078                                                   // dc_base + 0x00000054
  #define dc_n_clk_oft                                   (*(volatile unsigned int *)dc_n_clk_oft_adr)
  #define dc_n_clk_wake_cnt_adr                          0x0031807c                                                   // dc_base + 0x00000058
  #define dc_n_clk_wake_cnt                              (*(volatile unsigned int *)dc_n_clk_wake_cnt_adr)
  #define dc_nclk_ctl_adr                                0x00318080                                                   // dc_base + 0x0000005c
  #define dc_nclk_ctl                                    (*(volatile unsigned int *)dc_nclk_ctl_adr)
  #define dc_nbtc_pclk_adr                               0x00318084                                                   // dc_base + 0x00000060
  #define dc_nbtc_pclk                                   (*(volatile unsigned int *)dc_nbtc_pclk_adr)
  #define dc_nbtc_clk_adr                                0x00318088                                                   // dc_base + 0x00000064
  #define dc_nbtc_clk                                    (*(volatile unsigned int *)dc_nbtc_clk_adr)
  #define dc_acode_dly_adr                               0x0031808c                                                   // dc_base + 0x00000068
  #define dc_acode_dly                                   (*(volatile unsigned int *)dc_acode_dly_adr)
  #define dc_cr_op_st_en_cnt_adr                         0x00318090                                                   // dc_base + 0x0000006c
  #define dc_cr_op_st_en_cnt                             (*(volatile unsigned int *)dc_cr_op_st_en_cnt_adr)
  #define dc_rtx_start_cnt_adr                           0x00318094                                                   // dc_base + 0x00000070
  #define dc_rtx_start_cnt                               (*(volatile unsigned int *)dc_rtx_start_cnt_adr)
  #define dc_pll_en_cnt_adr                              0x00318098                                                   // dc_base + 0x00000074
  #define dc_pll_en_cnt                                  (*(volatile unsigned int *)dc_pll_en_cnt_adr)
  #define dc_inq_ckoff_adr                               0x0031809c                                                   // dc_base + 0x00000078
  #define dc_inq_ckoff                                   (*(volatile unsigned int *)dc_inq_ckoff_adr)
  #define dc_smpl_ctl_adr                                0x003180a0                                                   // dc_base + 0x0000007c
  #define dc_smpl_ctl                                    (*(volatile unsigned int *)dc_smpl_ctl_adr)
  #define dc_slot_offset_adr                             0x003180a4                                                   // dc_base + 0x00000080
  #define dc_slot_offset                                 (*(volatile unsigned int *)dc_slot_offset_adr)
  #define dc_win_pkt0_adr                                0x003180a8                                                   // dc_base + 0x00000084
  #define dc_win_pkt0                                    (*(volatile unsigned int *)dc_win_pkt0_adr)
  #define dc_win_pkt1_adr                                0x003180ac                                                   // dc_base + 0x00000088
  #define dc_win_pkt1                                    (*(volatile unsigned int *)dc_win_pkt1_adr)
  #define dc_win_pkt2_adr                                0x003180b0                                                   // dc_base + 0x0000008c
  #define dc_win_pkt2                                    (*(volatile unsigned int *)dc_win_pkt2_adr)
  #define dc_win_txconfx_adr                             0x003180b4                                                   // dc_base + 0x00000090
  #define dc_win_txconfx                                 (*(volatile unsigned int *)dc_win_txconfx_adr)
  #define txconfx_st_adr                                 0x003180b8                                                   // dc_base + 0x00000094
  #define txconfx_st                                     (*(volatile unsigned int *)txconfx_st_adr)
  #define dc_icoex_adr                                   0x003180bc                                                   // dc_base + 0x00000098
  #define dc_icoex                                       (*(volatile unsigned int *)dc_icoex_adr)
  #define dc_icoex_freq0_adr                             0x003180c0                                                   // dc_base + 0x0000009c
  #define dc_icoex_freq0                                 (*(volatile unsigned int *)dc_icoex_freq0_adr)
  #define dc_icoex_freq1_adr                             0x003180c4                                                   // dc_base + 0x000000a0
  #define dc_icoex_freq1                                 (*(volatile unsigned int *)dc_icoex_freq1_adr)
  #define dc_icoex_freq2_adr                             0x003180c8                                                   // dc_base + 0x000000a4
  #define dc_icoex_freq2                                 (*(volatile unsigned int *)dc_icoex_freq2_adr)
  #define dc_icoex_freq3_adr                             0x003180cc                                                   // dc_base + 0x000000a8
  #define dc_icoex_freq3                                 (*(volatile unsigned int *)dc_icoex_freq3_adr)
  #define dc_bt_clk_offset_adr                           0x003180d0                                                   // dc_base + 0x000000ac
  #define dc_bt_clk_offset                               (*(volatile unsigned int *)dc_bt_clk_offset_adr)
  #define dc_diac_lo_adr                                 0x003180d4                                                   // dc_base + 0x000000b0
  #define dc_diac_lo                                     (*(volatile unsigned int *)dc_diac_lo_adr)
  #define dc_diac_hi_adr                                 0x003180d8                                                   // dc_base + 0x000000b4
  #define dc_diac_hi                                     (*(volatile unsigned int *)dc_diac_hi_adr)
  #define dc_giac_lo_adr                                 0x003180dc                                                   // dc_base + 0x000000b8
  #define dc_giac_lo                                     (*(volatile unsigned int *)dc_giac_lo_adr)
  #define dc_giac_hi_adr                                 0x003180e0                                                   // dc_base + 0x000000bc
  #define dc_giac_hi                                     (*(volatile unsigned int *)dc_giac_hi_adr)
  #define dc_dual_synch_adr                              0x003180e4                                                   // dc_base + 0x000000c0
  #define dc_dual_synch                                  (*(volatile unsigned int *)dc_dual_synch_adr)
  #define dc_win_pkt3_adr                                0x003180e8                                                   // dc_base + 0x000000c4
  #define dc_win_pkt3                                    (*(volatile unsigned int *)dc_win_pkt3_adr)
  #define dc_2clb_eci_lsw_adr                            0x003180ec                                                   // dc_base + 0x000000c8
  #define dc_2clb_eci_lsw                                (*(volatile unsigned int *)dc_2clb_eci_lsw_adr)
  #define dc_2clb_eci_msw_adr                            0x003180f0                                                   // dc_base + 0x000000cc
  #define dc_2clb_eci_msw                                (*(volatile unsigned int *)dc_2clb_eci_msw_adr)
  #define dc_cap_SyncCnt_adr                             0x003180f4                                                   // dc_base + 0x000000d0
  #define dc_cap_SyncCnt                                 (*(volatile unsigned int *)dc_cap_SyncCnt_adr)
  #define dc_scan_pg_cfg_adr                             0x003180f8                                                   // dc_base + 0x000000d4
  #define dc_scan_pg_cfg                                 (*(volatile unsigned int *)dc_scan_pg_cfg_adr)
  #define dc_pcxclkdiff_adr                              0x003180fc                                                   // dc_base + 0x000000d8
  #define dc_pcxclkdiff                                  (*(volatile unsigned int *)dc_pcxclkdiff_adr)
  #define dcenc_base                                     0x00318100                                                   // bpl_base + 0x00000100
  #define secnd_grp_base                                 0x00318100                                                   // dcenc_base
  #define encryption_key_adr0                            0x00318180                                                   // dcenc_base + 0x00000020 * 0x00000004
  #define encryption_key0                                (*(volatile unsigned int *)encryption_key_adr0)
  #define encryption_key_adr1                            0x00318184                                                   // dcenc_base + 0x00000021 * 0x00000004
  #define encryption_key1                                (*(volatile unsigned int *)encryption_key_adr1)
  #define encryption_key_adr2                            0x00318188                                                   // dcenc_base + 0x00000022 * 0x00000004
  #define encryption_key2                                (*(volatile unsigned int *)encryption_key_adr2)
  #define encryption_key_adr3                            0x0031818c                                                   // dcenc_base + 0x00000023 * 0x00000004
  #define encryption_key3                                (*(volatile unsigned int *)encryption_key_adr3)
  #define pcx_base                                       0x00318200                                                   // bpl_base + 0x00000200
  #define third_grp_base                                 0x00318200                                                   // pcx_base
  #define pc_idx_ptr_adr                                 0x00318200                                                   // pcx_base + 0x00000000 * 0x00000004
  #define pc_idx_ptr                                     (*(volatile unsigned int *)pc_idx_ptr_adr)
  #define pcx_ctl_adr                                    0x00318204                                                   // pcx_base + 0x00000001 * 0x00000004
  #define pcx_ctl                                        (*(volatile unsigned int *)pcx_ctl_adr)
  #define pcx_pckoff_adr                                 0x00318208                                                   // pcx_base + 0x00000002 * 0x00000004
  #define pcx_pckoff                                     (*(volatile unsigned int *)pcx_pckoff_adr)
  #define pcx_ckoff_adr                                  0x0031820c                                                   // pcx_base + 0x00000003 * 0x00000004
  #define pcx_ckoff                                      (*(volatile unsigned int *)pcx_ckoff_adr)
  #define pcx_timer_ctl_adr                              0x00318210                                                   // pcx_base + 0x00000004 * 0x00000004
  #define pcx_timer_ctl                                  (*(volatile unsigned int *)pcx_timer_ctl_adr)
  #define pcx_timer_val_adr                              0x00318214                                                   // pcx_base + 0x00000005 * 0x00000004
  #define pcx_timer_val                                  (*(volatile unsigned int *)pcx_timer_val_adr)
  #define pc_acscd_lo_adr                                0x00318218                                                   // pcx_base + 0x00000006 * 0x00000004
  #define pc_acscd_lo                                    (*(volatile unsigned int *)pc_acscd_lo_adr)
  #define pc_acscd_hi_adr                                0x0031821c                                                   // pcx_base + 0x00000007 * 0x00000004
  #define pc_acscd_hi                                    (*(volatile unsigned int *)pc_acscd_hi_adr)
  #define pcx_uap_adr                                    0x00318220                                                   // pcx_base + 0x00000008 * 0x00000004
  #define pcx_uap                                        (*(volatile unsigned int *)pcx_uap_adr)
  #define pcx_nap_adr                                    0x00318224                                                   // pcx_base + 0x00000009 * 0x00000004
  #define pcx_nap                                        (*(volatile unsigned int *)pcx_nap_adr)
  #define pcx_pbtclk_adr                                 0x00318228                                                   // pcx_base + 0x0000000a * 0x00000004
  #define pcx_pbtclk                                     (*(volatile unsigned int *)pcx_pbtclk_adr)
  #define pcx_btclk_adr                                  0x0031822c                                                   // pcx_base + 0x0000000b * 0x00000004
  #define pcx_btclk                                      (*(volatile unsigned int *)pcx_btclk_adr)
  #define pcx_last_synctr_adr                            0x00318230                                                   // pcx_base + 0x0000000c * 0x00000004
  #define pcx_last_synctr                                (*(volatile unsigned int *)pcx_last_synctr_adr)
  #define pcx_nat_ckoff_adr                              0x00318234                                                   // pcx_base + 0x0000000d * 0x00000004
  #define pcx_nat_ckoff                                  (*(volatile unsigned int *)pcx_nat_ckoff_adr)
  #define pcx2_pbtclk_adr                                0x00318238                                                   // pcx_base + 0x0000000e * 0x00000004
  #define pcx2_pbtclk                                    (*(volatile unsigned int *)pcx2_pbtclk_adr)
  #define pcx2_btclk_adr                                 0x0031823c                                                   // pcx_base + 0x0000000f * 0x00000004
  #define pcx2_btclk                                     (*(volatile unsigned int *)pcx2_btclk_adr)
  #define pc_varacscd_lo_adr                             0x00318240                                                   // pcx_base + 0x00000010 * 0x00000004
  #define pc_varacscd_lo                                 (*(volatile unsigned int *)pc_varacscd_lo_adr)
  #define pc_varacscd_hi_adr                             0x00318244                                                   // pcx_base + 0x00000011 * 0x00000004
  #define pc_varacscd_hi                                 (*(volatile unsigned int *)pc_varacscd_hi_adr)
  #define btclk_vsync_val1_adr                           0x00318248                                                   // pcx_base + 0x00000012 * 0x00000004
  #define btclk_vsync_val1                               (*(volatile unsigned int *)btclk_vsync_val1_adr)
  #define btclk_vsync_val2_adr                           0x0031824c                                                   // pcx_base + 0x00000013 * 0x00000004
  #define btclk_vsync_val2                               (*(volatile unsigned int *)btclk_vsync_val2_adr)
  #define amodb1_adr                                     0x00318254                                                   // pcx_base + 0x00000015 * 0x00000004
  #define amodb1                                         (*(volatile unsigned int *)amodb1_adr)
  #define amodb2_adr                                     0x00318258                                                   // pcx_base + 0x00000016 * 0x00000004
  #define amodb2                                         (*(volatile unsigned int *)amodb2_adr)
  #define mod_calc_ctl_adr                               0x0031825c                                                   // pcx_base + 0x00000017 * 0x00000004
  #define mod_calc_ctl                                   (*(volatile unsigned int *)mod_calc_ctl_adr)
  #define a_in_amodb1_adr                                0x00318260                                                   // pcx_base + 0x00000018 * 0x00000004
  #define a_in_amodb1                                    (*(volatile unsigned int *)a_in_amodb1_adr)
  #define b_in_amodb1_adr                                0x00318264                                                   // pcx_base + 0x00000019 * 0x00000004
  #define b_in_amodb1                                    (*(volatile unsigned int *)b_in_amodb1_adr)
  #define a_in_amodb2_adr                                0x00318268                                                   // pcx_base + 0x0000001a * 0x00000004
  #define a_in_amodb2                                    (*(volatile unsigned int *)a_in_amodb2_adr)
  #define b_in_amodb2_adr                                0x0031826c                                                   // pcx_base + 0x0000001b * 0x00000004
  #define b_in_amodb2                                    (*(volatile unsigned int *)b_in_amodb2_adr)
  #define sys_clk_captd_adr                              0x00318270                                                   // pcx_base + 0x0000001c * 0x00000004
  #define sys_clk_captd                                  (*(volatile unsigned int *)sys_clk_captd_adr)
  #define sys_pclk_captd_adr                             0x00318274                                                   // pcx_base + 0x0000001d * 0x00000004
  #define sys_pclk_captd                                 (*(volatile unsigned int *)sys_pclk_captd_adr)
  #define pcx_enc_bc_adr                                 0x0031829c                                                   // pcx_base + 0x00000027 * 0x00000004
  #define pcx_enc_bc                                     (*(volatile unsigned int *)pcx_enc_bc_adr)
  #define pcx_mc_cfg_adr                                 0x003182a0                                                   // pcx_base + 0x00000028 * 0x00000004
  #define pcx_mc_cfg                                     (*(volatile unsigned int *)pcx_mc_cfg_adr)
  #define pcx_btclk_no_offset_adr                        0x003182a4                                                   // pcx_base + 0x00000029 * 0x00000004
  #define pcx_btclk_no_offset                            (*(volatile unsigned int *)pcx_btclk_no_offset_adr)
  #define dc_mcmp_ctrl_adr                               0x003182a8                                                   // pcx_base + 0x0000002a * 0x00000004
  #define dc_mcmp_ctrl                                   (*(volatile unsigned int *)dc_mcmp_ctrl_adr)
  #define dc_mmc_rx_status_adr                           0x003182ac                                                   // pcx_base + 0x0000002b * 0x00000004
  #define dc_mmc_rx_status                               (*(volatile unsigned int *)dc_mmc_rx_status_adr)
  #define cdx_base                                       0x00318300                                                   // bpl_base + 0x00000300
  #define forth_grp_base                                 0x00318300                                                   // cdx_base
  #define dc_mss_pc_indx_adr                             0x00318300                                                   // cdx_base + 0x00000000 * 0x00000004
  #define dc_mss_pc_indx                                 (*(volatile unsigned int *)dc_mss_pc_indx_adr)
  #define tx_power_adr                                   0x00318304                                                   // cdx_base + 0x00000001 * 0x00000004
  #define tx_power                                       (*(volatile unsigned int *)tx_power_adr)
  #define xcdx_hold_ctl_adr                              0x00318308                                                   // cdx_base + 0x00000002 * 0x00000004
  #define xcdx_hold_ctl                                  (*(volatile unsigned int *)xcdx_hold_ctl_adr)
  #define modemFifoPtr_adr                               0x00318334                                                   // cdx_base + 0x0000000d * 0x00000004
  #define modemFifoPtr                                   (*(volatile unsigned int *)modemFifoPtr_adr)
  #define enh_base                                       0x00318340                                                   // cdx_tail + 0x00000001 * 0x00000004
  #define task_ind_adr                                   0x00318340                                                   // enh_base + 0x00000000 * 0x00000004
  #define task_ind                                       (*(volatile unsigned int *)task_ind_adr)
  #define btsch_ctl_adr                                  0x00318344                                                   // enh_base + 0x00000001 * 0x00000004
  #define btsch_ctl                                      (*(volatile unsigned int *)btsch_ctl_adr)
  #define wimax_cap_clk_adr                              0x00318348                                                   // enh_base + 0x00000002 * 0x00000004
  #define wimax_cap_clk                                  (*(volatile unsigned int *)wimax_cap_clk_adr)
  #define wimax_cap_pclk_adr                             0x0031834c                                                   // enh_base + 0x00000003 * 0x00000004
  #define wimax_cap_pclk                                 (*(volatile unsigned int *)wimax_cap_pclk_adr)
  #define pc_match_adr                                   0x00318350                                                   // enh_base + 0x00000004 * 0x00000004
  #define pc_match                                       (*(volatile unsigned int *)pc_match_adr)
  #define wib_ctr_iv0_adr                                0x00318354                                                   // enh_base + 0x00000005 * 0x00000004
  #define wib_ctr_iv0                                    (*(volatile unsigned int *)wib_ctr_iv0_adr)
  #define wib_ctr_iv1_adr                                0x00318358                                                   // enh_base + 0x00000006 * 0x00000004
  #define wib_ctr_iv1                                    (*(volatile unsigned int *)wib_ctr_iv1_adr)
  #define wib_ctr_iv2_adr                                0x0031835c                                                   // enh_base + 0x00000007 * 0x00000004
  #define wib_ctr_iv2                                    (*(volatile unsigned int *)wib_ctr_iv2_adr)
  #define wib_ctr_iv3_adr                                0x00318360                                                   // enh_base + 0x00000008 * 0x00000004
  #define wib_ctr_iv3                                    (*(volatile unsigned int *)wib_ctr_iv3_adr)
  #define wib_rtx_ctrl_adr                               0x00318364                                                   // enh_base + 0x00000009 * 0x00000004
  #define wib_rtx_ctrl                                   (*(volatile unsigned int *)wib_rtx_ctrl_adr)
  #define pc0_hs_cap_clk_adr                             0x00318368                                                   // enh_base + 0x0000000a * 0x00000004
  #define pc0_hs_cap_clk                                 (*(volatile unsigned int *)pc0_hs_cap_clk_adr)
  #define pc1_hs_cap_clk_adr                             0x0031836c                                                   // enh_base + 0x0000000b * 0x00000004
  #define pc1_hs_cap_clk                                 (*(volatile unsigned int *)pc1_hs_cap_clk_adr)
  #define pc2_hs_cap_clk_adr                             0x00318370                                                   // enh_base + 0x0000000c * 0x00000004
  #define pc2_hs_cap_clk                                 (*(volatile unsigned int *)pc2_hs_cap_clk_adr)
  #define pc3_hs_cap_clk_adr                             0x00318374                                                   // enh_base + 0x0000000d * 0x00000004
  #define pc3_hs_cap_clk                                 (*(volatile unsigned int *)pc3_hs_cap_clk_adr)
  #define pc4_hs_cap_clk_adr                             0x00318378                                                   // enh_base + 0x0000000e * 0x00000004
  #define pc4_hs_cap_clk                                 (*(volatile unsigned int *)pc4_hs_cap_clk_adr)
  #define enh_ctl_adr                                    0x0031837c                                                   // enh_base + 0x0000000f * 0x00000004
  #define enh_ctl                                        (*(volatile unsigned int *)enh_ctl_adr)
  #define rtx_fifo_ctl_adr                               0x00318380                                                   // enh_base + 0x00000010 * 0x00000004
  #define rtx_fifo_ctl                                   (*(volatile unsigned int *)rtx_fifo_ctl_adr)
  #define wib_txpktctr_lo_adr                            0x00318384                                                   // enh_base + 0x00000011 * 0x00000004
  #define wib_txpktctr_lo                                (*(volatile unsigned int *)wib_txpktctr_lo_adr)
  #define wib_txpktctr_hi_adr                            0x00318388                                                   // enh_base + 0x00000012 * 0x00000004
  #define wib_txpktctr_hi                                (*(volatile unsigned int *)wib_txpktctr_hi_adr)
  #define wib_rxpktctr_lo_adr                            0x0031838c                                                   // enh_base + 0x00000013 * 0x00000004
  #define wib_rxpktctr_lo                                (*(volatile unsigned int *)wib_rxpktctr_lo_adr)
  #define wib_rxpktctr_hi_adr                            0x00318390                                                   // enh_base + 0x00000014 * 0x00000004
  #define wib_rxpktctr_hi                                (*(volatile unsigned int *)wib_rxpktctr_hi_adr)
  #define wib_t_ifs_adr                                  0x00318394                                                   // enh_base + 0x00000015 * 0x00000004
  #define wib_t_ifs                                      (*(volatile unsigned int *)wib_t_ifs_adr)
  #define tbfc_ctrl_adr                                  0x00318398                                                   // enh_base + 0x00000016 * 0x00000004
  #define tbfc_ctrl                                      (*(volatile unsigned int *)tbfc_ctrl_adr)
  #define tbfc_trig_pkt_num_adr                          0x0031839c                                                   // enh_base + 0x00000017 * 0x00000004
  #define tbfc_trig_pkt_num                              (*(volatile unsigned int *)tbfc_trig_pkt_num_adr)
  #define tx_rx_anything_time_adr                        0x003183a0                                                   // enh_base + 0x00000018 * 0x00000004
  #define tx_rx_anything_time                            (*(volatile unsigned int *)tx_rx_anything_time_adr)
  #define tx_rx_anytime_adr                              0x003183a4                                                   // enh_base + 0x00000019 * 0x00000004
  #define tx_rx_anytime                                  (*(volatile unsigned int *)tx_rx_anytime_adr)
  #define rampup_bits_adr                                0x003183a8                                                   // enh_base + 0x0000001a * 0x00000004
  #define rampup_bits                                    (*(volatile unsigned int *)rampup_bits_adr)
  #define any_acs_code_adr                               0x003183ac                                                   // enh_base + 0x0000001b * 0x00000004
  #define any_acs_code                                   (*(volatile unsigned int *)any_acs_code_adr)
  #define pc_clk_reached_adr                             0x003183b0                                                   // enh_base + 0x0000001c * 0x00000004
  #define pc_clk_reached                                 (*(volatile unsigned int *)pc_clk_reached_adr)
  #define ext_synch_recv_ctrl_adr                        0x003183b4                                                   // enh_base + 0x0000001d * 0x00000004
  #define ext_synch_recv_ctrl                            (*(volatile unsigned int *)ext_synch_recv_ctrl_adr)
  #define ext_synch_recv_rise_clk_adr                    0x003183b8                                                   // enh_base + 0x0000001e * 0x00000004
  #define ext_synch_recv_rise_clk                        (*(volatile unsigned int *)ext_synch_recv_rise_clk_adr)
  #define ext_synch_recv_fall_clk_adr                    0x003183bc                                                   // enh_base + 0x0000001f * 0x00000004
  #define ext_synch_recv_fall_clk                        (*(volatile unsigned int *)ext_synch_recv_fall_clk_adr)
  #define ext_synch_trigger_bt_clk_adr                   0x003183c0                                                   // enh_base + 0x00000020 * 0x00000004
  #define ext_synch_trigger_bt_clk                       (*(volatile unsigned int *)ext_synch_trigger_bt_clk_adr)
  #define LTE_snap_ctrl_adr                              0x003183c4                                                   // enh_base + 0x00000021 * 0x00000004
  #define LTE_snap_ctrl                                  (*(volatile unsigned int *)LTE_snap_ctrl_adr)
  #define LTE_FRAME_snap_clk_adr                         0x003183c8                                                   // enh_base + 0x00000022 * 0x00000004
  #define LTE_FRAME_snap_clk                             (*(volatile unsigned int *)LTE_FRAME_snap_clk_adr)
  #define LTE_MWS_RX_snap_clk_adr                        0x003183cc                                                   // enh_base + 0x00000023 * 0x00000004
  #define LTE_MWS_RX_snap_clk                            (*(volatile unsigned int *)LTE_MWS_RX_snap_clk_adr)
  #define LTE_MWS_TX_snap_clk_adr                        0x003183d0                                                   // enh_base + 0x00000024 * 0x00000004
  #define LTE_MWS_TX_snap_clk                            (*(volatile unsigned int *)LTE_MWS_TX_snap_clk_adr)
  #define LTE_snap_pclk_adr                              0x003183d4                                                   // enh_base + 0x00000025 * 0x00000004
  #define LTE_snap_pclk                                  (*(volatile unsigned int *)LTE_snap_pclk_adr)
  #define LTE_coex_win0_adr                              0x003183d8                                                   // enh_base + 0x00000026 * 0x00000004
  #define LTE_coex_win0                                  (*(volatile unsigned int *)LTE_coex_win0_adr)
  #define LTE_coex_win1_adr                              0x003183dc                                                   // enh_base + 0x00000027 * 0x00000004
  #define LTE_coex_win1                                  (*(volatile unsigned int *)LTE_coex_win1_adr)
  #define gci_coex_out_mask_adr                          0x003183e0                                                   // enh_base + 0x00000028 * 0x00000004
  #define gci_coex_out_mask                              (*(volatile unsigned int *)gci_coex_out_mask_adr)
  #define ext_synch_trigger_bt_pclk_adr                  0x003183e4                                                   // enh_base + 0x00000029 * 0x00000004
  #define ext_synch_trigger_bt_pclk                      (*(volatile unsigned int *)ext_synch_trigger_bt_pclk_adr)
  #define fec_2_3_sft_ctrl_adr                           0x003183e8                                                   // enh_base + 0x0000002a * 0x00000004
  #define fec_2_3_sft_ctrl                               (*(volatile unsigned int *)fec_2_3_sft_ctrl_adr)
  #define fec_2_3_sft_status_adr                         0x003183ec                                                   // enh_base + 0x0000002b * 0x00000004
  #define fec_2_3_sft_status                             (*(volatile unsigned int *)fec_2_3_sft_status_adr)
  #define remote_counter_adr                             0x003183f0                                                   // enh_base + 0x0000002c * 0x00000004
  #define remote_counter                                 (*(volatile unsigned int *)remote_counter_adr)
  #define rpa_reslv_status_1_adr                         0x003183f4                                                   // enh_base + 0x0000002d * 0x00000004
  #define rpa_reslv_status_1                             (*(volatile unsigned int *)rpa_reslv_status_1_adr)
  #define rpa_reslv_status_2_adr                         0x003183f8                                                   // enh_base + 0x0000002e * 0x00000004
  #define rpa_reslv_status_2                             (*(volatile unsigned int *)rpa_reslv_status_2_adr)
  #define countr_threld_adr                              0x003183fc                                                   // enh_base + 0x0000002f * 0x00000004
  #define countr_threld                                  (*(volatile unsigned int *)countr_threld_adr)
  #define diag_base                                      0x00318400                                                   // bpl_base + 0x00000400
  #define fifth_grp_base                                 0x00318400                                                   // diag_base
  #define di_test_ctl_adr                                0x00318400                                                   // diag_base + 0x00000000 * 0x00000004
  #define di_test_ctl                                    (*(volatile unsigned int *)di_test_ctl_adr)
  #define di_mod_index_ctl_adr                           0x00318404                                                   // diag_base + 0x00000001 * 0x00000004
  #define di_mod_index_ctl                               (*(volatile unsigned int *)di_mod_index_ctl_adr)
  #define di_rf_ctl_adr0                                 0x00318408                                                   // diag_base + 0x00000002 * 0x00000004
  #define di_rf_ctl0                                     (*(volatile unsigned int *)di_rf_ctl_adr0)
  #define di_rf_ctl_adr1                                 0x0031840c                                                   // diag_base + 0x00000003 * 0x00000004
  #define di_rf_ctl1                                     (*(volatile unsigned int *)di_rf_ctl_adr1)
  #define di_tmode_ctl_adr                               0x00318410                                                   // diag_base + 0x00000004 * 0x00000004
  #define di_tmode_ctl                                   (*(volatile unsigned int *)di_tmode_ctl_adr)
  #define di_tmode_rx_hf_adr                             0x00318414                                                   // diag_base + 0x00000005 * 0x00000004
  #define di_tmode_rx_hf                                 (*(volatile unsigned int *)di_tmode_rx_hf_adr)
  #define di_tmode_tx_hf_adr                             0x00318418                                                   // diag_base + 0x00000006 * 0x00000004
  #define di_tmode_tx_hf                                 (*(volatile unsigned int *)di_tmode_tx_hf_adr)
  #define di_lcu_substate_adr0                           0x0031841c                                                   // diag_base + 0x00000007 * 0x00000004
  #define di_lcu_substate0                               (*(volatile unsigned int *)di_lcu_substate_adr0)
  #define di_lcu_substate_adr1                           0x00318420                                                   // diag_base + 0x00000008 * 0x00000004
  #define di_lcu_substate1                               (*(volatile unsigned int *)di_lcu_substate_adr1)
  #define di_tx_pattern_adr                              0x00318440                                                   // diag_base + 0x00000010 * 0x00000004
  #define di_tx_pattern                                  (*(volatile unsigned int *)di_tx_pattern_adr)
  #define di_tx_pattern_sel_adr                          0x00318444                                                   // diag_base + 0x00000011 * 0x00000004
  #define di_tx_pattern_sel                              (*(volatile unsigned int *)di_tx_pattern_sel_adr)
  #define sco_pc_context_adr                             0x00318448                                                   // diag_base + 0x00000012 * 0x00000004
  #define sco_pc_context                                 (*(volatile unsigned int *)sco_pc_context_adr)
  #define di_phy_fpga_vid_adr                            0x0031844c                                                   // diag_base + 0x00000013 * 0x00000004
  #define di_phy_fpga_vid                                (*(volatile unsigned int *)di_phy_fpga_vid_adr)
  #define di_phy_fpga_48m_dcm_adr                        0x00318450                                                   // diag_base + 0x00000014 * 0x00000004
  #define di_phy_fpga_48m_dcm                            (*(volatile unsigned int *)di_phy_fpga_48m_dcm_adr)
  #define fpga_txconfx_gen_ctl_adr                       0x00318458                                                   // diag_base + 0x00000016 * 0x00000004
  #define fpga_txconfx_gen_ctl                           (*(volatile unsigned int *)fpga_txconfx_gen_ctl_adr)
  #define park_base                                      0x0031847c                                                   // diag_tail + 0x00000001 * 0x00000004
  #define scox_d_sco_adr                                 0x00318480                                                   // park_base + 0x00000001 * 0x00000004
  #define scox_d_sco                                     (*(volatile unsigned int *)scox_d_sco_adr)
  #define scox_t_sco_adr                                 0x00318484                                                   // park_base + 0x00000002 * 0x00000004
  #define scox_t_sco                                     (*(volatile unsigned int *)scox_t_sco_adr)
  #define pcx_n_poll_adr                                 0x00318488                                                   // park_base + 0x00000003 * 0x00000004
  #define pcx_n_poll                                     (*(volatile unsigned int *)pcx_n_poll_adr)
  #define park_available01_adr                           0x0031848c                                                   // park_base + 0x00000004 * 0x00000004
  #define park_available01                               (*(volatile unsigned int *)park_available01_adr)
  #define park_ctl_adr                                   0x00318490                                                   // park_base + 0x00000005 * 0x00000004
  #define park_ctl                                       (*(volatile unsigned int *)park_ctl_adr)
  #define park_status_adr                                0x00318494                                                   // park_base + 0x00000006 * 0x00000004
  #define park_status                                    (*(volatile unsigned int *)park_status_adr)
  #define bt_aes_ses_key0_adr                            0x00318498                                                   // park_base + 0x00000007 * 0x00000004
  #define bt_aes_ses_key0                                (*(volatile unsigned int *)bt_aes_ses_key0_adr)
  #define bt_aes_ses_key1_adr                            0x0031849c                                                   // park_base + 0x00000008 * 0x00000004
  #define bt_aes_ses_key1                                (*(volatile unsigned int *)bt_aes_ses_key1_adr)
  #define bt_aes_ses_key2_adr                            0x003184a0                                                   // park_base + 0x00000009 * 0x00000004
  #define bt_aes_ses_key2                                (*(volatile unsigned int *)bt_aes_ses_key2_adr)
  #define bt_aes_ses_key3_adr                            0x003184a4                                                   // park_base + 0x0000000a * 0x00000004
  #define bt_aes_ses_key3                                (*(volatile unsigned int *)bt_aes_ses_key3_adr)
  #define bt_aes_status1_adr                             0x003184a8                                                   // park_base + 0x0000000b * 0x00000004
  #define bt_aes_status1                                 (*(volatile unsigned int *)bt_aes_status1_adr)
  #define bt_aes_status2_adr                             0x003184ac                                                   // park_base + 0x0000000c * 0x00000004
  #define bt_aes_status2                                 (*(volatile unsigned int *)bt_aes_status2_adr)
  #define sri_base                                       0x00318500                                                   // bpl_base + 0x00000500
  #define sixth_grp_base                                 0x00318500                                                   // sri_base
  #define dc_sri_rf_ctl_adr0                             0x00318524                                                   // sri_base + 0x00000009 * 0x00000004
  #define dc_sri_rf_ctl0                                 (*(volatile unsigned int *)dc_sri_rf_ctl_adr0)
  #define dc_sri_rf_ctl_adr1                             0x00318528                                                   // sri_base + 0x0000000a * 0x00000004
  #define dc_sri_rf_ctl1                                 (*(volatile unsigned int *)dc_sri_rf_ctl_adr1)
  #define dc_sri_rssi_val_adr                            0x0031852c                                                   // sri_base + 0x0000000b * 0x00000004
  #define dc_sri_rssi_val                                (*(volatile unsigned int *)dc_sri_rssi_val_adr)
  #define dc_sri_pwr_ctl_adr                             0x00318530                                                   // sri_base + 0x0000000c * 0x00000004
  #define dc_sri_pwr_ctl                                 (*(volatile unsigned int *)dc_sri_pwr_ctl_adr)
  #define dc_t_synth_pu_adr                              0x00318534                                                   // sri_base + 0x0000000d * 0x00000004
  #define dc_t_synth_pu                                  (*(volatile unsigned int *)dc_t_synth_pu_adr)
  #define dc_t_sl_ctl_adr                                0x00318538                                                   // sri_base + 0x0000000e * 0x00000004
  #define dc_t_sl_ctl                                    (*(volatile unsigned int *)dc_t_sl_ctl_adr)
  #define dc_t_pa_ramp_adr                               0x0031853c                                                   // sri_base + 0x0000000f * 0x00000004
  #define dc_t_pa_ramp                                   (*(volatile unsigned int *)dc_t_pa_ramp_adr)
  #define dc_t_pa_down_adr                               0x00318540                                                   // sri_base + 0x00000010 * 0x00000004
  #define dc_t_pa_down                                   (*(volatile unsigned int *)dc_t_pa_down_adr)
  #define dc_t_tx_pu_adr                                 0x00318544                                                   // sri_base + 0x00000011 * 0x00000004
  #define dc_t_tx_pu                                     (*(volatile unsigned int *)dc_t_tx_pu_adr)
  #define dc_t_rx_pu_adr                                 0x00318548                                                   // sri_base + 0x00000012 * 0x00000004
  #define dc_t_rx_pu                                     (*(volatile unsigned int *)dc_t_rx_pu_adr)
  #define bt_cont_event_ctl_en_adr                       0x0031854c                                                   // sri_base + 0x00000013 * 0x00000004
  #define bt_cont_event_ctl_en                           (*(volatile unsigned int *)bt_cont_event_ctl_en_adr)
  #define bt_cont_event_ctl_0_adr                        0x00318550                                                   // sri_base + 0x00000014 * 0x00000004
  #define bt_cont_event_ctl_0                            (*(volatile unsigned int *)bt_cont_event_ctl_0_adr)
  #define bt_cont_event_ctl_1_adr                        0x00318554                                                   // sri_base + 0x00000015 * 0x00000004
  #define bt_cont_event_ctl_1                            (*(volatile unsigned int *)bt_cont_event_ctl_1_adr)
  #define bt_cont_event_ctl_2_adr                        0x00318558                                                   // sri_base + 0x00000016 * 0x00000004
  #define bt_cont_event_ctl_2                            (*(volatile unsigned int *)bt_cont_event_ctl_2_adr)
  #define bt_cont_event_ctl_3_adr                        0x0031855c                                                   // sri_base + 0x00000017 * 0x00000004
  #define bt_cont_event_ctl_3                            (*(volatile unsigned int *)bt_cont_event_ctl_3_adr)
  #define bt_cont_event_ctl_4_adr                        0x00318560                                                   // sri_base + 0x00000018 * 0x00000004
  #define bt_cont_event_ctl_4                            (*(volatile unsigned int *)bt_cont_event_ctl_4_adr)
  #define dc_available01_adr                             0x00318564                                                   // sri_base + 0x00000019 * 0x00000004
  #define dc_available01                                 (*(volatile unsigned int *)dc_available01_adr)
  #define dc_sri_ist_bit_adr                             0x00318500                                                   // sri_base + 0x00000000 * 0x00000004
  #define dc_sri_ist_bit                                 (*(volatile unsigned int *)dc_sri_ist_bit_adr)
  #define dc_sri_ds_bit_adr                              0x00318504                                                   // sri_base + 0x00000001 * 0x00000004
  #define dc_sri_ds_bit                                  (*(volatile unsigned int *)dc_sri_ds_bit_adr)
  #define dc_sri_ist_adr0                                0x00318508                                                   // sri_base + 0x00000002 * 0x00000004
  #define dc_sri_ist0                                    (*(volatile unsigned int *)dc_sri_ist_adr0)
  #define dc_sri_ist_adr1                                0x0031850c                                                   // sri_base + 0x00000003 * 0x00000004
  #define dc_sri_ist1                                    (*(volatile unsigned int *)dc_sri_ist_adr1)
  #define dc_sri_ds_adr0                                 0x00318510                                                   // sri_base + 0x00000004 * 0x00000004
  #define dc_sri_ds0                                     (*(volatile unsigned int *)dc_sri_ds_adr0)
  #define dc_sri_ds_adr1                                 0x00318514                                                   // sri_base + 0x00000005 * 0x00000004
  #define dc_sri_ds1                                     (*(volatile unsigned int *)dc_sri_ds_adr1)
  #define dc_sri_ds_adr2                                 0x00318518                                                   // sri_base + 0x00000006 * 0x00000004
  #define dc_sri_ds2                                     (*(volatile unsigned int *)dc_sri_ds_adr2)
  #define dc_sri_ds_adr3                                 0x0031851c                                                   // sri_base + 0x00000007 * 0x00000004
  #define dc_sri_ds3                                     (*(volatile unsigned int *)dc_sri_ds_adr3)
  #define dc_sri_jtag_access_adr                         0x00318520                                                   // sri_base + 0x00000008 * 0x00000004
  #define dc_sri_jtag_access                             (*(volatile unsigned int *)dc_sri_jtag_access_adr)
  #define phy_status_int_en_adr                          0x00318568                                                   // sri_base + 0x0000001a * 0x00000004
  #define phy_status_int_en                              (*(volatile unsigned int *)phy_status_int_en_adr)
  #define fsm_intrp_enable_adr                           0x0031856c                                                   // sri_base + 0x0000001b * 0x00000004
  #define fsm_intrp_enable                               (*(volatile unsigned int *)fsm_intrp_enable_adr)
  #define eci_status_int_en_adr                          0x00318570                                                   // sri_base + 0x0000001c * 0x00000004
  #define eci_status_int_en                              (*(volatile unsigned int *)eci_status_int_en_adr)
  #define eci_edgtr_mode_adr                             0x00318574                                                   // sri_base + 0x0000001d * 0x00000004
  #define eci_edgtr_mode                                 (*(volatile unsigned int *)eci_edgtr_mode_adr)
  #define eci_dual_edge_adr                              0x00318578                                                   // sri_base + 0x0000001e * 0x00000004
  #define eci_dual_edge                                  (*(volatile unsigned int *)eci_dual_edge_adr)
  #define eci_int_mask_adr                               0x0031857c                                                   // sri_base + 0x0000001f * 0x00000004
  #define eci_int_mask                                   (*(volatile unsigned int *)eci_int_mask_adr)
  #define eci_status_int_en_b_adr                        0x00318580                                                   // sri_base + 0x00000020 * 0x00000004
  #define eci_status_int_en_b                            (*(volatile unsigned int *)eci_status_int_en_b_adr)
  #define eci_edgtr_mode_b_adr                           0x00318584                                                   // sri_base + 0x00000021 * 0x00000004
  #define eci_edgtr_mode_b                               (*(volatile unsigned int *)eci_edgtr_mode_b_adr)
  #define eci_dual_edge_b_adr                            0x00318588                                                   // sri_base + 0x00000022 * 0x00000004
  #define eci_dual_edge_b                                (*(volatile unsigned int *)eci_dual_edge_b_adr)
  #define eci_int_mask_b_adr                             0x0031858c                                                   // sri_base + 0x00000023 * 0x00000004
  #define eci_int_mask_b                                 (*(volatile unsigned int *)eci_int_mask_b_adr)
  #define gci_reg_timeout_adr                            0x00318590                                                   // sri_base + 0x00000024 * 0x00000004
  #define gci_reg_timeout                                (*(volatile unsigned int *)gci_reg_timeout_adr)
  #define afh_base                                       0x00318600                                                   // bpl_base + 0x00000600
  #define seventh_grp_base                               0x00318600                                                   // afh_base
  #define dc_afh_ctl_adr                                 0x00318620                                                   // afh_base + 0x00000020
  #define dc_afh_ctl                                     (*(volatile unsigned int *)dc_afh_ctl_adr)
  #define dc_ind_d_ptr_adr                               0x00318624                                                   // afh_base + 0x00000024
  #define dc_ind_d_ptr                                   (*(volatile unsigned int *)dc_ind_d_ptr_adr)
  #define dc_hd_acc_cfg_adr                              0x00318628                                                   // afh_base + 0x00000028
  #define dc_hd_acc_cfg                                  (*(volatile unsigned int *)dc_hd_acc_cfg_adr)
  #define dc_up_opcode_adr                               0x0031862c                                                   // afh_base + 0x0000002c
  #define dc_up_opcode                                   (*(volatile unsigned int *)dc_up_opcode_adr)
  #define up_reg_b_adr                                   0x00318630                                                   // afh_base + 0x00000030
  #define up_reg_b                                       (*(volatile unsigned int *)up_reg_b_adr)
  #define up_reg_c_adr                                   0x00318634                                                   // afh_base + 0x00000034
  #define up_reg_c                                       (*(volatile unsigned int *)up_reg_c_adr)
  #define up_reg_d_adr                                   0x00318638                                                   // afh_base + 0x00000038
  #define up_reg_d                                       (*(volatile unsigned int *)up_reg_d_adr)
  #define dc_reg_a_adr                                   0x0031863c                                                   // afh_base + 0x0000003c
  #define dc_reg_a                                       (*(volatile unsigned int *)dc_reg_a_adr)
  #define dc_reg_b_adr                                   0x00318640                                                   // afh_base + 0x00000040
  #define dc_reg_b                                       (*(volatile unsigned int *)dc_reg_b_adr)
  #define dc_reg_c_adr                                   0x00318644                                                   // afh_base + 0x00000044
  #define dc_reg_c                                       (*(volatile unsigned int *)dc_reg_c_adr)
  #define dc_reg_d_adr                                   0x00318648                                                   // afh_base + 0x00000048
  #define dc_reg_d                                       (*(volatile unsigned int *)dc_reg_d_adr)
  #define dc_opcode_adr0                                 0x0031864c                                                   // afh_base + 0x0000004c
  #define dc_opcode0                                     (*(volatile unsigned int *)dc_opcode_adr0)
  #define dc_opcode_adr1                                 0x00318650                                                   // afh_base + 0x00000050
  #define dc_opcode1                                     (*(volatile unsigned int *)dc_opcode_adr1)
  #define dc_opcode_adr2                                 0x00318654                                                   // afh_base + 0x00000054
  #define dc_opcode2                                     (*(volatile unsigned int *)dc_opcode_adr2)
  #define dc_opcode_adr3                                 0x00318658                                                   // afh_base + 0x00000058
  #define dc_opcode3                                     (*(volatile unsigned int *)dc_opcode_adr3)
  #define dc_opcode_adr4                                 0x0031865c                                                   // afh_base + 0x0000005c
  #define dc_opcode4                                     (*(volatile unsigned int *)dc_opcode_adr4)
  #define dc_opcode_adr5                                 0x00318660                                                   // afh_base + 0x00000060
  #define dc_opcode5                                     (*(volatile unsigned int *)dc_opcode_adr5)
  #define dc_opcode_adr6                                 0x00318664                                                   // afh_base + 0x00000064
  #define dc_opcode6                                     (*(volatile unsigned int *)dc_opcode_adr6)
  #define dc_opcode_adr7                                 0x00318668                                                   // afh_base + 0x00000068
  #define dc_opcode7                                     (*(volatile unsigned int *)dc_opcode_adr7)
  #define dc_opcode_adr8                                 0x0031866c                                                   // afh_base + 0x0000006c
  #define dc_opcode8                                     (*(volatile unsigned int *)dc_opcode_adr8)
  #define dc_opcode_adr9                                 0x00318670                                                   // afh_base + 0x00000070
  #define dc_opcode9                                     (*(volatile unsigned int *)dc_opcode_adr9)
  #define dc_opcode_adr10                                0x00318674                                                   // afh_base + 0x00000074
  #define dc_opcode10                                    (*(volatile unsigned int *)dc_opcode_adr10)
  #define dc_opcode_adr11                                0x00318678                                                   // afh_base + 0x00000078
  #define dc_opcode11                                    (*(volatile unsigned int *)dc_opcode_adr11)
  #define dc_opcode_adr12                                0x0031867c                                                   // afh_base + 0x0000007c
  #define dc_opcode12                                    (*(volatile unsigned int *)dc_opcode_adr12)
  #define dc_opcode_adr13                                0x00318680                                                   // afh_base + 0x00000080
  #define dc_opcode13                                    (*(volatile unsigned int *)dc_opcode_adr13)
  #define dc_opcode_adr14                                0x00318684                                                   // afh_base + 0x00000084
  #define dc_opcode14                                    (*(volatile unsigned int *)dc_opcode_adr14)
  #define dc_opcode_adr15                                0x00318688                                                   // afh_base + 0x00000088
  #define dc_opcode15                                    (*(volatile unsigned int *)dc_opcode_adr15)
  #define dc_log_data_adr0                               0x0031868c                                                   // afh_base + 0x0000008c
  #define dc_log_data0                                   (*(volatile unsigned int *)dc_log_data_adr0)
  #define dc_log_data_adr1                               0x00318690                                                   // afh_base + 0x00000090
  #define dc_log_data1                                   (*(volatile unsigned int *)dc_log_data_adr1)
  #define dc_log_data_adr2                               0x00318694                                                   // afh_base + 0x00000094
  #define dc_log_data2                                   (*(volatile unsigned int *)dc_log_data_adr2)
  #define dc_log_data_adr3                               0x00318698                                                   // afh_base + 0x00000098
  #define dc_log_data3                                   (*(volatile unsigned int *)dc_log_data_adr3)
  #define dc_log_data_adr4                               0x0031869c                                                   // afh_base + 0x0000009c
  #define dc_log_data4                                   (*(volatile unsigned int *)dc_log_data_adr4)
  #define dc_fhout_adr                                   0x003186a0                                                   // afh_base + 0x000000a0
  #define dc_fhout                                       (*(volatile unsigned int *)dc_fhout_adr)
  #define dc_fk_remap_adr                                0x003186a4                                                   // afh_base + 0x000000a4
  #define dc_fk_remap                                    (*(volatile unsigned int *)dc_fk_remap_adr)
  #define dc_misc_ctl_adr                                0x003186a8                                                   // afh_base + 0x000000a8
  #define dc_misc_ctl                                    (*(volatile unsigned int *)dc_misc_ctl_adr)
  #define dc_x_clk_adr                                   0x003186ac                                                   // afh_base + 0x000000ac
  #define dc_x_clk                                       (*(volatile unsigned int *)dc_x_clk_adr)
  #define used_carriers_32t0_adr                         0x003186b0                                                   // afh_base + 0x000000b0
  #define used_carriers_32t0                             (*(volatile unsigned int *)used_carriers_32t0_adr)
  #define used_carriers_64t0_adr                         0x003186b4                                                   // afh_base + 0x000000b4
  #define used_carriers_64t0                             (*(volatile unsigned int *)used_carriers_64t0_adr)
  #define used_carriers_79t0_adr                         0x003186b8                                                   // afh_base + 0x000000b8
  #define used_carriers_79t0                             (*(volatile unsigned int *)used_carriers_79t0_adr)
  #define used_carriers_32t1_adr                         0x003186bc                                                   // afh_base + 0x000000bc
  #define used_carriers_32t1                             (*(volatile unsigned int *)used_carriers_32t1_adr)
  #define used_carriers_64t1_adr                         0x003186c0                                                   // afh_base + 0x000000c0
  #define used_carriers_64t1                             (*(volatile unsigned int *)used_carriers_64t1_adr)
  #define used_carriers_79t1_adr                         0x003186c4                                                   // afh_base + 0x000000c4
  #define used_carriers_79t1                             (*(volatile unsigned int *)used_carriers_79t1_adr)
  #define bt_aes_IV0_adr                                 0x003186c8                                                   // afh_base + 0x000000c8
  #define bt_aes_IV0                                     (*(volatile unsigned int *)bt_aes_IV0_adr)
  #define bt_aes_IV1_adr                                 0x003186cc                                                   // afh_base + 0x000000cc
  #define bt_aes_IV1                                     (*(volatile unsigned int *)bt_aes_IV1_adr)
  #define bt_aes_IV2_adr                                 0x003186d0                                                   // afh_base + 0x000000d0
  #define bt_aes_IV2                                     (*(volatile unsigned int *)bt_aes_IV2_adr)
  #define bt_aes_IV3_adr                                 0x003186d4                                                   // afh_base + 0x000000d4
  #define bt_aes_IV3                                     (*(volatile unsigned int *)bt_aes_IV3_adr)
  #define bt_aes_ctr0_0_adr                              0x003186d8                                                   // afh_base + 0x000000d8
  #define bt_aes_ctr0_0                                  (*(volatile unsigned int *)bt_aes_ctr0_0_adr)
  #define bt_aes_ctr0_1_adr                              0x003186dc                                                   // afh_base + 0x000000dc
  #define bt_aes_ctr0_1                                  (*(volatile unsigned int *)bt_aes_ctr0_1_adr)
  #define bt_aes_ctr0_2_adr                              0x003186e0                                                   // afh_base + 0x000000e0
  #define bt_aes_ctr0_2                                  (*(volatile unsigned int *)bt_aes_ctr0_2_adr)
  #define bt_aes_ctr0_3_adr                              0x003186e4                                                   // afh_base + 0x000000e4
  #define bt_aes_ctr0_3                                  (*(volatile unsigned int *)bt_aes_ctr0_3_adr)
  #define bt_aes_ctr_icv0_adr                            0x003186e8                                                   // afh_base + 0x000000e8
  #define bt_aes_ctr_icv0                                (*(volatile unsigned int *)bt_aes_ctr_icv0_adr)
  #define bt_aes_ctr_icv1_adr                            0x003186ec                                                   // afh_base + 0x000000ec
  #define bt_aes_ctr_icv1                                (*(volatile unsigned int *)bt_aes_ctr_icv1_adr)
  #define bt_aes_ctr_icv2_adr                            0x003186f0                                                   // afh_base + 0x000000f0
  #define bt_aes_ctr_icv2                                (*(volatile unsigned int *)bt_aes_ctr_icv2_adr)
  #define bt_aes_ctr_icv3_adr                            0x003186f4                                                   // afh_base + 0x000000f4
  #define bt_aes_ctr_icv3                                (*(volatile unsigned int *)bt_aes_ctr_icv3_adr)
  #define eighth_grp_base                                0x00318700                                                   // bpl_base + 0x00000700
  #define df_base                                        0x00318700                                                   // eighth_grp_base
  #define wib_df_ctrl1_reg_adr                           0x00318700                                                   // df_base + 0x00000000
  #define wib_df_ctrl1_reg                               (*(volatile unsigned int *)wib_df_ctrl1_reg_adr)
  #define wib_df_ctrl2_reg_adr                           0x00318704                                                   // df_base + 0x00000004
  #define wib_df_ctrl2_reg                               (*(volatile unsigned int *)wib_df_ctrl2_reg_adr)
  #define wib_df_ctrl3_reg_adr                           0x00318708                                                   // df_base + 0x00000008
  #define wib_df_ctrl3_reg                               (*(volatile unsigned int *)wib_df_ctrl3_reg_adr)
  #define wib_df_ctrl4_reg_adr                           0x0031870c                                                   // df_base + 0x0000000c
  #define wib_df_ctrl4_reg                               (*(volatile unsigned int *)wib_df_ctrl4_reg_adr)
  #define wib_df_spare_reg_adr                           0x00318710                                                   // df_base + 0x00000010
  #define wib_df_spare_reg                               (*(volatile unsigned int *)wib_df_spare_reg_adr)
  #define wib_ctrl_reg2_adr                              0x00318714                                                   // df_base + 0x00000014
  #define wib_ctrl_reg2                                  (*(volatile unsigned int *)wib_ctrl_reg2_adr)
  #define tx_rx_anytime_ctrl1_adr                        0x00318718                                                   // df_base + 0x00000018
  #define tx_rx_anytime_ctrl1                            (*(volatile unsigned int *)tx_rx_anytime_ctrl1_adr)
  #define tx_rx_anytime_ctrl2_adr                        0x0031871c                                                   // df_base + 0x0000001c
  #define tx_rx_anytime_ctrl2                            (*(volatile unsigned int *)tx_rx_anytime_ctrl2_adr)
  #define tx_rx_anytime_ctrl3_adr                        0x00318720                                                   // df_base + 0x00000020
  #define tx_rx_anytime_ctrl3                            (*(volatile unsigned int *)tx_rx_anytime_ctrl3_adr)
  #define tx_rx_anytime_ctrl4_adr                        0x00318724                                                   // df_base + 0x00000024
  #define tx_rx_anytime_ctrl4                            (*(volatile unsigned int *)tx_rx_anytime_ctrl4_adr)
  #define wib_le2m_adv_acs1_adr                          0x00318728                                                   // df_base + 0x00000028
  #define wib_le2m_adv_acs1                              (*(volatile unsigned int *)wib_le2m_adv_acs1_adr)
  #define wib_le2m_adv_acs2_adr                          0x0031872c                                                   // df_base + 0x0000002c
  #define wib_le2m_adv_acs2                              (*(volatile unsigned int *)wib_le2m_adv_acs2_adr)
  #define wib_le2m_data_acs1_adr                         0x00318730                                                   // df_base + 0x00000030
  #define wib_le2m_data_acs1                             (*(volatile unsigned int *)wib_le2m_data_acs1_adr)
  #define wib_le2m_data_acs2_adr                         0x00318734                                                   // df_base + 0x00000034
  #define wib_le2m_data_acs2                             (*(volatile unsigned int *)wib_le2m_data_acs2_adr)
  #define suppress_ctrl_adr                              0x00318738                                                   // df_base + 0x00000038
  #define suppress_ctrl                                  (*(volatile unsigned int *)suppress_ctrl_adr)
  #define suppress_fhout_mask0_adr                       0x0031873c                                                   // df_base + 0x0000003c
  #define suppress_fhout_mask0                           (*(volatile unsigned int *)suppress_fhout_mask0_adr)
  #define suppress_fhout_mask1_adr                       0x00318740                                                   // df_base + 0x00000040
  #define suppress_fhout_mask1                           (*(volatile unsigned int *)suppress_fhout_mask1_adr)
  #define suppress_fhout_mask2_adr                       0x00318744                                                   // df_base + 0x00000044
  #define suppress_fhout_mask2                           (*(volatile unsigned int *)suppress_fhout_mask2_adr)
  #define wib_adv_cypher_ctrl_adr                        0x00318748                                                   // df_base + 0x00000048
  #define wib_adv_cypher_ctrl                            (*(volatile unsigned int *)wib_adv_cypher_ctrl_adr)
  #define wib_adv_aes_counter1_adr                       0x0031874c                                                   // df_base + 0x0000004c
  #define wib_adv_aes_counter1                           (*(volatile unsigned int *)wib_adv_aes_counter1_adr)
  #define wib_adv_aes_counter2_adr                       0x00318750                                                   // df_base + 0x00000050
  #define wib_adv_aes_counter2                           (*(volatile unsigned int *)wib_adv_aes_counter2_adr)
  #define cipher_calc_cfg_0_adr                          0x00318754                                                   // df_base + 0x00000054
  #define cipher_calc_cfg_0                              (*(volatile unsigned int *)cipher_calc_cfg_0_adr)
  #define cipher_calc_cfg_1_adr                          0x00318758                                                   // df_base + 0x00000058
  #define cipher_calc_cfg_1                              (*(volatile unsigned int *)cipher_calc_cfg_1_adr)
  #define cipher_calc_cfg_2_adr                          0x0031875c                                                   // df_base + 0x0000005c
  #define cipher_calc_cfg_2                              (*(volatile unsigned int *)cipher_calc_cfg_2_adr)
  #define cipher_calc_cfg_3_adr                          0x00318760                                                   // df_base + 0x00000060
  #define cipher_calc_cfg_3                              (*(volatile unsigned int *)cipher_calc_cfg_3_adr)
  #define cipher_calc_cfg_4_adr                          0x00318764                                                   // df_base + 0x00000064
  #define cipher_calc_cfg_4                              (*(volatile unsigned int *)cipher_calc_cfg_4_adr)
  #define cipher_calc_cfg_5_adr                          0x00318768                                                   // df_base + 0x00000068
  #define cipher_calc_cfg_5                              (*(volatile unsigned int *)cipher_calc_cfg_5_adr)
  #define cipher_calc_cfg_6_adr                          0x0031876c                                                   // df_base + 0x0000006c
  #define cipher_calc_cfg_6                              (*(volatile unsigned int *)cipher_calc_cfg_6_adr)
  #define cipher_calc_cfg_7_adr                          0x00318770                                                   // df_base + 0x00000070
  #define cipher_calc_cfg_7                              (*(volatile unsigned int *)cipher_calc_cfg_7_adr)
  #define cipher_calc_cfg_8_adr                          0x00318774                                                   // df_base + 0x00000074
  #define cipher_calc_cfg_8                              (*(volatile unsigned int *)cipher_calc_cfg_8_adr)
  #define cipher_calc_cfg_9_adr                          0x00318778                                                   // df_base + 0x00000078
  #define cipher_calc_cfg_9                              (*(volatile unsigned int *)cipher_calc_cfg_9_adr)
  #define cipher_calc_cfg_10_adr                         0x0031877c                                                   // df_base + 0x0000007c
  #define cipher_calc_cfg_10                             (*(volatile unsigned int *)cipher_calc_cfg_10_adr)
  #define cipher_calc_cfg_11_adr                         0x00318780                                                   // df_base + 0x00000080
  #define cipher_calc_cfg_11                             (*(volatile unsigned int *)cipher_calc_cfg_11_adr)
  #define cipher_calc_cfg_12_adr                         0x00318784                                                   // df_base + 0x00000084
  #define cipher_calc_cfg_12                             (*(volatile unsigned int *)cipher_calc_cfg_12_adr)
  #define cipher_calc_cfg_13_adr                         0x00318788                                                   // df_base + 0x00000088
  #define cipher_calc_cfg_13                             (*(volatile unsigned int *)cipher_calc_cfg_13_adr)
  #define cipher_calc_cfg_14_adr                         0x0031878c                                                   // df_base + 0x0000008c
  #define cipher_calc_cfg_14                             (*(volatile unsigned int *)cipher_calc_cfg_14_adr)
  #define cipher_calc_cfg_15_adr                         0x00318790                                                   // df_base + 0x00000090
  #define cipher_calc_cfg_15                             (*(volatile unsigned int *)cipher_calc_cfg_15_adr)
  #define cipher_calc_cfg_16_adr                         0x00318794                                                   // df_base + 0x00000094
  #define cipher_calc_cfg_16                             (*(volatile unsigned int *)cipher_calc_cfg_16_adr)
  #define cipher_calc_cfg_17_adr                         0x00318798                                                   // df_base + 0x00000098
  #define cipher_calc_cfg_17                             (*(volatile unsigned int *)cipher_calc_cfg_17_adr)
  #define cipher_calc_cfg_18_adr                         0x0031879c                                                   // df_base + 0x0000009c
  #define cipher_calc_cfg_18                             (*(volatile unsigned int *)cipher_calc_cfg_18_adr)
  #define cipher_calc_status_0_adr                       0x003187a0                                                   // df_base + 0x000000a0
  #define cipher_calc_status_0                           (*(volatile unsigned int *)cipher_calc_status_0_adr)
  #define wib_preamble_size_adr                          0x003187a4                                                   // df_base + 0x000000a4
  #define wib_preamble_size                              (*(volatile unsigned int *)wib_preamble_size_adr)
  #define wib_le2m_sync_word1_adr                        0x003187a8                                                   // df_base + 0x000000a8
  #define wib_le2m_sync_word1                            (*(volatile unsigned int *)wib_le2m_sync_word1_adr)
  #define wib_le2m_sync_word2_adr                        0x003187ac                                                   // df_base + 0x000000ac
  #define wib_le2m_sync_word2                            (*(volatile unsigned int *)wib_le2m_sync_word2_adr)
  #define cipher_calc_status_1_adr                       0x003187b0                                                   // df_base + 0x000000b0
  #define cipher_calc_status_1                           (*(volatile unsigned int *)cipher_calc_status_1_adr)
  #define cipher_calc_status_2_adr                       0x003187b4                                                   // df_base + 0x000000b4
  #define cipher_calc_status_2                           (*(volatile unsigned int *)cipher_calc_status_2_adr)
  #define cipher_calc_status_3_adr                       0x003187b8                                                   // df_base + 0x000000b8
  #define cipher_calc_status_3                           (*(volatile unsigned int *)cipher_calc_status_3_adr)
  #define cipher_calc_status_4_adr                       0x003187bc                                                   // df_base + 0x000000bc
  #define cipher_calc_status_4                           (*(volatile unsigned int *)cipher_calc_status_4_adr)
  #define ninth_grp_1_base                               0x00318800                                                   // bpl_base + 0x00000800
  #define ninth_grp_2_base                               0x00318900                                                   // bpl_base + 0x00000900
  #define afh_mem_start_adr                              0x00318870                                                   // afh_base + 0x00000270
  #define afh_mem_start                                  (*(volatile unsigned int *)afh_mem_start_adr)
  #define afh_mem_end_adr                                0x003189b0                                                   // afh_base + 0x000003b0
  #define afh_mem_end                                    (*(volatile unsigned int *)afh_mem_end_adr)
  #define dc_saved_fhout_adr                             0x003189b4                                                   // afh_base + 0x000003b4
  #define dc_saved_fhout                                 (*(volatile unsigned int *)dc_saved_fhout_adr)
  #define dc_llr_fhs_pyld0_adr                           0x003189b8                                                   // afh_base + 0x000003b8
  #define dc_llr_fhs_pyld0                               (*(volatile unsigned int *)dc_llr_fhs_pyld0_adr)
  #define dc_llr_fhs_pyld1_adr                           0x003189bc                                                   // afh_base + 0x000003bc
  #define dc_llr_fhs_pyld1                               (*(volatile unsigned int *)dc_llr_fhs_pyld1_adr)
  #define dc_llr_fhs_pyld2_adr                           0x003189c0                                                   // afh_base + 0x000003c0
  #define dc_llr_fhs_pyld2                               (*(volatile unsigned int *)dc_llr_fhs_pyld2_adr)
  #define dc_llr_fhs_pyld3_adr                           0x003189c4                                                   // afh_base + 0x000003c4
  #define dc_llr_fhs_pyld3                               (*(volatile unsigned int *)dc_llr_fhs_pyld3_adr)
  #define dc_llr_fhs_pyld4_adr                           0x003189c8                                                   // afh_base + 0x000003c8
  #define dc_llr_fhs_pyld4                               (*(volatile unsigned int *)dc_llr_fhs_pyld4_adr)
  #define dc_llr_bd_adr0                                 0x003189cc                                                   // afh_base + 0x000003cc
  #define dc_llr_bd0                                     (*(volatile unsigned int *)dc_llr_bd_adr0)
  #define dc_llr_bd_adr1                                 0x003189d0                                                   // afh_base + 0x000003d0
  #define dc_llr_bd1                                     (*(volatile unsigned int *)dc_llr_bd_adr1)
  #define rtx_prog_rxdcnt_adr                            0x003189d4                                                   // afh_base + 0x000003d4
  #define rtx_prog_rxdcnt                                (*(volatile unsigned int *)rtx_prog_rxdcnt_adr)
  #define pkt_hdr_soft_dec_adr                           0x003189d8                                                   // afh_base + 0x000003d8
  #define pkt_hdr_soft_dec                               (*(volatile unsigned int *)pkt_hdr_soft_dec_adr)
  #define rxd_pyld_crc_adr                               0x003189dc                                                   // afh_base + 0x000003dc
  #define rxd_pyld_crc                                   (*(volatile unsigned int *)rxd_pyld_crc_adr)
  #define bt_aes_ctrl_adr                                0x003189e0                                                   // afh_base + 0x000003e0
  #define bt_aes_ctrl                                    (*(volatile unsigned int *)bt_aes_ctrl_adr)
  #define bt_aes_tx_pkt_cnt1_adr                         0x003189e4                                                   // afh_base + 0x000003e4
  #define bt_aes_tx_pkt_cnt1                             (*(volatile unsigned int *)bt_aes_tx_pkt_cnt1_adr)
  #define bt_aes_tx_pkt_cnt2_adr                         0x003189e8                                                   // afh_base + 0x000003e8
  #define bt_aes_tx_pkt_cnt2                             (*(volatile unsigned int *)bt_aes_tx_pkt_cnt2_adr)
  #define bt_aes_rx_pkt_cnt1_adr                         0x003189ec                                                   // afh_base + 0x000003ec
  #define bt_aes_rx_pkt_cnt1                             (*(volatile unsigned int *)bt_aes_rx_pkt_cnt1_adr)
  #define bt_aes_rx_pkt_cnt2_adr                         0x003189f0                                                   // afh_base + 0x000003f0
  #define bt_aes_rx_pkt_cnt2                             (*(volatile unsigned int *)bt_aes_rx_pkt_cnt2_adr)
  #define bt_aes_day_cnt_adr                             0x003189f4                                                   // afh_base + 0x000003f4
  #define bt_aes_day_cnt                                 (*(volatile unsigned int *)bt_aes_day_cnt_adr)
  #define bt_aes_esco_btclk_ovr_adr                      0x003189f8                                                   // afh_base + 0x000003f8
  #define bt_aes_esco_btclk_ovr                          (*(volatile unsigned int *)bt_aes_esco_btclk_ovr_adr)
  #define rtx_base                                       0x00318a00                                                   // bpl_base + 0x00000a00
  #define tenth_grp_base                                 0x00318a00                                                   // rtx_base
  #define null_def_adr                                   0x00318a08                                                   // rtx_base + 0x00000008
  #define null_def                                       (*(volatile unsigned int *)null_def_adr)
  #define poll_def_adr                                   0x00318a0c                                                   // rtx_base + 0x0000000c
  #define poll_def                                       (*(volatile unsigned int *)poll_def_adr)
  #define fhs_def_adr                                    0x00318a10                                                   // rtx_base + 0x00000010
  #define fhs_def                                        (*(volatile unsigned int *)fhs_def_adr)
  #define dm1_def_adr                                    0x00318a14                                                   // rtx_base + 0x00000014
  #define dm1_def                                        (*(volatile unsigned int *)dm1_def_adr)
  #define dh1_def_adr                                    0x00318a18                                                   // rtx_base + 0x00000018
  #define dh1_def                                        (*(volatile unsigned int *)dh1_def_adr)
  #define dm3_def_adr                                    0x00318a1c                                                   // rtx_base + 0x0000001c
  #define dm3_def                                        (*(volatile unsigned int *)dm3_def_adr)
  #define dh3_def_adr                                    0x00318a20                                                   // rtx_base + 0x00000020
  #define dh3_def                                        (*(volatile unsigned int *)dh3_def_adr)
  #define dm5_def_adr                                    0x00318a24                                                   // rtx_base + 0x00000024
  #define dm5_def                                        (*(volatile unsigned int *)dm5_def_adr)
  #define dh5_def_adr                                    0x00318a28                                                   // rtx_base + 0x00000028
  #define dh5_def                                        (*(volatile unsigned int *)dh5_def_adr)
  #define dh1_2_def_adr                                  0x00318a2c                                                   // rtx_base + 0x0000002c
  #define dh1_2_def                                      (*(volatile unsigned int *)dh1_2_def_adr)
  #define dh3_2_def_adr                                  0x00318a30                                                   // rtx_base + 0x00000030
  #define dh3_2_def                                      (*(volatile unsigned int *)dh3_2_def_adr)
  #define dh5_2_def_adr                                  0x00318a34                                                   // rtx_base + 0x00000034
  #define dh5_2_def                                      (*(volatile unsigned int *)dh5_2_def_adr)
  #define dh1_3_def_adr                                  0x00318a38                                                   // rtx_base + 0x00000038
  #define dh1_3_def                                      (*(volatile unsigned int *)dh1_3_def_adr)
  #define dh3_3_def_adr                                  0x00318a3c                                                   // rtx_base + 0x0000003c
  #define dh3_3_def                                      (*(volatile unsigned int *)dh3_3_def_adr)
  #define dh5_3_def_adr                                  0x00318a40                                                   // rtx_base + 0x00000040
  #define dh5_3_def                                      (*(volatile unsigned int *)dh5_3_def_adr)
  #define aux1_def_adr                                   0x00318a44                                                   // rtx_base + 0x00000044
  #define aux1_def                                       (*(volatile unsigned int *)aux1_def_adr)
  #define hv1_def_adr                                    0x00318a48                                                   // rtx_base + 0x00000048
  #define hv1_def                                        (*(volatile unsigned int *)hv1_def_adr)
  #define hv2_def_adr                                    0x00318a4c                                                   // rtx_base + 0x0000004c
  #define hv2_def                                        (*(volatile unsigned int *)hv2_def_adr)
  #define hv3_def_adr                                    0x00318a50                                                   // rtx_base + 0x00000050
  #define hv3_def                                        (*(volatile unsigned int *)hv3_def_adr)
  #define ev3_def_adr                                    0x00318a54                                                   // rtx_base + 0x00000054
  #define ev3_def                                        (*(volatile unsigned int *)ev3_def_adr)
  #define ev4_def_adr                                    0x00318a58                                                   // rtx_base + 0x00000058
  #define ev4_def                                        (*(volatile unsigned int *)ev4_def_adr)
  #define ev5_def_adr                                    0x00318a5c                                                   // rtx_base + 0x0000005c
  #define ev5_def                                        (*(volatile unsigned int *)ev5_def_adr)
  #define dv_def_adr                                     0x00318a60                                                   // rtx_base + 0x00000060
  #define dv_def                                         (*(volatile unsigned int *)dv_def_adr)
  #define ev3_2_def_adr                                  0x00318a64                                                   // rtx_base + 0x00000064
  #define ev3_2_def                                      (*(volatile unsigned int *)ev3_2_def_adr)
  #define ev5_2_def_adr                                  0x00318a68                                                   // rtx_base + 0x00000068
  #define ev5_2_def                                      (*(volatile unsigned int *)ev5_2_def_adr)
  #define ev3_3_def_adr                                  0x00318a6c                                                   // rtx_base + 0x0000006c
  #define ev3_3_def                                      (*(volatile unsigned int *)ev3_3_def_adr)
  #define ev5_3_def_adr                                  0x00318a70                                                   // rtx_base + 0x00000070
  #define ev5_3_def                                      (*(volatile unsigned int *)ev5_3_def_adr)
  #define ps_def_adr                                     0x00318a74                                                   // rtx_base + 0x00000074
  #define ps_def                                         (*(volatile unsigned int *)ps_def_adr)
  #define rsv0_def_adr                                   0x00318a78                                                   // rtx_base + 0x00000078
  #define rsv0_def                                       (*(volatile unsigned int *)rsv0_def_adr)
  #define rsv1_def_adr                                   0x00318a7c                                                   // rtx_base + 0x0000007c
  #define rsv1_def                                       (*(volatile unsigned int *)rsv1_def_adr)
  #define pkt_rpl_def_2_adr                              0x00318a80                                                   // rtx_base + 0x00000080
  #define pkt_rpl_def_2                                  (*(volatile unsigned int *)pkt_rpl_def_2_adr)
  #define pkt_rpl_def_3_adr                              0x00318a84                                                   // rtx_base + 0x00000084
  #define pkt_rpl_def_3                                  (*(volatile unsigned int *)pkt_rpl_def_3_adr)
  #define pkt_rpl_def_4_adr                              0x00318a88                                                   // rtx_base + 0x00000088
  #define pkt_rpl_def_4                                  (*(volatile unsigned int *)pkt_rpl_def_4_adr)
  #define pkt_rpl_def_5_adr                              0x00318a8c                                                   // rtx_base + 0x0000008c
  #define pkt_rpl_def_5                                  (*(volatile unsigned int *)pkt_rpl_def_5_adr)
  #define pkt_rpl_def_6_adr                              0x00318a90                                                   // rtx_base + 0x00000090
  #define pkt_rpl_def_6                                  (*(volatile unsigned int *)pkt_rpl_def_6_adr)
  #define pkt_rpl_def_7_adr                              0x00318a94                                                   // rtx_base + 0x00000094
  #define pkt_rpl_def_7                                  (*(volatile unsigned int *)pkt_rpl_def_7_adr)
  #define pkt_rpl_def_8_adr                              0x00318a98                                                   // rtx_base + 0x00000098
  #define pkt_rpl_def_8                                  (*(volatile unsigned int *)pkt_rpl_def_8_adr)
  #define pkt_rpl_def_9_adr                              0x00318a9c                                                   // rtx_base + 0x0000009c
  #define pkt_rpl_def_9                                  (*(volatile unsigned int *)pkt_rpl_def_9_adr)
  #define pkt_rpl_def_10_adr                             0x00318aa0                                                   // rtx_base + 0x000000a0
  #define pkt_rpl_def_10                                 (*(volatile unsigned int *)pkt_rpl_def_10_adr)
  #define pkt_rpl_def_11_adr                             0x00318aa4                                                   // rtx_base + 0x000000a4
  #define pkt_rpl_def_11                                 (*(volatile unsigned int *)pkt_rpl_def_11_adr)
  #define pkt_rpl_def_12_adr                             0x00318aa8                                                   // rtx_base + 0x000000a8
  #define pkt_rpl_def_12                                 (*(volatile unsigned int *)pkt_rpl_def_12_adr)
  #define pkt_rpl_def_13_adr                             0x00318aac                                                   // rtx_base + 0x000000ac
  #define pkt_rpl_def_13                                 (*(volatile unsigned int *)pkt_rpl_def_13_adr)
  #define pkt_rpl_def_14_adr                             0x00318ab0                                                   // rtx_base + 0x000000b0
  #define pkt_rpl_def_14                                 (*(volatile unsigned int *)pkt_rpl_def_14_adr)
  #define pkt_rpl_def_15_adr                             0x00318ab4                                                   // rtx_base + 0x000000b4
  #define pkt_rpl_def_15                                 (*(volatile unsigned int *)pkt_rpl_def_15_adr)
  #define prog_bt_trigger_cfg_adr                        0x00318ab8                                                   // rtx_base + 0x000000b8
  #define prog_bt_trigger_cfg                            (*(volatile unsigned int *)prog_bt_trigger_cfg_adr)
  #define prog_bt_int0_cfg_adr                           0x00318abc                                                   // rtx_base + 0x000000bc
  #define prog_bt_int0_cfg                               (*(volatile unsigned int *)prog_bt_int0_cfg_adr)
  #define prog_bt_int1_cfg_adr                           0x00318ac0                                                   // rtx_base + 0x000000c0
  #define prog_bt_int1_cfg                               (*(volatile unsigned int *)prog_bt_int1_cfg_adr)
  #define prog_bt_int2_cfg_adr                           0x00318ac4                                                   // rtx_base + 0x000000c4
  #define prog_bt_int2_cfg                               (*(volatile unsigned int *)prog_bt_int2_cfg_adr)
  #define prog_bt_int3_cfg_adr                           0x00318ac8                                                   // rtx_base + 0x000000c8
  #define prog_bt_int3_cfg                               (*(volatile unsigned int *)prog_bt_int3_cfg_adr)
  #define tx_pkt_info_adr                                0x00318acc                                                   // rtx_base + 0x000000cc
  #define tx_pkt_info                                    (*(volatile unsigned int *)tx_pkt_info_adr)
  #define tx_pkt_pyld_hdr_adr                            0x00318ad0                                                   // rtx_base + 0x000000d0
  #define tx_pkt_pyld_hdr                                (*(volatile unsigned int *)tx_pkt_pyld_hdr_adr)
  #define tx_fhs_pkt_hdr_adr                             0x00318ad4                                                   // rtx_base + 0x000000d4
  #define tx_fhs_pkt_hdr                                 (*(volatile unsigned int *)tx_fhs_pkt_hdr_adr)
  #define tx_dft_pkt_hdr_adr                             0x00318ad8                                                   // rtx_base + 0x000000d8
  #define tx_dft_pkt_hdr                                 (*(volatile unsigned int *)tx_dft_pkt_hdr_adr)
  #define tx_corrupt_cfg_adr                             0x00318adc                                                   // rtx_base + 0x000000dc
  #define tx_corrupt_cfg                                 (*(volatile unsigned int *)tx_corrupt_cfg_adr)
  #define logical_conn_info_adr                          0x00318ae0                                                   // rtx_base + 0x000000e0
  #define logical_conn_info                              (*(volatile unsigned int *)logical_conn_info_adr)
  #define txd_rxd_sco_length_adr                         0x00318ae4                                                   // rtx_base + 0x000000e4
  #define txd_rxd_sco_length                             (*(volatile unsigned int *)txd_rxd_sco_length_adr)
  #define txd_rxd_ctl_cfg_adr                            0x00318ae8                                                   // rtx_base + 0x000000e8
  #define txd_rxd_ctl_cfg                                (*(volatile unsigned int *)txd_rxd_ctl_cfg_adr)
  #define rxd_chk_notx_fhs_cfg_adr                       0x00318aec                                                   // rtx_base + 0x000000ec
  #define rxd_chk_notx_fhs_cfg                           (*(volatile unsigned int *)rxd_chk_notx_fhs_cfg_adr)
  #define rxd_chk_notx_acl_cfg_adr                       0x00318af0                                                   // rtx_base + 0x000000f0
  #define rxd_chk_notx_acl_cfg                           (*(volatile unsigned int *)rxd_chk_notx_acl_cfg_adr)
  #define rxd_chk_notx_sco_cfg_adr                       0x00318af4                                                   // rtx_base + 0x000000f4
  #define rxd_chk_notx_sco_cfg                           (*(volatile unsigned int *)rxd_chk_notx_sco_cfg_adr)
  #define rxd_hdr_ok_cfg_adr                             0x00318af8                                                   // rtx_base + 0x000000f8
  #define rxd_hdr_ok_cfg                                 (*(volatile unsigned int *)rxd_hdr_ok_cfg_adr)
  #define pkt_rx_1slot_max_cnt_adr                       0x00318afc                                                   // rtx_base + 0x000000fc
  #define pkt_rx_1slot_max_cnt                           (*(volatile unsigned int *)pkt_rx_1slot_max_cnt_adr)
  #define eleventh_grp_base                              0x00318b00                                                   // bpl_base + 0x00000b00
  #define pkt_rx_3slot_max_cnt_adr                       0x00318b00                                                   // rtx_base + 0x00000100
  #define pkt_rx_3slot_max_cnt                           (*(volatile unsigned int *)pkt_rx_3slot_max_cnt_adr)
  #define pkt_rx_5slot_max_cnt_adr                       0x00318b04                                                   // rtx_base + 0x00000104
  #define pkt_rx_5slot_max_cnt                           (*(volatile unsigned int *)pkt_rx_5slot_max_cnt_adr)
  #define multi_s_term_cnt_adr                           0x00318b08                                                   // rtx_base + 0x00000108
  #define multi_s_term_cnt                               (*(volatile unsigned int *)multi_s_term_cnt_adr)
  #define ips_synch_win_adr                              0x00318b0c                                                   // rtx_base + 0x0000010c
  #define ips_synch_win                                  (*(volatile unsigned int *)ips_synch_win_adr)
  #define synch_win_adr                                  0x00318b10                                                   // rtx_base + 0x00000110
  #define synch_win                                      (*(volatile unsigned int *)synch_win_adr)
  #define synch_trigger_offset_adr                       0x00318b14                                                   // rtx_base + 0x00000114
  #define synch_trigger_offset                           (*(volatile unsigned int *)synch_trigger_offset_adr)
  #define wib_wh_list_enh_ctrl_adr                       0x00318b18                                                   // rtx_base + 0x00000118
  #define wib_wh_list_enh_ctrl                           (*(volatile unsigned int *)wib_wh_list_enh_ctrl_adr)
  #define psk_synch_word_lo_adr                          0x00318b1c                                                   // rtx_base + 0x0000011c
  #define psk_synch_word_lo                              (*(volatile unsigned int *)psk_synch_word_lo_adr)
  #define psk_synch_word_hi_adr                          0x00318b20                                                   // rtx_base + 0x00000120
  #define psk_synch_word_hi                              (*(volatile unsigned int *)psk_synch_word_hi_adr)
  #define psk_pyld_mod_cfg_adr                           0x00318b24                                                   // rtx_base + 0x00000124
  #define psk_pyld_mod_cfg                               (*(volatile unsigned int *)psk_pyld_mod_cfg_adr)
  #define pkt_hdr_status_adr                             0x00318b28                                                   // rtx_base + 0x00000128
  #define pkt_hdr_status                                 (*(volatile unsigned int *)pkt_hdr_status_adr)
  #define pkt_log_adr                                    0x00318b2c                                                   // rtx_base + 0x0000012c
  #define pkt_log                                        (*(volatile unsigned int *)pkt_log_adr)
  #define pkt_picky_cnt_th_adr                           0x00318b30                                                   // rtx_base + 0x00000130
  #define pkt_picky_cnt_th                               (*(volatile unsigned int *)pkt_picky_cnt_th_adr)
  #define pyld_picky_err_cnt_adr                         0x00318b34                                                   // rtx_base + 0x00000134
  #define pyld_picky_err_cnt                             (*(volatile unsigned int *)pyld_picky_err_cnt_adr)
  #define wib_wh_list2_lo_adr                            0x00318b38                                                   // rtx_base + 0x00000138
  #define wib_wh_list2_lo                                (*(volatile unsigned int *)wib_wh_list2_lo_adr)
  #define wib_wh_list2_hi_adr                            0x00318b3c                                                   // rtx_base + 0x0000013c
  #define wib_wh_list2_hi                                (*(volatile unsigned int *)wib_wh_list2_hi_adr)
  #define wib_wh_list3_lo_adr                            0x00318b40                                                   // rtx_base + 0x00000140
  #define wib_wh_list3_lo                                (*(volatile unsigned int *)wib_wh_list3_lo_adr)
  #define wib_wh_list3_hi_adr                            0x00318b44                                                   // rtx_base + 0x00000144
  #define wib_wh_list3_hi                                (*(volatile unsigned int *)wib_wh_list3_hi_adr)
  #define wib_wh_list4_lo_adr                            0x00318b48                                                   // rtx_base + 0x00000148
  #define wib_wh_list4_lo                                (*(volatile unsigned int *)wib_wh_list4_lo_adr)
  #define wib_wh_list4_hi_adr                            0x00318b4c                                                   // rtx_base + 0x0000014c
  #define wib_wh_list4_hi                                (*(volatile unsigned int *)wib_wh_list4_hi_adr)
  #define wib_wh_list5_lo_adr                            0x00318b50                                                   // rtx_base + 0x00000150
  #define wib_wh_list5_lo                                (*(volatile unsigned int *)wib_wh_list5_lo_adr)
  #define wib_wh_list5_hi_adr                            0x00318b54                                                   // rtx_base + 0x00000154
  #define wib_wh_list5_hi                                (*(volatile unsigned int *)wib_wh_list5_hi_adr)
  #define wib_wh_list6_lo_adr                            0x00318b58                                                   // rtx_base + 0x00000158
  #define wib_wh_list6_lo                                (*(volatile unsigned int *)wib_wh_list6_lo_adr)
  #define wib_wh_list6_hi_adr                            0x00318b5c                                                   // rtx_base + 0x0000015c
  #define wib_wh_list6_hi                                (*(volatile unsigned int *)wib_wh_list6_hi_adr)
  #define wib_rtx_ctrl2_adr                              0x00318b60                                                   // rtx_base + 0x00000160
  #define wib_rtx_ctrl2                                  (*(volatile unsigned int *)wib_rtx_ctrl2_adr)
  #define prog_wht_seed_eir_adr                          0x00318b64                                                   // rtx_base + 0x00000164
  #define prog_wht_seed_eir                              (*(volatile unsigned int *)prog_wht_seed_eir_adr)
  #define wib_tx_pyld_info_adr                           0x00318b68                                                   // rtx_base + 0x00000168
  #define wib_tx_pyld_info                               (*(volatile unsigned int *)wib_tx_pyld_info_adr)
  #define wib_ctrl_reg_adr                               0x00318b6c                                                   // rtx_base + 0x0000016c
  #define wib_ctrl_reg                                   (*(volatile unsigned int *)wib_ctrl_reg_adr)
  #define wib_access_adr                                 0x00318b70                                                   // rtx_base + 0x00000170
  #define wib_access                                     (*(volatile unsigned int *)wib_access_adr)
  #define wib_advA_lo_adr                                0x00318b74                                                   // rtx_base + 0x00000174
  #define wib_advA_lo                                    (*(volatile unsigned int *)wib_advA_lo_adr)
  #define wib_advA_hi_adr                                0x00318b78                                                   // rtx_base + 0x00000178
  #define wib_advA_hi                                    (*(volatile unsigned int *)wib_advA_hi_adr)
  #define wib_TxA_lo_adr                                 0x00318b7c                                                   // rtx_base + 0x0000017c
  #define wib_TxA_lo                                     (*(volatile unsigned int *)wib_TxA_lo_adr)
  #define wib_TxA_hi_adr                                 0x00318b80                                                   // rtx_base + 0x00000180
  #define wib_TxA_hi                                     (*(volatile unsigned int *)wib_TxA_hi_adr)
  #define wib_InterLat_timer_adr                         0x00318b84                                                   // rtx_base + 0x00000184
  #define wib_InterLat_timer                             (*(volatile unsigned int *)wib_InterLat_timer_adr)
  #define wib_T0_Cnt_adr                                 0x00318b88                                                   // rtx_base + 0x00000188
  #define wib_T0_Cnt                                     (*(volatile unsigned int *)wib_T0_Cnt_adr)
  #define wh_list_mtch_no_clr_adr                        0x00318b8c                                                   // rtx_base + 0x0000018c
  #define wh_list_mtch_no_clr                            (*(volatile unsigned int *)wh_list_mtch_no_clr_adr)
  #define wib_coex_win0_adr                              0x00318b90                                                   // rtx_base + 0x00000190
  #define wib_coex_win0                                  (*(volatile unsigned int *)wib_coex_win0_adr)
  #define wib_coex_win1_adr                              0x00318b94                                                   // rtx_base + 0x00000194
  #define wib_coex_win1                                  (*(volatile unsigned int *)wib_coex_win1_adr)
  #define wib_rx_status_adr                              0x00318b98                                                   // rtx_base + 0x00000198
  #define wib_rx_status                                  (*(volatile unsigned int *)wib_rx_status_adr)
  #define wib_ScanA_lo_adr                               0x00318b9c                                                   // rtx_base + 0x0000019c
  #define wib_ScanA_lo                                   (*(volatile unsigned int *)wib_ScanA_lo_adr)
  #define wib_ScanA_hi_adr                               0x00318ba0                                                   // rtx_base + 0x000001a0
  #define wib_ScanA_hi                                   (*(volatile unsigned int *)wib_ScanA_hi_adr)
  #define wib_conn_lfsr_adr                              0x00318ba4                                                   // rtx_base + 0x000001a4
  #define wib_conn_lfsr                                  (*(volatile unsigned int *)wib_conn_lfsr_adr)
  #define wib_adv_acs_adr                                0x00318ba8                                                   // rtx_base + 0x000001a8
  #define wib_adv_acs                                    (*(volatile unsigned int *)wib_adv_acs_adr)
  #define wib_pkt_log_adr                                0x00318bac                                                   // rtx_base + 0x000001ac
  #define wib_pkt_log                                    (*(volatile unsigned int *)wib_pkt_log_adr)
  #define wib_InitA_lo_adr                               0x00318bb0                                                   // rtx_base + 0x000001b0
  #define wib_InitA_lo                                   (*(volatile unsigned int *)wib_InitA_lo_adr)
  #define wib_InitA_hi_adr                               0x00318bb4                                                   // rtx_base + 0x000001b4
  #define wib_InitA_hi                                   (*(volatile unsigned int *)wib_InitA_hi_adr)
  #define wib_AA_adr                                     0x00318bb8                                                   // rtx_base + 0x000001b8
  #define wib_AA                                         (*(volatile unsigned int *)wib_AA_adr)
  #define wib_pkt_end_max_cnt_adr                        0x00318bbc                                                   // rtx_base + 0x000001bc
  #define wib_pkt_end_max_cnt                            (*(volatile unsigned int *)wib_pkt_end_max_cnt_adr)
  #define wib_rtx_start_adr                              0x00318bc0                                                   // rtx_base + 0x000001c0
  #define wib_rtx_start                                  (*(volatile unsigned int *)wib_rtx_start_adr)
  #define wib_repl_pkt_adr                               0x00318bc4                                                   // rtx_base + 0x000001c4
  #define wib_repl_pkt                                   (*(volatile unsigned int *)wib_repl_pkt_adr)
  #define wib_wh_list1_lo_adr                            0x00318bc8                                                   // rtx_base + 0x000001c8
  #define wib_wh_list1_lo                                (*(volatile unsigned int *)wib_wh_list1_lo_adr)
  #define wib_wh_list1_hi_adr                            0x00318bcc                                                   // rtx_base + 0x000001cc
  #define wib_wh_list1_hi                                (*(volatile unsigned int *)wib_wh_list1_hi_adr)
  #define pkt_rx_max_slot_cnt_1_adr                      0x00318bd0                                                   // rtx_base + 0x000001d0
  #define pkt_rx_max_slot_cnt_1                          (*(volatile unsigned int *)pkt_rx_max_slot_cnt_1_adr)
  #define pkt_rx_max_slot_cnt_2_adr                      0x00318bd4                                                   // rtx_base + 0x000001d4
  #define pkt_rx_max_slot_cnt_2                          (*(volatile unsigned int *)pkt_rx_max_slot_cnt_2_adr)
  #define pkt_rx_max_slot_cnt_3_adr                      0x00318bd8                                                   // rtx_base + 0x000001d8
  #define pkt_rx_max_slot_cnt_3                          (*(volatile unsigned int *)pkt_rx_max_slot_cnt_3_adr)
  #define pkt_rx_max_slot_cnt_4_adr                      0x00318bdc                                                   // rtx_base + 0x000001dc
  #define pkt_rx_max_slot_cnt_4                          (*(volatile unsigned int *)pkt_rx_max_slot_cnt_4_adr)
  #define pkt_rx_max_slot_cnt_5_adr                      0x00318be0                                                   // rtx_base + 0x000001e0
  #define pkt_rx_max_slot_cnt_5                          (*(volatile unsigned int *)pkt_rx_max_slot_cnt_5_adr)
  #define pkt_rx_max_slot_cnt_6_adr                      0x00318be4                                                   // rtx_base + 0x000001e4
  #define pkt_rx_max_slot_cnt_6                          (*(volatile unsigned int *)pkt_rx_max_slot_cnt_6_adr)
  #define pkt_rx_max_slot_cnt_7_adr                      0x00318be8                                                   // rtx_base + 0x000001e8
  #define pkt_rx_max_slot_cnt_7                          (*(volatile unsigned int *)pkt_rx_max_slot_cnt_7_adr)
  #define pkt_rx_max_slot_ctrl_adr                       0x00318bec                                                   // rtx_base + 0x000001ec
  #define pkt_rx_max_slot_ctrl                           (*(volatile unsigned int *)pkt_rx_max_slot_ctrl_adr)
  #define wib_chan_adr                                   0x00318bf0                                                   // rtx_base + 0x000001f0
  #define wib_chan                                       (*(volatile unsigned int *)wib_chan_adr)
  #define wib_seed_adr                                   0x00318bf4                                                   // rtx_base + 0x000001f4
  #define wib_seed                                       (*(volatile unsigned int *)wib_seed_adr)
  #define wib_ses_key0_adr                               0x00318bf8                                                   // rtx_base + 0x000001f8
  #define wib_ses_key0                                   (*(volatile unsigned int *)wib_ses_key0_adr)
  #define wib_ses_key1_adr                               0x00318bfc                                                   // rtx_base + 0x000001fc
  #define wib_ses_key1                                   (*(volatile unsigned int *)wib_ses_key1_adr)
  #define twelfth_grp_base                               0x00318c00                                                   // bpl_base + 0x00000c00
  #define wib_ses_key2_adr                               0x00318c00                                                   // rtx_base + 0x00000200
  #define wib_ses_key2                                   (*(volatile unsigned int *)wib_ses_key2_adr)
  #define wib_ses_key3_adr                               0x00318c04                                                   // rtx_base + 0x00000204
  #define wib_ses_key3                                   (*(volatile unsigned int *)wib_ses_key3_adr)
  #define wib_aes_keyvalid_adr                           0x00318c08                                                   // rtx_base + 0x00000208
  #define wib_aes_keyvalid                               (*(volatile unsigned int *)wib_aes_keyvalid_adr)
  #define wib_ctr0_iv0_adr                               0x00318c0c                                                   // rtx_base + 0x0000020c
  #define wib_ctr0_iv0                                   (*(volatile unsigned int *)wib_ctr0_iv0_adr)
  #define wib_ctr0_iv1_adr                               0x00318c10                                                   // rtx_base + 0x00000210
  #define wib_ctr0_iv1                                   (*(volatile unsigned int *)wib_ctr0_iv1_adr)
  #define wib_ctr0_iv2_adr                               0x00318c14                                                   // rtx_base + 0x00000214
  #define wib_ctr0_iv2                                   (*(volatile unsigned int *)wib_ctr0_iv2_adr)
  #define wib_ctr0_iv3_adr                               0x00318c18                                                   // rtx_base + 0x00000218
  #define wib_ctr0_iv3                                   (*(volatile unsigned int *)wib_ctr0_iv3_adr)
  #define wib_ctr2_iv0_adr                               0x00318c1c                                                   // rtx_base + 0x0000021c
  #define wib_ctr2_iv0                                   (*(volatile unsigned int *)wib_ctr2_iv0_adr)
  #define wib_ctr2_iv1_adr                               0x00318c20                                                   // rtx_base + 0x00000220
  #define wib_ctr2_iv1                                   (*(volatile unsigned int *)wib_ctr2_iv1_adr)
  #define wib_ctr2_iv2_adr                               0x00318c24                                                   // rtx_base + 0x00000224
  #define wib_ctr2_iv2                                   (*(volatile unsigned int *)wib_ctr2_iv2_adr)
  #define wib_ctr2_iv3_adr                               0x00318c28                                                   // rtx_base + 0x00000228
  #define wib_ctr2_iv3                                   (*(volatile unsigned int *)wib_ctr2_iv3_adr)
  #define wib_rdctr0_iv0_adr                             0x00318c2c                                                   // rtx_base + 0x0000022c
  #define wib_rdctr0_iv0                                 (*(volatile unsigned int *)wib_rdctr0_iv0_adr)
  #define wib_rdctr0_iv1_adr                             0x00318c30                                                   // rtx_base + 0x00000230
  #define wib_rdctr0_iv1                                 (*(volatile unsigned int *)wib_rdctr0_iv1_adr)
  #define wib_rdctr0_iv2_adr                             0x00318c34                                                   // rtx_base + 0x00000234
  #define wib_rdctr0_iv2                                 (*(volatile unsigned int *)wib_rdctr0_iv2_adr)
  #define wib_rdctr0_iv3_adr                             0x00318c38                                                   // rtx_base + 0x00000238
  #define wib_rdctr0_iv3                                 (*(volatile unsigned int *)wib_rdctr0_iv3_adr)
  #define wib_aes_status_adr                             0x00318c3c                                                   // rtx_base + 0x0000023c
  #define wib_aes_status                                 (*(volatile unsigned int *)wib_aes_status_adr)
  #define wib_aes2_status_adr                            0x00318c40                                                   // rtx_base + 0x00000240
  #define wib_aes2_status                                (*(volatile unsigned int *)wib_aes2_status_adr)
  #define wib_mic_b0_adr                                 0x00318c44                                                   // rtx_base + 0x00000244
  #define wib_mic_b0                                     (*(volatile unsigned int *)wib_mic_b0_adr)
  #define wib_error_inj_adr                              0x00318c48                                                   // rtx_base + 0x00000248
  #define wib_error_inj                                  (*(volatile unsigned int *)wib_error_inj_adr)
  #define wib_wh_list7_lo_adr                            0x00318c4c                                                   // rtx_base + 0x0000024c
  #define wib_wh_list7_lo                                (*(volatile unsigned int *)wib_wh_list7_lo_adr)
  #define wib_wh_list7_hi_adr                            0x00318c50                                                   // rtx_base + 0x00000250
  #define wib_wh_list7_hi                                (*(volatile unsigned int *)wib_wh_list7_hi_adr)
  #define wib_wh_list8_lo_adr                            0x00318c54                                                   // rtx_base + 0x00000254
  #define wib_wh_list8_lo                                (*(volatile unsigned int *)wib_wh_list8_lo_adr)
  #define wib_wh_list8_hi_adr                            0x00318c58                                                   // rtx_base + 0x00000258
  #define wib_wh_list8_hi                                (*(volatile unsigned int *)wib_wh_list8_hi_adr)
  #define wib_wh_list9_lo_adr                            0x00318c5c                                                   // rtx_base + 0x0000025c
  #define wib_wh_list9_lo                                (*(volatile unsigned int *)wib_wh_list9_lo_adr)
  #define wib_wh_list9_hi_adr                            0x00318c60                                                   // rtx_base + 0x00000260
  #define wib_wh_list9_hi                                (*(volatile unsigned int *)wib_wh_list9_hi_adr)
  #define wib_wh_list10_lo_adr                           0x00318c64                                                   // rtx_base + 0x00000264
  #define wib_wh_list10_lo                               (*(volatile unsigned int *)wib_wh_list10_lo_adr)
  #define wib_wh_list10_hi_adr                           0x00318c68                                                   // rtx_base + 0x00000268
  #define wib_wh_list10_hi                               (*(volatile unsigned int *)wib_wh_list10_hi_adr)
  #define wib_wh_list11_lo_adr                           0x00318c6c                                                   // rtx_base + 0x0000026c
  #define wib_wh_list11_lo                               (*(volatile unsigned int *)wib_wh_list11_lo_adr)
  #define wib_wh_list11_hi_adr                           0x00318c70                                                   // rtx_base + 0x00000270
  #define wib_wh_list11_hi                               (*(volatile unsigned int *)wib_wh_list11_hi_adr)
  #define wib_wh_list12_lo_adr                           0x00318c74                                                   // rtx_base + 0x00000274
  #define wib_wh_list12_lo                               (*(volatile unsigned int *)wib_wh_list12_lo_adr)
  #define wib_wh_list12_hi_adr                           0x00318c78                                                   // rtx_base + 0x00000278
  #define wib_wh_list12_hi                               (*(volatile unsigned int *)wib_wh_list12_hi_adr)
  #define wib_wh_list13_lo_adr                           0x00318c7c                                                   // rtx_base + 0x0000027c
  #define wib_wh_list13_lo                               (*(volatile unsigned int *)wib_wh_list13_lo_adr)
  #define wib_wh_list13_hi_adr                           0x00318c80                                                   // rtx_base + 0x00000280
  #define wib_wh_list13_hi                               (*(volatile unsigned int *)wib_wh_list13_hi_adr)
  #define wib_wh_list14_lo_adr                           0x00318c84                                                   // rtx_base + 0x00000284
  #define wib_wh_list14_lo                               (*(volatile unsigned int *)wib_wh_list14_lo_adr)
  #define wib_wh_list14_hi_adr                           0x00318c88                                                   // rtx_base + 0x00000288
  #define wib_wh_list14_hi                               (*(volatile unsigned int *)wib_wh_list14_hi_adr)
  #define wib_wh_list15_lo_adr                           0x00318c8c                                                   // rtx_base + 0x0000028c
  #define wib_wh_list15_lo                               (*(volatile unsigned int *)wib_wh_list15_lo_adr)
  #define wib_wh_list15_hi_adr                           0x00318c90                                                   // rtx_base + 0x00000290
  #define wib_wh_list15_hi                               (*(volatile unsigned int *)wib_wh_list15_hi_adr)
  #define wib_wh_list16_lo_adr                           0x00318c94                                                   // rtx_base + 0x00000294
  #define wib_wh_list16_lo                               (*(volatile unsigned int *)wib_wh_list16_lo_adr)
  #define wib_wh_list16_hi_adr                           0x00318c98                                                   // rtx_base + 0x00000298
  #define wib_wh_list16_hi                               (*(volatile unsigned int *)wib_wh_list16_hi_adr)
  #define wib_wh_list17_lo_adr                           0x00318c9c                                                   // rtx_base + 0x0000029c
  #define wib_wh_list17_lo                               (*(volatile unsigned int *)wib_wh_list17_lo_adr)
  #define wib_wh_list17_hi_adr                           0x00318ca0                                                   // rtx_base + 0x000002a0
  #define wib_wh_list17_hi                               (*(volatile unsigned int *)wib_wh_list17_hi_adr)
  #define wib_wh_list18_lo_adr                           0x00318ca4                                                   // rtx_base + 0x000002a4
  #define wib_wh_list18_lo                               (*(volatile unsigned int *)wib_wh_list18_lo_adr)
  #define wib_wh_list18_hi_adr                           0x00318ca8                                                   // rtx_base + 0x000002a8
  #define wib_wh_list18_hi                               (*(volatile unsigned int *)wib_wh_list18_hi_adr)
  #define wib_wh_list19_lo_adr                           0x00318cac                                                   // rtx_base + 0x000002ac
  #define wib_wh_list19_lo                               (*(volatile unsigned int *)wib_wh_list19_lo_adr)
  #define wib_wh_list19_hi_adr                           0x00318cb0                                                   // rtx_base + 0x000002b0
  #define wib_wh_list19_hi                               (*(volatile unsigned int *)wib_wh_list19_hi_adr)
  #define wib_wh_list20_lo_adr                           0x00318cb4                                                   // rtx_base + 0x000002b4
  #define wib_wh_list20_lo                               (*(volatile unsigned int *)wib_wh_list20_lo_adr)
  #define wib_wh_list20_hi_adr                           0x00318cb8                                                   // rtx_base + 0x000002b8
  #define wib_wh_list20_hi                               (*(volatile unsigned int *)wib_wh_list20_hi_adr)
  #define wib_wh_list21_lo_adr                           0x00318cbc                                                   // rtx_base + 0x000002bc
  #define wib_wh_list21_lo                               (*(volatile unsigned int *)wib_wh_list21_lo_adr)
  #define wib_wh_list21_hi_adr                           0x00318cc0                                                   // rtx_base + 0x000002c0
  #define wib_wh_list21_hi                               (*(volatile unsigned int *)wib_wh_list21_hi_adr)
  #define wib_wh_list22_lo_adr                           0x00318cc4                                                   // rtx_base + 0x000002c4
  #define wib_wh_list22_lo                               (*(volatile unsigned int *)wib_wh_list22_lo_adr)
  #define wib_wh_list22_hi_adr                           0x00318cc8                                                   // rtx_base + 0x000002c8
  #define wib_wh_list22_hi                               (*(volatile unsigned int *)wib_wh_list22_hi_adr)
  #define wib_wh_list23_lo_adr                           0x00318ccc                                                   // rtx_base + 0x000002cc
  #define wib_wh_list23_lo                               (*(volatile unsigned int *)wib_wh_list23_lo_adr)
  #define wib_wh_list23_hi_adr                           0x00318cd0                                                   // rtx_base + 0x000002d0
  #define wib_wh_list23_hi                               (*(volatile unsigned int *)wib_wh_list23_hi_adr)
  #define wib_wh_list24_lo_adr                           0x00318cd4                                                   // rtx_base + 0x000002d4
  #define wib_wh_list24_lo                               (*(volatile unsigned int *)wib_wh_list24_lo_adr)
  #define wib_wh_list24_hi_adr                           0x00318cd8                                                   // rtx_base + 0x000002d8
  #define wib_wh_list24_hi                               (*(volatile unsigned int *)wib_wh_list24_hi_adr)
  #define wib_wh_list25_lo_adr                           0x00318cdc                                                   // rtx_base + 0x000002dc
  #define wib_wh_list25_lo                               (*(volatile unsigned int *)wib_wh_list25_lo_adr)
  #define wib_wh_list25_hi_adr                           0x00318ce0                                                   // rtx_base + 0x000002e0
  #define wib_wh_list25_hi                               (*(volatile unsigned int *)wib_wh_list25_hi_adr)
  #define wib_crc_filter_no_wl_0_adr                     0x00318ce4                                                   // rtx_base + 0x000002e4
  #define wib_crc_filter_no_wl_0                         (*(volatile unsigned int *)wib_crc_filter_no_wl_0_adr)
  #define wib_crc_filter_no_wl_1_adr                     0x00318ce8                                                   // rtx_base + 0x000002e8
  #define wib_crc_filter_no_wl_1                         (*(volatile unsigned int *)wib_crc_filter_no_wl_1_adr)
  #define wib_crc_filter_no_wl_2_adr                     0x00318cec                                                   // rtx_base + 0x000002ec
  #define wib_crc_filter_no_wl_2                         (*(volatile unsigned int *)wib_crc_filter_no_wl_2_adr)
  #define cipher_cfg_adr                                 0x00318cf0                                                   // rtx_base + 0x000002f0
  #define cipher_cfg                                     (*(volatile unsigned int *)cipher_cfg_adr)
  #define wib_new_pkt_type_ctrl_adr                      0x00318cf4                                                   // rtx_base + 0x000002f4
  #define wib_new_pkt_type_ctrl                          (*(volatile unsigned int *)wib_new_pkt_type_ctrl_adr)
  #define rtx_mem_start_adr                              0x00370000                                                   // base_rtx_fifo
  #define rtx_mem_start                                  (*(volatile unsigned int *)rtx_mem_start_adr)
  #define rtx_mem_start1_adr                             0x00370400                                                   // base_rtx_fifo + 0x00000400
  #define rtx_mem_start1                                 (*(volatile unsigned int *)rtx_mem_start1_adr)
  #define rtx_mem_start2_adr                             0x00370800                                                   // base_rtx_fifo + 0x00000800
  #define rtx_mem_start2                                 (*(volatile unsigned int *)rtx_mem_start2_adr)
  #define rtx_tx_buffer2_adr                             0x00370a00                                                   // rtx_mem_start2_adr + 0x00000200
  #define rtx_tx_buffer2                                 (*(volatile unsigned int *)rtx_tx_buffer2_adr)
  #define rtx_rx_buffer_adr                              0x00370c00                                                   // rtx_mem_start2_adr + 0x00000400
  #define rtx_rx_buffer                                  (*(volatile unsigned int *)rtx_rx_buffer_adr)
  #define rtx_mem_end_adr                                0x00370dfc                                                   // base_rtx_fifo + 0x00000dfc
  #define rtx_mem_end                                    (*(volatile unsigned int *)rtx_mem_end_adr)
  #define irk_list_mem_start_adr                         0x00371000                                                   // base_rtx_fifo + 0x00001000
  #define irk_list_mem_start                             (*(volatile unsigned int *)irk_list_mem_start_adr)
  #define irk_list_mem_end_adr                           0x00371140                                                   // base_rtx_fifo + 0x00001140
  #define irk_list_mem_end                               (*(volatile unsigned int *)irk_list_mem_end_adr)
  #define white_list_mem_start_adr                       0x00371200                                                   // base_rtx_fifo + 0x00001200
  #define white_list_mem_start                           (*(volatile unsigned int *)white_list_mem_start_adr)
  #define white_list_mem_end_adr                         0x003715fc                                                   // base_rtx_fifo + 0x000015fc
  #define white_list_mem_end                             (*(volatile unsigned int *)white_list_mem_end_adr)
  #define crc_mem_start_adr                              0x00371600                                                   // base_rtx_fifo + 0x00001600
  #define crc_mem_start                                  (*(volatile unsigned int *)crc_mem_start_adr)
  #define crc_mem_end_adr                                0x003717fc                                                   // base_rtx_fifo + 0x000017fc
  #define crc_mem_end                                    (*(volatile unsigned int *)crc_mem_end_adr)
  #define cipher_calc_mem_start_adr                      0x00371800                                                   // base_rtx_fifo + 0x00001800
  #define cipher_calc_mem_start                          (*(volatile unsigned int *)cipher_calc_mem_start_adr)
  #define cipher_calc_mem_end_adr                        0x00371bfc                                                   // base_rtx_fifo + 0x00001bfc
  #define cipher_calc_mem_end                            (*(volatile unsigned int *)cipher_calc_mem_end_adr)
  #define apu_base                                       0x00318d00                                                   // rtx_tail + 0x00000004
  #define apu_control_adr                                0x00318d00                                                   // apu_base + 0x00000000
  #define apu_control                                    (*(volatile unsigned int *)apu_control_adr)
  #define apu_mode_adr                                   0x00318d04                                                   // apu_base + 0x00000004
  #define apu_mode                                       (*(volatile unsigned int *)apu_mode_adr)
  #define apu_stuff_length_adr                           0x00318d08                                                   // apu_base + 0x00000008
  #define apu_stuff_length                               (*(volatile unsigned int *)apu_stuff_length_adr)
  #define sco_idx_ptr_adr                                0x00318d0c                                                   // apu_base + 0x0000000c
  #define sco_idx_ptr                                    (*(volatile unsigned int *)sco_idx_ptr_adr)
  #define sco0_rx_decim_adr                              0x00318d10                                                   // apu_base + 0x00000010
  #define sco0_rx_decim                                  (*(volatile unsigned int *)sco0_rx_decim_adr)
  #define sco0_rx_cvsd_adr0                              0x00318d14                                                   // apu_base + 0x00000014
  #define sco0_rx_cvsd0                                  (*(volatile unsigned int *)sco0_rx_cvsd_adr0)
  #define sco0_rx_cvsd_adr1                              0x00318d18                                                   // apu_base + 0x00000018
  #define sco0_rx_cvsd1                                  (*(volatile unsigned int *)sco0_rx_cvsd_adr1)
  #define sco0_tx_intrp_adr                              0x00318d1c                                                   // apu_base + 0x0000001c
  #define sco0_tx_intrp                                  (*(volatile unsigned int *)sco0_tx_intrp_adr)
  #define sco0_tx_cvsd_adr0                              0x00318d20                                                   // apu_base + 0x00000020
  #define sco0_tx_cvsd0                                  (*(volatile unsigned int *)sco0_tx_cvsd_adr0)
  #define sco0_tx_cvsd_adr1                              0x00318d24                                                   // apu_base + 0x00000024
  #define sco0_tx_cvsd1                                  (*(volatile unsigned int *)sco0_tx_cvsd_adr1)
  #define sco1_rx_decim_adr                              0x00318d28                                                   // apu_base + 0x00000028
  #define sco1_rx_decim                                  (*(volatile unsigned int *)sco1_rx_decim_adr)
  #define sco1_rx_cvsd_adr0                              0x00318d2c                                                   // apu_base + 0x0000002c
  #define sco1_rx_cvsd0                                  (*(volatile unsigned int *)sco1_rx_cvsd_adr0)
  #define sco1_rx_cvsd_adr1                              0x00318d30                                                   // apu_base + 0x00000030
  #define sco1_rx_cvsd1                                  (*(volatile unsigned int *)sco1_rx_cvsd_adr1)
  #define sco1_tx_intrp_adr                              0x00318d34                                                   // apu_base + 0x00000034
  #define sco1_tx_intrp                                  (*(volatile unsigned int *)sco1_tx_intrp_adr)
  #define sco1_tx_cvsd_adr0                              0x00318d38                                                   // apu_base + 0x00000038
  #define sco1_tx_cvsd0                                  (*(volatile unsigned int *)sco1_tx_cvsd_adr0)
  #define sco1_tx_cvsd_adr1                              0x00318d3c                                                   // apu_base + 0x0000003c
  #define sco1_tx_cvsd1                                  (*(volatile unsigned int *)sco1_tx_cvsd_adr1)
  #define sco2_rx_decim_adr                              0x00318d40                                                   // apu_base + 0x00000040
  #define sco2_rx_decim                                  (*(volatile unsigned int *)sco2_rx_decim_adr)
  #define sco2_rx_cvsd_adr0                              0x00318d44                                                   // apu_base + 0x00000044
  #define sco2_rx_cvsd0                                  (*(volatile unsigned int *)sco2_rx_cvsd_adr0)
  #define sco2_rx_cvsd_adr1                              0x00318d48                                                   // apu_base + 0x00000048
  #define sco2_rx_cvsd1                                  (*(volatile unsigned int *)sco2_rx_cvsd_adr1)
  #define sco2_tx_intrp_adr                              0x00318d4c                                                   // apu_base + 0x0000004c
  #define sco2_tx_intrp                                  (*(volatile unsigned int *)sco2_tx_intrp_adr)
  #define sco2_tx_cvsd_adr0                              0x00318d50                                                   // apu_base + 0x00000050
  #define sco2_tx_cvsd0                                  (*(volatile unsigned int *)sco2_tx_cvsd_adr0)
  #define sco2_tx_cvsd_adr1                              0x00318d54                                                   // apu_base + 0x00000054
  #define sco2_tx_cvsd1                                  (*(volatile unsigned int *)sco2_tx_cvsd_adr1)
  #define apu_ram_base_adr                               0x00318d58                                                   // apu_base + 0x00000058
  #define apu_ram_base                                   (*(volatile unsigned int *)apu_ram_base_adr)
  #define apu_fifo_base_adr                              0x00318e78                                                   // apu_base + 0x00000178
  #define apu_fifo_base                                  (*(volatile unsigned int *)apu_fifo_base_adr)
  #define apu_fifo_rst_adr                               0x003192b0                                                   // apu_base + 0x000005b0
  #define apu_fifo_rst                                   (*(volatile unsigned int *)apu_fifo_rst_adr)
  #define apu_wlin_stat_adr                              0x003192b4                                                   // apu_base + 0x000005b4
  #define apu_wlin_stat                                  (*(volatile unsigned int *)apu_wlin_stat_adr)
  #define apu_wlin_trig_adr                              0x003192b8                                                   // apu_base + 0x000005b8
  #define apu_wlin_trig                                  (*(volatile unsigned int *)apu_wlin_trig_adr)
  #define plc_base                                       0x00319300                                                   // apu_tail + 0x00000004
  #define plc_enable_adr                                 0x00319300                                                   // plc_base + 0x00000000
  #define plc_enable                                     (*(volatile unsigned int *)plc_enable_adr)
  #define plc_mode_adr                                   0x00319304                                                   // plc_base + 0x00000004
  #define plc_mode                                       (*(volatile unsigned int *)plc_mode_adr)
  #define plc_config_adr                                 0x00319308                                                   // plc_base + 0x00000008
  #define plc_config                                     (*(volatile unsigned int *)plc_config_adr)
  #define plc_data_adr                                   0x0031930c                                                   // plc_base + 0x0000000c
  #define plc_data                                       (*(volatile unsigned int *)plc_data_adr)
  #define plc_status_adr                                 0x00319310                                                   // plc_base + 0x00000010
  #define plc_status                                     (*(volatile unsigned int *)plc_status_adr)
  #define plc_ch_b_base_addr_adr                         0x00319340                                                   // plc_base + 0x00000040
  #define plc_ch_b_base_addr                             (*(volatile unsigned int *)plc_ch_b_base_addr_adr)
  #define nfbc_base                                      0x00319404                                                   // plc_tail + 0x00000004
  #define nfbc_control_adr                               0x00319404                                                   // nfbc_base + 0x00000000
  #define nfbc_control                                   (*(volatile unsigned int *)nfbc_control_adr)
  #define sco0_tx_nfbc_adr0                              0x00319408                                                   // nfbc_base + 0x00000004
  #define sco0_tx_nfbc0                                  (*(volatile unsigned int *)sco0_tx_nfbc_adr0)
  #define sco1_tx_nfbc_adr0                              0x0031940c                                                   // nfbc_base + 0x00000008
  #define sco1_tx_nfbc0                                  (*(volatile unsigned int *)sco1_tx_nfbc_adr0)
  #define sco2_tx_nfbc_adr0                              0x00319410                                                   // nfbc_base + 0x0000000c
  #define sco2_tx_nfbc0                                  (*(volatile unsigned int *)sco2_tx_nfbc_adr0)
  #define sco0_tx_nfbc_adr1                              0x00319414                                                   // nfbc_base + 0x00000010
  #define sco0_tx_nfbc1                                  (*(volatile unsigned int *)sco0_tx_nfbc_adr1)
  #define sco1_tx_nfbc_adr1                              0x00319418                                                   // nfbc_base + 0x00000014
  #define sco1_tx_nfbc1                                  (*(volatile unsigned int *)sco1_tx_nfbc_adr1)
  #define sco2_tx_nfbc_adr1                              0x0031941c                                                   // nfbc_base + 0x00000018
  #define sco2_tx_nfbc1                                  (*(volatile unsigned int *)sco2_tx_nfbc_adr1)
  #define sco0_tx_nfbc_adr2                              0x00319420                                                   // nfbc_base + 0x0000001c
  #define sco0_tx_nfbc2                                  (*(volatile unsigned int *)sco0_tx_nfbc_adr2)
  #define sco1_tx_nfbc_adr2                              0x00319424                                                   // nfbc_base + 0x00000020
  #define sco1_tx_nfbc2                                  (*(volatile unsigned int *)sco1_tx_nfbc_adr2)
  #define sco2_tx_nfbc_adr2                              0x00319428                                                   // nfbc_base + 0x00000024
  #define sco2_tx_nfbc2                                  (*(volatile unsigned int *)sco2_tx_nfbc_adr2)
  #define sri_bk0_offset0_adr                            0x0031e000                                                   // sri_bk_adr_base + 0x00000000
  #define sri_bk0_offset0                                (*(volatile unsigned int *)sri_bk0_offset0_adr)
  #define sri_bk0_offset1_adr                            0x0031e004                                                   // sri_bk_adr_base + 0x00000004
  #define sri_bk0_offset1                                (*(volatile unsigned int *)sri_bk0_offset1_adr)
  #define sri_bk0_offset2_adr                            0x0031e008                                                   // sri_bk_adr_base + 0x00000008
  #define sri_bk0_offset2                                (*(volatile unsigned int *)sri_bk0_offset2_adr)
  #define sri_bk0_offset3_adr                            0x0031e00c                                                   // sri_bk_adr_base + 0x0000000c
  #define sri_bk0_offset3                                (*(volatile unsigned int *)sri_bk0_offset3_adr)
  #define sri_bk0_offset4_adr                            0x0031e010                                                   // sri_bk_adr_base + 0x00000010
  #define sri_bk0_offset4                                (*(volatile unsigned int *)sri_bk0_offset4_adr)
  #define sri_bk0_offset5_adr                            0x0031e014                                                   // sri_bk_adr_base + 0x00000014
  #define sri_bk0_offset5                                (*(volatile unsigned int *)sri_bk0_offset5_adr)
  #define sri_bk1_offset0_adr                            0x0031e020                                                   // sri_bk_adr_base + 0x00000020
  #define sri_bk1_offset0                                (*(volatile unsigned int *)sri_bk1_offset0_adr)
  #define sri_bk1_offset1_adr                            0x0031e024                                                   // sri_bk_adr_base + 0x00000024
  #define sri_bk1_offset1                                (*(volatile unsigned int *)sri_bk1_offset1_adr)
  #define sri_bk1_offset2_adr                            0x0031e028                                                   // sri_bk_adr_base + 0x00000028
  #define sri_bk1_offset2                                (*(volatile unsigned int *)sri_bk1_offset2_adr)
  #define sri_bk1_offset3_adr                            0x0031e02c                                                   // sri_bk_adr_base + 0x0000002c
  #define sri_bk1_offset3                                (*(volatile unsigned int *)sri_bk1_offset3_adr)
  #define sri_bk1_offset4_adr                            0x0031e030                                                   // sri_bk_adr_base + 0x00000030
  #define sri_bk1_offset4                                (*(volatile unsigned int *)sri_bk1_offset4_adr)
  #define sri_bk1_offset5_adr                            0x0031e034                                                   // sri_bk_adr_base + 0x00000034
  #define sri_bk1_offset5                                (*(volatile unsigned int *)sri_bk1_offset5_adr)
  #define sri_bk2_offset0_adr                            0x0031e040                                                   // sri_bk_adr_base + 0x00000040
  #define sri_bk2_offset0                                (*(volatile unsigned int *)sri_bk2_offset0_adr)
  #define sri_bk2_offset1_adr                            0x0031e044                                                   // sri_bk_adr_base + 0x00000044
  #define sri_bk2_offset1                                (*(volatile unsigned int *)sri_bk2_offset1_adr)
  #define sri_bk2_offset2_adr                            0x0031e048                                                   // sri_bk_adr_base + 0x00000048
  #define sri_bk2_offset2                                (*(volatile unsigned int *)sri_bk2_offset2_adr)
  #define sri_bk2_offset3_adr                            0x0031e04c                                                   // sri_bk_adr_base + 0x0000004c
  #define sri_bk2_offset3                                (*(volatile unsigned int *)sri_bk2_offset3_adr)
  #define sri_bk2_offset4_adr                            0x0031e050                                                   // sri_bk_adr_base + 0x00000050
  #define sri_bk2_offset4                                (*(volatile unsigned int *)sri_bk2_offset4_adr)
  #define sri_bk2_offset5_adr                            0x0031e054                                                   // sri_bk_adr_base + 0x00000054
  #define sri_bk2_offset5                                (*(volatile unsigned int *)sri_bk2_offset5_adr)
  #define sri_bk3_offset0_adr                            0x0031e060                                                   // sri_bk_adr_base + 0x00000060
  #define sri_bk3_offset0                                (*(volatile unsigned int *)sri_bk3_offset0_adr)
  #define sri_bk3_offset1_adr                            0x0031e064                                                   // sri_bk_adr_base + 0x00000064
  #define sri_bk3_offset1                                (*(volatile unsigned int *)sri_bk3_offset1_adr)
  #define sri_bk3_offset2_adr                            0x0031e068                                                   // sri_bk_adr_base + 0x00000068
  #define sri_bk3_offset2                                (*(volatile unsigned int *)sri_bk3_offset2_adr)
  #define sri_bk3_offset3_adr                            0x0031e06c                                                   // sri_bk_adr_base + 0x0000006c
  #define sri_bk3_offset3                                (*(volatile unsigned int *)sri_bk3_offset3_adr)
  #define sri_bk3_offset4_adr                            0x0031e070                                                   // sri_bk_adr_base + 0x00000070
  #define sri_bk3_offset4                                (*(volatile unsigned int *)sri_bk3_offset4_adr)
  #define sri_bk3_offset5_adr                            0x0031e074                                                   // sri_bk_adr_base + 0x00000074
  #define sri_bk3_offset5                                (*(volatile unsigned int *)sri_bk3_offset5_adr)
  #define dc_sri_schp0_sel_adr                           0x0031e078                                                   // sri_bk_adr_base + 0x00000078
  #define dc_sri_schp0_sel                               (*(volatile unsigned int *)dc_sri_schp0_sel_adr)
  #define dc_sri_schp1_sel_adr                           0x0031e07c                                                   // sri_bk_adr_base + 0x0000007c
  #define dc_sri_schp1_sel                               (*(volatile unsigned int *)dc_sri_schp1_sel_adr)
  #define dc_sri_schp2_sel_adr                           0x0031e080                                                   // sri_bk_adr_base + 0x00000080
  #define dc_sri_schp2_sel                               (*(volatile unsigned int *)dc_sri_schp2_sel_adr)
  #define dc_sri_schp3_sel_adr                           0x0031e084                                                   // sri_bk_adr_base + 0x00000084
  #define dc_sri_schp3_sel                               (*(volatile unsigned int *)dc_sri_schp3_sel_adr)
  #define bt_sch_hclk_accl_adr                           0x0031e088                                                   // sri_bk_adr_base + 0x00000088
  #define bt_sch_hclk_accl                               (*(volatile unsigned int *)bt_sch_hclk_accl_adr)
  #define sch_start_adr                                  0x0031e800                                                   // sri_bk_adr_base + 0x00000800
  #define sch_start                                      (*(volatile unsigned int *)sch_start_adr)
  #define sch_end_adr                                    0x0031f000                                                   // sri_bk_adr_base + 0x00001000
  #define sch_end                                        (*(volatile unsigned int *)sch_end_adr)
  #define phy_int_base                                   0x00314000                                                   // bpl_hclk_base_adr + 0x00000000 * 0x00000004
  #define phy_status_adr                                 0x00314004                                                   // phy_int_base + 0x00000001 * 0x00000004
  #define phy_status                                     (*(volatile unsigned int *)phy_status_adr)
  #define sr_status_adr0                                 0x0031400c                                                   // phy_int_base + 0x00000003 * 0x00000004
  #define sr_status0                                     (*(volatile unsigned int *)sr_status_adr0)
  #define eci_status_adr                                 0x00314014                                                   // phy_int_base + 0x00000005 * 0x00000004
  #define eci_status                                     (*(volatile unsigned int *)eci_status_adr)
  #define phy_other_base                                 0x00314018                                                   // phy_int_tail + 0x00000001 * 0x00000004
  #define rtx_dma_ctl_adr                                0x00314018                                                   // phy_other_base + 0x00000000
  #define rtx_dma_ctl                                    (*(volatile unsigned int *)rtx_dma_ctl_adr)
  #define eci_status_b_adr                               0x0031401c                                                   // phy_other_base + 0x00000001 * 0x00000004
  #define eci_status_b                                   (*(volatile unsigned int *)eci_status_b_adr)
  #define seci_fifo_data_adr                             0x0031421c                                                   // phy_other_base + 0x00000081 * 0x00000004
  #define seci_fifo_data                                 (*(volatile unsigned int *)seci_fifo_data_adr)
  #define seci_uart_status_adr                           0x00314220                                                   // phy_other_base + 0x00000082 * 0x00000004
  #define seci_uart_status                               (*(volatile unsigned int *)seci_uart_status_adr)
  #define seci_uart_status_int_en_adr                    0x00314224                                                   // phy_other_base + 0x00000083 * 0x00000004
  #define seci_uart_status_int_en                        (*(volatile unsigned int *)seci_uart_status_int_en_adr)
  #define seci_esc_adr                                   0x00314228                                                   // phy_other_base + 0x00000084 * 0x00000004
  #define seci_esc                                       (*(volatile unsigned int *)seci_esc_adr)
  #define seci_lsr_adr                                   0x0031422c                                                   // phy_other_base + 0x00000085 * 0x00000004
  #define seci_lsr                                       (*(volatile unsigned int *)seci_lsr_adr)
  #define seci_msr_adr                                   0x00314230                                                   // phy_other_base + 0x00000086 * 0x00000004
  #define seci_msr                                       (*(volatile unsigned int *)seci_msr_adr)
  #define seci_dhbr_adr                                  0x00314234                                                   // phy_other_base + 0x00000087 * 0x00000004
  #define seci_dhbr                                      (*(volatile unsigned int *)seci_dhbr_adr)
  #define seci_dlbr_adr                                  0x00314238                                                   // phy_other_base + 0x00000088 * 0x00000004
  #define seci_dlbr                                      (*(volatile unsigned int *)seci_dlbr_adr)
  #define seci_fcr_adr                                   0x0031423c                                                   // phy_other_base + 0x00000089 * 0x00000004
  #define seci_fcr                                       (*(volatile unsigned int *)seci_fcr_adr)
  #define seci_mcr_adr                                   0x00314240                                                   // phy_other_base + 0x0000008a * 0x00000004
  #define seci_mcr                                       (*(volatile unsigned int *)seci_mcr_adr)
  #define seci_lcr_adr                                   0x00314244                                                   // phy_other_base + 0x0000008b * 0x00000004
  #define seci_lcr                                       (*(volatile unsigned int *)seci_lcr_adr)
  #define seci_rfl_adr                                   0x00314248                                                   // phy_other_base + 0x0000008c * 0x00000004
  #define seci_rfl                                       (*(volatile unsigned int *)seci_rfl_adr)
  #define seci_tfl_adr                                   0x0031424c                                                   // phy_other_base + 0x0000008d * 0x00000004
  #define seci_tfl                                       (*(volatile unsigned int *)seci_tfl_adr)
  #define seci_rfc_adr                                   0x00314250                                                   // phy_other_base + 0x0000008e * 0x00000004
  #define seci_rfc                                       (*(volatile unsigned int *)seci_rfc_adr)
  #define seci_txdata_lo_adr                             0x00314254                                                   // phy_other_base + 0x0000008f * 0x00000004
  #define seci_txdata_lo                                 (*(volatile unsigned int *)seci_txdata_lo_adr)
  #define seci_txdata_hi_adr                             0x00314258                                                   // phy_other_base + 0x00000090 * 0x00000004
  #define seci_txdata_hi                                 (*(volatile unsigned int *)seci_txdata_hi_adr)
  #define seci_tag_adr                                   0x0031425c                                                   // phy_other_base + 0x00000091 * 0x00000004
  #define seci_tag                                       (*(volatile unsigned int *)seci_tag_adr)
  #define seci_rxdata_lo_adr                             0x00314260                                                   // phy_other_base + 0x00000092 * 0x00000004
  #define seci_rxdata_lo                                 (*(volatile unsigned int *)seci_rxdata_lo_adr)
  #define seci_rxdata_hi_adr                             0x00314264                                                   // phy_other_base + 0x00000093 * 0x00000004
  #define seci_rxdata_hi                                 (*(volatile unsigned int *)seci_rxdata_hi_adr)
  #define seci_update_rx_nib_adr                         0x00314268                                                   // phy_other_base + 0x00000094 * 0x00000004
  #define seci_update_rx_nib                             (*(volatile unsigned int *)seci_update_rx_nib_adr)
  #define seci_rxint_mask_adr                            0x0031426c                                                   // phy_other_base + 0x00000095 * 0x00000004
  #define seci_rxint_mask                                (*(volatile unsigned int *)seci_rxint_mask_adr)
  #define seci_status_adr                                0x00314270                                                   // phy_other_base + 0x00000096 * 0x00000004
  #define seci_status                                    (*(volatile unsigned int *)seci_status_adr)
  #define otp_control_reg_adr                            0x00340000                                                   // otp_adr_base + 0x00000000
  #define otp_control_reg                                (*(volatile unsigned int *)otp_control_reg_adr)
  #define otp_control_reg_hi_adr                         0x00340004                                                   // otp_adr_base + 0x00000004
  #define otp_control_reg_hi                             (*(volatile unsigned int *)otp_control_reg_hi_adr)
  #define otp_address_reg_adr                            0x00340008                                                   // otp_adr_base + 0x00000008
  #define otp_address_reg                                (*(volatile unsigned int *)otp_address_reg_adr)
  #define otp_bitsel_reg_adr                             0x0034000c                                                   // otp_adr_base + 0x0000000c
  #define otp_bitsel_reg                                 (*(volatile unsigned int *)otp_bitsel_reg_adr)
  #define otp_wr_data_reg_adr                            0x00340010                                                   // otp_adr_base + 0x00000010
  #define otp_wr_data_reg                                (*(volatile unsigned int *)otp_wr_data_reg_adr)
  #define otp_rd_data_reg_adr                            0x00340014                                                   // otp_adr_base + 0x00000014
  #define otp_rd_data_reg                                (*(volatile unsigned int *)otp_rd_data_reg_adr)
  #define otp_status_reg_adr                             0x00340018                                                   // otp_adr_base + 0x00000018
  #define otp_status_reg                                 (*(volatile unsigned int *)otp_status_reg_adr)
  #define otp_cpu_mode_reg_adr                           0x0034001c                                                   // otp_adr_base + 0x0000001c
  #define otp_cpu_mode_reg                               (*(volatile unsigned int *)otp_cpu_mode_reg_adr)
  #define vco_cal_cal_adr                                0x00423400                                                   // vco_adr_base + 0x00000000
  #define vco_cal_cal                                    (*(volatile unsigned int *)vco_cal_cal_adr)
  #define vco_cal_start_del_adr                          0x00423404                                                   // vco_adr_base + 0x00000004
  #define vco_cal_start_del                              (*(volatile unsigned int *)vco_cal_start_del_adr)
  #define vco_cal_cal_count_adr                          0x00423408                                                   // vco_adr_base + 0x00000008
  #define vco_cal_cal_count                              (*(volatile unsigned int *)vco_cal_cal_count_adr)
  #define vco_cal_ref_timeout_adr                        0x0042340c                                                   // vco_adr_base + 0x0000000c
  #define vco_cal_ref_timeout                            (*(volatile unsigned int *)vco_cal_ref_timeout_adr)
  #define vco_cal_pause_timeout_adr                      0x00423410                                                   // vco_adr_base + 0x00000010
  #define vco_cal_pause_timeout                          (*(volatile unsigned int *)vco_cal_pause_timeout_adr)
  #define vco_cal_caps_sel_adr                           0x00423414                                                   // vco_adr_base + 0x00000014
  #define vco_cal_caps_sel                               (*(volatile unsigned int *)vco_cal_caps_sel_adr)
  #define vco_cal_force_caps_adr                         0x00423418                                                   // vco_adr_base + 0x00000018
  #define vco_cal_force_caps                             (*(volatile unsigned int *)vco_cal_force_caps_adr)
  #define vco_cal_force_caps_val_adr                     0x0042341c                                                   // vco_adr_base + 0x0000001c
  #define vco_cal_force_caps_val                         (*(volatile unsigned int *)vco_cal_force_caps_val_adr)
  #define vco_cal_force_caps_val_lsbs_adr                0x00423420                                                   // vco_adr_base + 0x00000020
  #define vco_cal_force_caps_val_lsbs                    (*(volatile unsigned int *)vco_cal_force_caps_val_lsbs_adr)
  #define vco_cal_hold_vctrl_ovr_adr                     0x00423424                                                   // vco_adr_base + 0x00000024
  #define vco_cal_hold_vctrl_ovr                         (*(volatile unsigned int *)vco_cal_hold_vctrl_ovr_adr)
  #define vco_cal_clk_gate_ovr_adr                       0x00423428                                                   // vco_adr_base + 0x00000028
  #define vco_cal_clk_gate_ovr                           (*(volatile unsigned int *)vco_cal_clk_gate_ovr_adr)
  #define vco_cal_caps_lim_h_adr                         0x0042342c                                                   // vco_adr_base + 0x0000002c
  #define vco_cal_caps_lim_h                             (*(volatile unsigned int *)vco_cal_caps_lim_h_adr)
  #define vco_cal_caps_lim_l_adr                         0x00423430                                                   // vco_adr_base + 0x00000030
  #define vco_cal_caps_lim_l                             (*(volatile unsigned int *)vco_cal_caps_lim_l_adr)
  #define vco_cal_pmu_mode_adr                           0x00423434                                                   // vco_adr_base + 0x00000034
  #define vco_cal_pmu_mode                               (*(volatile unsigned int *)vco_cal_pmu_mode_adr)
  #define vco_cal_rerun_pmu_cnt_adr                      0x00423438                                                   // vco_adr_base + 0x00000038
  #define vco_cal_rerun_pmu_cnt                          (*(volatile unsigned int *)vco_cal_rerun_pmu_cnt_adr)
  #define vco_cal_pmu_done_count_adr                     0x0042343c                                                   // vco_adr_base + 0x0000003c
  #define vco_cal_pmu_done_count                         (*(volatile unsigned int *)vco_cal_pmu_done_count_adr)
  #define vco_cal_vco_counter_adr                        0x00423440                                                   // vco_adr_base + 0x00000040
  #define vco_cal_vco_counter                            (*(volatile unsigned int *)vco_cal_vco_counter_adr)
  #define vco_cal_monitor_adr                            0x00423444                                                   // vco_adr_base + 0x00000044
  #define vco_cal_monitor                                (*(volatile unsigned int *)vco_cal_monitor_adr)
  #define vco_cal_dpll_dco_pwrdn_adr                     0x00423448                                                   // vco_adr_base + 0x00000048
  #define vco_cal_dpll_dco_pwrdn                         (*(volatile unsigned int *)vco_cal_dpll_dco_pwrdn_adr)
  #define iq_config_adr                                  0x00423500                                                   // iq_adr_base + 0x00000000
  #define iq_config                                      (*(volatile unsigned int *)iq_config_adr)
  #define iq_upi_data_adr                                0x00423504                                                   // iq_adr_base + 0x00000004
  #define iq_upi_data                                    (*(volatile unsigned int *)iq_upi_data_adr)
  #define iq_stb_ped_adr                                 0x00423508                                                   // iq_adr_base + 0x00000008
  #define iq_stb_ped                                     (*(volatile unsigned int *)iq_stb_ped_adr)
  #define iq_out_length_adr                              0x0042350c                                                   // iq_adr_base + 0x0000000c
  #define iq_out_length                                  (*(volatile unsigned int *)iq_out_length_adr)
  #define fm_ra_bypass_adr                               0x00423510                                                   // iq_adr_base + 0x00000010
  #define fm_ra_bypass                                   (*(volatile unsigned int *)fm_ra_bypass_adr)
  #define fm_ra_cont0_adr                                0x00423514                                                   // iq_adr_base + 0x00000014
  #define fm_ra_cont0                                    (*(volatile unsigned int *)fm_ra_cont0_adr)
  #define fm_ra_cont1_adr                                0x00423518                                                   // iq_adr_base + 0x00000018
  #define fm_ra_cont1                                    (*(volatile unsigned int *)fm_ra_cont1_adr)
  #define iq_clk_sel_adr                                 0x0042351c                                                   // iq_adr_base + 0x0000001c
  #define iq_clk_sel                                     (*(volatile unsigned int *)iq_clk_sel_adr)
  #define ra_clk_in_sel_adr                              0x00423520                                                   // iq_adr_base + 0x00000020
  #define ra_clk_in_sel                                  (*(volatile unsigned int *)ra_clk_in_sel_adr)
  #define rfdsp_muxout_ctl_adr                           0x00423524                                                   // iq_adr_base + 0x00000024
  #define rfdsp_muxout_ctl                               (*(volatile unsigned int *)rfdsp_muxout_ctl_adr)
  #define fm_rfclk_outen_adr                             0x00423528                                                   // iq_adr_base + 0x00000028
  #define fm_rfclk_outen                                 (*(volatile unsigned int *)fm_rfclk_outen_adr)
  #define fm_clk_sel_adr                                 0x0042352c                                                   // iq_adr_base + 0x0000002c
  #define fm_clk_sel                                     (*(volatile unsigned int *)fm_clk_sel_adr)
  #define cr_ef_func_adr                                 0x00404000                                                   // base_ef_regs + 0x00000000
  #define cr_ef_func                                     (*(volatile unsigned int *)cr_ef_func_adr)
  #define cr_ef_status_adr                               0x00404004                                                   // base_ef_regs + 0x00000004
  #define cr_ef_status                                   (*(volatile unsigned int *)cr_ef_status_adr)
  #define cr_ef_clk_adr                                  0x00404008                                                   // base_ef_regs + 0x00000008
  #define cr_ef_clk                                      (*(volatile unsigned int *)cr_ef_clk_adr)
  #define cr_ef_redu0_adr                                0x0040400c                                                   // base_ef_regs + 0x0000000c
  #define cr_ef_redu0                                    (*(volatile unsigned int *)cr_ef_redu0_adr)
  #define cr_ef_redu1_adr                                0x00404010                                                   // base_ef_regs + 0x00000010
  #define cr_ef_redu1                                    (*(volatile unsigned int *)cr_ef_redu1_adr)
  #define cr_ef_erase_adr                                0x00404014                                                   // base_ef_regs + 0x00000014
  #define cr_ef_erase                                    (*(volatile unsigned int *)cr_ef_erase_adr)
  #define cr_ef_prog_addr_adr                            0x00404018                                                   // base_ef_regs + 0x00000018
  #define cr_ef_prog_addr                                (*(volatile unsigned int *)cr_ef_prog_addr_adr)
  #define cr_ef_prog_data_adr                            0x0040401c                                                   // base_ef_regs + 0x0000001c
  #define cr_ef_prog_data                                (*(volatile unsigned int *)cr_ef_prog_data_adr)
  #define cr_ef_prog_status_adr                          0x00404020                                                   // base_ef_regs + 0x00000020
  #define cr_ef_prog_status                              (*(volatile unsigned int *)cr_ef_prog_status_adr)
  #define cr_ef_time0_adr                                0x00404024                                                   // base_ef_regs + 0x00000024
  #define cr_ef_time0                                    (*(volatile unsigned int *)cr_ef_time0_adr)
  #define cr_ef_time1_adr                                0x00404028                                                   // base_ef_regs + 0x00000028
  #define cr_ef_time1                                    (*(volatile unsigned int *)cr_ef_time1_adr)
  #define cr_ef_time2_adr                                0x0040402c                                                   // base_ef_regs + 0x0000002c
  #define cr_ef_time2                                    (*(volatile unsigned int *)cr_ef_time2_adr)
  #define cr_ef_time3_adr                                0x00404030                                                   // base_ef_regs + 0x00000030
  #define cr_ef_time3                                    (*(volatile unsigned int *)cr_ef_time3_adr)
  #define cr_ef_time4_adr                                0x00404034                                                   // base_ef_regs + 0x00000034
  #define cr_ef_time4                                    (*(volatile unsigned int *)cr_ef_time4_adr)
  #define cr_ef_time5_adr                                0x00404038                                                   // base_ef_regs + 0x00000038
  #define cr_ef_time5                                    (*(volatile unsigned int *)cr_ef_time5_adr)
  #define cr_ef_time6_adr                                0x0040403c                                                   // base_ef_regs + 0x0000003c
  #define cr_ef_time6                                    (*(volatile unsigned int *)cr_ef_time6_adr)
  #define cr_ef_time7_adr                                0x00404040                                                   // base_ef_regs + 0x00000040
  #define cr_ef_time7                                    (*(volatile unsigned int *)cr_ef_time7_adr)
  #define cr_ef_time8_adr                                0x00404044                                                   // base_ef_regs + 0x00000044
  #define cr_ef_time8                                    (*(volatile unsigned int *)cr_ef_time8_adr)
  #define cr_ef_smep_func_adr                            0x00404048                                                   // base_ef_regs + 0x00000048
  #define cr_ef_smep_func                                (*(volatile unsigned int *)cr_ef_smep_func_adr)
  #define cr_ef_smep_op0_adr                             0x0040404c                                                   // base_ef_regs + 0x0000004c
  #define cr_ef_smep_op0                                 (*(volatile unsigned int *)cr_ef_smep_op0_adr)
  #define cr_ef_smep_op1_adr                             0x00404050                                                   // base_ef_regs + 0x00000050
  #define cr_ef_smep_op1                                 (*(volatile unsigned int *)cr_ef_smep_op1_adr)
  #define cr_ef_smep_op2_adr                             0x00404054                                                   // base_ef_regs + 0x00000054
  #define cr_ef_smep_op2                                 (*(volatile unsigned int *)cr_ef_smep_op2_adr)
  #define cr_ef_smep_op3_adr                             0x00404058                                                   // base_ef_regs + 0x00000058
  #define cr_ef_smep_op3                                 (*(volatile unsigned int *)cr_ef_smep_op3_adr)
  #define cr_ef_smep_op4_adr                             0x0040405c                                                   // base_ef_regs + 0x0000005c
  #define cr_ef_smep_op4                                 (*(volatile unsigned int *)cr_ef_smep_op4_adr)
  #define cr_ef_smep_op5_adr                             0x00404060                                                   // base_ef_regs + 0x00000060
  #define cr_ef_smep_op5                                 (*(volatile unsigned int *)cr_ef_smep_op5_adr)
  #define cr_ef_smep_op6_adr                             0x00404064                                                   // base_ef_regs + 0x00000064
  #define cr_ef_smep_op6                                 (*(volatile unsigned int *)cr_ef_smep_op6_adr)
  #define modem_idcode_adr                               0x00410404                                                   // modem_adr_base + 0x00000001 * 0x00000004
  #define modem_idcode                                   (*(volatile unsigned int *)modem_idcode_adr)
  #define modem_adr_shifted_base                         0x00410408                                                   // modem_idcode_adr + 0x00000001 * 0x00000004
  #define modem_adr_bank1_base                           0x00410400                                                   // modem_adr_new_base + 0x00000400
  #define modem_adr_bank2_base                           0x00410500                                                   // modem_adr_new_base + 0x00000500
  #define modem_adr_bank3_base                           0x00410600                                                   // modem_adr_new_base + 0x00000600
  #define modem_adr_bank4_base                           0x00410700                                                   // modem_adr_new_base + 0x00000700
  #define modem_adr_bank5_base                           0x00410000                                                   // modem_adr_new_base
  #define modem_adr_bank6_base                           0x00410100                                                   // modem_adr_new_base + 0x00000100
  #define modem_adr_bank7_base                           0x00410200                                                   // modem_adr_new_base + 0x00000200
  #define modem_adr_bank8_base                           0x00410300                                                   // modem_adr_new_base + 0x00000300
  #define gainLUT0_adr                                   0x00410408                                                   // modem_adr_bank1_base + 0x00000002 * 0x00000004
  #define gainLUT0                                       (*(volatile unsigned int *)gainLUT0_adr)
  #define gainLUT1_adr                                   0x0041040c                                                   // modem_adr_bank1_base + 0x00000003 * 0x00000004
  #define gainLUT1                                       (*(volatile unsigned int *)gainLUT1_adr)
  #define gainLUT2_adr                                   0x00410410                                                   // modem_adr_bank1_base + 0x00000004 * 0x00000004
  #define gainLUT2                                       (*(volatile unsigned int *)gainLUT2_adr)
  #define gainLUT3_adr                                   0x00410414                                                   // modem_adr_bank1_base + 0x00000005 * 0x00000004
  #define gainLUT3                                       (*(volatile unsigned int *)gainLUT3_adr)
  #define gainLUT4_adr                                   0x00410418                                                   // modem_adr_bank1_base + 0x00000006 * 0x00000004
  #define gainLUT4                                       (*(volatile unsigned int *)gainLUT4_adr)
  #define gainLUT5_adr                                   0x0041041c                                                   // modem_adr_bank1_base + 0x00000007 * 0x00000004
  #define gainLUT5                                       (*(volatile unsigned int *)gainLUT5_adr)
  #define gainLUT6_adr                                   0x00410420                                                   // modem_adr_bank1_base + 0x00000008 * 0x00000004
  #define gainLUT6                                       (*(volatile unsigned int *)gainLUT6_adr)
  #define gainLUT7_adr                                   0x00410424                                                   // modem_adr_bank1_base + 0x00000009 * 0x00000004
  #define gainLUT7                                       (*(volatile unsigned int *)gainLUT7_adr)
  #define gainLUT8_adr                                   0x00410428                                                   // modem_adr_bank1_base + 0x0000000a * 0x00000004
  #define gainLUT8                                       (*(volatile unsigned int *)gainLUT8_adr)
  #define agcCtrl0_adr                                   0x0041042c                                                   // modem_adr_bank1_base + 0x0000000b * 0x00000004
  #define agcCtrl0                                       (*(volatile unsigned int *)agcCtrl0_adr)
  #define agcCtrl1_adr                                   0x00410430                                                   // modem_adr_bank1_base + 0x0000000c * 0x00000004
  #define agcCtrl1                                       (*(volatile unsigned int *)agcCtrl1_adr)
  #define agcStatus_adr                                  0x00410434                                                   // modem_adr_bank1_base + 0x0000000d * 0x00000004
  #define agcStatus                                      (*(volatile unsigned int *)agcStatus_adr)
  #define rssiDcStatus_adr                               0x00410438                                                   // modem_adr_bank1_base + 0x0000000e * 0x00000004
  #define rssiDcStatus                                   (*(volatile unsigned int *)rssiDcStatus_adr)
  #define squelchCtrl_adr                                0x0041043c                                                   // modem_adr_bank1_base + 0x0000000f * 0x00000004
  #define squelchCtrl                                    (*(volatile unsigned int *)squelchCtrl_adr)
  #define rxPskCtrl0_adr                                 0x00410440                                                   // modem_adr_bank1_base + 0x00000010 * 0x00000004
  #define rxPskCtrl0                                     (*(volatile unsigned int *)rxPskCtrl0_adr)
  #define rxPskCtrl1_adr                                 0x00410444                                                   // modem_adr_bank1_base + 0x00000011 * 0x00000004
  #define rxPskCtrl1                                     (*(volatile unsigned int *)rxPskCtrl1_adr)
  #define dcOffEstCtrl0_adr                              0x00410448                                                   // modem_adr_bank1_base + 0x00000012 * 0x00000004
  #define dcOffEstCtrl0                                  (*(volatile unsigned int *)dcOffEstCtrl0_adr)
  #define dcOffEstCtrl1_adr                              0x0041044c                                                   // modem_adr_bank1_base + 0x00000013 * 0x00000004
  #define dcOffEstCtrl1                                  (*(volatile unsigned int *)dcOffEstCtrl1_adr)
  #define dcOffEstCtrl2_adr                              0x00410450                                                   // modem_adr_bank1_base + 0x00000014 * 0x00000004
  #define dcOffEstCtrl2                                  (*(volatile unsigned int *)dcOffEstCtrl2_adr)
  #define dcOffEstCtrl3_adr                              0x00410454                                                   // modem_adr_bank1_base + 0x00000015 * 0x00000004
  #define dcOffEstCtrl3                                  (*(volatile unsigned int *)dcOffEstCtrl3_adr)
  #define dcOffEstCtrl4_adr                              0x00410458                                                   // modem_adr_bank1_base + 0x00000016 * 0x00000004
  #define dcOffEstCtrl4                                  (*(volatile unsigned int *)dcOffEstCtrl4_adr)
  #define dcOffEstCtrl5_adr                              0x0041045c                                                   // modem_adr_bank1_base + 0x00000017 * 0x00000004
  #define dcOffEstCtrl5                                  (*(volatile unsigned int *)dcOffEstCtrl5_adr)
  #define demodCtrl_adr                                  0x00410460                                                   // modem_adr_bank1_base + 0x00000018 * 0x00000004
  #define demodCtrl                                      (*(volatile unsigned int *)demodCtrl_adr)
  #define syncCtrl_adr                                   0x00410464                                                   // modem_adr_bank1_base + 0x00000019 * 0x00000004
  #define syncCtrl                                       (*(volatile unsigned int *)syncCtrl_adr)
  #define eqCoeffCtrl0_adr                               0x00410468                                                   // modem_adr_bank1_base + 0x0000001a * 0x00000004
  #define eqCoeffCtrl0                                   (*(volatile unsigned int *)eqCoeffCtrl0_adr)
  #define eqCoeffCtrl1_adr                               0x0041046c                                                   // modem_adr_bank1_base + 0x0000001b * 0x00000004
  #define eqCoeffCtrl1                                   (*(volatile unsigned int *)eqCoeffCtrl1_adr)
  #define loopCoeffCtrl0_adr                             0x00410470                                                   // modem_adr_bank1_base + 0x0000001c * 0x00000004
  #define loopCoeffCtrl0                                 (*(volatile unsigned int *)loopCoeffCtrl0_adr)
  #define loopCoeffCtrl1_adr                             0x00410474                                                   // modem_adr_bank1_base + 0x0000001d * 0x00000004
  #define loopCoeffCtrl1                                 (*(volatile unsigned int *)loopCoeffCtrl1_adr)
  #define pskSyncWord0_adr                               0x00410478                                                   // modem_adr_bank1_base + 0x0000001e * 0x00000004
  #define pskSyncWord0                                   (*(volatile unsigned int *)pskSyncWord0_adr)
  #define pskSyncWord1_adr                               0x0041047c                                                   // modem_adr_bank1_base + 0x0000001f * 0x00000004
  #define pskSyncWord1                                   (*(volatile unsigned int *)pskSyncWord1_adr)
  #define pskSyncWord2_adr                               0x00410480                                                   // modem_adr_bank1_base + 0x00000020 * 0x00000004
  #define pskSyncWord2                                   (*(volatile unsigned int *)pskSyncWord2_adr)
  #define adjFcCtrl_adr                                  0x00410484                                                   // modem_adr_bank1_base + 0x00000021 * 0x00000004
  #define adjFcCtrl                                      (*(volatile unsigned int *)adjFcCtrl_adr)
  #define ifFreq_adr                                     0x00410488                                                   // modem_adr_bank1_base + 0x00000022 * 0x00000004
  #define ifFreq                                         (*(volatile unsigned int *)ifFreq_adr)
  #define dcOffCompQ_adr                                 0x0041048c                                                   // modem_adr_bank1_base + 0x00000023 * 0x00000004
  #define dcOffCompQ                                     (*(volatile unsigned int *)dcOffCompQ_adr)
  #define dcOffCompI_adr                                 0x00410490                                                   // modem_adr_bank1_base + 0x00000024 * 0x00000004
  #define dcOffCompI                                     (*(volatile unsigned int *)dcOffCompI_adr)
  #define modCtrl0_adr                                   0x00410494                                                   // modem_adr_bank1_base + 0x00000025 * 0x00000004
  #define modCtrl0                                       (*(volatile unsigned int *)modCtrl0_adr)
  #define modCtrl1_adr                                   0x00410498                                                   // modem_adr_bank1_base + 0x00000026 * 0x00000004
  #define modCtrl1                                       (*(volatile unsigned int *)modCtrl1_adr)
  #define loopCoeffCtrl2_adr                             0x0041049c                                                   // modem_adr_bank1_base + 0x00000027 * 0x00000004
  #define loopCoeffCtrl2                                 (*(volatile unsigned int *)loopCoeffCtrl2_adr)
  #define loopCoeffCtrl3_adr                             0x004104a0                                                   // modem_adr_bank1_base + 0x00000028 * 0x00000004
  #define loopCoeffCtrl3                                 (*(volatile unsigned int *)loopCoeffCtrl3_adr)
  #define txQPskLutCtrl_adr                              0x004104ac                                                   // modem_adr_bank1_base + 0x0000002b * 0x00000004
  #define txQPskLutCtrl                                  (*(volatile unsigned int *)txQPskLutCtrl_adr)
  #define tx8PskLutCtrl0_adr                             0x004104b0                                                   // modem_adr_bank1_base + 0x0000002c * 0x00000004
  #define tx8PskLutCtrl0                                 (*(volatile unsigned int *)tx8PskLutCtrl0_adr)
  #define tx8PskLutCtrl1_adr                             0x004104b4                                                   // modem_adr_bank1_base + 0x0000002d * 0x00000004
  #define tx8PskLutCtrl1                                 (*(volatile unsigned int *)tx8PskLutCtrl1_adr)
  #define tssiCtrl_adr                                   0x004104b8                                                   // modem_adr_bank1_base + 0x0000002e * 0x00000004
  #define tssiCtrl                                       (*(volatile unsigned int *)tssiCtrl_adr)
  #define tssiStatus_adr                                 0x004104bc                                                   // modem_adr_bank1_base + 0x0000002f * 0x00000004
  #define tssiStatus                                     (*(volatile unsigned int *)tssiStatus_adr)
  #define testCtrl_adr                                   0x004104c0                                                   // modem_adr_bank1_base + 0x00000030 * 0x00000004
  #define testCtrl                                       (*(volatile unsigned int *)testCtrl_adr)
  #define pa_vctrl_ctrl_adr                              0x004104c4                                                   // modem_adr_bank1_base + 0x00000031 * 0x00000004
  #define pa_vctrl_ctrl                                  (*(volatile unsigned int *)pa_vctrl_ctrl_adr)
  #define txPuCtrl_adr                                   0x004104c8                                                   // modem_adr_bank1_base + 0x00000032 * 0x00000004
  #define txPuCtrl                                       (*(volatile unsigned int *)txPuCtrl_adr)
  #define rxPuCtrl_adr                                   0x004104cc                                                   // modem_adr_bank1_base + 0x00000033 * 0x00000004
  #define rxPuCtrl                                       (*(volatile unsigned int *)rxPuCtrl_adr)
  #define synthPuCtrl_adr                                0x004104d0                                                   // modem_adr_bank1_base + 0x00000034 * 0x00000004
  #define synthPuCtrl                                    (*(volatile unsigned int *)synthPuCtrl_adr)
  #define paPuCtrl_adr                                   0x004104d4                                                   // modem_adr_bank1_base + 0x00000035 * 0x00000004
  #define paPuCtrl                                       (*(volatile unsigned int *)paPuCtrl_adr)
  #define paRampCtrl_adr                                 0x004104d8                                                   // modem_adr_bank1_base + 0x00000036 * 0x00000004
  #define paRampCtrl                                     (*(volatile unsigned int *)paRampCtrl_adr)
  #define vcoloPuCtrl_adr                                0x004104dc                                                   // modem_adr_bank1_base + 0x00000037 * 0x00000004
  #define vcoloPuCtrl                                    (*(volatile unsigned int *)vcoloPuCtrl_adr)
  #define dsadcPuCtrl_adr                                0x004104e0                                                   // modem_adr_bank1_base + 0x00000038 * 0x00000004
  #define dsadcPuCtrl                                    (*(volatile unsigned int *)dsadcPuCtrl_adr)
  #define trPuCtrl_adr                                   0x004104e4                                                   // modem_adr_bank1_base + 0x00000039 * 0x00000004
  #define trPuCtrl                                       (*(volatile unsigned int *)trPuCtrl_adr)
  #define tssiPuCtrl_adr                                 0x004104e8                                                   // modem_adr_bank1_base + 0x0000003a * 0x00000004
  #define tssiPuCtrl                                     (*(volatile unsigned int *)tssiPuCtrl_adr)
  #define paPuCtrl_ZB_adr                                0x004104ec                                                   // modem_adr_bank1_base + 0x0000003b * 0x00000004
  #define paPuCtrl_ZB                                    (*(volatile unsigned int *)paPuCtrl_ZB_adr)
  #define clkCtrl_adr                                    0x004104f0                                                   // modem_adr_bank1_base + 0x0000003c * 0x00000004
  #define clkCtrl                                        (*(volatile unsigned int *)clkCtrl_adr)
  #define rxPskCtrl2_adr                                 0x004104f4                                                   // modem_adr_bank1_base + 0x0000003d * 0x00000004
  #define rxPskCtrl2                                     (*(volatile unsigned int *)rxPskCtrl2_adr)
  #define rxPskCtrl3_adr                                 0x004104f8                                                   // modem_adr_bank1_base + 0x0000003e * 0x00000004
  #define rxPskCtrl3                                     (*(volatile unsigned int *)rxPskCtrl3_adr)
  #define rxPskCtrl4_adr                                 0x004104fc                                                   // modem_adr_bank1_base + 0x0000003f * 0x00000004
  #define rxPskCtrl4                                     (*(volatile unsigned int *)rxPskCtrl4_adr)
  #define agcCtrl2_adr                                   0x00410500                                                   // modem_adr_bank2_base + 0x00000000 * 0x00000004
  #define agcCtrl2                                       (*(volatile unsigned int *)agcCtrl2_adr)
  #define revision_adr                                   0x00410504                                                   // modem_adr_bank2_base + 0x00000001 * 0x00000004
  #define revision                                       (*(volatile unsigned int *)revision_adr)
  #define dcOffCompQ1_adr                                0x00410508                                                   // modem_adr_bank2_base + 0x00000002 * 0x00000004
  #define dcOffCompQ1                                    (*(volatile unsigned int *)dcOffCompQ1_adr)
  #define dcOffCompI1_adr                                0x0041050c                                                   // modem_adr_bank2_base + 0x00000003 * 0x00000004
  #define dcOffCompI1                                    (*(volatile unsigned int *)dcOffCompI1_adr)
  #define dcOffCompQ2_adr                                0x00410510                                                   // modem_adr_bank2_base + 0x00000004 * 0x00000004
  #define dcOffCompQ2                                    (*(volatile unsigned int *)dcOffCompQ2_adr)
  #define dcOffCompI2_adr                                0x00410514                                                   // modem_adr_bank2_base + 0x00000005 * 0x00000004
  #define dcOffCompI2                                    (*(volatile unsigned int *)dcOffCompI2_adr)
  #define dcOffCompQ3_adr                                0x00410518                                                   // modem_adr_bank2_base + 0x00000006 * 0x00000004
  #define dcOffCompQ3                                    (*(volatile unsigned int *)dcOffCompQ3_adr)
  #define dcOffCompI3_adr                                0x0041051c                                                   // modem_adr_bank2_base + 0x00000007 * 0x00000004
  #define dcOffCompI3                                    (*(volatile unsigned int *)dcOffCompI3_adr)
  #define dcOffCompQ4_adr                                0x00410520                                                   // modem_adr_bank2_base + 0x00000008 * 0x00000004
  #define dcOffCompQ4                                    (*(volatile unsigned int *)dcOffCompQ4_adr)
  #define dcOffCompI4_adr                                0x00410524                                                   // modem_adr_bank2_base + 0x00000009 * 0x00000004
  #define dcOffCompI4                                    (*(volatile unsigned int *)dcOffCompI4_adr)
  #define iqComp1_adr                                    0x00410528                                                   // modem_adr_bank2_base + 0x0000000a * 0x00000004
  #define iqComp1                                        (*(volatile unsigned int *)iqComp1_adr)
  #define iqComp2_adr                                    0x0041052c                                                   // modem_adr_bank2_base + 0x0000000b * 0x00000004
  #define iqComp2                                        (*(volatile unsigned int *)iqComp2_adr)
  #define iqComp3_adr                                    0x00410530                                                   // modem_adr_bank2_base + 0x0000000c * 0x00000004
  #define iqComp3                                        (*(volatile unsigned int *)iqComp3_adr)
  #define iqComp4_adr                                    0x00410534                                                   // modem_adr_bank2_base + 0x0000000d * 0x00000004
  #define iqComp4                                        (*(volatile unsigned int *)iqComp4_adr)
  #define rxPskPhErr1_adr                                0x00410538                                                   // modem_adr_bank2_base + 0x0000000e * 0x00000004
  #define rxPskPhErr1                                    (*(volatile unsigned int *)rxPskPhErr1_adr)
  #define rxPskPhErr2_adr                                0x0041053c                                                   // modem_adr_bank2_base + 0x0000000f * 0x00000004
  #define rxPskPhErr2                                    (*(volatile unsigned int *)rxPskPhErr2_adr)
  #define rxPskPhErr3_adr                                0x00410540                                                   // modem_adr_bank2_base + 0x00000010 * 0x00000004
  #define rxPskPhErr3                                    (*(volatile unsigned int *)rxPskPhErr3_adr)
  #define rxPskPhErr4_adr                                0x00410544                                                   // modem_adr_bank2_base + 0x00000011 * 0x00000004
  #define rxPskPhErr4                                    (*(volatile unsigned int *)rxPskPhErr4_adr)
  #define rxPskPhErr5_adr                                0x00410548                                                   // modem_adr_bank2_base + 0x00000012 * 0x00000004
  #define rxPskPhErr5                                    (*(volatile unsigned int *)rxPskPhErr5_adr)
  #define rxPskPhErr6_adr                                0x0041054c                                                   // modem_adr_bank2_base + 0x00000013 * 0x00000004
  #define rxPskPhErr6                                    (*(volatile unsigned int *)rxPskPhErr6_adr)
  #define rxPskMagErr_adr                                0x00410550                                                   // modem_adr_bank2_base + 0x00000014 * 0x00000004
  #define rxPskMagErr                                    (*(volatile unsigned int *)rxPskMagErr_adr)
  #define slna_ctrl0_adr                                 0x0041055c                                                   // modem_adr_bank2_base + 0x00000017 * 0x00000004
  #define slna_ctrl0                                     (*(volatile unsigned int *)slna_ctrl0_adr)
  #define slna_ctrl1_adr                                 0x00410560                                                   // modem_adr_bank2_base + 0x00000018 * 0x00000004
  #define slna_ctrl1                                     (*(volatile unsigned int *)slna_ctrl1_adr)
  #define swp_Startkick_adr                              0x00410564                                                   // modem_adr_bank2_base + 0x00000019 * 0x00000004
  #define swp_Startkick                                  (*(volatile unsigned int *)swp_Startkick_adr)
  #define swp_EndInc_adr                                 0x00410568                                                   // modem_adr_bank2_base + 0x0000001a * 0x00000004
  #define swp_EndInc                                     (*(volatile unsigned int *)swp_EndInc_adr)
  #define swp_Thresh_adr                                 0x0041056c                                                   // modem_adr_bank2_base + 0x0000001b * 0x00000004
  #define swp_Thresh                                     (*(volatile unsigned int *)swp_Thresh_adr)
  #define swp_counter_adr                                0x00410570                                                   // modem_adr_bank2_base + 0x0000001c * 0x00000004
  #define swp_counter                                    (*(volatile unsigned int *)swp_counter_adr)
  #define swp_vcoCalCap_adr                              0x00410574                                                   // modem_adr_bank2_base + 0x0000001d * 0x00000004
  #define swp_vcoCalCap                                  (*(volatile unsigned int *)swp_vcoCalCap_adr)
  #define swp_threshRssi_adr                             0x00410578                                                   // modem_adr_bank2_base + 0x0000001e * 0x00000004
  #define swp_threshRssi                                 (*(volatile unsigned int *)swp_threshRssi_adr)
  #define swp_specVal0_adr                               0x0041057c                                                   // modem_adr_bank2_base + 0x0000001f * 0x00000004
  #define swp_specVal0                                   (*(volatile unsigned int *)swp_specVal0_adr)
  #define swp_specVal1_adr                               0x00410580                                                   // modem_adr_bank2_base + 0x00000020 * 0x00000004
  #define swp_specVal1                                   (*(volatile unsigned int *)swp_specVal1_adr)
  #define swp_specVal2_adr                               0x00410584                                                   // modem_adr_bank2_base + 0x00000021 * 0x00000004
  #define swp_specVal2                                   (*(volatile unsigned int *)swp_specVal2_adr)
  #define swp_specVal3_adr                               0x00410588                                                   // modem_adr_bank2_base + 0x00000022 * 0x00000004
  #define swp_specVal3                                   (*(volatile unsigned int *)swp_specVal3_adr)
  #define swp_specVal4_adr                               0x0041058c                                                   // modem_adr_bank2_base + 0x00000023 * 0x00000004
  #define swp_specVal4                                   (*(volatile unsigned int *)swp_specVal4_adr)
  #define swp_specVal5_adr                               0x00410590                                                   // modem_adr_bank2_base + 0x00000024 * 0x00000004
  #define swp_specVal5                                   (*(volatile unsigned int *)swp_specVal5_adr)
  #define swp_specVal6_adr                               0x00410594                                                   // modem_adr_bank2_base + 0x00000025 * 0x00000004
  #define swp_specVal6                                   (*(volatile unsigned int *)swp_specVal6_adr)
  #define swp_specVal7_adr                               0x00410598                                                   // modem_adr_bank2_base + 0x00000026 * 0x00000004
  #define swp_specVal7                                   (*(volatile unsigned int *)swp_specVal7_adr)
  #define swp_bitmapCnt_adr                              0x0041059c                                                   // modem_adr_bank2_base + 0x00000027 * 0x00000004
  #define swp_bitmapCnt                                  (*(volatile unsigned int *)swp_bitmapCnt_adr)
  #define swp_skipStart_adr                              0x004105a0                                                   // modem_adr_bank2_base + 0x00000028 * 0x00000004
  #define swp_skipStart                                  (*(volatile unsigned int *)swp_skipStart_adr)
  #define swp_skipEnd_adr                                0x004105a4                                                   // modem_adr_bank2_base + 0x00000029 * 0x00000004
  #define swp_skipEnd                                    (*(volatile unsigned int *)swp_skipEnd_adr)
  #define swp_Inc_adr                                    0x004105a8                                                   // modem_adr_bank2_base + 0x0000002a * 0x00000004
  #define swp_Inc                                        (*(volatile unsigned int *)swp_Inc_adr)
  #define swp_skipStart2_adr                             0x004105ac                                                   // modem_adr_bank2_base + 0x0000002b * 0x00000004
  #define swp_skipStart2                                 (*(volatile unsigned int *)swp_skipStart2_adr)
  #define psk_rssi_adr                                   0x004105b0                                                   // modem_adr_bank2_base + 0x0000002c * 0x00000004
  #define psk_rssi                                       (*(volatile unsigned int *)psk_rssi_adr)
  #define psk_acc_cnt_adr                                0x004105b4                                                   // modem_adr_bank2_base + 0x0000002d * 0x00000004
  #define psk_acc_cnt                                    (*(volatile unsigned int *)psk_acc_cnt_adr)
  #define ovrsync0_adr                                   0x004105b8                                                   // modem_adr_bank2_base + 0x0000002e * 0x00000004
  #define ovrsync0                                       (*(volatile unsigned int *)ovrsync0_adr)
  #define ovrsync1_adr                                   0x004105bc                                                   // modem_adr_bank2_base + 0x0000002f * 0x00000004
  #define ovrsync1                                       (*(volatile unsigned int *)ovrsync1_adr)
  #define ovrsync2_adr                                   0x004105c0                                                   // modem_adr_bank2_base + 0x00000030 * 0x00000004
  #define ovrsync2                                       (*(volatile unsigned int *)ovrsync2_adr)
  #define ovrsync3_adr                                   0x004105c4                                                   // modem_adr_bank2_base + 0x00000031 * 0x00000004
  #define ovrsync3                                       (*(volatile unsigned int *)ovrsync3_adr)
  #define swp_skipEnd2_adr                               0x004105c8                                                   // modem_adr_bank2_base + 0x00000032 * 0x00000004
  #define swp_skipEnd2                                   (*(volatile unsigned int *)swp_skipEnd2_adr)
  #define spurCancel_adr                                 0x004105cc                                                   // modem_adr_bank2_base + 0x00000033 * 0x00000004
  #define spurCancel                                     (*(volatile unsigned int *)spurCancel_adr)
  #define rssiMinMax_adr                                 0x004105d0                                                   // modem_adr_bank2_base + 0x00000034 * 0x00000004
  #define rssiMinMax                                     (*(volatile unsigned int *)rssiMinMax_adr)
  #define swp_pause_adr                                  0x004105d4                                                   // modem_adr_bank2_base + 0x00000035 * 0x00000004
  #define swp_pause                                      (*(volatile unsigned int *)swp_pause_adr)
  #define swp_advcds_adr                                 0x004105d8                                                   // modem_adr_bank2_base + 0x00000036 * 0x00000004
  #define swp_advcds                                     (*(volatile unsigned int *)swp_advcds_adr)
  #define swp_Maxcalcap_adr                              0x004105dc                                                   // modem_adr_bank2_base + 0x00000037 * 0x00000004
  #define swp_Maxcalcap                                  (*(volatile unsigned int *)swp_Maxcalcap_adr)
  #define swp_MaxRssi_adr                                0x004105e0                                                   // modem_adr_bank2_base + 0x00000038 * 0x00000004
  #define swp_MaxRssi                                    (*(volatile unsigned int *)swp_MaxRssi_adr)
  #define btmodem_spare0_adr                             0x004105e4                                                   // modem_adr_bank2_base + 0x00000039 * 0x00000004
  #define btmodem_spare0                                 (*(volatile unsigned int *)btmodem_spare0_adr)
  #define fskAmp_sel_adr                                 0x004105e8                                                   // modem_adr_bank2_base + 0x0000003a * 0x00000004
  #define fskAmp_sel                                     (*(volatile unsigned int *)fskAmp_sel_adr)
  #define agcStatus2_adr                                 0x004105ec                                                   // modem_adr_bank2_base + 0x0000003b * 0x00000004
  #define agcStatus2                                     (*(volatile unsigned int *)agcStatus2_adr)
  #define qpskGain_adr                                   0x004105f0                                                   // modem_adr_bank2_base + 0x0000003c * 0x00000004
  #define qpskGain                                       (*(volatile unsigned int *)qpskGain_adr)
  #define agcCtrl3_adr                                   0x004105f4                                                   // modem_adr_bank2_base + 0x0000003d * 0x00000004
  #define agcCtrl3                                       (*(volatile unsigned int *)agcCtrl3_adr)
  #define agcCtrl4_adr                                   0x004105f8                                                   // modem_adr_bank2_base + 0x0000003e * 0x00000004
  #define agcCtrl4                                       (*(volatile unsigned int *)agcCtrl4_adr)
  #define sri_slave_sel_adr                              0x004105fc                                                   // modem_adr_bank2_base + 0x0000003f * 0x00000004
  #define sri_slave_sel                                  (*(volatile unsigned int *)sri_slave_sel_adr)
  #define agcCtrl5_adr                                   0x00410608                                                   // modem_adr_bank3_base + 0x00000002 * 0x00000004
  #define agcCtrl5                                       (*(volatile unsigned int *)agcCtrl5_adr)
  #define txRaFracBase0_adr                              0x0041060c                                                   // modem_adr_bank3_base + 0x00000003 * 0x00000004
  #define txRaFracBase0                                  (*(volatile unsigned int *)txRaFracBase0_adr)
  #define txRaFracBase1_adr                              0x00410610                                                   // modem_adr_bank3_base + 0x00000004 * 0x00000004
  #define txRaFracBase1                                  (*(volatile unsigned int *)txRaFracBase1_adr)
  #define txRaFracShift0_adr                             0x00410614                                                   // modem_adr_bank3_base + 0x00000005 * 0x00000004
  #define txRaFracShift0                                 (*(volatile unsigned int *)txRaFracShift0_adr)
  #define txCtrl0_adr                                    0x00410618                                                   // modem_adr_bank3_base + 0x00000006 * 0x00000004
  #define txCtrl0                                        (*(volatile unsigned int *)txCtrl0_adr)
  #define txEquCtrl0_adr                                 0x0041061c                                                   // modem_adr_bank3_base + 0x00000007 * 0x00000004
  #define txEquCtrl0                                     (*(volatile unsigned int *)txEquCtrl0_adr)
  #define txEquCtrl1_adr                                 0x00410620                                                   // modem_adr_bank3_base + 0x00000008 * 0x00000004
  #define txEquCtrl1                                     (*(volatile unsigned int *)txEquCtrl1_adr)
  #define txEquCtrl2_adr                                 0x00410624                                                   // modem_adr_bank3_base + 0x00000009 * 0x00000004
  #define txEquCtrl2                                     (*(volatile unsigned int *)txEquCtrl2_adr)
  #define txEquCtrl3_adr                                 0x00410628                                                   // modem_adr_bank3_base + 0x0000000a * 0x00000004
  #define txEquCtrl3                                     (*(volatile unsigned int *)txEquCtrl3_adr)
  #define txEquCtrl4_adr                                 0x0041062c                                                   // modem_adr_bank3_base + 0x0000000b * 0x00000004
  #define txEquCtrl4                                     (*(volatile unsigned int *)txEquCtrl4_adr)
  #define rxCordicBaseLo_adr                             0x00410630                                                   // modem_adr_bank3_base + 0x0000000c * 0x00000004
  #define rxCordicBaseLo                                 (*(volatile unsigned int *)rxCordicBaseLo_adr)
  #define rxCtrl0_adr                                    0x00410634                                                   // modem_adr_bank3_base + 0x0000000d * 0x00000004
  #define rxCtrl0                                        (*(volatile unsigned int *)rxCtrl0_adr)
  #define spurCancelCtrl0_adr                            0x00410638                                                   // modem_adr_bank3_base + 0x0000000e * 0x00000004
  #define spurCancelCtrl0                                (*(volatile unsigned int *)spurCancelCtrl0_adr)
  #define spurCancelCtrl1_adr                            0x0041063c                                                   // modem_adr_bank3_base + 0x0000000f * 0x00000004
  #define spurCancelCtrl1                                (*(volatile unsigned int *)spurCancelCtrl1_adr)
  #define spurCancelCtrl2_adr                            0x00410640                                                   // modem_adr_bank3_base + 0x00000010 * 0x00000004
  #define spurCancelCtrl2                                (*(volatile unsigned int *)spurCancelCtrl2_adr)
  #define spurCancelCtrl3_adr                            0x00410644                                                   // modem_adr_bank3_base + 0x00000011 * 0x00000004
  #define spurCancelCtrl3                                (*(volatile unsigned int *)spurCancelCtrl3_adr)
  #define spurCancelCtrl4_adr                            0x00410648                                                   // modem_adr_bank3_base + 0x00000012 * 0x00000004
  #define spurCancelCtrl4                                (*(volatile unsigned int *)spurCancelCtrl4_adr)
  #define spurCancelCtrl5_adr                            0x0041064c                                                   // modem_adr_bank3_base + 0x00000013 * 0x00000004
  #define spurCancelCtrl5                                (*(volatile unsigned int *)spurCancelCtrl5_adr)
  #define spurCancelCtrl6_adr                            0x00410650                                                   // modem_adr_bank3_base + 0x00000014 * 0x00000004
  #define spurCancelCtrl6                                (*(volatile unsigned int *)spurCancelCtrl6_adr)
  #define wrssiStatus_adr                                0x00410654                                                   // modem_adr_bank3_base + 0x00000015 * 0x00000004
  #define wrssiStatus                                    (*(volatile unsigned int *)wrssiStatus_adr)
  #define hpfCtrl0_adr                                   0x00410658                                                   // modem_adr_bank3_base + 0x00000016 * 0x00000004
  #define hpfCtrl0                                       (*(volatile unsigned int *)hpfCtrl0_adr)
  #define hpfCtrl1_adr                                   0x0041065c                                                   // modem_adr_bank3_base + 0x00000017 * 0x00000004
  #define hpfCtrl1                                       (*(volatile unsigned int *)hpfCtrl1_adr)
  #define magEquLow0_adr                                 0x00410660                                                   // modem_adr_bank3_base + 0x00000018 * 0x00000004
  #define magEquLow0                                     (*(volatile unsigned int *)magEquLow0_adr)
  #define magEquLow1_adr                                 0x00410664                                                   // modem_adr_bank3_base + 0x00000019 * 0x00000004
  #define magEquLow1                                     (*(volatile unsigned int *)magEquLow1_adr)
  #define magEquLow2_adr                                 0x00410668                                                   // modem_adr_bank3_base + 0x0000001a * 0x00000004
  #define magEquLow2                                     (*(volatile unsigned int *)magEquLow2_adr)
  #define magEquLow3_adr                                 0x0041066c                                                   // modem_adr_bank3_base + 0x0000001b * 0x00000004
  #define magEquLow3                                     (*(volatile unsigned int *)magEquLow3_adr)
  #define magEquLow4_adr                                 0x00410670                                                   // modem_adr_bank3_base + 0x0000001c * 0x00000004
  #define magEquLow4                                     (*(volatile unsigned int *)magEquLow4_adr)
  #define magEquLow5_adr                                 0x00410674                                                   // modem_adr_bank3_base + 0x0000001d * 0x00000004
  #define magEquLow5                                     (*(volatile unsigned int *)magEquLow5_adr)
  #define magEquLow6_adr                                 0x00410678                                                   // modem_adr_bank3_base + 0x0000001e * 0x00000004
  #define magEquLow6                                     (*(volatile unsigned int *)magEquLow6_adr)
  #define magEquLow7_adr                                 0x0041067c                                                   // modem_adr_bank3_base + 0x0000001f * 0x00000004
  #define magEquLow7                                     (*(volatile unsigned int *)magEquLow7_adr)
  #define magEquHi0_adr                                  0x00410680                                                   // modem_adr_bank3_base + 0x00000020 * 0x00000004
  #define magEquHi0                                      (*(volatile unsigned int *)magEquHi0_adr)
  #define magEquHi1_adr                                  0x00410684                                                   // modem_adr_bank3_base + 0x00000021 * 0x00000004
  #define magEquHi1                                      (*(volatile unsigned int *)magEquHi1_adr)
  #define magEquHi2_adr                                  0x00410688                                                   // modem_adr_bank3_base + 0x00000022 * 0x00000004
  #define magEquHi2                                      (*(volatile unsigned int *)magEquHi2_adr)
  #define magEquHi3_adr                                  0x0041068c                                                   // modem_adr_bank3_base + 0x00000023 * 0x00000004
  #define magEquHi3                                      (*(volatile unsigned int *)magEquHi3_adr)
  #define magEquHi4_adr                                  0x00410690                                                   // modem_adr_bank3_base + 0x00000024 * 0x00000004
  #define magEquHi4                                      (*(volatile unsigned int *)magEquHi4_adr)
  #define magEquHi5_adr                                  0x00410694                                                   // modem_adr_bank3_base + 0x00000025 * 0x00000004
  #define magEquHi5                                      (*(volatile unsigned int *)magEquHi5_adr)
  #define magEquHi6_adr                                  0x00410698                                                   // modem_adr_bank3_base + 0x00000026 * 0x00000004
  #define magEquHi6                                      (*(volatile unsigned int *)magEquHi6_adr)
  #define magEquHi7_adr                                  0x0041069c                                                   // modem_adr_bank3_base + 0x00000027 * 0x00000004
  #define magEquHi7                                      (*(volatile unsigned int *)magEquHi7_adr)
  #define gdEquA1_adr                                    0x004106a0                                                   // modem_adr_bank3_base + 0x00000028 * 0x00000004
  #define gdEquA1                                        (*(volatile unsigned int *)gdEquA1_adr)
  #define gdEquA2_adr                                    0x004106a4                                                   // modem_adr_bank3_base + 0x00000029 * 0x00000004
  #define gdEquA2                                        (*(volatile unsigned int *)gdEquA2_adr)
  #define rxRaFracBase0_adr                              0x004106a8                                                   // modem_adr_bank3_base + 0x0000002a * 0x00000004
  #define rxRaFracBase0                                  (*(volatile unsigned int *)rxRaFracBase0_adr)
  #define rxRaFracBase1_adr                              0x004106ac                                                   // modem_adr_bank3_base + 0x0000002b * 0x00000004
  #define rxRaFracBase1                                  (*(volatile unsigned int *)rxRaFracBase1_adr)
  #define rxRaFracShift0_adr                             0x004106b0                                                   // modem_adr_bank3_base + 0x0000002c * 0x00000004
  #define rxRaFracShift0                                 (*(volatile unsigned int *)rxRaFracShift0_adr)
  #define rxRaFracShift1_adr                             0x004106b4                                                   // modem_adr_bank3_base + 0x0000002d * 0x00000004
  #define rxRaFracShift1                                 (*(volatile unsigned int *)rxRaFracShift1_adr)
  #define BistCtrl0_adr                                  0x004106b8                                                   // modem_adr_bank3_base + 0x0000002e * 0x00000004
  #define BistCtrl0                                      (*(volatile unsigned int *)BistCtrl0_adr)
  #define BistCtrl1_adr                                  0x004106bc                                                   // modem_adr_bank3_base + 0x0000002f * 0x00000004
  #define BistCtrl1                                      (*(volatile unsigned int *)BistCtrl1_adr)
  #define wrssiCtrl0_adr                                 0x004106c0                                                   // modem_adr_bank3_base + 0x00000030 * 0x00000004
  #define wrssiCtrl0                                     (*(volatile unsigned int *)wrssiCtrl0_adr)
  #define wrssiCtrl1_adr                                 0x004106c4                                                   // modem_adr_bank3_base + 0x00000031 * 0x00000004
  #define wrssiCtrl1                                     (*(volatile unsigned int *)wrssiCtrl1_adr)
  #define wrssiCtrl2_adr                                 0x004106c8                                                   // modem_adr_bank3_base + 0x00000032 * 0x00000004
  #define wrssiCtrl2                                     (*(volatile unsigned int *)wrssiCtrl2_adr)
  #define wrssiCtrl3_adr                                 0x004106cc                                                   // modem_adr_bank3_base + 0x00000033 * 0x00000004
  #define wrssiCtrl3                                     (*(volatile unsigned int *)wrssiCtrl3_adr)
  #define wrssiCtrl4_adr                                 0x004106d0                                                   // modem_adr_bank3_base + 0x00000034 * 0x00000004
  #define wrssiCtrl4                                     (*(volatile unsigned int *)wrssiCtrl4_adr)
  #define wrssiCtrl5_adr                                 0x004106d4                                                   // modem_adr_bank3_base + 0x00000035 * 0x00000004
  #define wrssiCtrl5                                     (*(volatile unsigned int *)wrssiCtrl5_adr)
  #define agcCtrl6_adr                                   0x004106d8                                                   // modem_adr_bank3_base + 0x00000036 * 0x00000004
  #define agcCtrl6                                       (*(volatile unsigned int *)agcCtrl6_adr)
  #define agcCtrl7_adr                                   0x004106dc                                                   // modem_adr_bank3_base + 0x00000037 * 0x00000004
  #define agcCtrl7                                       (*(volatile unsigned int *)agcCtrl7_adr)
  #define agcCtrl8_adr                                   0x004106e0                                                   // modem_adr_bank3_base + 0x00000038 * 0x00000004
  #define agcCtrl8                                       (*(volatile unsigned int *)agcCtrl8_adr)
  #define agcCtrl9_adr                                   0x004106e4                                                   // modem_adr_bank3_base + 0x00000039 * 0x00000004
  #define agcCtrl9                                       (*(volatile unsigned int *)agcCtrl9_adr)
  #define ma_bec0_adr                                    0x004106e8                                                   // modem_adr_bank3_base + 0x0000003a * 0x00000004
  #define ma_bec0                                        (*(volatile unsigned int *)ma_bec0_adr)
  #define ma_bec1_adr                                    0x004106ec                                                   // modem_adr_bank3_base + 0x0000003b * 0x00000004
  #define ma_bec1                                        (*(volatile unsigned int *)ma_bec1_adr)
  #define ma_bec2_adr                                    0x004106f0                                                   // modem_adr_bank3_base + 0x0000003c * 0x00000004
  #define ma_bec2                                        (*(volatile unsigned int *)ma_bec2_adr)
  #define bt_agcRamAd_adr                                0x004106f4                                                   // modem_adr_bank3_base + 0x0000003d * 0x00000004
  #define bt_agcRamAd                                    (*(volatile unsigned int *)bt_agcRamAd_adr)
  #define bt_agcRamBo_adr                                0x004106f8                                                   // modem_adr_bank3_base + 0x0000003e * 0x00000004
  #define bt_agcRamBo                                    (*(volatile unsigned int *)bt_agcRamBo_adr)
  #define bt_agcRamD_adr                                 0x004106fc                                                   // modem_adr_bank3_base + 0x0000003f * 0x00000004
  #define bt_agcRamD                                     (*(volatile unsigned int *)bt_agcRamD_adr)
  #define bt_wrssiRamAd_adr                              0x00410700                                                   // modem_adr_bank4_base + 0x00000000 * 0x00000004
  #define bt_wrssiRamAd                                  (*(volatile unsigned int *)bt_wrssiRamAd_adr)
  #define bt_wrssiRamBo_adr                              0x00410704                                                   // modem_adr_bank4_base + 0x00000001 * 0x00000004
  #define bt_wrssiRamBo                                  (*(volatile unsigned int *)bt_wrssiRamBo_adr)
  #define bt_wrssiRamD_adr                               0x00410708                                                   // modem_adr_bank4_base + 0x00000002 * 0x00000004
  #define bt_wrssiRamD                                   (*(volatile unsigned int *)bt_wrssiRamD_adr)
  #define rxCordicBaseHi_adr                             0x0041070c                                                   // modem_adr_bank4_base + 0x00000003 * 0x00000004
  #define rxCordicBaseHi                                 (*(volatile unsigned int *)rxCordicBaseHi_adr)
  #define txDebug_adr                                    0x00410710                                                   // modem_adr_bank4_base + 0x00000004 * 0x00000004
  #define txDebug                                        (*(volatile unsigned int *)txDebug_adr)
  #define bistStatus_adr                                 0x00410714                                                   // modem_adr_bank4_base + 0x00000005 * 0x00000004
  #define bistStatus                                     (*(volatile unsigned int *)bistStatus_adr)
  #define hpfEqSwitch_adr                                0x00410718                                                   // modem_adr_bank4_base + 0x00000006 * 0x00000004
  #define hpfEqSwitch                                    (*(volatile unsigned int *)hpfEqSwitch_adr)
  #define gainOvr0_adr                                   0x0041071c                                                   // modem_adr_bank4_base + 0x00000007 * 0x00000004
  #define gainOvr0                                       (*(volatile unsigned int *)gainOvr0_adr)
  #define gainOvr1_adr                                   0x00410720                                                   // modem_adr_bank4_base + 0x00000008 * 0x00000004
  #define gainOvr1                                       (*(volatile unsigned int *)gainOvr1_adr)
  #define tx_rf_ra_sig_adr                               0x00410724                                                   // modem_adr_bank4_base + 0x00000009 * 0x00000004
  #define tx_rf_ra_sig                                   (*(volatile unsigned int *)tx_rf_ra_sig_adr)
  #define rx_rf_ra_sig_adr                               0x00410728                                                   // modem_adr_bank4_base + 0x0000000a * 0x00000004
  #define rx_rf_ra_sig                                   (*(volatile unsigned int *)rx_rf_ra_sig_adr)
  #define txrx_ra_sig_adr                                0x0041072c                                                   // modem_adr_bank4_base + 0x0000000b * 0x00000004
  #define txrx_ra_sig                                    (*(volatile unsigned int *)txrx_ra_sig_adr)
  #define txrx_ra_buftrk_adr                             0x00410730                                                   // modem_adr_bank4_base + 0x0000000c * 0x00000004
  #define txrx_ra_buftrk                                 (*(volatile unsigned int *)txrx_ra_buftrk_adr)
  #define analog_gain_lmt_adr                            0x00410734                                                   // modem_adr_bank4_base + 0x0000000d * 0x00000004
  #define analog_gain_lmt                                (*(volatile unsigned int *)analog_gain_lmt_adr)
  #define dig_gain_lmt_adr                               0x00410738                                                   // modem_adr_bank4_base + 0x0000000e * 0x00000004
  #define dig_gain_lmt                                   (*(volatile unsigned int *)dig_gain_lmt_adr)
  #define ma_bec3_adr                                    0x0041073c                                                   // modem_adr_bank4_base + 0x0000000f * 0x00000004
  #define ma_bec3                                        (*(volatile unsigned int *)ma_bec3_adr)
  #define tx_digGainQ1_adr                               0x00410740                                                   // modem_adr_bank4_base + 0x00000010 * 0x00000004
  #define tx_digGainQ1                                   (*(volatile unsigned int *)tx_digGainQ1_adr)
  #define tx_digGainQ2_adr                               0x00410744                                                   // modem_adr_bank4_base + 0x00000011 * 0x00000004
  #define tx_digGainQ2                                   (*(volatile unsigned int *)tx_digGainQ2_adr)
  #define tx_digGainQ3_adr                               0x00410748                                                   // modem_adr_bank4_base + 0x00000012 * 0x00000004
  #define tx_digGainQ3                                   (*(volatile unsigned int *)tx_digGainQ3_adr)
  #define tx_digGainQ4_adr                               0x0041074c                                                   // modem_adr_bank4_base + 0x00000013 * 0x00000004
  #define tx_digGainQ4                                   (*(volatile unsigned int *)tx_digGainQ4_adr)
  #define ma_bec4_adr                                    0x00410750                                                   // modem_adr_bank4_base + 0x00000014 * 0x00000004
  #define ma_bec4                                        (*(volatile unsigned int *)ma_bec4_adr)
  #define ma_bec5_adr                                    0x00410754                                                   // modem_adr_bank4_base + 0x00000015 * 0x00000004
  #define ma_bec5                                        (*(volatile unsigned int *)ma_bec5_adr)
  #define bt_agcRam1Ad_adr                               0x00410758                                                   // modem_adr_bank4_base + 0x00000016 * 0x00000004
  #define bt_agcRam1Ad                                   (*(volatile unsigned int *)bt_agcRam1Ad_adr)
  #define bt_agcRam1Bo_adr                               0x0041075c                                                   // modem_adr_bank4_base + 0x00000017 * 0x00000004
  #define bt_agcRam1Bo                                   (*(volatile unsigned int *)bt_agcRam1Bo_adr)
  #define bt_agcRam1D_adr                                0x00410760                                                   // modem_adr_bank4_base + 0x00000018 * 0x00000004
  #define bt_agcRam1D                                    (*(volatile unsigned int *)bt_agcRam1D_adr)
  #define condScan_adr                                   0x00410780                                                   // modem_adr_bank4_base + 0x00000020 * 0x00000004
  #define condScan                                       (*(volatile unsigned int *)condScan_adr)
  #define clippingDet_adr                                0x00410784                                                   // modem_adr_bank4_base + 0x00000021 * 0x00000004
  #define clippingDet                                    (*(volatile unsigned int *)clippingDet_adr)
  #define rxStatus0_adr                                  0x00410794                                                   // modem_adr_bank4_base + 0x00000025 * 0x00000004
  #define rxStatus0                                      (*(volatile unsigned int *)rxStatus0_adr)
  #define rxRaFrac_adr                                   0x00410798                                                   // modem_adr_bank4_base + 0x00000026 * 0x00000004
  #define rxRaFrac                                       (*(volatile unsigned int *)rxRaFrac_adr)
  #define rxInitAngle_adr                                0x0041079c                                                   // modem_adr_bank4_base + 0x00000027 * 0x00000004
  #define rxInitAngle                                    (*(volatile unsigned int *)rxInitAngle_adr)
  #define txDirectModFreqAdj3_adr                        0x004107a0                                                   // modem_adr_bank4_base + 0x00000028 * 0x00000004
  #define txDirectModFreqAdj3                            (*(volatile unsigned int *)txDirectModFreqAdj3_adr)
  #define txDirectModSet0BiQuad2Den2_adr                 0x004107a4                                                   // modem_adr_bank4_base + 0x00000029 * 0x00000004
  #define txDirectModSet0BiQuad2Den2                     (*(volatile unsigned int *)txDirectModSet0BiQuad2Den2_adr)
  #define txDirectModSet0BiQuad2Den1_adr                 0x004107a8                                                   // modem_adr_bank4_base + 0x0000002a * 0x00000004
  #define txDirectModSet0BiQuad2Den1                     (*(volatile unsigned int *)txDirectModSet0BiQuad2Den1_adr)
  #define txDirectModSet0BiQuad2Num2_adr                 0x004107ac                                                   // modem_adr_bank4_base + 0x0000002b * 0x00000004
  #define txDirectModSet0BiQuad2Num2                     (*(volatile unsigned int *)txDirectModSet0BiQuad2Num2_adr)
  #define txDirectModSet0BiQuad2Num1_adr                 0x004107b0                                                   // modem_adr_bank4_base + 0x0000002c * 0x00000004
  #define txDirectModSet0BiQuad2Num1                     (*(volatile unsigned int *)txDirectModSet0BiQuad2Num1_adr)
  #define txDirectModSet0BiQuad1Den2_adr                 0x004107b4                                                   // modem_adr_bank4_base + 0x0000002d * 0x00000004
  #define txDirectModSet0BiQuad1Den2                     (*(volatile unsigned int *)txDirectModSet0BiQuad1Den2_adr)
  #define txDirectModSet0BiQuad1Den1_adr                 0x004107b8                                                   // modem_adr_bank4_base + 0x0000002e * 0x00000004
  #define txDirectModSet0BiQuad1Den1                     (*(volatile unsigned int *)txDirectModSet0BiQuad1Den1_adr)
  #define txDirectModSet0BiQuad1Num2_adr                 0x004107bc                                                   // modem_adr_bank4_base + 0x0000002f * 0x00000004
  #define txDirectModSet0BiQuad1Num2                     (*(volatile unsigned int *)txDirectModSet0BiQuad1Num2_adr)
  #define txDirectModSet0BiQuad1Num1_adr                 0x004107c0                                                   // modem_adr_bank4_base + 0x00000030 * 0x00000004
  #define txDirectModSet0BiQuad1Num1                     (*(volatile unsigned int *)txDirectModSet0BiQuad1Num1_adr)
  #define txDirectModSet1BiQuad2Den2_adr                 0x004107c4                                                   // modem_adr_bank4_base + 0x00000031 * 0x00000004
  #define txDirectModSet1BiQuad2Den2                     (*(volatile unsigned int *)txDirectModSet1BiQuad2Den2_adr)
  #define txDirectModSet1BiQuad2Den1_adr                 0x004107c8                                                   // modem_adr_bank4_base + 0x00000032 * 0x00000004
  #define txDirectModSet1BiQuad2Den1                     (*(volatile unsigned int *)txDirectModSet1BiQuad2Den1_adr)
  #define txDirectModSet1BiQuad2Num2_adr                 0x004107cc                                                   // modem_adr_bank4_base + 0x00000033 * 0x00000004
  #define txDirectModSet1BiQuad2Num2                     (*(volatile unsigned int *)txDirectModSet1BiQuad2Num2_adr)
  #define txDirectModSet1BiQuad2Num1_adr                 0x004107d0                                                   // modem_adr_bank4_base + 0x00000034 * 0x00000004
  #define txDirectModSet1BiQuad2Num1                     (*(volatile unsigned int *)txDirectModSet1BiQuad2Num1_adr)
  #define txDirectModSet1BiQuad1Den2_adr                 0x004107d4                                                   // modem_adr_bank4_base + 0x00000035 * 0x00000004
  #define txDirectModSet1BiQuad1Den2                     (*(volatile unsigned int *)txDirectModSet1BiQuad1Den2_adr)
  #define txDirectModSet1BiQuad1Den1_adr                 0x004107d8                                                   // modem_adr_bank4_base + 0x00000036 * 0x00000004
  #define txDirectModSet1BiQuad1Den1                     (*(volatile unsigned int *)txDirectModSet1BiQuad1Den1_adr)
  #define txDirectModSet1BiQuad1Num2_adr                 0x004107dc                                                   // modem_adr_bank4_base + 0x00000037 * 0x00000004
  #define txDirectModSet1BiQuad1Num2                     (*(volatile unsigned int *)txDirectModSet1BiQuad1Num2_adr)
  #define txDirectModSet1BiQuad1Num1_adr                 0x004107e0                                                   // modem_adr_bank4_base + 0x00000038 * 0x00000004
  #define txDirectModSet1BiQuad1Num1                     (*(volatile unsigned int *)txDirectModSet1BiQuad1Num1_adr)
  #define rxBlkRssiTarget_adr                            0x004107e4                                                   // modem_adr_bank4_base + 0x00000039 * 0x00000004
  #define rxBlkRssiTarget                                (*(volatile unsigned int *)rxBlkRssiTarget_adr)
  #define modemSpare0_adr                                0x004107e8                                                   // modem_adr_bank4_base + 0x0000003a * 0x00000004
  #define modemSpare0                                    (*(volatile unsigned int *)modemSpare0_adr)
  #define modemSpare1_adr                                0x004107ec                                                   // modem_adr_bank4_base + 0x0000003b * 0x00000004
  #define modemSpare1                                    (*(volatile unsigned int *)modemSpare1_adr)
  #define satDetThresh_adr                               0x004107f0                                                   // modem_adr_bank4_base + 0x0000003c * 0x00000004
  #define satDetThresh                                   (*(volatile unsigned int *)satDetThresh_adr)
  #define satDetThresh1_adr                              0x004107f4                                                   // modem_adr_bank4_base + 0x0000003d * 0x00000004
  #define satDetThresh1                                  (*(volatile unsigned int *)satDetThresh1_adr)
  #define satDetTimer_adr                                0x004107f8                                                   // modem_adr_bank4_base + 0x0000003e * 0x00000004
  #define satDetTimer                                    (*(volatile unsigned int *)satDetTimer_adr)
  #define r_sri_slave_sel_adr                            0x004107fc                                                   // modem_adr_bank4_base + 0x0000003f * 0x00000004
  #define r_sri_slave_sel                                (*(volatile unsigned int *)r_sri_slave_sel_adr)
  #define zbCfg_adr                                      0x00410000                                                   // modem_adr_bank5_base + 0x00000000 * 0x00000004
  #define zbCfg                                          (*(volatile unsigned int *)zbCfg_adr)
  #define zbDemCfg0_adr                                  0x00410004                                                   // modem_adr_bank5_base + 0x00000001 * 0x00000004
  #define zbDemCfg0                                      (*(volatile unsigned int *)zbDemCfg0_adr)
  #define zbDemCfg1_adr                                  0x00410008                                                   // modem_adr_bank5_base + 0x00000002 * 0x00000004
  #define zbDemCfg1                                      (*(volatile unsigned int *)zbDemCfg1_adr)
  #define zbDemCfg2_adr                                  0x0041000c                                                   // modem_adr_bank5_base + 0x00000003 * 0x00000004
  #define zbDemCfg2                                      (*(volatile unsigned int *)zbDemCfg2_adr)
  #define zbDemCfg3_adr                                  0x00410010                                                   // modem_adr_bank5_base + 0x00000004 * 0x00000004
  #define zbDemCfg3                                      (*(volatile unsigned int *)zbDemCfg3_adr)
  #define zbDemCfg4_adr                                  0x00410014                                                   // modem_adr_bank5_base + 0x00000005 * 0x00000004
  #define zbDemCfg4                                      (*(volatile unsigned int *)zbDemCfg4_adr)
  #define zbDemCfg5_adr                                  0x00410018                                                   // modem_adr_bank5_base + 0x00000006 * 0x00000004
  #define zbDemCfg5                                      (*(volatile unsigned int *)zbDemCfg5_adr)
  #define zbDemCfg6_adr                                  0x0041001c                                                   // modem_adr_bank5_base + 0x00000007 * 0x00000004
  #define zbDemCfg6                                      (*(volatile unsigned int *)zbDemCfg6_adr)
  #define zbDemCfg7_adr                                  0x00410020                                                   // modem_adr_bank5_base + 0x00000008 * 0x00000004
  #define zbDemCfg7                                      (*(volatile unsigned int *)zbDemCfg7_adr)
  #define zbDemCfg8_adr                                  0x00410024                                                   // modem_adr_bank5_base + 0x00000009 * 0x00000004
  #define zbDemCfg8                                      (*(volatile unsigned int *)zbDemCfg8_adr)
  #define zbDemCfg9_adr                                  0x00410028                                                   // modem_adr_bank5_base + 0x0000000a * 0x00000004
  #define zbDemCfg9                                      (*(volatile unsigned int *)zbDemCfg9_adr)
  #define zbDemSta_adr                                   0x0041002c                                                   // modem_adr_bank5_base + 0x0000000b * 0x00000004
  #define zbDemSta                                       (*(volatile unsigned int *)zbDemSta_adr)
  #define zbSta_adr                                      0x00410030                                                   // modem_adr_bank5_base + 0x0000000c * 0x00000004
  #define zbSta                                          (*(volatile unsigned int *)zbSta_adr)
  #define zbCcaCfg0_adr                                  0x00410034                                                   // modem_adr_bank5_base + 0x0000000d * 0x00000004
  #define zbCcaCfg0                                      (*(volatile unsigned int *)zbCcaCfg0_adr)
  #define zbCcaCfg1_adr                                  0x00410038                                                   // modem_adr_bank5_base + 0x0000000e * 0x00000004
  #define zbCcaCfg1                                      (*(volatile unsigned int *)zbCcaCfg1_adr)
  #define zbCcaSta_adr                                   0x0041003c                                                   // modem_adr_bank5_base + 0x0000000f * 0x00000004
  #define zbCcaSta                                       (*(volatile unsigned int *)zbCcaSta_adr)
  #define zbFreqOffOvr_adr                               0x00410040                                                   // modem_adr_bank5_base + 0x00000010 * 0x00000004
  #define zbFreqOffOvr                                   (*(volatile unsigned int *)zbFreqOffOvr_adr)
  #define zbSpare0_adr                                   0x00410044                                                   // modem_adr_bank5_base + 0x00000011 * 0x00000004
  #define zbSpare0                                       (*(volatile unsigned int *)zbSpare0_adr)
  #define zbSpare1_adr                                   0x00410048                                                   // modem_adr_bank5_base + 0x00000012 * 0x00000004
  #define zbSpare1                                       (*(volatile unsigned int *)zbSpare1_adr)
  #define zbSpare2_adr                                   0x0041004c                                                   // modem_adr_bank5_base + 0x00000013 * 0x00000004
  #define zbSpare2                                       (*(volatile unsigned int *)zbSpare2_adr)
  #define zbSpare3_adr                                   0x00410050                                                   // modem_adr_bank5_base + 0x00000014 * 0x00000004
  #define zbSpare3                                       (*(volatile unsigned int *)zbSpare3_adr)
  #define zbSpare4_adr                                   0x00410054                                                   // modem_adr_bank5_base + 0x00000015 * 0x00000004
  #define zbSpare4                                       (*(volatile unsigned int *)zbSpare4_adr)
  #define zbSpare5_adr                                   0x00410058                                                   // modem_adr_bank5_base + 0x00000016 * 0x00000004
  #define zbSpare5                                       (*(volatile unsigned int *)zbSpare5_adr)
  #define zbSpare6_adr                                   0x0041005c                                                   // modem_adr_bank5_base + 0x00000017 * 0x00000004
  #define zbSpare6                                       (*(volatile unsigned int *)zbSpare6_adr)
  #define zbSpare7_adr                                   0x00410060                                                   // modem_adr_bank5_base + 0x00000018 * 0x00000004
  #define zbSpare7                                       (*(volatile unsigned int *)zbSpare7_adr)
  #define zbSpare8_adr                                   0x00410064                                                   // modem_adr_bank5_base + 0x00000019 * 0x00000004
  #define zbSpare8                                       (*(volatile unsigned int *)zbSpare8_adr)
  #define zbSpare9_adr                                   0x00410068                                                   // modem_adr_bank5_base + 0x0000001a * 0x00000004
  #define zbSpare9                                       (*(volatile unsigned int *)zbSpare9_adr)
  #define zbSpare10_adr                                  0x0041006c                                                   // modem_adr_bank5_base + 0x0000001b * 0x00000004
  #define zbSpare10                                      (*(volatile unsigned int *)zbSpare10_adr)
  #define zbSpare11_adr                                  0x00410070                                                   // modem_adr_bank5_base + 0x0000001c * 0x00000004
  #define zbSpare11                                      (*(volatile unsigned int *)zbSpare11_adr)
  #define zbSpare12_adr                                  0x00410074                                                   // modem_adr_bank5_base + 0x0000001d * 0x00000004
  #define zbSpare12                                      (*(volatile unsigned int *)zbSpare12_adr)
  #define zbSpare13_adr                                  0x00410078                                                   // modem_adr_bank5_base + 0x0000001e * 0x00000004
  #define zbSpare13                                      (*(volatile unsigned int *)zbSpare13_adr)
  #define zbSpare14_adr                                  0x0041007c                                                   // modem_adr_bank5_base + 0x0000001f * 0x00000004
  #define zbSpare14                                      (*(volatile unsigned int *)zbSpare14_adr)
  #define zbSpare15_adr                                  0x00410080                                                   // modem_adr_bank5_base + 0x00000020 * 0x00000004
  #define zbSpare15                                      (*(volatile unsigned int *)zbSpare15_adr)
  #define zbSpare16_adr                                  0x00410084                                                   // modem_adr_bank5_base + 0x00000021 * 0x00000004
  #define zbSpare16                                      (*(volatile unsigned int *)zbSpare16_adr)
  #define zbSpare17_adr                                  0x00410088                                                   // modem_adr_bank5_base + 0x00000022 * 0x00000004
  #define zbSpare17                                      (*(volatile unsigned int *)zbSpare17_adr)
  #define modemCfg_adr                                   0x0041008c                                                   // modem_adr_bank5_base + 0x00000023 * 0x00000004
  #define modemCfg                                       (*(volatile unsigned int *)modemCfg_adr)
  #define spurChSel0_adr                                 0x00410090                                                   // modem_adr_bank5_base + 0x00000024 * 0x00000004
  #define spurChSel0                                     (*(volatile unsigned int *)spurChSel0_adr)
  #define spurChSel1_adr                                 0x00410094                                                   // modem_adr_bank5_base + 0x00000025 * 0x00000004
  #define spurChSel1                                     (*(volatile unsigned int *)spurChSel1_adr)
  #define spurChSel2_adr                                 0x00410098                                                   // modem_adr_bank5_base + 0x00000026 * 0x00000004
  #define spurChSel2                                     (*(volatile unsigned int *)spurChSel2_adr)
  #define spurChSel3_adr                                 0x0041009c                                                   // modem_adr_bank5_base + 0x00000027 * 0x00000004
  #define spurChSel3                                     (*(volatile unsigned int *)spurChSel3_adr)
  #define spurFreq0_adr                                  0x004100a0                                                   // modem_adr_bank5_base + 0x00000028 * 0x00000004
  #define spurFreq0                                      (*(volatile unsigned int *)spurFreq0_adr)
  #define spurFreqErr0_adr                               0x004100a4                                                   // modem_adr_bank5_base + 0x00000029 * 0x00000004
  #define spurFreqErr0                                   (*(volatile unsigned int *)spurFreqErr0_adr)
  #define spurFreq1_adr                                  0x004100a8                                                   // modem_adr_bank5_base + 0x0000002a * 0x00000004
  #define spurFreq1                                      (*(volatile unsigned int *)spurFreq1_adr)
  #define spurFreqErr1_adr                               0x004100ac                                                   // modem_adr_bank5_base + 0x0000002b * 0x00000004
  #define spurFreqErr1                                   (*(volatile unsigned int *)spurFreqErr1_adr)
  #define spurFreq2_adr                                  0x004100b0                                                   // modem_adr_bank5_base + 0x0000002c * 0x00000004
  #define spurFreq2                                      (*(volatile unsigned int *)spurFreq2_adr)
  #define spurFreqErr2_adr                               0x004100b4                                                   // modem_adr_bank5_base + 0x0000002d * 0x00000004
  #define spurFreqErr2                                   (*(volatile unsigned int *)spurFreqErr2_adr)
  #define spurFreq3_adr                                  0x004100b8                                                   // modem_adr_bank5_base + 0x0000002e * 0x00000004
  #define spurFreq3                                      (*(volatile unsigned int *)spurFreq3_adr)
  #define spurFreqErr3_adr                               0x004100bc                                                   // modem_adr_bank5_base + 0x0000002f * 0x00000004
  #define spurFreqErr3                                   (*(volatile unsigned int *)spurFreqErr3_adr)
  #define adcCtrl_adr                                    0x004100c0                                                   // modem_adr_bank5_base + 0x00000030 * 0x00000004
  #define adcCtrl                                        (*(volatile unsigned int *)adcCtrl_adr)
  #define ck400PuCtrlRx_adr                              0x004100c4                                                   // modem_adr_bank5_base + 0x00000031 * 0x00000004
  #define ck400PuCtrlRx                                  (*(volatile unsigned int *)ck400PuCtrlRx_adr)
  #define spurEstCtrl0_adr                               0x004100c8                                                   // modem_adr_bank5_base + 0x00000032 * 0x00000004
  #define spurEstCtrl0                                   (*(volatile unsigned int *)spurEstCtrl0_adr)
  #define lna1_gainSet0_adr                              0x004100cc                                                   // modem_adr_bank5_base + 0x00000033 * 0x00000004
  #define lna1_gainSet0                                  (*(volatile unsigned int *)lna1_gainSet0_adr)
  #define lna1_gainSet1_adr                              0x004100d0                                                   // modem_adr_bank5_base + 0x00000034 * 0x00000004
  #define lna1_gainSet1                                  (*(volatile unsigned int *)lna1_gainSet1_adr)
  #define testCtrl2_adr                                  0x004100d4                                                   // modem_adr_bank5_base + 0x00000035 * 0x00000004
  #define testCtrl2                                      (*(volatile unsigned int *)testCtrl2_adr)
  #define spurEstCtrl1_adr                               0x004100d8                                                   // modem_adr_bank5_base + 0x00000036 * 0x00000004
  #define spurEstCtrl1                                   (*(volatile unsigned int *)spurEstCtrl1_adr)
  #define spurFreq4_adr                                  0x004100dc                                                   // modem_adr_bank5_base + 0x00000037 * 0x00000004
  #define spurFreq4                                      (*(volatile unsigned int *)spurFreq4_adr)
  #define spurFreqErr4_adr                               0x004100e0                                                   // modem_adr_bank5_base + 0x00000038 * 0x00000004
  #define spurFreqErr4                                   (*(volatile unsigned int *)spurFreqErr4_adr)
  #define spurFreq5_adr                                  0x004100e4                                                   // modem_adr_bank5_base + 0x00000039 * 0x00000004
  #define spurFreq5                                      (*(volatile unsigned int *)spurFreq5_adr)
  #define spurFreqErr5_adr                               0x004100e8                                                   // modem_adr_bank5_base + 0x0000003a * 0x00000004
  #define spurFreqErr5                                   (*(volatile unsigned int *)spurFreqErr5_adr)
  #define vcoBGPuCtrl_adr                                0x004100ec                                                   // modem_adr_bank5_base + 0x0000003b * 0x00000004
  #define vcoBGPuCtrl                                    (*(volatile unsigned int *)vcoBGPuCtrl_adr)
  #define spurFreq6_adr                                  0x004100f0                                                   // modem_adr_bank5_base + 0x0000003c * 0x00000004
  #define spurFreq6                                      (*(volatile unsigned int *)spurFreq6_adr)
  #define spurFreqErr6_adr                               0x004100f4                                                   // modem_adr_bank5_base + 0x0000003d * 0x00000004
  #define spurFreqErr6                                   (*(volatile unsigned int *)spurFreqErr6_adr)
  #define spurFreq7_adr                                  0x004100f8                                                   // modem_adr_bank5_base + 0x0000003e * 0x00000004
  #define spurFreq7                                      (*(volatile unsigned int *)spurFreq7_adr)
  #define spurFreqErr7_adr                               0x004100fc                                                   // modem_adr_bank5_base + 0x0000003f * 0x00000004
  #define spurFreqErr7                                   (*(volatile unsigned int *)spurFreqErr7_adr)
  #define bistStatusMsb_adr                              0x00410118                                                   // modem_adr_bank6_base + 0x00000006 * 0x00000004
  #define bistStatusMsb                                  (*(volatile unsigned int *)bistStatusMsb_adr)
  #define maBec_magavg_accum0_adr                        0x0041011c                                                   // modem_adr_bank6_base + 0x00000007 * 0x00000004
  #define maBec_magavg_accum0                            (*(volatile unsigned int *)maBec_magavg_accum0_adr)
  #define maBec_magavg_accum1_adr                        0x00410120                                                   // modem_adr_bank6_base + 0x00000008 * 0x00000004
  #define maBec_magavg_accum1                            (*(volatile unsigned int *)maBec_magavg_accum1_adr)
  #define maBec_mag2avg_accum0_adr                       0x00410124                                                   // modem_adr_bank6_base + 0x00000009 * 0x00000004
  #define maBec_mag2avg_accum0                           (*(volatile unsigned int *)maBec_mag2avg_accum0_adr)
  #define maBec_mag2avg_accum1_adr                       0x00410128                                                   // modem_adr_bank6_base + 0x0000000a * 0x00000004
  #define maBec_mag2avg_accum1                           (*(volatile unsigned int *)maBec_mag2avg_accum1_adr)
  #define maBec_symbolCnt_adr                            0x0041012c                                                   // modem_adr_bank6_base + 0x0000000b * 0x00000004
  #define maBec_symbolCnt                                (*(volatile unsigned int *)maBec_symbolCnt_adr)
  #define maBec_r_spare_adr                              0x00410130                                                   // modem_adr_bank6_base + 0x0000000c * 0x00000004
  #define maBec_r_spare                                  (*(volatile unsigned int *)maBec_r_spare_adr)
  #define maBec_rw_spare_adr                             0x00410134                                                   // modem_adr_bank6_base + 0x0000000d * 0x00000004
  #define maBec_rw_spare                                 (*(volatile unsigned int *)maBec_rw_spare_adr)
  #define rxTxCtrl_BLE_adr                               0x00410138                                                   // modem_adr_bank6_base + 0x0000000e * 0x00000004
  #define rxTxCtrl_BLE                                   (*(volatile unsigned int *)rxTxCtrl_BLE_adr)
  #define txPuCtrl_BLE_adr                               0x0041013c                                                   // modem_adr_bank6_base + 0x0000000f * 0x00000004
  #define txPuCtrl_BLE                                   (*(volatile unsigned int *)txPuCtrl_BLE_adr)
  #define rxPuCtrl_BLE_adr                               0x00410140                                                   // modem_adr_bank6_base + 0x00000010 * 0x00000004
  #define rxPuCtrl_BLE                                   (*(volatile unsigned int *)rxPuCtrl_BLE_adr)
  #define synthPuCtrl_BLE_adr                            0x00410144                                                   // modem_adr_bank6_base + 0x00000011 * 0x00000004
  #define synthPuCtrl_BLE                                (*(volatile unsigned int *)synthPuCtrl_BLE_adr)
  #define paRampCtrl_BLE_adr                             0x00410148                                                   // modem_adr_bank6_base + 0x00000012 * 0x00000004
  #define paRampCtrl_BLE                                 (*(volatile unsigned int *)paRampCtrl_BLE_adr)
  #define vcoloPuCtrl_BLE_adr                            0x0041014c                                                   // modem_adr_bank6_base + 0x00000013 * 0x00000004
  #define vcoloPuCtrl_BLE                                (*(volatile unsigned int *)vcoloPuCtrl_BLE_adr)
  #define dsadcPuCtrl_BLE_adr                            0x00410150                                                   // modem_adr_bank6_base + 0x00000014 * 0x00000004
  #define dsadcPuCtrl_BLE                                (*(volatile unsigned int *)dsadcPuCtrl_BLE_adr)
  #define trPuCtrl_BLE_adr                               0x00410154                                                   // modem_adr_bank6_base + 0x00000015 * 0x00000004
  #define trPuCtrl_BLE                                   (*(volatile unsigned int *)trPuCtrl_BLE_adr)
  #define tssiPuCtrl_BLE_adr                             0x00410158                                                   // modem_adr_bank6_base + 0x00000016 * 0x00000004
  #define tssiPuCtrl_BLE                                 (*(volatile unsigned int *)tssiPuCtrl_BLE_adr)
  #define ck400PuCtrlRx_BLE_adr                          0x0041015c                                                   // modem_adr_bank6_base + 0x00000017 * 0x00000004
  #define ck400PuCtrlRx_BLE                              (*(volatile unsigned int *)ck400PuCtrlRx_BLE_adr)
  #define vcoBGPuCtrl_BLE_adr                            0x00410160                                                   // modem_adr_bank6_base + 0x00000018 * 0x00000004
  #define vcoBGPuCtrl_BLE                                (*(volatile unsigned int *)vcoBGPuCtrl_BLE_adr)
  #define agcPuCtrl_BLE_adr                              0x00410164                                                   // modem_adr_bank6_base + 0x00000019 * 0x00000004
  #define agcPuCtrl_BLE                                  (*(volatile unsigned int *)agcPuCtrl_BLE_adr)
  #define syncCtrl_BLE_adr                               0x00410168                                                   // modem_adr_bank6_base + 0x0000001a * 0x00000004
  #define syncCtrl_BLE                                   (*(volatile unsigned int *)syncCtrl_BLE_adr)
  #define agcCtrl0_BLE_adr                               0x0041016c                                                   // modem_adr_bank6_base + 0x0000001b * 0x00000004
  #define agcCtrl0_BLE                                   (*(volatile unsigned int *)agcCtrl0_BLE_adr)
  #define agcCtrl1_BLE_adr                               0x00410170                                                   // modem_adr_bank6_base + 0x0000001c * 0x00000004
  #define agcCtrl1_BLE                                   (*(volatile unsigned int *)agcCtrl1_BLE_adr)
  #define ck400PuCtrlTx_adr                              0x00410174                                                   // modem_adr_bank6_base + 0x0000001d * 0x00000004
  #define ck400PuCtrlTx                                  (*(volatile unsigned int *)ck400PuCtrlTx_adr)
  #define ck400PuCtrlTx_BLE_adr                          0x00410178                                                   // modem_adr_bank6_base + 0x0000001e * 0x00000004
  #define ck400PuCtrlTx_BLE                              (*(volatile unsigned int *)ck400PuCtrlTx_BLE_adr)
  #define paPuCtrl_BLE_adr                               0x0041017c                                                   // modem_adr_bank6_base + 0x0000001f * 0x00000004
  #define paPuCtrl_BLE                                   (*(volatile unsigned int *)paPuCtrl_BLE_adr)
  #define weakSymbThresGFSK_adr                          0x00410180                                                   // modem_adr_bank6_base + 0x00000020 * 0x00000004
  #define weakSymbThresGFSK                              (*(volatile unsigned int *)weakSymbThresGFSK_adr)
  #define weakSymbThresDQPSK_adr                         0x00410184                                                   // modem_adr_bank6_base + 0x00000021 * 0x00000004
  #define weakSymbThresDQPSK                             (*(volatile unsigned int *)weakSymbThresDQPSK_adr)
  #define weakSymbThresD8PSK_adr                         0x00410188                                                   // modem_adr_bank6_base + 0x00000022 * 0x00000004
  #define weakSymbThresD8PSK                             (*(volatile unsigned int *)weakSymbThresD8PSK_adr)
  #define rx_pyld_weak_symbol_rd_idx_adr                 0x0041018c                                                   // modem_adr_bank6_base + 0x00000023 * 0x00000004
  #define rx_pyld_weak_symbol_rd_idx                     (*(volatile unsigned int *)rx_pyld_weak_symbol_rd_idx_adr)
  #define rx_pyld_weak_symbol_pos_adr                    0x00410190                                                   // modem_adr_bank6_base + 0x00000024 * 0x00000004
  #define rx_pyld_weak_symbol_pos                        (*(volatile unsigned int *)rx_pyld_weak_symbol_pos_adr)
  #define rxBlockSelBDR_adr                              0x004101a8                                                   // modem_adr_bank6_base + 0x0000002a * 0x00000004
  #define rxBlockSelBDR                                  (*(volatile unsigned int *)rxBlockSelBDR_adr)
  #define rxBlockSelBLE_adr                              0x004101ac                                                   // modem_adr_bank6_base + 0x0000002b * 0x00000004
  #define rxBlockSelBLE                                  (*(volatile unsigned int *)rxBlockSelBLE_adr)
  #define rxBlockSelEDR_adr                              0x004101b0                                                   // modem_adr_bank6_base + 0x0000002c * 0x00000004
  #define rxBlockSelEDR                                  (*(volatile unsigned int *)rxBlockSelEDR_adr)
  #define rxBlockSelLE2_adr                              0x004101b4                                                   // modem_adr_bank6_base + 0x0000002d * 0x00000004
  #define rxBlockSelLE2                                  (*(volatile unsigned int *)rxBlockSelLE2_adr)
  #define rxBlockSelZB_adr                               0x004101b8                                                   // modem_adr_bank6_base + 0x0000002e * 0x00000004
  #define rxBlockSelZB                                   (*(volatile unsigned int *)rxBlockSelZB_adr)
  #define rxBlockSelOvr_adr                              0x004101bc                                                   // modem_adr_bank6_base + 0x0000002f * 0x00000004
  #define rxBlockSelOvr                                  (*(volatile unsigned int *)rxBlockSelOvr_adr)
  #define txDirectModHgfsk12_adr                         0x004101c0                                                   // modem_adr_bank6_base + 0x00000030 * 0x00000004
  #define txDirectModHgfsk12                             (*(volatile unsigned int *)txDirectModHgfsk12_adr)
  #define txDirectModHgfsk11_adr                         0x004101c4                                                   // modem_adr_bank6_base + 0x00000031 * 0x00000004
  #define txDirectModHgfsk11                             (*(volatile unsigned int *)txDirectModHgfsk11_adr)
  #define txDirectModHgfsk10_adr                         0x004101c8                                                   // modem_adr_bank6_base + 0x00000032 * 0x00000004
  #define txDirectModHgfsk10                             (*(volatile unsigned int *)txDirectModHgfsk10_adr)
  #define txDirectModHgfsk9_adr                          0x004101cc                                                   // modem_adr_bank6_base + 0x00000033 * 0x00000004
  #define txDirectModHgfsk9                              (*(volatile unsigned int *)txDirectModHgfsk9_adr)
  #define txDirectModHgfsk8_adr                          0x004101d0                                                   // modem_adr_bank6_base + 0x00000034 * 0x00000004
  #define txDirectModHgfsk8                              (*(volatile unsigned int *)txDirectModHgfsk8_adr)
  #define txDirectModHgfsk7_adr                          0x004101d4                                                   // modem_adr_bank6_base + 0x00000035 * 0x00000004
  #define txDirectModHgfsk7                              (*(volatile unsigned int *)txDirectModHgfsk7_adr)
  #define txDirectModHgfsk6_adr                          0x004101d8                                                   // modem_adr_bank6_base + 0x00000036 * 0x00000004
  #define txDirectModHgfsk6                              (*(volatile unsigned int *)txDirectModHgfsk6_adr)
  #define txDirectModHgfsk5_adr                          0x004101dc                                                   // modem_adr_bank6_base + 0x00000037 * 0x00000004
  #define txDirectModHgfsk5                              (*(volatile unsigned int *)txDirectModHgfsk5_adr)
  #define txDirectModHgfsk4_adr                          0x004101e0                                                   // modem_adr_bank6_base + 0x00000038 * 0x00000004
  #define txDirectModHgfsk4                              (*(volatile unsigned int *)txDirectModHgfsk4_adr)
  #define txDirectModHgfsk3_adr                          0x004101e4                                                   // modem_adr_bank6_base + 0x00000039 * 0x00000004
  #define txDirectModHgfsk3                              (*(volatile unsigned int *)txDirectModHgfsk3_adr)
  #define txDirectModHgfsk2_adr                          0x004101e8                                                   // modem_adr_bank6_base + 0x0000003a * 0x00000004
  #define txDirectModHgfsk2                              (*(volatile unsigned int *)txDirectModHgfsk2_adr)
  #define txDirectModHgfsk1_adr                          0x004101ec                                                   // modem_adr_bank6_base + 0x0000003b * 0x00000004
  #define txDirectModHgfsk1                              (*(volatile unsigned int *)txDirectModHgfsk1_adr)
  #define txDirectModHgfsk0_adr                          0x004101f0                                                   // modem_adr_bank6_base + 0x0000003c * 0x00000004
  #define txDirectModHgfsk0                              (*(volatile unsigned int *)txDirectModHgfsk0_adr)
  #define txDirectModFreqAdj0_adr                        0x004101f4                                                   // modem_adr_bank6_base + 0x0000003d * 0x00000004
  #define txDirectModFreqAdj0                            (*(volatile unsigned int *)txDirectModFreqAdj0_adr)
  #define txDirectModFreqAdj1_adr                        0x004101f8                                                   // modem_adr_bank6_base + 0x0000003e * 0x00000004
  #define txDirectModFreqAdj1                            (*(volatile unsigned int *)txDirectModFreqAdj1_adr)
  #define txDirectModFreqAdj2_adr                        0x004101fc                                                   // modem_adr_bank6_base + 0x0000003f * 0x00000004
  #define txDirectModFreqAdj2                            (*(volatile unsigned int *)txDirectModFreqAdj2_adr)
  #define bdrmlse1_adr                                   0x00410200                                                   // modem_adr_bank7_base + 0x00000000 * 0x00000004
  #define bdrmlse1                                       (*(volatile unsigned int *)bdrmlse1_adr)
  #define aoaEst_01_adr                                  0x00410204                                                   // modem_adr_bank7_base + 0x00000001 * 0x00000004
  #define aoaEst_01                                      (*(volatile unsigned int *)aoaEst_01_adr)
  #define aoaEst_02_adr                                  0x00410208                                                   // modem_adr_bank7_base + 0x00000002 * 0x00000004
  #define aoaEst_02                                      (*(volatile unsigned int *)aoaEst_02_adr)
  #define aoaEst_03_adr                                  0x0041020c                                                   // modem_adr_bank7_base + 0x00000003 * 0x00000004
  #define aoaEst_03                                      (*(volatile unsigned int *)aoaEst_03_adr)
  #define aoaEst_04_adr                                  0x00410210                                                   // modem_adr_bank7_base + 0x00000004 * 0x00000004
  #define aoaEst_04                                      (*(volatile unsigned int *)aoaEst_04_adr)
  #define aoaEst_05_adr                                  0x00410214                                                   // modem_adr_bank7_base + 0x00000005 * 0x00000004
  #define aoaEst_05                                      (*(volatile unsigned int *)aoaEst_05_adr)
  #define aoaEst_06_adr                                  0x00410218                                                   // modem_adr_bank7_base + 0x00000006 * 0x00000004
  #define aoaEst_06                                      (*(volatile unsigned int *)aoaEst_06_adr)
  #define aoaEst_07_adr                                  0x0041021c                                                   // modem_adr_bank7_base + 0x00000007 * 0x00000004
  #define aoaEst_07                                      (*(volatile unsigned int *)aoaEst_07_adr)
  #define aoaEst_08_adr                                  0x00410220                                                   // modem_adr_bank7_base + 0x00000008 * 0x00000004
  #define aoaEst_08                                      (*(volatile unsigned int *)aoaEst_08_adr)
  #define aoaEst_09_adr                                  0x00410224                                                   // modem_adr_bank7_base + 0x00000009 * 0x00000004
  #define aoaEst_09                                      (*(volatile unsigned int *)aoaEst_09_adr)
  #define aoaEst_0a_adr                                  0x00410228                                                   // modem_adr_bank7_base + 0x0000000a * 0x00000004
  #define aoaEst_0a                                      (*(volatile unsigned int *)aoaEst_0a_adr)
  #define aoaEst_0b_adr                                  0x0041022c                                                   // modem_adr_bank7_base + 0x0000000b * 0x00000004
  #define aoaEst_0b                                      (*(volatile unsigned int *)aoaEst_0b_adr)
  #define aoaEst_0c_adr                                  0x00410230                                                   // modem_adr_bank7_base + 0x0000000c * 0x00000004
  #define aoaEst_0c                                      (*(volatile unsigned int *)aoaEst_0c_adr)
  #define aoaEst_0d_adr                                  0x00410234                                                   // modem_adr_bank7_base + 0x0000000d * 0x00000004
  #define aoaEst_0d                                      (*(volatile unsigned int *)aoaEst_0d_adr)
  #define aoaEst_0e_adr                                  0x00410238                                                   // modem_adr_bank7_base + 0x0000000e * 0x00000004
  #define aoaEst_0e                                      (*(volatile unsigned int *)aoaEst_0e_adr)
  #define aoaEst_0f_adr                                  0x0041023c                                                   // modem_adr_bank7_base + 0x0000000f * 0x00000004
  #define aoaEst_0f                                      (*(volatile unsigned int *)aoaEst_0f_adr)
  #define aoaEst_10_adr                                  0x00410240                                                   // modem_adr_bank7_base + 0x00000010 * 0x00000004
  #define aoaEst_10                                      (*(volatile unsigned int *)aoaEst_10_adr)
  #define aoaEst_11_adr                                  0x00410244                                                   // modem_adr_bank7_base + 0x00000011 * 0x00000004
  #define aoaEst_11                                      (*(volatile unsigned int *)aoaEst_11_adr)
  #define aoaEst_12_adr                                  0x00410248                                                   // modem_adr_bank7_base + 0x00000012 * 0x00000004
  #define aoaEst_12                                      (*(volatile unsigned int *)aoaEst_12_adr)
  #define aoaEst_13_adr                                  0x0041024c                                                   // modem_adr_bank7_base + 0x00000013 * 0x00000004
  #define aoaEst_13                                      (*(volatile unsigned int *)aoaEst_13_adr)
  #define aoaEst_14_adr                                  0x00410250                                                   // modem_adr_bank7_base + 0x00000014 * 0x00000004
  #define aoaEst_14                                      (*(volatile unsigned int *)aoaEst_14_adr)
  #define aoaEst_15_adr                                  0x00410254                                                   // modem_adr_bank7_base + 0x00000015 * 0x00000004
  #define aoaEst_15                                      (*(volatile unsigned int *)aoaEst_15_adr)
  #define aoaEst_16_adr                                  0x00410258                                                   // modem_adr_bank7_base + 0x00000016 * 0x00000004
  #define aoaEst_16                                      (*(volatile unsigned int *)aoaEst_16_adr)
  #define aoaEst_17_adr                                  0x0041025c                                                   // modem_adr_bank7_base + 0x00000017 * 0x00000004
  #define aoaEst_17                                      (*(volatile unsigned int *)aoaEst_17_adr)
  #define bdrmlse2_adr                                   0x00410260                                                   // modem_adr_bank7_base + 0x00000018 * 0x00000004
  #define bdrmlse2                                       (*(volatile unsigned int *)bdrmlse2_adr)
  #define bdrmlse3_adr                                   0x00410264                                                   // modem_adr_bank7_base + 0x00000019 * 0x00000004
  #define bdrmlse3                                       (*(volatile unsigned int *)bdrmlse3_adr)
  #define bdrmlse4_adr                                   0x00410268                                                   // modem_adr_bank7_base + 0x0000001a * 0x00000004
  #define bdrmlse4                                       (*(volatile unsigned int *)bdrmlse4_adr)
  #define modIndEst1_adr                                 0x0041026c                                                   // modem_adr_bank7_base + 0x0000001b * 0x00000004
  #define modIndEst1                                     (*(volatile unsigned int *)modIndEst1_adr)
  #define modIndEst2_adr                                 0x00410270                                                   // modem_adr_bank7_base + 0x0000001c * 0x00000004
  #define modIndEst2                                     (*(volatile unsigned int *)modIndEst2_adr)
  #define modIndEst3_adr                                 0x00410274                                                   // modem_adr_bank7_base + 0x0000001d * 0x00000004
  #define modIndEst3                                     (*(volatile unsigned int *)modIndEst3_adr)
  #define modIndEst4_adr                                 0x00410278                                                   // modem_adr_bank7_base + 0x0000001e * 0x00000004
  #define modIndEst4                                     (*(volatile unsigned int *)modIndEst4_adr)
  #define modIndEst5_adr                                 0x0041027c                                                   // modem_adr_bank7_base + 0x0000001f * 0x00000004
  #define modIndEst5                                     (*(volatile unsigned int *)modIndEst5_adr)
  #define modIndEst6_adr                                 0x00410280                                                   // modem_adr_bank7_base + 0x00000020 * 0x00000004
  #define modIndEst6                                     (*(volatile unsigned int *)modIndEst6_adr)
  #define modIndEst7_adr                                 0x00410284                                                   // modem_adr_bank7_base + 0x00000021 * 0x00000004
  #define modIndEst7                                     (*(volatile unsigned int *)modIndEst7_adr)
  #define modIndEst8_adr                                 0x00410288                                                   // modem_adr_bank7_base + 0x00000022 * 0x00000004
  #define modIndEst8                                     (*(volatile unsigned int *)modIndEst8_adr)
  #define modIndEst9_adr                                 0x0041028c                                                   // modem_adr_bank7_base + 0x00000023 * 0x00000004
  #define modIndEst9                                     (*(volatile unsigned int *)modIndEst9_adr)
  #define modIndEstRead1_adr                             0x00410290                                                   // modem_adr_bank7_base + 0x00000024 * 0x00000004
  #define modIndEstRead1                                 (*(volatile unsigned int *)modIndEstRead1_adr)
  #define modIndEstRead2_adr                             0x00410294                                                   // modem_adr_bank7_base + 0x00000025 * 0x00000004
  #define modIndEstRead2                                 (*(volatile unsigned int *)modIndEstRead2_adr)
  #define modIndEstRead3_adr                             0x00410298                                                   // modem_adr_bank7_base + 0x00000026 * 0x00000004
  #define modIndEstRead3                                 (*(volatile unsigned int *)modIndEstRead3_adr)
  #define modIndEstRead4_adr                             0x0041029c                                                   // modem_adr_bank7_base + 0x00000027 * 0x00000004
  #define modIndEstRead4                                 (*(volatile unsigned int *)modIndEstRead4_adr)
  #define modIndEstRead5_adr                             0x004102a0                                                   // modem_adr_bank7_base + 0x00000028 * 0x00000004
  #define modIndEstRead5                                 (*(volatile unsigned int *)modIndEstRead5_adr)
  #define modIndEstRead6_adr                             0x004102a4                                                   // modem_adr_bank7_base + 0x00000029 * 0x00000004
  #define modIndEstRead6                                 (*(volatile unsigned int *)modIndEstRead6_adr)
  #define modIndEstRead7_adr                             0x004102a8                                                   // modem_adr_bank7_base + 0x0000002a * 0x00000004
  #define modIndEstRead7                                 (*(volatile unsigned int *)modIndEstRead7_adr)
  #define modIndEstRead8_adr                             0x004102ac                                                   // modem_adr_bank7_base + 0x0000002b * 0x00000004
  #define modIndEstRead8                                 (*(volatile unsigned int *)modIndEstRead8_adr)
  #define modIndEstRead9_adr                             0x004102b0                                                   // modem_adr_bank7_base + 0x0000002c * 0x00000004
  #define modIndEstRead9                                 (*(volatile unsigned int *)modIndEstRead9_adr)
  #define modIndEstRead10_adr                            0x004102b4                                                   // modem_adr_bank7_base + 0x0000002d * 0x00000004
  #define modIndEstRead10                                (*(volatile unsigned int *)modIndEstRead10_adr)
  #define modIndEstRead11_adr                            0x004102b8                                                   // modem_adr_bank7_base + 0x0000002e * 0x00000004
  #define modIndEstRead11                                (*(volatile unsigned int *)modIndEstRead11_adr)
  #define modIndEstRead12_adr                            0x004102bc                                                   // modem_adr_bank7_base + 0x0000002f * 0x00000004
  #define modIndEstRead12                                (*(volatile unsigned int *)modIndEstRead12_adr)
  #define modIndEstRead13_adr                            0x004102c0                                                   // modem_adr_bank7_base + 0x00000030 * 0x00000004
  #define modIndEstRead13                                (*(volatile unsigned int *)modIndEstRead13_adr)
  #define modIndEstRead14_adr                            0x004102c4                                                   // modem_adr_bank7_base + 0x00000031 * 0x00000004
  #define modIndEstRead14                                (*(volatile unsigned int *)modIndEstRead14_adr)
  #define modIndEstRead15_adr                            0x004102c8                                                   // modem_adr_bank7_base + 0x00000032 * 0x00000004
  #define modIndEstRead15                                (*(volatile unsigned int *)modIndEstRead15_adr)
  #define modIndEstRead16_adr                            0x004102cc                                                   // modem_adr_bank7_base + 0x00000033 * 0x00000004
  #define modIndEstRead16                                (*(volatile unsigned int *)modIndEstRead16_adr)
  #define modIndEstRead17_adr                            0x004102d0                                                   // modem_adr_bank7_base + 0x00000034 * 0x00000004
  #define modIndEstRead17                                (*(volatile unsigned int *)modIndEstRead17_adr)
  #define modIndEstRead18_adr                            0x004102d4                                                   // modem_adr_bank7_base + 0x00000035 * 0x00000004
  #define modIndEstRead18                                (*(volatile unsigned int *)modIndEstRead18_adr)
  #define modIndEstRead19_adr                            0x004102d8                                                   // modem_adr_bank7_base + 0x00000036 * 0x00000004
  #define modIndEstRead19                                (*(volatile unsigned int *)modIndEstRead19_adr)
  #define modIndEstRead20_adr                            0x004102dc                                                   // modem_adr_bank7_base + 0x00000037 * 0x00000004
  #define modIndEstRead20                                (*(volatile unsigned int *)modIndEstRead20_adr)
  #define modIndEstRead21_adr                            0x004102e0                                                   // modem_adr_bank7_base + 0x00000038 * 0x00000004
  #define modIndEstRead21                                (*(volatile unsigned int *)modIndEstRead21_adr)
  #define modIndEstRead22_adr                            0x004102e4                                                   // modem_adr_bank7_base + 0x00000039 * 0x00000004
  #define modIndEstRead22                                (*(volatile unsigned int *)modIndEstRead22_adr)
  #define modIndEstRead23_adr                            0x004102e8                                                   // modem_adr_bank7_base + 0x0000003a * 0x00000004
  #define modIndEstRead23                                (*(volatile unsigned int *)modIndEstRead23_adr)
  #define modIndEstRead24_adr                            0x004102ec                                                   // modem_adr_bank7_base + 0x0000003b * 0x00000004
  #define modIndEstRead24                                (*(volatile unsigned int *)modIndEstRead24_adr)
  #define modIndEstRead25_adr                            0x004102f0                                                   // modem_adr_bank7_base + 0x0000003c * 0x00000004
  #define modIndEstRead25                                (*(volatile unsigned int *)modIndEstRead25_adr)
  #define modIndEstRead26_adr                            0x004102f4                                                   // modem_adr_bank7_base + 0x0000003d * 0x00000004
  #define modIndEstRead26                                (*(volatile unsigned int *)modIndEstRead26_adr)
  #define modIndEstRead27_adr                            0x004102f8                                                   // modem_adr_bank7_base + 0x0000003e * 0x00000004
  #define modIndEstRead27                                (*(volatile unsigned int *)modIndEstRead27_adr)
  #define lnaRssiAverage_adr                             0x004102fc                                                   // modem_adr_bank7_base + 0x0000003f * 0x00000004
  #define lnaRssiAverage                                 (*(volatile unsigned int *)lnaRssiAverage_adr)
  #define modIndEstRead29_adr                            0x00410300                                                   // modem_adr_bank8_base + 0x00000000 * 0x00000004
  #define modIndEstRead29                                (*(volatile unsigned int *)modIndEstRead29_adr)
  #define modIndEstRead30_adr                            0x00410304                                                   // modem_adr_bank8_base + 0x00000001 * 0x00000004
  #define modIndEstRead30                                (*(volatile unsigned int *)modIndEstRead30_adr)
  #define modIndEstRead31_adr                            0x00410308                                                   // modem_adr_bank8_base + 0x00000002 * 0x00000004
  #define modIndEstRead31                                (*(volatile unsigned int *)modIndEstRead31_adr)
  #define modIndEstRead32_adr                            0x0041030c                                                   // modem_adr_bank8_base + 0x00000003 * 0x00000004
  #define modIndEstRead32                                (*(volatile unsigned int *)modIndEstRead32_adr)
  #define modIndEstRead33_adr                            0x00410310                                                   // modem_adr_bank8_base + 0x00000004 * 0x00000004
  #define modIndEstRead33                                (*(volatile unsigned int *)modIndEstRead33_adr)
  #define modIndEstRead34_adr                            0x00410314                                                   // modem_adr_bank8_base + 0x00000005 * 0x00000004
  #define modIndEstRead34                                (*(volatile unsigned int *)modIndEstRead34_adr)
  #define modIndEstRead35_adr                            0x00410318                                                   // modem_adr_bank8_base + 0x00000006 * 0x00000004
  #define modIndEstRead35                                (*(volatile unsigned int *)modIndEstRead35_adr)
  #define aoaEst_47_adr                                  0x0041031c                                                   // modem_adr_bank8_base + 0x00000007 * 0x00000004
  #define aoaEst_47                                      (*(volatile unsigned int *)aoaEst_47_adr)
  #define aoaEst_48_adr                                  0x00410320                                                   // modem_adr_bank8_base + 0x00000008 * 0x00000004
  #define aoaEst_48                                      (*(volatile unsigned int *)aoaEst_48_adr)
  #define aoaEst_49_adr                                  0x00410324                                                   // modem_adr_bank8_base + 0x00000009 * 0x00000004
  #define aoaEst_49                                      (*(volatile unsigned int *)aoaEst_49_adr)
  #define aoaEst_4a_adr                                  0x00410328                                                   // modem_adr_bank8_base + 0x0000000a * 0x00000004
  #define aoaEst_4a                                      (*(volatile unsigned int *)aoaEst_4a_adr)
  #define aoaEst_4b_adr                                  0x0041032c                                                   // modem_adr_bank8_base + 0x0000000b * 0x00000004
  #define aoaEst_4b                                      (*(volatile unsigned int *)aoaEst_4b_adr)
  #define aoaEst_4c_adr                                  0x00410330                                                   // modem_adr_bank8_base + 0x0000000c * 0x00000004
  #define aoaEst_4c                                      (*(volatile unsigned int *)aoaEst_4c_adr)
  #define aoaEst_4d_adr                                  0x00410334                                                   // modem_adr_bank8_base + 0x0000000d * 0x00000004
  #define aoaEst_4d                                      (*(volatile unsigned int *)aoaEst_4d_adr)
  #define aoaEst_4e_adr                                  0x00410338                                                   // modem_adr_bank8_base + 0x0000000e * 0x00000004
  #define aoaEst_4e                                      (*(volatile unsigned int *)aoaEst_4e_adr)
  #define aoaEst_4f_adr                                  0x0041033c                                                   // modem_adr_bank8_base + 0x0000000f * 0x00000004
  #define aoaEst_4f                                      (*(volatile unsigned int *)aoaEst_4f_adr)
  #define le2Ctrl0_adr                                   0x00410340                                                   // modem_adr_bank8_base + 0x00000010 * 0x00000004
  #define le2Ctrl0                                       (*(volatile unsigned int *)le2Ctrl0_adr)
  #define syncCtrl_LE2_adr                               0x00410344                                                   // modem_adr_bank8_base + 0x00000011 * 0x00000004
  #define syncCtrl_LE2                                   (*(volatile unsigned int *)syncCtrl_LE2_adr)
  #define syncThreshTwoLE2_adr                           0x00410348                                                   // modem_adr_bank8_base + 0x00000012 * 0x00000004
  #define syncThreshTwoLE2                               (*(volatile unsigned int *)syncThreshTwoLE2_adr)
  #define txPuCtrl_ZB_adr                                0x0041034c                                                   // modem_adr_bank8_base + 0x00000013 * 0x00000004
  #define txPuCtrl_ZB                                    (*(volatile unsigned int *)txPuCtrl_ZB_adr)
  #define rxPuCtrl_ZB_adr                                0x00410350                                                   // modem_adr_bank8_base + 0x00000014 * 0x00000004
  #define rxPuCtrl_ZB                                    (*(volatile unsigned int *)rxPuCtrl_ZB_adr)
  #define synthPuCtrl_ZB_adr                             0x00410354                                                   // modem_adr_bank8_base + 0x00000015 * 0x00000004
  #define synthPuCtrl_ZB                                 (*(volatile unsigned int *)synthPuCtrl_ZB_adr)
  #define paRampCtrl_ZB_adr                              0x00410358                                                   // modem_adr_bank8_base + 0x00000016 * 0x00000004
  #define paRampCtrl_ZB                                  (*(volatile unsigned int *)paRampCtrl_ZB_adr)
  #define vcoloPuCtrl_ZB_adr                             0x0041035c                                                   // modem_adr_bank8_base + 0x00000017 * 0x00000004
  #define vcoloPuCtrl_ZB                                 (*(volatile unsigned int *)vcoloPuCtrl_ZB_adr)
  #define dsadcPuCtrl_ZB_adr                             0x00410360                                                   // modem_adr_bank8_base + 0x00000018 * 0x00000004
  #define dsadcPuCtrl_ZB                                 (*(volatile unsigned int *)dsadcPuCtrl_ZB_adr)
  #define trPuCtrl_ZB_adr                                0x00410364                                                   // modem_adr_bank8_base + 0x00000019 * 0x00000004
  #define trPuCtrl_ZB                                    (*(volatile unsigned int *)trPuCtrl_ZB_adr)
  #define tssiPuCtrl_ZB_adr                              0x00410368                                                   // modem_adr_bank8_base + 0x0000001a * 0x00000004
  #define tssiPuCtrl_ZB                                  (*(volatile unsigned int *)tssiPuCtrl_ZB_adr)
  #define ck400PuCtrlRx_ZB_adr                           0x0041036c                                                   // modem_adr_bank8_base + 0x0000001b * 0x00000004
  #define ck400PuCtrlRx_ZB                               (*(volatile unsigned int *)ck400PuCtrlRx_ZB_adr)
  #define ck400PuCtrlTx_ZB_adr                           0x00410370                                                   // modem_adr_bank8_base + 0x0000001c * 0x00000004
  #define ck400PuCtrlTx_ZB                               (*(volatile unsigned int *)ck400PuCtrlTx_ZB_adr)
  #define vcoBGPuCtrl_ZB_adr                             0x00410374                                                   // modem_adr_bank8_base + 0x0000001d * 0x00000004
  #define vcoBGPuCtrl_ZB                                 (*(volatile unsigned int *)vcoBGPuCtrl_ZB_adr)
  #define agcPuCtrl_ZB_adr                               0x00410378                                                   // modem_adr_bank8_base + 0x0000001e * 0x00000004
  #define agcPuCtrl_ZB                                   (*(volatile unsigned int *)agcPuCtrl_ZB_adr)
  #define agcCtrl0_LE2_adr                               0x0041037c                                                   // modem_adr_bank8_base + 0x0000001f * 0x00000004
  #define agcCtrl0_LE2                                   (*(volatile unsigned int *)agcCtrl0_LE2_adr)
  #define agcCtrl1_LE2_adr                               0x00410380                                                   // modem_adr_bank8_base + 0x00000020 * 0x00000004
  #define agcCtrl1_LE2                                   (*(volatile unsigned int *)agcCtrl1_LE2_adr)
  #define fastAgcCtrl0_adr                               0x00410384                                                   // modem_adr_bank8_base + 0x00000021 * 0x00000004
  #define fastAgcCtrl0                                   (*(volatile unsigned int *)fastAgcCtrl0_adr)
  #define fastAgcCtrl1_adr                               0x00410388                                                   // modem_adr_bank8_base + 0x00000022 * 0x00000004
  #define fastAgcCtrl1                                   (*(volatile unsigned int *)fastAgcCtrl1_adr)
  #define fastAgcCtrl2_adr                               0x0041038c                                                   // modem_adr_bank8_base + 0x00000023 * 0x00000004
  #define fastAgcCtrl2                                   (*(volatile unsigned int *)fastAgcCtrl2_adr)
  #define fastAgcCtrl3_adr                               0x00410390                                                   // modem_adr_bank8_base + 0x00000024 * 0x00000004
  #define fastAgcCtrl3                                   (*(volatile unsigned int *)fastAgcCtrl3_adr)
  #define pll_valZsync_adr                               0x00410394                                                   // modem_adr_bank8_base + 0x00000025 * 0x00000004
  #define pll_valZsync                                   (*(volatile unsigned int *)pll_valZsync_adr)
  #define agcCtrl0_ZB_adr                                0x00410398                                                   // modem_adr_bank8_base + 0x00000026 * 0x00000004
  #define agcCtrl0_ZB                                    (*(volatile unsigned int *)agcCtrl0_ZB_adr)
  #define agcCtrl1_ZB_adr                                0x0041039c                                                   // modem_adr_bank8_base + 0x00000027 * 0x00000004
  #define agcCtrl1_ZB                                    (*(volatile unsigned int *)agcCtrl1_ZB_adr)
  #define agcCtrl2_ZB_adr                                0x004103a0                                                   // modem_adr_bank8_base + 0x00000028 * 0x00000004
  #define agcCtrl2_ZB                                    (*(volatile unsigned int *)agcCtrl2_ZB_adr)
  #define analog_gain_lmtTbl1_adr                        0x004103a4                                                   // modem_adr_bank8_base + 0x00000029 * 0x00000004
  #define analog_gain_lmtTbl1                            (*(volatile unsigned int *)analog_gain_lmtTbl1_adr)
  #define analog_gain_lmtTbl2_adr                        0x004103a8                                                   // modem_adr_bank8_base + 0x0000002a * 0x00000004
  #define analog_gain_lmtTbl2                            (*(volatile unsigned int *)analog_gain_lmtTbl2_adr)
  #define analog_gain_lmtTbl3_adr                        0x004103ac                                                   // modem_adr_bank8_base + 0x0000002b * 0x00000004
  #define analog_gain_lmtTbl3                            (*(volatile unsigned int *)analog_gain_lmtTbl3_adr)
  #define modIndEstRead28_adr                            0x004103b0                                                   // modem_adr_bank8_base + 0x0000002c * 0x00000004
  #define modIndEstRead28                                (*(volatile unsigned int *)modIndEstRead28_adr)
  #define leMlse1_adr                                    0x004103b4                                                   // modem_adr_bank8_base + 0x0000002d * 0x00000004
  #define leMlse1                                        (*(volatile unsigned int *)leMlse1_adr)
  #define leMlse2_adr                                    0x004103b8                                                   // modem_adr_bank8_base + 0x0000002e * 0x00000004
  #define leMlse2                                        (*(volatile unsigned int *)leMlse2_adr)
  #define leMlse3_adr                                    0x004103bc                                                   // modem_adr_bank8_base + 0x0000002f * 0x00000004
  #define leMlse3                                        (*(volatile unsigned int *)leMlse3_adr)
  #define leMlse4_adr                                    0x004103c0                                                   // modem_adr_bank8_base + 0x00000030 * 0x00000004
  #define leMlse4                                        (*(volatile unsigned int *)leMlse4_adr)
  #define leMlse5_adr                                    0x004103c4                                                   // modem_adr_bank8_base + 0x00000031 * 0x00000004
  #define leMlse5                                        (*(volatile unsigned int *)leMlse5_adr)
  #define leMlse6_adr                                    0x004103c8                                                   // modem_adr_bank8_base + 0x00000032 * 0x00000004
  #define leMlse6                                        (*(volatile unsigned int *)leMlse6_adr)
  #define leMlse7_adr                                    0x004103cc                                                   // modem_adr_bank8_base + 0x00000033 * 0x00000004
  #define leMlse7                                        (*(volatile unsigned int *)leMlse7_adr)
  #define leMlse8_adr                                    0x004103d0                                                   // modem_adr_bank8_base + 0x00000034 * 0x00000004
  #define leMlse8                                        (*(volatile unsigned int *)leMlse8_adr)
  #define leMlse9_adr                                    0x004103d4                                                   // modem_adr_bank8_base + 0x00000035 * 0x00000004
  #define leMlse9                                        (*(volatile unsigned int *)leMlse9_adr)
  #define leMlse10_adr                                   0x004103d8                                                   // modem_adr_bank8_base + 0x00000036 * 0x00000004
  #define leMlse10                                       (*(volatile unsigned int *)leMlse10_adr)
  #define lnaRssiRamAd_adr                               0x004103dc                                                   // modem_adr_bank8_base + 0x00000037 * 0x00000004
  #define lnaRssiRamAd                                   (*(volatile unsigned int *)lnaRssiRamAd_adr)
  #define lnaRssiRamD_adr                                0x004103e0                                                   // modem_adr_bank8_base + 0x00000038 * 0x00000004
  #define lnaRssiRamD                                    (*(volatile unsigned int *)lnaRssiRamD_adr)
  #define lnaRssiEnable_adr                              0x004103e4                                                   // modem_adr_bank8_base + 0x00000039 * 0x00000004
  #define lnaRssiEnable                                  (*(volatile unsigned int *)lnaRssiEnable_adr)
  #define analogSatDetCtrl_adr                           0x004103e8                                                   // modem_adr_bank8_base + 0x0000003a * 0x00000004
  #define analogSatDetCtrl                               (*(volatile unsigned int *)analogSatDetCtrl_adr)
  #define lnaRssiComp0_adr                               0x004103ec                                                   // modem_adr_bank8_base + 0x0000003b * 0x00000004
  #define lnaRssiComp0                                   (*(volatile unsigned int *)lnaRssiComp0_adr)
  #define lnaRssiComp1_adr                               0x004103f0                                                   // modem_adr_bank8_base + 0x0000003c * 0x00000004
  #define lnaRssiComp1                                   (*(volatile unsigned int *)lnaRssiComp1_adr)
  #define lnaRssiComp2_adr                               0x004103f4                                                   // modem_adr_bank8_base + 0x0000003d * 0x00000004
  #define lnaRssiComp2                                   (*(volatile unsigned int *)lnaRssiComp2_adr)
  #define lnaRssiComp3_adr                               0x004103f8                                                   // modem_adr_bank8_base + 0x0000003e * 0x00000004
  #define lnaRssiComp3                                   (*(volatile unsigned int *)lnaRssiComp3_adr)
  #define lnaRssiComp4_adr                               0x004103fc                                                   // modem_adr_bank8_base + 0x0000003f * 0x00000004
  #define lnaRssiComp4                                   (*(volatile unsigned int *)lnaRssiComp4_adr)
  #define btrf_adr_base                                  0x00600000                                                   // rf_adr_base + 0x00000000
  #define btrf_regbank_adr_base                          0x00600400                                                   // rf_adr_base + 0x00000400
  #define rx_adr_base                                    0x00600400                                                   // rf_adr_base + 0x00000400
  #define pll_adr_base                                   0x00600500                                                   // rf_adr_base + 0x00000500
  #define tx_adr_base                                    0x00600600                                                   // rf_adr_base + 0x00000600
  #define misc_adr_base                                  0x00600700                                                   // rf_adr_base + 0x00000700
  #define bs_adr_base                                    0x0060064c                                                   // rf_adr_base + 0x0000064c
  #define btrf_bt_pwrupspare_ovrVal_adr                  0x00600004                                                   // btrf_adr_base + 0x00000004
  #define btrf_bt_pwrupspare_ovrVal                      (*(volatile unsigned int *)btrf_bt_pwrupspare_ovrVal_adr)
  #define btrf_bt_pwrupspare_ovr_adr                     0x00600008                                                   // btrf_adr_base + 0x00000008
  #define btrf_bt_pwrupspare_ovr                         (*(volatile unsigned int *)btrf_bt_pwrupspare_ovr_adr)
  #define btrf_kvco_misc_ctrl_adr                        0x00600010                                                   // btrf_adr_base + 0x00000010
  #define btrf_kvco_misc_ctrl                            (*(volatile unsigned int *)btrf_kvco_misc_ctrl_adr)
  #define btrf_pu_ovr_0_adr                              0x00600014                                                   // btrf_adr_base + 0x00000014
  #define btrf_pu_ovr_0                                  (*(volatile unsigned int *)btrf_pu_ovr_0_adr)
  #define btrf_pu_ovr_val_0_adr                          0x00600018                                                   // btrf_adr_base + 0x00000018
  #define btrf_pu_ovr_val_0                              (*(volatile unsigned int *)btrf_pu_ovr_val_0_adr)
  #define btrf_pu_ovr_1_adr                              0x0060001c                                                   // btrf_adr_base + 0x0000001c
  #define btrf_pu_ovr_1                                  (*(volatile unsigned int *)btrf_pu_ovr_1_adr)
  #define btrf_pu_ovr_val_1_adr                          0x00600020                                                   // btrf_adr_base + 0x00000020
  #define btrf_pu_ovr_val_1                              (*(volatile unsigned int *)btrf_pu_ovr_val_1_adr)
  #define btrf_misc_ovr_adr                              0x00600024                                                   // btrf_adr_base + 0x00000024
  #define btrf_misc_ovr                                  (*(volatile unsigned int *)btrf_misc_ovr_adr)
  #define btrf_misc2_ovr_adr                             0x00600028                                                   // btrf_adr_base + 0x00000028
  #define btrf_misc2_ovr                                 (*(volatile unsigned int *)btrf_misc2_ovr_adr)
  #define btrf_misc_ovrVal_adr                           0x0060002c                                                   // btrf_adr_base + 0x0000002c
  #define btrf_misc_ovrVal                               (*(volatile unsigned int *)btrf_misc_ovrVal_adr)
  #define btrf_misc2_ovrVal_adr                          0x00600030                                                   // btrf_adr_base + 0x00000030
  #define btrf_misc2_ovrVal                              (*(volatile unsigned int *)btrf_misc2_ovrVal_adr)
  #define btrf_hi_lo_inv_adr                             0x00600034                                                   // btrf_adr_base + 0x00000034
  #define btrf_hi_lo_inv                                 (*(volatile unsigned int *)btrf_hi_lo_inv_adr)
  #define btrf_kvco_misc1_ctrl_adr                       0x00600038                                                   // btrf_adr_base + 0x00000038
  #define btrf_kvco_misc1_ctrl                           (*(volatile unsigned int *)btrf_kvco_misc1_ctrl_adr)
  #define btrf_btramstby_adr                             0x0060003c                                                   // btrf_adr_base + 0x0000003c
  #define btrf_btramstby                                 (*(volatile unsigned int *)btrf_btramstby_adr)
  #define btrf_kvco_VHi_regOR_lsb_adr                    0x00600048                                                   // btrf_adr_base + 0x00000048
  #define btrf_kvco_VHi_regOR_lsb                        (*(volatile unsigned int *)btrf_kvco_VHi_regOR_lsb_adr)
  #define btrf_kvco_VHi_regOR_msb_adr                    0x0060004c                                                   // btrf_adr_base + 0x0000004c
  #define btrf_kvco_VHi_regOR_msb                        (*(volatile unsigned int *)btrf_kvco_VHi_regOR_msb_adr)
  #define btrf_kvco_VLo_regOR_lsb_adr                    0x00600050                                                   // btrf_adr_base + 0x00000050
  #define btrf_kvco_VLo_regOR_lsb                        (*(volatile unsigned int *)btrf_kvco_VLo_regOR_lsb_adr)
  #define btrf_kvco_VLo_regOR_msb_adr                    0x00600054                                                   // btrf_adr_base + 0x00000054
  #define btrf_kvco_VLo_regOR_msb                        (*(volatile unsigned int *)btrf_kvco_VLo_regOR_msb_adr)
  #define btrf_kvco_AdcO_regOR_lsb_adr                   0x00600060                                                   // btrf_adr_base + 0x00000060
  #define btrf_kvco_AdcO_regOR_lsb                       (*(volatile unsigned int *)btrf_kvco_AdcO_regOR_lsb_adr)
  #define btrf_kvco_AdcO_regOR_msb_adr                   0x00600064                                                   // btrf_adr_base + 0x00000064
  #define btrf_kvco_AdcO_regOR_msb                       (*(volatile unsigned int *)btrf_kvco_AdcO_regOR_msb_adr)
  #define btrf_kvco_AdcG_regOR_lsb_adr                   0x00600068                                                   // btrf_adr_base + 0x00000068
  #define btrf_kvco_AdcG_regOR_lsb                       (*(volatile unsigned int *)btrf_kvco_AdcG_regOR_lsb_adr)
  #define btrf_kvco_AdcG_regOR_msb_adr                   0x0060006c                                                   // btrf_adr_base + 0x0000006c
  #define btrf_kvco_AdcG_regOR_msb                       (*(volatile unsigned int *)btrf_kvco_AdcG_regOR_msb_adr)
  #define btrf_kvco_PllValOR_lsb_adr                     0x00600070                                                   // btrf_adr_base + 0x00000070
  #define btrf_kvco_PllValOR_lsb                         (*(volatile unsigned int *)btrf_kvco_PllValOR_lsb_adr)
  #define btrf_kvco_AdcInputModeOR_adr                   0x00600074                                                   // btrf_adr_base + 0x00000074
  #define btrf_kvco_AdcInputModeOR                       (*(volatile unsigned int *)btrf_kvco_AdcInputModeOR_adr)
  #define btrf_kvco_IcpOR_lsb_adr                        0x00600078                                                   // btrf_adr_base + 0x00000078
  #define btrf_kvco_IcpOR_lsb                            (*(volatile unsigned int *)btrf_kvco_IcpOR_lsb_adr)
  #define btrf_reg16_adr                                 0x00600058                                                   // btrf_adr_base + 0x00000016 * 0x00000004
  #define btrf_reg16                                     (*(volatile unsigned int *)btrf_reg16_adr)
  #define btrf_reg17_adr                                 0x0060005c                                                   // btrf_adr_base + 0x00000017 * 0x00000004
  #define btrf_reg17                                     (*(volatile unsigned int *)btrf_reg17_adr)
  #define btrf_reg1f_adr                                 0x0060007c                                                   // btrf_adr_base + 0x0000001f * 0x00000004
  #define btrf_reg1f                                     (*(volatile unsigned int *)btrf_reg1f_adr)
  #define btrf_kvco_IcpRxMode_IcpOR_msb_adr              0x00600080                                                   // btrf_adr_base + 0x00000020 * 0x00000004
  #define btrf_kvco_IcpRxMode_IcpOR_msb                  (*(volatile unsigned int *)btrf_kvco_IcpRxMode_IcpOR_msb_adr)
  #define btrf_PowerCorrectdB_LSB_adr                    0x00600084                                                   // btrf_adr_base + 0x00000021 * 0x00000004
  #define btrf_PowerCorrectdB_LSB                        (*(volatile unsigned int *)btrf_PowerCorrectdB_LSB_adr)
  #define btrf_PowerCorrectdB_Linear_MSB_adr             0x00600088                                                   // btrf_adr_base + 0x00000022 * 0x00000004
  #define btrf_PowerCorrectdB_Linear_MSB                 (*(volatile unsigned int *)btrf_PowerCorrectdB_Linear_MSB_adr)
  #define btrf_PowerCorrectLinear_LSB_adr                0x0060008c                                                   // btrf_adr_base + 0x00000023 * 0x00000004
  #define btrf_PowerCorrectLinear_LSB                    (*(volatile unsigned int *)btrf_PowerCorrectLinear_LSB_adr)
  #define btrf_PowerRamp_adr                             0x00600090                                                   // btrf_adr_base + 0x00000024 * 0x00000004
  #define btrf_PowerRamp                                 (*(volatile unsigned int *)btrf_PowerRamp_adr)
  #define btrf_powTarget_LSB_adr                         0x00600094                                                   // btrf_adr_base + 0x00000025 * 0x00000004
  #define btrf_powTarget_LSB                             (*(volatile unsigned int *)btrf_powTarget_LSB_adr)
  #define btrf_powTarget_MSB_adr                         0x00600098                                                   // btrf_adr_base + 0x00000026 * 0x00000004
  #define btrf_powTarget_MSB                             (*(volatile unsigned int *)btrf_powTarget_MSB_adr)
  #define btrf_RDPA_LSB_adr                              0x0060009c                                                   // btrf_adr_base + 0x00000027 * 0x00000004
  #define btrf_RDPA_LSB                                  (*(volatile unsigned int *)btrf_RDPA_LSB_adr)
  #define btrf_RDPA_MSB_adr                              0x006000a0                                                   // btrf_adr_base + 0x00000028 * 0x00000004
  #define btrf_RDPA_MSB                                  (*(volatile unsigned int *)btrf_RDPA_MSB_adr)
  #define btrf_RDPST_LSB_adr                             0x006000a4                                                   // btrf_adr_base + 0x00000029 * 0x00000004
  #define btrf_RDPST_LSB                                 (*(volatile unsigned int *)btrf_RDPST_LSB_adr)
  #define btrf_RDPST_MSB_adr                             0x006000a8                                                   // btrf_adr_base + 0x0000002a * 0x00000004
  #define btrf_RDPST_MSB                                 (*(volatile unsigned int *)btrf_RDPST_MSB_adr)
  #define btrf_RDTS_adr                                  0x006000ac                                                   // btrf_adr_base + 0x0000002b * 0x00000004
  #define btrf_RDTS                                      (*(volatile unsigned int *)btrf_RDTS_adr)
  #define btrf_RMA_LSB_adr                               0x006000b0                                                   // btrf_adr_base + 0x0000002c * 0x00000004
  #define btrf_RMA_LSB                                   (*(volatile unsigned int *)btrf_RMA_LSB_adr)
  #define btrf_RMA_MSB_adr                               0x006000b4                                                   // btrf_adr_base + 0x0000002d * 0x00000004
  #define btrf_RMA_MSB                                   (*(volatile unsigned int *)btrf_RMA_MSB_adr)
  #define btrf_RUPA_LSB_adr                              0x006000b8                                                   // btrf_adr_base + 0x0000002e * 0x00000004
  #define btrf_RUPA_LSB                                  (*(volatile unsigned int *)btrf_RUPA_LSB_adr)
  #define btrf_RUPA_MSB_adr                              0x006000bc                                                   // btrf_adr_base + 0x0000002f * 0x00000004
  #define btrf_RUPA_MSB                                  (*(volatile unsigned int *)btrf_RUPA_MSB_adr)
  #define btrf_RUPCTS_adr                                0x006000c0                                                   // btrf_adr_base + 0x00000030 * 0x00000004
  #define btrf_RUPCTS                                    (*(volatile unsigned int *)btrf_RUPCTS_adr)
  #define btrf_RUPST_LSB_adr                             0x006000c4                                                   // btrf_adr_base + 0x00000031 * 0x00000004
  #define btrf_RUPST_LSB                                 (*(volatile unsigned int *)btrf_RUPST_LSB_adr)
  #define btrf_RUPST_MSB_adr                             0x006000c8                                                   // btrf_adr_base + 0x00000032 * 0x00000004
  #define btrf_RUPST_MSB                                 (*(volatile unsigned int *)btrf_RUPST_MSB_adr)
  #define btrf_RUST_LSB_adr                              0x006000cc                                                   // btrf_adr_base + 0x00000033 * 0x00000004
  #define btrf_RUST_LSB                                  (*(volatile unsigned int *)btrf_RUST_LSB_adr)
  #define btrf_RUST_MSB_adr                              0x006000d0                                                   // btrf_adr_base + 0x00000034 * 0x00000004
  #define btrf_RUST_MSB                                  (*(volatile unsigned int *)btrf_RUST_MSB_adr)
  #define btrf_RUTS_adr                                  0x006000d4                                                   // btrf_adr_base + 0x00000035 * 0x00000004
  #define btrf_RUTS                                      (*(volatile unsigned int *)btrf_RUTS_adr)
  #define btrf_TSSIreadOffset_LSB_adr                    0x006000d8                                                   // btrf_adr_base + 0x00000036 * 0x00000004
  #define btrf_TSSIreadOffset_LSB                        (*(volatile unsigned int *)btrf_TSSIreadOffset_LSB_adr)
  #define btrf_TSSIreadOffset_MSB_adr                    0x006000dc                                                   // btrf_adr_base + 0x00000037 * 0x00000004
  #define btrf_TSSIreadOffset_MSB                        (*(volatile unsigned int *)btrf_TSSIreadOffset_MSB_adr)
  #define btrf_tssiSettleTime_adr                        0x006000e0                                                   // btrf_adr_base + 0x00000038 * 0x00000004
  #define btrf_tssiSettleTime                            (*(volatile unsigned int *)btrf_tssiSettleTime_adr)
  #define btrf_reg39_adr                                 0x006000e4                                                   // btrf_adr_base + 0x00000039 * 0x00000004
  #define btrf_reg39                                     (*(volatile unsigned int *)btrf_reg39_adr)
  #define btrf_TSSIRxOffset_LSB_adr                      0x006000e8                                                   // btrf_adr_base + 0x0000003a * 0x00000004
  #define btrf_TSSIRxOffset_LSB                          (*(volatile unsigned int *)btrf_TSSIRxOffset_LSB_adr)
  #define btrf_TSSIRxOffset_MSB_adr                      0x006000ec                                                   // btrf_adr_base + 0x0000003b * 0x00000004
  #define btrf_TSSIRxOffset_MSB                          (*(volatile unsigned int *)btrf_TSSIRxOffset_MSB_adr)
  #define btrf_TSSIRxSlope_adr                           0x006000f0                                                   // btrf_adr_base + 0x0000003c * 0x00000004
  #define btrf_TSSIRxSlope                               (*(volatile unsigned int *)btrf_TSSIRxSlope_adr)
  #define btrf_TSSITxOffset_LSB_adr                      0x006000f4                                                   // btrf_adr_base + 0x0000003d * 0x00000004
  #define btrf_TSSITxOffset_LSB                          (*(volatile unsigned int *)btrf_TSSITxOffset_LSB_adr)
  #define btrf_TSSITxOffset_MSB_adr                      0x006000f8                                                   // btrf_adr_base + 0x0000003e * 0x00000004
  #define btrf_TSSITxOffset_MSB                          (*(volatile unsigned int *)btrf_TSSITxOffset_MSB_adr)
  #define btrf_TSSITxSlope_adr                           0x006000fc                                                   // btrf_adr_base + 0x0000003f * 0x00000004
  #define btrf_TSSITxSlope                               (*(volatile unsigned int *)btrf_TSSITxSlope_adr)
  #define btrf_rssi_adr                                  0x00600100                                                   // btrf_adr_base + 0x00000040 * 0x00000004
  #define btrf_rssi                                      (*(volatile unsigned int *)btrf_rssi_adr)
  #define btrf_pll_val_adr                               0x00600104                                                   // btrf_adr_base + 0x00000041 * 0x00000004
  #define btrf_pll_val                                   (*(volatile unsigned int *)btrf_pll_val_adr)
  #define btrf_kvco_IcpRxMode_lsb_adr                    0x00600108                                                   // btrf_adr_base + 0x00000042 * 0x00000004
  #define btrf_kvco_IcpRxMode_lsb                        (*(volatile unsigned int *)btrf_kvco_IcpRxMode_lsb_adr)
  #define btrf_pwr_cntl_adr                              0x0060010c                                                   // btrf_adr_base + 0x00000043 * 0x00000004
  #define btrf_pwr_cntl                                  (*(volatile unsigned int *)btrf_pwr_cntl_adr)
  #define btrf_kvco_IcpAdcCal_lsb_adr                    0x00600110                                                   // btrf_adr_base + 0x00000044 * 0x00000004
  #define btrf_kvco_IcpAdcCal_lsb                        (*(volatile unsigned int *)btrf_kvco_IcpAdcCal_lsb_adr)
  #define btrf_rf_pll_rxSlidLoBaseOffset0_adr            0x00600114                                                   // btrf_adr_base + 0x00000045 * 0x00000004
  #define btrf_rf_pll_rxSlidLoBaseOffset0                (*(volatile unsigned int *)btrf_rf_pll_rxSlidLoBaseOffset0_adr)
  #define btrf_rf_pll_rxSlidLoBaseOffset1_adr            0x00600118                                                   // btrf_adr_base + 0x00000046 * 0x00000004
  #define btrf_rf_pll_rxSlidLoBaseOffset1                (*(volatile unsigned int *)btrf_rf_pll_rxSlidLoBaseOffset1_adr)
  #define btrf_rf_pll_rxSlidHiBaseOffset0_adr            0x0060011c                                                   // btrf_adr_base + 0x00000047 * 0x00000004
  #define btrf_rf_pll_rxSlidHiBaseOffset0                (*(volatile unsigned int *)btrf_rf_pll_rxSlidHiBaseOffset0_adr)
  #define btrf_rf_pll_rxSlidHiBaseOffset1_adr            0x00600120                                                   // btrf_adr_base + 0x00000048 * 0x00000004
  #define btrf_rf_pll_rxSlidHiBaseOffset1                (*(volatile unsigned int *)btrf_rf_pll_rxSlidHiBaseOffset1_adr)
  #define btrf_rf_pll_tx_base_0_adr                      0x00600124                                                   // btrf_adr_base + 0x00000049 * 0x00000004
  #define btrf_rf_pll_tx_base_0                          (*(volatile unsigned int *)btrf_rf_pll_tx_base_0_adr)
  #define btrf_rf_pll_tx_base_1_adr                      0x00600128                                                   // btrf_adr_base + 0x0000004a * 0x00000004
  #define btrf_rf_pll_tx_base_1                          (*(volatile unsigned int *)btrf_rf_pll_tx_base_1_adr)
  #define btrf_rf_pll_tx_base_2_adr                      0x0060012c                                                   // btrf_adr_base + 0x0000004b * 0x00000004
  #define btrf_rf_pll_tx_base_2                          (*(volatile unsigned int *)btrf_rf_pll_tx_base_2_adr)
  #define btrf_rf_pll_tx_delta_0_adr                     0x00600130                                                   // btrf_adr_base + 0x0000004c * 0x00000004
  #define btrf_rf_pll_tx_delta_0                         (*(volatile unsigned int *)btrf_rf_pll_tx_delta_0_adr)
  #define btrf_rf_pll_tx_delta_1_adr                     0x00600134                                                   // btrf_adr_base + 0x0000004d * 0x00000004
  #define btrf_rf_pll_tx_delta_1                         (*(volatile unsigned int *)btrf_rf_pll_tx_delta_1_adr)
  #define btrf_rf_pll_rx_base_0_adr                      0x00600138                                                   // btrf_adr_base + 0x0000004e * 0x00000004
  #define btrf_rf_pll_rx_base_0                          (*(volatile unsigned int *)btrf_rf_pll_rx_base_0_adr)
  #define btrf_rf_pll_rx_base_1_adr                      0x0060013c                                                   // btrf_adr_base + 0x0000004f * 0x00000004
  #define btrf_rf_pll_rx_base_1                          (*(volatile unsigned int *)btrf_rf_pll_rx_base_1_adr)
  #define btrf_rf_pll_rx_base_2_adr                      0x00600140                                                   // btrf_adr_base + 0x00000050 * 0x00000004
  #define btrf_rf_pll_rx_base_2                          (*(volatile unsigned int *)btrf_rf_pll_rx_base_2_adr)
  #define btrf_rf_pll_rx_delta_0_adr                     0x00600144                                                   // btrf_adr_base + 0x00000051 * 0x00000004
  #define btrf_rf_pll_rx_delta_0                         (*(volatile unsigned int *)btrf_rf_pll_rx_delta_0_adr)
  #define btrf_rf_pll_rx_delta_1_adr                     0x00600148                                                   // btrf_adr_base + 0x00000052 * 0x00000004
  #define btrf_rf_pll_rx_delta_1                         (*(volatile unsigned int *)btrf_rf_pll_rx_delta_1_adr)
  #define btrf_rf_pll_ext_adr                            0x0060014c                                                   // btrf_adr_base + 0x00000053 * 0x00000004
  #define btrf_rf_pll_ext                                (*(volatile unsigned int *)btrf_rf_pll_ext_adr)
  #define btrf_rf_pll_rxSlidLoDeltaOffset_adr            0x00600150                                                   // btrf_adr_base + 0x00000054 * 0x00000004
  #define btrf_rf_pll_rxSlidLoDeltaOffset                (*(volatile unsigned int *)btrf_rf_pll_rxSlidLoDeltaOffset_adr)
  #define btrf_rf_pll_rxSlidHiDeltaOffset_adr            0x00600154                                                   // btrf_adr_base + 0x00000055 * 0x00000004
  #define btrf_rf_pll_rxSlidHiDeltaOffset                (*(volatile unsigned int *)btrf_rf_pll_rxSlidHiDeltaOffset_adr)
  #define btrf_kvco_IcpKvcoCal_lsb_adr                   0x00600158                                                   // btrf_adr_base + 0x00000056 * 0x00000004
  #define btrf_kvco_IcpKvcoCal_lsb                       (*(volatile unsigned int *)btrf_kvco_IcpKvcoCal_lsb_adr)
  #define btrf_vco_lut_data_out_1_adr                    0x0060015c                                                   // btrf_adr_base + 0x00000057 * 0x00000004
  #define btrf_vco_lut_data_out_1                        (*(volatile unsigned int *)btrf_vco_lut_data_out_1_adr)
  #define btrf_pll_offset_adr                            0x00600160                                                   // btrf_adr_base + 0x00000058 * 0x00000004
  #define btrf_pll_offset                                (*(volatile unsigned int *)btrf_pll_offset_adr)
  #define btrf_pwrRamAdLEV0_adr                          0x00600164                                                   // btrf_adr_base + 0x00000059 * 0x00000004
  #define btrf_pwrRamAdLEV0                              (*(volatile unsigned int *)btrf_pwrRamAdLEV0_adr)
  #define btrf_pwrRamAdLEV1_adr                          0x00600168                                                   // btrf_adr_base + 0x0000005a * 0x00000004
  #define btrf_pwrRamAdLEV1                              (*(volatile unsigned int *)btrf_pwrRamAdLEV1_adr)
  #define btrf_pwrRamAdLEV2_adr                          0x0060016c                                                   // btrf_adr_base + 0x0000005b * 0x00000004
  #define btrf_pwrRamAdLEV2                              (*(volatile unsigned int *)btrf_pwrRamAdLEV2_adr)
  #define btrf_pwrRamAdLEV3_adr                          0x00600170                                                   // btrf_adr_base + 0x0000005c * 0x00000004
  #define btrf_pwrRamAdLEV3                              (*(volatile unsigned int *)btrf_pwrRamAdLEV3_adr)
  #define btrf_pwrRamAdLEV4_adr                          0x00600174                                                   // btrf_adr_base + 0x0000005d * 0x00000004
  #define btrf_pwrRamAdLEV4                              (*(volatile unsigned int *)btrf_pwrRamAdLEV4_adr)
  #define btrf_pwrRamAdLEV5_adr                          0x00600178                                                   // btrf_adr_base + 0x0000005e * 0x00000004
  #define btrf_pwrRamAdLEV5                              (*(volatile unsigned int *)btrf_pwrRamAdLEV5_adr)
  #define btrf_pwrRamAdLEV6_adr                          0x0060017c                                                   // btrf_adr_base + 0x0000005f * 0x00000004
  #define btrf_pwrRamAdLEV6                              (*(volatile unsigned int *)btrf_pwrRamAdLEV6_adr)
  #define btrf_reg60_adr                                 0x00600180                                                   // btrf_adr_base + 0x00000060 * 0x00000004
  #define btrf_reg60                                     (*(volatile unsigned int *)btrf_reg60_adr)
  #define btrf_pwrRamAdLEV7_adr                          0x00600184                                                   // btrf_adr_base + 0x00000061 * 0x00000004
  #define btrf_pwrRamAdLEV7                              (*(volatile unsigned int *)btrf_pwrRamAdLEV7_adr)
  #define btrf_pwrRamAdLEV8_adr                          0x00600188                                                   // btrf_adr_base + 0x00000062 * 0x00000004
  #define btrf_pwrRamAdLEV8                              (*(volatile unsigned int *)btrf_pwrRamAdLEV8_adr)
  #define btrf_pwrRamAdLEV9_adr                          0x0060018c                                                   // btrf_adr_base + 0x00000063 * 0x00000004
  #define btrf_pwrRamAdLEV9                              (*(volatile unsigned int *)btrf_pwrRamAdLEV9_adr)
  #define btrf_pwrRamAdLEV10_adr                         0x00600190                                                   // btrf_adr_base + 0x00000064 * 0x00000004
  #define btrf_pwrRamAdLEV10                             (*(volatile unsigned int *)btrf_pwrRamAdLEV10_adr)
  #define btrf_vco_cal_val_adr                           0x00600194                                                   // btrf_adr_base + 0x00000065 * 0x00000004
  #define btrf_vco_cal_val                               (*(volatile unsigned int *)btrf_vco_cal_val_adr)
  #define btrf_pwrRamAdLEV11_adr                         0x00600198                                                   // btrf_adr_base + 0x00000066 * 0x00000004
  #define btrf_pwrRamAdLEV11                             (*(volatile unsigned int *)btrf_pwrRamAdLEV11_adr)
  #define btrf_pwrRamAdLEV0_BLE_adr                      0x0060019c                                                   // btrf_adr_base + 0x00000067 * 0x00000004
  #define btrf_pwrRamAdLEV0_BLE                          (*(volatile unsigned int *)btrf_pwrRamAdLEV0_BLE_adr)
  #define btrf_kvco_IcpKvcoCal_AdcCal_msb_adr            0x006001a0                                                   // btrf_adr_base + 0x00000068 * 0x00000004
  #define btrf_kvco_IcpKvcoCal_AdcCal_msb                (*(volatile unsigned int *)btrf_kvco_IcpKvcoCal_AdcCal_msb_adr)
  #define btrf_kvco_DelayKvcoStart_KvcoCal_msb_adr       0x006001a4                                                   // btrf_adr_base + 0x00000069 * 0x00000004
  #define btrf_kvco_DelayKvcoStart_KvcoCal_msb           (*(volatile unsigned int *)btrf_kvco_DelayKvcoStart_KvcoCal_msb_adr)
  #define btrf_reg6a_adr                                 0x006001a8                                                   // btrf_adr_base + 0x0000006a * 0x00000004
  #define btrf_reg6a                                     (*(volatile unsigned int *)btrf_reg6a_adr)
  #define btrf_kvco_CalTssiOR_lsb_adr                    0x006001ac                                                   // btrf_adr_base + 0x0000006b * 0x00000004
  #define btrf_kvco_CalTssiOR_lsb                        (*(volatile unsigned int *)btrf_kvco_CalTssiOR_lsb_adr)
  #define btrf_kvco_CalTssiOR_msb_adr                    0x006001b0                                                   // btrf_adr_base + 0x000001b0
  #define btrf_kvco_CalTssiOR_msb                        (*(volatile unsigned int *)btrf_kvco_CalTssiOR_msb_adr)
  #define btrf_kvco_IcpConvNom_lsb_adr                   0x006001b4                                                   // btrf_adr_base + 0x000001b4
  #define btrf_kvco_IcpConvNom_lsb                       (*(volatile unsigned int *)btrf_kvco_IcpConvNom_lsb_adr)
  #define btrf_kvco_IcpConvNom_msb_adr                   0x006001b8                                                   // btrf_adr_base + 0x000001b8
  #define btrf_kvco_IcpConvNom_msb                       (*(volatile unsigned int *)btrf_kvco_IcpConvNom_msb_adr)
  #define btrf_xtal_bb_gate_adr                          0x006001bc                                                   // btrf_adr_base + 0x000001bc
  #define btrf_xtal_bb_gate                              (*(volatile unsigned int *)btrf_xtal_bb_gate_adr)
  #define btrf_delaystartwarm_lsb_adr                    0x006001c0                                                   // btrf_adr_base + 0x000001c0
  #define btrf_delaystartwarm_lsb                        (*(volatile unsigned int *)btrf_delaystartwarm_lsb_adr)
  #define btrf_delaystartwarm_msb_adr                    0x006001c4                                                   // btrf_adr_base + 0x000001c4
  #define btrf_delaystartwarm_msb                        (*(volatile unsigned int *)btrf_delaystartwarm_msb_adr)
  #define btrf_PauseCnt_lsb_adr                          0x006001c8                                                   // btrf_adr_base + 0x000001c8
  #define btrf_PauseCnt_lsb                              (*(volatile unsigned int *)btrf_PauseCnt_lsb_adr)
  #define btrf_PauseCnt_msb_adr                          0x006001cc                                                   // btrf_adr_base + 0x000001cc
  #define btrf_PauseCnt_msb                              (*(volatile unsigned int *)btrf_PauseCnt_msb_adr)
  #define btrf_XtalCount_lsb_adr                         0x006001d0                                                   // btrf_adr_base + 0x000001d0
  #define btrf_XtalCount_lsb                             (*(volatile unsigned int *)btrf_XtalCount_lsb_adr)
  #define btrf_XtalCount_msb_adr                         0x006001d4                                                   // btrf_adr_base + 0x000001d4
  #define btrf_XtalCount_msb                             (*(volatile unsigned int *)btrf_XtalCount_msb_adr)
  #define btrf_DeltaPllVal_adr                           0x006001d8                                                   // btrf_adr_base + 0x000001d8
  #define btrf_DeltaPllVal                               (*(volatile unsigned int *)btrf_DeltaPllVal_adr)
  #define btrf_TargetCountBase_lsb_adr                   0x006001dc                                                   // btrf_adr_base + 0x000001dc
  #define btrf_TargetCountBase_lsb                       (*(volatile unsigned int *)btrf_TargetCountBase_lsb_adr)
  #define btrf_TargetCountBase_msb_adr                   0x006001e0                                                   // btrf_adr_base + 0x000001e0
  #define btrf_TargetCountBase_msb                       (*(volatile unsigned int *)btrf_TargetCountBase_msb_adr)
  #define btrf_TargetCountCenter_lsb_adr                 0x006001e4                                                   // btrf_adr_base + 0x000001e4
  #define btrf_TargetCountCenter_lsb                     (*(volatile unsigned int *)btrf_TargetCountCenter_lsb_adr)
  #define btrf_TargetCountCenter_msb_adr                 0x006001e8                                                   // btrf_adr_base + 0x000001e8
  #define btrf_TargetCountCenter_msb                     (*(volatile unsigned int *)btrf_TargetCountCenter_msb_adr)
  #define btrf_NormCountLeft_lsb_adr                     0x006001ec                                                   // btrf_adr_base + 0x000001ec
  #define btrf_NormCountLeft_lsb                         (*(volatile unsigned int *)btrf_NormCountLeft_lsb_adr)
  #define btrf_NormCountLeft_msb_adr                     0x006001f0                                                   // btrf_adr_base + 0x000001f0
  #define btrf_NormCountLeft_msb                         (*(volatile unsigned int *)btrf_NormCountLeft_msb_adr)
  #define btrf_NormCountRight_lsb_adr                    0x006001f4                                                   // btrf_adr_base + 0x000001f4
  #define btrf_NormCountRight_lsb                        (*(volatile unsigned int *)btrf_NormCountRight_lsb_adr)
  #define btrf_NormCountRight_msb_adr                    0x006001f8                                                   // btrf_adr_base + 0x000001f8
  #define btrf_NormCountRight_msb                        (*(volatile unsigned int *)btrf_NormCountRight_msb_adr)
  #define btrf_FreqResolution_adr                        0x006001fc                                                   // btrf_adr_base + 0x000001fc
  #define btrf_FreqResolution                            (*(volatile unsigned int *)btrf_FreqResolution_adr)
  #define btrf_InitCapATx_lsb_adr                        0x00600200                                                   // btrf_adr_base + 0x00000200
  #define btrf_InitCapATx_lsb                            (*(volatile unsigned int *)btrf_InitCapATx_lsb_adr)
  #define btrf_InitCapATx_msb_adr                        0x00600204                                                   // btrf_adr_base + 0x00000204
  #define btrf_InitCapATx_msb                            (*(volatile unsigned int *)btrf_InitCapATx_msb_adr)
  #define btrf_InitCapBTx_lsb_adr                        0x00600208                                                   // btrf_adr_base + 0x00000208
  #define btrf_InitCapBTx_lsb                            (*(volatile unsigned int *)btrf_InitCapBTx_lsb_adr)
  #define btrf_InitCapBTx_msb_adr                        0x0060020c                                                   // btrf_adr_base + 0x0000020c
  #define btrf_InitCapBTx_msb                            (*(volatile unsigned int *)btrf_InitCapBTx_msb_adr)
  #define btrf_vco_new_ctrl00_adr                        0x00600210                                                   // btrf_adr_base + 0x00000210
  #define btrf_vco_new_ctrl00                            (*(volatile unsigned int *)btrf_vco_new_ctrl00_adr)
  #define btrf_ErrorThres_adr                            0x00600214                                                   // btrf_adr_base + 0x00000214
  #define btrf_ErrorThres                                (*(volatile unsigned int *)btrf_ErrorThres_adr)
  #define btrf_UpdateSel_adr                             0x00600218                                                   // btrf_adr_base + 0x00000218
  #define btrf_UpdateSel                                 (*(volatile unsigned int *)btrf_UpdateSel_adr)
  #define btrf_vco_new_ctrl01_adr                        0x0060021c                                                   // btrf_adr_base + 0x0000021c
  #define btrf_vco_new_ctrl01                            (*(volatile unsigned int *)btrf_vco_new_ctrl01_adr)
  #define btrf_TestVcoCnt_adr                            0x00600220                                                   // btrf_adr_base + 0x00000220
  #define btrf_TestVcoCnt                                (*(volatile unsigned int *)btrf_TestVcoCnt_adr)
  #define btrf_vco_slopeInOvrVal_lsb_adr                 0x00600224                                                   // btrf_adr_base + 0x00000224
  #define btrf_vco_slopeInOvrVal_lsb                     (*(volatile unsigned int *)btrf_vco_slopeInOvrVal_lsb_adr)
  #define btrf_vco_slopeInOvrVal_msb_adr                 0x00600228                                                   // btrf_adr_base + 0x00000228
  #define btrf_vco_slopeInOvrVal_msb                     (*(volatile unsigned int *)btrf_vco_slopeInOvrVal_msb_adr)
  #define btrf_vcocal_SpareIn_adr                        0x0060022c                                                   // btrf_adr_base + 0x0000022c
  #define btrf_vcocal_SpareIn                            (*(volatile unsigned int *)btrf_vcocal_SpareIn_adr)
  #define btrf_CalCapRBMode_adr                          0x00600230                                                   // btrf_adr_base + 0x00000230
  #define btrf_CalCapRBMode                              (*(volatile unsigned int *)btrf_CalCapRBMode_adr)
  #define btrf_CalCapRB_lsb_adr                          0x00600234                                                   // btrf_adr_base + 0x00000234
  #define btrf_CalCapRB_lsb                              (*(volatile unsigned int *)btrf_CalCapRB_lsb_adr)
  #define btrf_CalCapRB_msb_adr                          0x00600238                                                   // btrf_adr_base + 0x00000238
  #define btrf_CalCapRB_msb                              (*(volatile unsigned int *)btrf_CalCapRB_msb_adr)
  #define btrf_kvco_KvcoCalRB_lsb_adr                    0x00600274                                                   // btrf_adr_base + 0x00000274
  #define btrf_kvco_KvcoCalRB_lsb                        (*(volatile unsigned int *)btrf_kvco_KvcoCalRB_lsb_adr)
  #define btrf_kvco_KvcoCalRB_msb_adr                    0x00600278                                                   // btrf_adr_base + 0x00000278
  #define btrf_kvco_KvcoCalRB_msb                        (*(volatile unsigned int *)btrf_kvco_KvcoCalRB_msb_adr)
  #define btrf_InitVcoCalFSM_adr                         0x0060027c                                                   // btrf_adr_base + 0x0000027c
  #define btrf_InitVcoCalFSM                             (*(volatile unsigned int *)btrf_InitVcoCalFSM_adr)
  #define btrf_VcoCalDelayEnd_lsb_adr                    0x00600280                                                   // btrf_adr_base + 0x00000280
  #define btrf_VcoCalDelayEnd_lsb                        (*(volatile unsigned int *)btrf_VcoCalDelayEnd_lsb_adr)
  #define btrf_VcoCalDelayEnd_msb_adr                    0x00600284                                                   // btrf_adr_base + 0x00000284
  #define btrf_VcoCalDelayEnd_msb                        (*(volatile unsigned int *)btrf_VcoCalDelayEnd_msb_adr)
  #define btrf_ITRIM_PA2_gfsk_adr                        0x0060028c                                                   // btrf_adr_base + 0x0000028c
  #define btrf_ITRIM_PA2_gfsk                            (*(volatile unsigned int *)btrf_ITRIM_PA2_gfsk_adr)
  #define btrf_PA_DRV_GC_BIN1_gfsk_adr                   0x0060029c                                                   // btrf_adr_base + 0x0000029c
  #define btrf_PA_DRV_GC_BIN1_gfsk                       (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN1_gfsk_adr)
  #define btrf_PA_DRV_GC_BIN2_gfsk_adr                   0x006002a0                                                   // btrf_adr_base + 0x000002a0
  #define btrf_PA_DRV_GC_BIN2_gfsk                       (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN2_gfsk_adr)
  #define btrf_PA_DRV_GC_BIN3_gfsk_adr                   0x006002a4                                                   // btrf_adr_base + 0x000002a4
  #define btrf_PA_DRV_GC_BIN3_gfsk                       (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN3_gfsk_adr)
  #define btrf_PA_DRV_GC_BIN4_gfsk_adr                   0x006002a8                                                   // btrf_adr_base + 0x000002a8
  #define btrf_PA_DRV_GC_BIN4_gfsk                       (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN4_gfsk_adr)
  #define btrf_PA_DRV_GC_BIN5_gfsk_adr                   0x006002ac                                                   // btrf_adr_base + 0x000002ac
  #define btrf_PA_DRV_GC_BIN5_gfsk                       (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN5_gfsk_adr)
  #define btrf_TX_BACKUP_REG_gfsk_adr                    0x006002b0                                                   // btrf_adr_base + 0x000002b0
  #define btrf_TX_BACKUP_REG_gfsk                        (*(volatile unsigned int *)btrf_TX_BACKUP_REG_gfsk_adr)
  #define btrf_ITRIM_PA2_edr_adr                         0x006002b8                                                   // btrf_adr_base + 0x000002b8
  #define btrf_ITRIM_PA2_edr                             (*(volatile unsigned int *)btrf_ITRIM_PA2_edr_adr)
  #define btrf_PA_DRV_GC_BIN1_edr_adr                    0x006002c8                                                   // btrf_adr_base + 0x000002c8
  #define btrf_PA_DRV_GC_BIN1_edr                        (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN1_edr_adr)
  #define btrf_PA_DRV_GC_BIN2_edr_adr                    0x006002cc                                                   // btrf_adr_base + 0x000002cc
  #define btrf_PA_DRV_GC_BIN2_edr                        (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN2_edr_adr)
  #define btrf_PA_DRV_GC_BIN3_edr_adr                    0x006002d0                                                   // btrf_adr_base + 0x000002d0
  #define btrf_PA_DRV_GC_BIN3_edr                        (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN3_edr_adr)
  #define btrf_PA_DRV_GC_BIN4_edr_adr                    0x006002d4                                                   // btrf_adr_base + 0x000002d4
  #define btrf_PA_DRV_GC_BIN4_edr                        (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN4_edr_adr)
  #define btrf_PA_DRV_GC_BIN5_edr_adr                    0x006002d8                                                   // btrf_adr_base + 0x000002d8
  #define btrf_PA_DRV_GC_BIN5_edr                        (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN5_edr_adr)
  #define btrf_TX_BACKUP_REG_edr_adr                     0x006002dc                                                   // btrf_adr_base + 0x000002dc
  #define btrf_TX_BACKUP_REG_edr                         (*(volatile unsigned int *)btrf_TX_BACKUP_REG_edr_adr)
  #define btrf_RX_ADC_MODE_adr                           0x006002e0                                                   // btrf_adr_base + 0x000002e0
  #define btrf_RX_ADC_MODE                               (*(volatile unsigned int *)btrf_RX_ADC_MODE_adr)
  #define btrf_RX_IF_MODE_adr                            0x006002e4                                                   // btrf_adr_base + 0x000002e4
  #define btrf_RX_IF_MODE                                (*(volatile unsigned int *)btrf_RX_IF_MODE_adr)
  #define btrf_RX_ADC_MODE_OVR_adr                       0x006002e8                                                   // btrf_adr_base + 0x000002e8
  #define btrf_RX_ADC_MODE_OVR                           (*(volatile unsigned int *)btrf_RX_ADC_MODE_OVR_adr)
  #define btrf_RX_FIL_MODE_adr                           0x006002ec                                                   // btrf_adr_base + 0x000002ec
  #define btrf_RX_FIL_MODE                               (*(volatile unsigned int *)btrf_RX_FIL_MODE_adr)
  #define btrf_RXTX_FIL_MODE_ovr_adr                     0x006002f0                                                   // btrf_adr_base + 0x000002f0
  #define btrf_RXTX_FIL_MODE_ovr                         (*(volatile unsigned int *)btrf_RXTX_FIL_MODE_ovr_adr)
  #define btrf_PLL_CRYSTAL_TRIM_ovrVal_adr               0x006002f4                                                   // btrf_adr_base + 0x000002f4
  #define btrf_PLL_CRYSTAL_TRIM_ovrVal                   (*(volatile unsigned int *)btrf_PLL_CRYSTAL_TRIM_ovrVal_adr)
  #define btrf_PLL_CRYSTAL_TRIM_ovr_adr                  0x006002f8                                                   // btrf_adr_base + 0x000002f8
  #define btrf_PLL_CRYSTAL_TRIM_ovr                      (*(volatile unsigned int *)btrf_PLL_CRYSTAL_TRIM_ovr_adr)
  #define btrf_btpmu_rcal_pd_adr                         0x006002fc                                                   // btrf_adr_base + 0x000002fc
  #define btrf_btpmu_rcal_pd                             (*(volatile unsigned int *)btrf_btpmu_rcal_pd_adr)
  #define btrf_InitCapARx_lsb_adr                        0x0060023c                                                   // btrf_adr_base + 0x0000023c
  #define btrf_InitCapARx_lsb                            (*(volatile unsigned int *)btrf_InitCapARx_lsb_adr)
  #define btrf_InitCapARx_msb_adr                        0x00600240                                                   // btrf_adr_base + 0x00000240
  #define btrf_InitCapARx_msb                            (*(volatile unsigned int *)btrf_InitCapARx_msb_adr)
  #define btrf_InitCapBRx_lsb_adr                        0x00600244                                                   // btrf_adr_base + 0x00000244
  #define btrf_InitCapBRx_lsb                            (*(volatile unsigned int *)btrf_InitCapBRx_lsb_adr)
  #define btrf_InitCapBRx_msb_adr                        0x00600248                                                   // btrf_adr_base + 0x00000248
  #define btrf_InitCapBRx_msb                            (*(volatile unsigned int *)btrf_InitCapBRx_msb_adr)
  #define btrf_cal_cap_lsb_adr                           0x0060024c                                                   // btrf_adr_base + 0x0000024c
  #define btrf_cal_cap_lsb                               (*(volatile unsigned int *)btrf_cal_cap_lsb_adr)
  #define btrf_cal_cap_msb_adr                           0x00600250                                                   // btrf_adr_base + 0x00000250
  #define btrf_cal_cap_msb                               (*(volatile unsigned int *)btrf_cal_cap_msb_adr)
  #define btrf_offsetTxMon_lsb_adr                       0x00600254                                                   // btrf_adr_base + 0x00000254
  #define btrf_offsetTxMon_lsb                           (*(volatile unsigned int *)btrf_offsetTxMon_lsb_adr)
  #define btrf_offsetTxMon_msb_adr                       0x00600258                                                   // btrf_adr_base + 0x00000258
  #define btrf_offsetTxMon_msb                           (*(volatile unsigned int *)btrf_offsetTxMon_msb_adr)
  #define btrf_offsetRxMon_lsb_adr                       0x0060025c                                                   // btrf_adr_base + 0x0000025c
  #define btrf_offsetRxMon_lsb                           (*(volatile unsigned int *)btrf_offsetRxMon_lsb_adr)
  #define btrf_offsetRxMon_msb_adr                       0x00600260                                                   // btrf_adr_base + 0x00000260
  #define btrf_offsetRxMon_msb                           (*(volatile unsigned int *)btrf_offsetRxMon_msb_adr)
  #define btrf_slopeTxMon_lsb_adr                        0x00600264                                                   // btrf_adr_base + 0x00000264
  #define btrf_slopeTxMon_lsb                            (*(volatile unsigned int *)btrf_slopeTxMon_lsb_adr)
  #define btrf_slopeTxMon_msb_adr                        0x00600268                                                   // btrf_adr_base + 0x00000268
  #define btrf_slopeTxMon_msb                            (*(volatile unsigned int *)btrf_slopeTxMon_msb_adr)
  #define btrf_slopeRxMon_lsb_adr                        0x0060026c                                                   // btrf_adr_base + 0x0000026c
  #define btrf_slopeRxMon_lsb                            (*(volatile unsigned int *)btrf_slopeRxMon_lsb_adr)
  #define btrf_slopeRxMon_msb_adr                        0x00600270                                                   // btrf_adr_base + 0x00000270
  #define btrf_slopeRxMon_msb                            (*(volatile unsigned int *)btrf_slopeRxMon_msb_adr)
  #define btrf_vco_offsetInOvrVal_lsb_adr                0x00600300                                                   // btrf_adr_base + 0x00000300
  #define btrf_vco_offsetInOvrVal_lsb                    (*(volatile unsigned int *)btrf_vco_offsetInOvrVal_lsb_adr)
  #define btrf_vco_offsetInOvrVal_msb_adr                0x00600304                                                   // btrf_adr_base + 0x00000304
  #define btrf_vco_offsetInOvrVal_msb                    (*(volatile unsigned int *)btrf_vco_offsetInOvrVal_msb_adr)
  #define btrf_delaystartcold_lsb_adr                    0x00600308                                                   // btrf_adr_base + 0x00000308
  #define btrf_delaystartcold_lsb                        (*(volatile unsigned int *)btrf_delaystartcold_lsb_adr)
  #define btrf_delaystartcold_msb_adr                    0x0060030c                                                   // btrf_adr_base + 0x0000030c
  #define btrf_delaystartcold_msb                        (*(volatile unsigned int *)btrf_delaystartcold_msb_adr)
  #define btrf_vcocal_force_caps_lsb_adr                 0x00600310                                                   // btrf_adr_base + 0x00000310
  #define btrf_vcocal_force_caps_lsb                     (*(volatile unsigned int *)btrf_vcocal_force_caps_lsb_adr)
  #define btrf_vcocal_force_caps_msb_adr                 0x00600314                                                   // btrf_adr_base + 0x00000314
  #define btrf_vcocal_force_caps_msb                     (*(volatile unsigned int *)btrf_vcocal_force_caps_msb_adr)
  #define btrf_PA_DRV_GC_BIN6_gfsk_adr                   0x00600318                                                   // btrf_adr_base + 0x000000c6 * 0x00000004
  #define btrf_PA_DRV_GC_BIN6_gfsk                       (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN6_gfsk_adr)
  #define btrf_PA_DRV_GC_BIN7_gfsk_adr                   0x0060031c                                                   // btrf_adr_base + 0x000000c7 * 0x00000004
  #define btrf_PA_DRV_GC_BIN7_gfsk                       (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN7_gfsk_adr)
  #define btrf_PA_DRV_GC_BIN8_gfsk_adr                   0x00600320                                                   // btrf_adr_base + 0x000000c8 * 0x00000004
  #define btrf_PA_DRV_GC_BIN8_gfsk                       (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN8_gfsk_adr)
  #define btrf_PA_DRV_GC_BIN9_gfsk_adr                   0x00600324                                                   // btrf_adr_base + 0x000000c9 * 0x00000004
  #define btrf_PA_DRV_GC_BIN9_gfsk                       (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN9_gfsk_adr)
  #define btrf_txCalFreq1_adr                            0x00600328                                                   // btrf_adr_base + 0x000000ca * 0x00000004
  #define btrf_txCalFreq1                                (*(volatile unsigned int *)btrf_txCalFreq1_adr)
  #define btrf_txCalFreq2_adr                            0x0060032c                                                   // btrf_adr_base + 0x000000cb * 0x00000004
  #define btrf_txCalFreq2                                (*(volatile unsigned int *)btrf_txCalFreq2_adr)
  #define btrf_txCalFreq3_adr                            0x00600330                                                   // btrf_adr_base + 0x000000cc * 0x00000004
  #define btrf_txCalFreq3                                (*(volatile unsigned int *)btrf_txCalFreq3_adr)
  #define btrf_txCalFreq4_adr                            0x00600334                                                   // btrf_adr_base + 0x000000cd * 0x00000004
  #define btrf_txCalFreq4                                (*(volatile unsigned int *)btrf_txCalFreq4_adr)
  #define btrf_txCalFreq5_adr                            0x00600338                                                   // btrf_adr_base + 0x000000ce * 0x00000004
  #define btrf_txCalFreq5                                (*(volatile unsigned int *)btrf_txCalFreq5_adr)
  #define btrf_txCalFreq6_adr                            0x0060033c                                                   // btrf_adr_base + 0x000000cf * 0x00000004
  #define btrf_txCalFreq6                                (*(volatile unsigned int *)btrf_txCalFreq6_adr)
  #define btrf_txCalFreq7_adr                            0x00600340                                                   // btrf_adr_base + 0x000000d0 * 0x00000004
  #define btrf_txCalFreq7                                (*(volatile unsigned int *)btrf_txCalFreq7_adr)
  #define btrf_txCalFreq8_adr                            0x00600344                                                   // btrf_adr_base + 0x000000d1 * 0x00000004
  #define btrf_txCalFreq8                                (*(volatile unsigned int *)btrf_txCalFreq8_adr)
  #define btrf_txCalFreq9_adr                            0x00600348                                                   // btrf_adr_base + 0x000000d2 * 0x00000004
  #define btrf_txCalFreq9                                (*(volatile unsigned int *)btrf_txCalFreq9_adr)
  #define btrf_regd3_adr                                 0x0060034c                                                   // btrf_adr_base + 0x000000d3 * 0x00000004
  #define btrf_regd3                                     (*(volatile unsigned int *)btrf_regd3_adr)
  #define btrf_regd4_adr                                 0x00600350                                                   // btrf_adr_base + 0x000000d4 * 0x00000004
  #define btrf_regd4                                     (*(volatile unsigned int *)btrf_regd4_adr)
  #define btrf_regd5_adr                                 0x00600354                                                   // btrf_adr_base + 0x000000d5 * 0x00000004
  #define btrf_regd5                                     (*(volatile unsigned int *)btrf_regd5_adr)
  #define btrf_regd6_adr                                 0x00600358                                                   // btrf_adr_base + 0x000000d6 * 0x00000004
  #define btrf_regd6                                     (*(volatile unsigned int *)btrf_regd6_adr)
  #define btrf_regd7_adr                                 0x0060035c                                                   // btrf_adr_base + 0x000000d7 * 0x00000004
  #define btrf_regd7                                     (*(volatile unsigned int *)btrf_regd7_adr)
  #define btrf_regd8_adr                                 0x00600360                                                   // btrf_adr_base + 0x000000d8 * 0x00000004
  #define btrf_regd8                                     (*(volatile unsigned int *)btrf_regd8_adr)
  #define btrf_regd9_adr                                 0x00600364                                                   // btrf_adr_base + 0x000000d9 * 0x00000004
  #define btrf_regd9                                     (*(volatile unsigned int *)btrf_regd9_adr)
  #define btrf_regda_adr                                 0x00600368                                                   // btrf_adr_base + 0x000000da * 0x00000004
  #define btrf_regda                                     (*(volatile unsigned int *)btrf_regda_adr)
  #define btrf_regdb_adr                                 0x0060036c                                                   // btrf_adr_base + 0x000000db * 0x00000004
  #define btrf_regdb                                     (*(volatile unsigned int *)btrf_regdb_adr)
  #define btrf_regdc_adr                                 0x00600370                                                   // btrf_adr_base + 0x000000dc * 0x00000004
  #define btrf_regdc                                     (*(volatile unsigned int *)btrf_regdc_adr)
  #define btrf_regdd_adr                                 0x00600374                                                   // btrf_adr_base + 0x000000dd * 0x00000004
  #define btrf_regdd                                     (*(volatile unsigned int *)btrf_regdd_adr)
  #define btrf_pa2_vbctrim_adr                           0x00600380                                                   // btrf_adr_base + 0x000000e0 * 0x00000004
  #define btrf_pa2_vbctrim                               (*(volatile unsigned int *)btrf_pa2_vbctrim_adr)
  #define btrf_padrv_mx_tune_BIN1_adr                    0x00600388                                                   // btrf_adr_base + 0x000000e2 * 0x00000004
  #define btrf_padrv_mx_tune_BIN1                        (*(volatile unsigned int *)btrf_padrv_mx_tune_BIN1_adr)
  #define btrf_padrv_mx_tune_BIN2_adr                    0x0060038c                                                   // btrf_adr_base + 0x000000e3 * 0x00000004
  #define btrf_padrv_mx_tune_BIN2                        (*(volatile unsigned int *)btrf_padrv_mx_tune_BIN2_adr)
  #define btrf_padrv_mx_tune_BIN3_adr                    0x00600390                                                   // btrf_adr_base + 0x000000e4 * 0x00000004
  #define btrf_padrv_mx_tune_BIN3                        (*(volatile unsigned int *)btrf_padrv_mx_tune_BIN3_adr)
  #define btrf_padrv_mx_tune_BIN4_adr                    0x00600394                                                   // btrf_adr_base + 0x000000e5 * 0x00000004
  #define btrf_padrv_mx_tune_BIN4                        (*(volatile unsigned int *)btrf_padrv_mx_tune_BIN4_adr)
  #define btrf_padrv_mx_tune_BIN5_adr                    0x00600398                                                   // btrf_adr_base + 0x000000e6 * 0x00000004
  #define btrf_padrv_mx_tune_BIN5                        (*(volatile unsigned int *)btrf_padrv_mx_tune_BIN5_adr)
  #define btrf_PA_DRV_GC_BIN6_edr_adr                    0x006003b0                                                   // btrf_adr_base + 0x000000ec * 0x00000004
  #define btrf_PA_DRV_GC_BIN6_edr                        (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN6_edr_adr)
  #define btrf_PA_DRV_GC_BIN7_edr_adr                    0x006003b4                                                   // btrf_adr_base + 0x000000ed * 0x00000004
  #define btrf_PA_DRV_GC_BIN7_edr                        (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN7_edr_adr)
  #define btrf_PA_DRV_GC_BIN8_edr_adr                    0x006003b8                                                   // btrf_adr_base + 0x000000ee * 0x00000004
  #define btrf_PA_DRV_GC_BIN8_edr                        (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN8_edr_adr)
  #define btrf_PA_DRV_GC_BIN9_edr_adr                    0x006003bc                                                   // btrf_adr_base + 0x000000ef * 0x00000004
  #define btrf_PA_DRV_GC_BIN9_edr                        (*(volatile unsigned int *)btrf_PA_DRV_GC_BIN9_edr_adr)
  #define btrf_PA_DRV_GC_Out_adr                         0x006003c0                                                   // btrf_adr_base + 0x000000f0 * 0x00000004
  #define btrf_PA_DRV_GC_Out                             (*(volatile unsigned int *)btrf_PA_DRV_GC_Out_adr)
  #define btrf_pllRamAd_adr                              0x006003c8                                                   // btrf_adr_base + 0x000000f2 * 0x00000004
  #define btrf_pllRamAd                                  (*(volatile unsigned int *)btrf_pllRamAd_adr)
  #define btrf_pllRamBo_adr                              0x006003cc                                                   // btrf_adr_base + 0x000000f3 * 0x00000004
  #define btrf_pllRamBo                                  (*(volatile unsigned int *)btrf_pllRamBo_adr)
  #define btrf_pllRamD_adr                               0x006003d0                                                   // btrf_adr_base + 0x000000f4 * 0x00000004
  #define btrf_pllRamD                                   (*(volatile unsigned int *)btrf_pllRamD_adr)
  #define btrf_kvco_DelayWrssi_lsb_adr                   0x006003d4                                                   // btrf_adr_base + 0x000000f5 * 0x00000004
  #define btrf_kvco_DelayWrssi_lsb                       (*(volatile unsigned int *)btrf_kvco_DelayWrssi_lsb_adr)
  #define btrf_kvco_DelayKvcoStart_lsb_adr               0x006003d8                                                   // btrf_adr_base + 0x000000f6 * 0x00000004
  #define btrf_kvco_DelayKvcoStart_lsb                   (*(volatile unsigned int *)btrf_kvco_DelayKvcoStart_lsb_adr)
  #define btrf_kvco_DelayKvcoCal_lsb_adr                 0x006003dc                                                   // btrf_adr_base + 0x000000f7 * 0x00000004
  #define btrf_kvco_DelayKvcoCal_lsb                     (*(volatile unsigned int *)btrf_kvco_DelayKvcoCal_lsb_adr)
  #define btrf_pwrRamAd_adr                              0x006003e0                                                   // btrf_adr_base + 0x000000f8 * 0x00000004
  #define btrf_pwrRamAd                                  (*(volatile unsigned int *)btrf_pwrRamAd_adr)
  #define btrf_pwrRamBo_adr                              0x006003e4                                                   // btrf_adr_base + 0x000000f9 * 0x00000004
  #define btrf_pwrRamBo                                  (*(volatile unsigned int *)btrf_pwrRamBo_adr)
  #define btrf_pwrRamD_adr                               0x006003e8                                                   // btrf_adr_base + 0x000000fa * 0x00000004
  #define btrf_pwrRamD                                   (*(volatile unsigned int *)btrf_pwrRamD_adr)
  #define btrf_kvco_DelayAdcO_lsb_adr                    0x006003ec                                                   // btrf_adr_base + 0x000000fb * 0x00000004
  #define btrf_kvco_DelayAdcO_lsb                        (*(volatile unsigned int *)btrf_kvco_DelayAdcO_lsb_adr)
  #define btrf_kvco_DelayAdcO_AdcG_msb_adr               0x006003f0                                                   // btrf_adr_base + 0x000000fc * 0x00000004
  #define btrf_kvco_DelayAdcO_AdcG_msb                   (*(volatile unsigned int *)btrf_kvco_DelayAdcO_AdcG_msb_adr)
  #define btrf_kvco_DelayAdcG_lsb_adr                    0x006003f4                                                   // btrf_adr_base + 0x000000fd * 0x00000004
  #define btrf_kvco_DelayAdcG_lsb                        (*(volatile unsigned int *)btrf_kvco_DelayAdcG_lsb_adr)
  #define btrf_kvco_DelayTssiO_lsb_adr                   0x006003f8                                                   // btrf_adr_base + 0x000000fe * 0x00000004
  #define btrf_kvco_DelayTssiO_lsb                       (*(volatile unsigned int *)btrf_kvco_DelayTssiO_lsb_adr)
  #define btrf_kvco_DelayTssiO_Wrssi_msb_adr             0x006003fc                                                   // btrf_adr_base + 0x000000ff * 0x00000004
  #define btrf_kvco_DelayTssiO_Wrssi_msb                 (*(volatile unsigned int *)btrf_kvco_DelayTssiO_Wrssi_msb_adr)
  #define btrf_rx_reg3_adr                               0x0060040c                                                   // rx_adr_base + 0x00000003 * 0x00000004
  #define btrf_rx_reg3                                   (*(volatile unsigned int *)btrf_rx_reg3_adr)
  #define btrf_rx_reg4_adr                               0x00600410                                                   // rx_adr_base + 0x00000004 * 0x00000004
  #define btrf_rx_reg4                                   (*(volatile unsigned int *)btrf_rx_reg4_adr)
  #define btrf_rx_reg5_adr                               0x00600414                                                   // rx_adr_base + 0x00000005 * 0x00000004
  #define btrf_rx_reg5                                   (*(volatile unsigned int *)btrf_rx_reg5_adr)
  #define btrf_rx_reg6_adr                               0x00600418                                                   // rx_adr_base + 0x00000006 * 0x00000004
  #define btrf_rx_reg6                                   (*(volatile unsigned int *)btrf_rx_reg6_adr)
  #define btrf_rx_reg7_adr                               0x0060041c                                                   // rx_adr_base + 0x00000007 * 0x00000004
  #define btrf_rx_reg7                                   (*(volatile unsigned int *)btrf_rx_reg7_adr)
  #define btrf_rx_reg8_adr                               0x00600420                                                   // rx_adr_base + 0x00000008 * 0x00000004
  #define btrf_rx_reg8                                   (*(volatile unsigned int *)btrf_rx_reg8_adr)
  #define btrf_rx_reg9_adr                               0x00600424                                                   // rx_adr_base + 0x00000009 * 0x00000004
  #define btrf_rx_reg9                                   (*(volatile unsigned int *)btrf_rx_reg9_adr)
  #define btrf_rx_regA_adr                               0x00600428                                                   // rx_adr_base + 0x0000000a * 0x00000004
  #define btrf_rx_regA                                   (*(volatile unsigned int *)btrf_rx_regA_adr)
  #define btrf_rx_regB_adr                               0x0060042c                                                   // rx_adr_base + 0x0000000b * 0x00000004
  #define btrf_rx_regB                                   (*(volatile unsigned int *)btrf_rx_regB_adr)
  #define btrf_rx_regC_adr                               0x00600430                                                   // rx_adr_base + 0x0000000c * 0x00000004
  #define btrf_rx_regC                                   (*(volatile unsigned int *)btrf_rx_regC_adr)
  #define btrf_rx_regD_adr                               0x00600434                                                   // rx_adr_base + 0x0000000d * 0x00000004
  #define btrf_rx_regD                                   (*(volatile unsigned int *)btrf_rx_regD_adr)
  #define btrf_rx_regE_adr                               0x00600438                                                   // rx_adr_base + 0x0000000e * 0x00000004
  #define btrf_rx_regE                                   (*(volatile unsigned int *)btrf_rx_regE_adr)
  #define btrf_rx_regF_adr                               0x0060043c                                                   // rx_adr_base + 0x0000000f * 0x00000004
  #define btrf_rx_regF                                   (*(volatile unsigned int *)btrf_rx_regF_adr)
  #define btrf_rx_reg10_adr                              0x00600440                                                   // rx_adr_base + 0x00000010 * 0x00000004
  #define btrf_rx_reg10                                  (*(volatile unsigned int *)btrf_rx_reg10_adr)
  #define btrf_rx_reg11_adr                              0x00600444                                                   // rx_adr_base + 0x00000011 * 0x00000004
  #define btrf_rx_reg11                                  (*(volatile unsigned int *)btrf_rx_reg11_adr)
  #define btrf_rx_reg12_adr                              0x00600448                                                   // rx_adr_base + 0x00000012 * 0x00000004
  #define btrf_rx_reg12                                  (*(volatile unsigned int *)btrf_rx_reg12_adr)
  #define btrf_rx_reg13_adr                              0x0060044c                                                   // rx_adr_base + 0x00000013 * 0x00000004
  #define btrf_rx_reg13                                  (*(volatile unsigned int *)btrf_rx_reg13_adr)
  #define btrf_rx_reg14_adr                              0x00600450                                                   // rx_adr_base + 0x00000014 * 0x00000004
  #define btrf_rx_reg14                                  (*(volatile unsigned int *)btrf_rx_reg14_adr)
  #define btrf_rx_reg15_adr                              0x00600454                                                   // rx_adr_base + 0x00000015 * 0x00000004
  #define btrf_rx_reg15                                  (*(volatile unsigned int *)btrf_rx_reg15_adr)
  #define btrf_rx_reg16_adr                              0x00600458                                                   // rx_adr_base + 0x00000016 * 0x00000004
  #define btrf_rx_reg16                                  (*(volatile unsigned int *)btrf_rx_reg16_adr)
  #define btrf_rx_reg17_adr                              0x0060045c                                                   // rx_adr_base + 0x00000017 * 0x00000004
  #define btrf_rx_reg17                                  (*(volatile unsigned int *)btrf_rx_reg17_adr)
  #define btrf_rx_reg18_adr                              0x00600460                                                   // rx_adr_base + 0x00000018 * 0x00000004
  #define btrf_rx_reg18                                  (*(volatile unsigned int *)btrf_rx_reg18_adr)
  #define btrf_rx_reg19_adr                              0x00600464                                                   // rx_adr_base + 0x00000019 * 0x00000004
  #define btrf_rx_reg19                                  (*(volatile unsigned int *)btrf_rx_reg19_adr)
  #define btrf_rx_reg1A_adr                              0x00600468                                                   // rx_adr_base + 0x0000001a * 0x00000004
  #define btrf_rx_reg1A                                  (*(volatile unsigned int *)btrf_rx_reg1A_adr)
  #define btrf_rx_reg1B_adr                              0x0060046c                                                   // rx_adr_base + 0x0000001b * 0x00000004
  #define btrf_rx_reg1B                                  (*(volatile unsigned int *)btrf_rx_reg1B_adr)
  #define btrf_rx_reg1C_adr                              0x00600470                                                   // rx_adr_base + 0x0000001c * 0x00000004
  #define btrf_rx_reg1C                                  (*(volatile unsigned int *)btrf_rx_reg1C_adr)
  #define btrf_rx_reg1D_adr                              0x00600474                                                   // rx_adr_base + 0x0000001d * 0x00000004
  #define btrf_rx_reg1D                                  (*(volatile unsigned int *)btrf_rx_reg1D_adr)
  #define btrf_rx_reg1E_adr                              0x00600478                                                   // rx_adr_base + 0x0000001e * 0x00000004
  #define btrf_rx_reg1E                                  (*(volatile unsigned int *)btrf_rx_reg1E_adr)
  #define btrf_rx_reg1F_adr                              0x0060047c                                                   // rx_adr_base + 0x0000001f * 0x00000004
  #define btrf_rx_reg1F                                  (*(volatile unsigned int *)btrf_rx_reg1F_adr)
  #define btrf_rx_reg20_adr                              0x00600480                                                   // rx_adr_base + 0x00000020 * 0x00000004
  #define btrf_rx_reg20                                  (*(volatile unsigned int *)btrf_rx_reg20_adr)
  #define btrf_rx_reg21_adr                              0x00600484                                                   // rx_adr_base + 0x00000021 * 0x00000004
  #define btrf_rx_reg21                                  (*(volatile unsigned int *)btrf_rx_reg21_adr)
  #define btrf_rx_reg22_adr                              0x00600488                                                   // rx_adr_base + 0x00000022 * 0x00000004
  #define btrf_rx_reg22                                  (*(volatile unsigned int *)btrf_rx_reg22_adr)
  #define btrf_rx_reg23_adr                              0x0060048c                                                   // rx_adr_base + 0x00000023 * 0x00000004
  #define btrf_rx_reg23                                  (*(volatile unsigned int *)btrf_rx_reg23_adr)
  #define btrf_rx_reg24_adr                              0x00600490                                                   // rx_adr_base + 0x00000024 * 0x00000004
  #define btrf_rx_reg24                                  (*(volatile unsigned int *)btrf_rx_reg24_adr)
  #define btrf_rx_reg25_adr                              0x00600494                                                   // rx_adr_base + 0x00000025 * 0x00000004
  #define btrf_rx_reg25                                  (*(volatile unsigned int *)btrf_rx_reg25_adr)
  #define btrf_rx_reg26_adr                              0x00600498                                                   // rx_adr_base + 0x00000026 * 0x00000004
  #define btrf_rx_reg26                                  (*(volatile unsigned int *)btrf_rx_reg26_adr)
  #define btrf_rx_reg27_adr                              0x0060049c                                                   // rx_adr_base + 0x00000027 * 0x00000004
  #define btrf_rx_reg27                                  (*(volatile unsigned int *)btrf_rx_reg27_adr)
  #define btrf_rx_reg28_adr                              0x006004a0                                                   // rx_adr_base + 0x00000028 * 0x00000004
  #define btrf_rx_reg28                                  (*(volatile unsigned int *)btrf_rx_reg28_adr)
  #define btrf_rx_reg29_adr                              0x006004a4                                                   // rx_adr_base + 0x00000029 * 0x00000004
  #define btrf_rx_reg29                                  (*(volatile unsigned int *)btrf_rx_reg29_adr)
  #define btrf_rx_reg2A_adr                              0x006004a8                                                   // rx_adr_base + 0x0000002a * 0x00000004
  #define btrf_rx_reg2A                                  (*(volatile unsigned int *)btrf_rx_reg2A_adr)
  #define btrf_rx_reg2B_adr                              0x006004ac                                                   // rx_adr_base + 0x0000002b * 0x00000004
  #define btrf_rx_reg2B                                  (*(volatile unsigned int *)btrf_rx_reg2B_adr)
  #define btrf_rx_reg2C_adr                              0x006004b0                                                   // rx_adr_base + 0x0000002c * 0x00000004
  #define btrf_rx_reg2C                                  (*(volatile unsigned int *)btrf_rx_reg2C_adr)
  #define btrf_rx_reg2D_adr                              0x006004b4                                                   // rx_adr_base + 0x0000002d * 0x00000004
  #define btrf_rx_reg2D                                  (*(volatile unsigned int *)btrf_rx_reg2D_adr)
  #define btrf_rx_reg2E_adr                              0x006004b8                                                   // rx_adr_base + 0x0000002e * 0x00000004
  #define btrf_rx_reg2E                                  (*(volatile unsigned int *)btrf_rx_reg2E_adr)
  #define btrf_rx_reg2F_adr                              0x006004bc                                                   // rx_adr_base + 0x0000002f * 0x00000004
  #define btrf_rx_reg2F                                  (*(volatile unsigned int *)btrf_rx_reg2F_adr)
  #define btrf_rx_reg30_adr                              0x006004c0                                                   // rx_adr_base + 0x00000030 * 0x00000004
  #define btrf_rx_reg30                                  (*(volatile unsigned int *)btrf_rx_reg30_adr)
  #define btrf_rx_reg31_adr                              0x006004c4                                                   // rx_adr_base + 0x00000031 * 0x00000004
  #define btrf_rx_reg31                                  (*(volatile unsigned int *)btrf_rx_reg31_adr)
  #define btrf_rx_reg32_adr                              0x006004c8                                                   // rx_adr_base + 0x00000032 * 0x00000004
  #define btrf_rx_reg32                                  (*(volatile unsigned int *)btrf_rx_reg32_adr)
  #define btrf_rx_reg33_adr                              0x006004cc                                                   // rx_adr_base + 0x00000033 * 0x00000004
  #define btrf_rx_reg33                                  (*(volatile unsigned int *)btrf_rx_reg33_adr)
  #define btrf_rx_reg34_adr                              0x006004d0                                                   // rx_adr_base + 0x00000034 * 0x00000004
  #define btrf_rx_reg34                                  (*(volatile unsigned int *)btrf_rx_reg34_adr)
  #define btrf_rx_reg35_adr                              0x006004d4                                                   // rx_adr_base + 0x00000035 * 0x00000004
  #define btrf_rx_reg35                                  (*(volatile unsigned int *)btrf_rx_reg35_adr)
  #define btrf_rx_reg36_adr                              0x006004d8                                                   // rx_adr_base + 0x00000036 * 0x00000004
  #define btrf_rx_reg36                                  (*(volatile unsigned int *)btrf_rx_reg36_adr)
  #define btrf_rx_reg37_adr                              0x006004dc                                                   // rx_adr_base + 0x00000037 * 0x00000004
  #define btrf_rx_reg37                                  (*(volatile unsigned int *)btrf_rx_reg37_adr)
  #define btrf_rx_reg38_adr                              0x006004e0                                                   // rx_adr_base + 0x00000038 * 0x00000004
  #define btrf_rx_reg38                                  (*(volatile unsigned int *)btrf_rx_reg38_adr)
  #define btrf_rx_reg39_adr                              0x006004e4                                                   // rx_adr_base + 0x00000039 * 0x00000004
  #define btrf_rx_reg39                                  (*(volatile unsigned int *)btrf_rx_reg39_adr)
  #define btrf_rx_reg3A_adr                              0x006004e8                                                   // rx_adr_base + 0x0000003a * 0x00000004
  #define btrf_rx_reg3A                                  (*(volatile unsigned int *)btrf_rx_reg3A_adr)
  #define btrf_rx_reg3B_adr                              0x006004ec                                                   // rx_adr_base + 0x0000003b * 0x00000004
  #define btrf_rx_reg3B                                  (*(volatile unsigned int *)btrf_rx_reg3B_adr)
  #define btrf_rx_reg3C_adr                              0x006004f0                                                   // rx_adr_base + 0x0000003c * 0x00000004
  #define btrf_rx_reg3C                                  (*(volatile unsigned int *)btrf_rx_reg3C_adr)
  #define btrf_rx_reg3D_adr                              0x006004f4                                                   // rx_adr_base + 0x0000003d * 0x00000004
  #define btrf_rx_reg3D                                  (*(volatile unsigned int *)btrf_rx_reg3D_adr)
  #define btrf_rx_reg3E_adr                              0x006004f8                                                   // rx_adr_base + 0x0000003e * 0x00000004
  #define btrf_rx_reg3E                                  (*(volatile unsigned int *)btrf_rx_reg3E_adr)
  #define btrf_rx_reg3F_adr                              0x006004fc                                                   // rx_adr_base + 0x0000003f * 0x00000004
  #define btrf_rx_reg3F                                  (*(volatile unsigned int *)btrf_rx_reg3F_adr)
  #define btrf_pll_pwr_cntl_adr                          0x0060050c                                                   // pll_adr_base + 0x00000003 * 0x00000004
  #define btrf_pll_pwr_cntl                              (*(volatile unsigned int *)btrf_pll_pwr_cntl_adr)
  #define btrf_pll_reg53_adr                             0x0060054c                                                   // pll_adr_base + 0x00000013 * 0x00000004
  #define btrf_pll_reg53                                 (*(volatile unsigned int *)btrf_pll_reg53_adr)
  #define btrf_pll_reg54_adr                             0x00600550                                                   // pll_adr_base + 0x00000014 * 0x00000004
  #define btrf_pll_reg54                                 (*(volatile unsigned int *)btrf_pll_reg54_adr)
  #define btrf_pll_reg55_adr                             0x00600554                                                   // pll_adr_base + 0x00000015 * 0x00000004
  #define btrf_pll_reg55                                 (*(volatile unsigned int *)btrf_pll_reg55_adr)
  #define btrf_pll_reg56_adr                             0x00600558                                                   // pll_adr_base + 0x00000016 * 0x00000004
  #define btrf_pll_reg56                                 (*(volatile unsigned int *)btrf_pll_reg56_adr)
  #define btrf_pll_reg57_adr                             0x0060055c                                                   // pll_adr_base + 0x00000017 * 0x00000004
  #define btrf_pll_reg57                                 (*(volatile unsigned int *)btrf_pll_reg57_adr)
  #define btrf_pll_reg58_adr                             0x00600560                                                   // pll_adr_base + 0x00000018 * 0x00000004
  #define btrf_pll_reg58                                 (*(volatile unsigned int *)btrf_pll_reg58_adr)
  #define btrf_pll_reg59_adr                             0x00600564                                                   // pll_adr_base + 0x00000019 * 0x00000004
  #define btrf_pll_reg59                                 (*(volatile unsigned int *)btrf_pll_reg59_adr)
  #define btrf_pll_reg5A_adr                             0x00600568                                                   // pll_adr_base + 0x0000001a * 0x00000004
  #define btrf_pll_reg5A                                 (*(volatile unsigned int *)btrf_pll_reg5A_adr)
  #define btrf_pll_reg5B_adr                             0x0060056c                                                   // pll_adr_base + 0x0000001b * 0x00000004
  #define btrf_pll_reg5B                                 (*(volatile unsigned int *)btrf_pll_reg5B_adr)
  #define btrf_pll_reg5C_adr                             0x00600570                                                   // pll_adr_base + 0x0000001c * 0x00000004
  #define btrf_pll_reg5C                                 (*(volatile unsigned int *)btrf_pll_reg5C_adr)
  #define btrf_pll_reg5D_adr                             0x00600574                                                   // pll_adr_base + 0x0000001d * 0x00000004
  #define btrf_pll_reg5D                                 (*(volatile unsigned int *)btrf_pll_reg5D_adr)
  #define btrf_pll_reg5E_adr                             0x00600578                                                   // pll_adr_base + 0x0000001e * 0x00000004
  #define btrf_pll_reg5E                                 (*(volatile unsigned int *)btrf_pll_reg5E_adr)
  #define btrf_pll_reg5F_adr                             0x0060057c                                                   // pll_adr_base + 0x0000001f * 0x00000004
  #define btrf_pll_reg5F                                 (*(volatile unsigned int *)btrf_pll_reg5F_adr)
  #define btrf_pll_reg60_adr                             0x00600580                                                   // pll_adr_base + 0x00000020 * 0x00000004
  #define btrf_pll_reg60                                 (*(volatile unsigned int *)btrf_pll_reg60_adr)
  #define btrf_pll_reg61_adr                             0x00600584                                                   // pll_adr_base + 0x00000021 * 0x00000004
  #define btrf_pll_reg61                                 (*(volatile unsigned int *)btrf_pll_reg61_adr)
  #define btrf_pll_reg62_adr                             0x00600588                                                   // pll_adr_base + 0x00000022 * 0x00000004
  #define btrf_pll_reg62                                 (*(volatile unsigned int *)btrf_pll_reg62_adr)
  #define btrf_pll_reg63_adr                             0x0060058c                                                   // pll_adr_base + 0x00000023 * 0x00000004
  #define btrf_pll_reg63                                 (*(volatile unsigned int *)btrf_pll_reg63_adr)
  #define btrf_pll_reg64_adr                             0x00600590                                                   // pll_adr_base + 0x00000024 * 0x00000004
  #define btrf_pll_reg64                                 (*(volatile unsigned int *)btrf_pll_reg64_adr)
  #define btrf_pll_reg65_adr                             0x00600594                                                   // pll_adr_base + 0x00000025 * 0x00000004
  #define btrf_pll_reg65                                 (*(volatile unsigned int *)btrf_pll_reg65_adr)
  #define btrf_pll_reg66_adr                             0x00600598                                                   // pll_adr_base + 0x00000026 * 0x00000004
  #define btrf_pll_reg66                                 (*(volatile unsigned int *)btrf_pll_reg66_adr)
  #define btrf_pll_reg67_adr                             0x0060059c                                                   // pll_adr_base + 0x00000027 * 0x00000004
  #define btrf_pll_reg67                                 (*(volatile unsigned int *)btrf_pll_reg67_adr)
  #define btrf_pll_reg68_adr                             0x006005a0                                                   // pll_adr_base + 0x00000028 * 0x00000004
  #define btrf_pll_reg68                                 (*(volatile unsigned int *)btrf_pll_reg68_adr)
  #define btrf_pll_reg69_adr                             0x006005a4                                                   // pll_adr_base + 0x00000029 * 0x00000004
  #define btrf_pll_reg69                                 (*(volatile unsigned int *)btrf_pll_reg69_adr)
  #define btrf_pll_reg6A_adr                             0x006005a8                                                   // pll_adr_base + 0x0000002a * 0x00000004
  #define btrf_pll_reg6A                                 (*(volatile unsigned int *)btrf_pll_reg6A_adr)
  #define btrf_pll_reg6B_adr                             0x006005ac                                                   // pll_adr_base + 0x0000002b * 0x00000004
  #define btrf_pll_reg6B                                 (*(volatile unsigned int *)btrf_pll_reg6B_adr)
  #define btrf_pll_reg6C_adr                             0x006005b0                                                   // pll_adr_base + 0x0000002c * 0x00000004
  #define btrf_pll_reg6C                                 (*(volatile unsigned int *)btrf_pll_reg6C_adr)
  #define btrf_pll_reg6D_adr                             0x006005b4                                                   // pll_adr_base + 0x0000002d * 0x00000004
  #define btrf_pll_reg6D                                 (*(volatile unsigned int *)btrf_pll_reg6D_adr)
  #define btrf_pll_reg6E_adr                             0x006005b8                                                   // pll_adr_base + 0x0000002e * 0x00000004
  #define btrf_pll_reg6E                                 (*(volatile unsigned int *)btrf_pll_reg6E_adr)
  #define btrf_pll_reg6F_adr                             0x006005bc                                                   // pll_adr_base + 0x0000002f * 0x00000004
  #define btrf_pll_reg6F                                 (*(volatile unsigned int *)btrf_pll_reg6F_adr)
  #define btrf_pll_reg70_adr                             0x006005c0                                                   // pll_adr_base + 0x00000030 * 0x00000004
  #define btrf_pll_reg70                                 (*(volatile unsigned int *)btrf_pll_reg70_adr)
  #define btrf_pll_reg71_adr                             0x006005c4                                                   // pll_adr_base + 0x00000031 * 0x00000004
  #define btrf_pll_reg71                                 (*(volatile unsigned int *)btrf_pll_reg71_adr)
  #define btrf_pll_reg72_adr                             0x006005c8                                                   // pll_adr_base + 0x00000032 * 0x00000004
  #define btrf_pll_reg72                                 (*(volatile unsigned int *)btrf_pll_reg72_adr)
  #define btrf_pll_reg73_adr                             0x006005cc                                                   // pll_adr_base + 0x00000033 * 0x00000004
  #define btrf_pll_reg73                                 (*(volatile unsigned int *)btrf_pll_reg73_adr)
  #define btrf_pll_reg74_adr                             0x006005d0                                                   // pll_adr_base + 0x00000034 * 0x00000004
  #define btrf_pll_reg74                                 (*(volatile unsigned int *)btrf_pll_reg74_adr)
  #define btrf_pll_reg75_adr                             0x006005d4                                                   // pll_adr_base + 0x00000035 * 0x00000004
  #define btrf_pll_reg75                                 (*(volatile unsigned int *)btrf_pll_reg75_adr)
  #define btrf_pll_reg76_adr                             0x006005d8                                                   // pll_adr_base + 0x00000036 * 0x00000004
  #define btrf_pll_reg76                                 (*(volatile unsigned int *)btrf_pll_reg76_adr)
  #define btrf_pll_reg77_adr                             0x006005dc                                                   // pll_adr_base + 0x00000037 * 0x00000004
  #define btrf_pll_reg77                                 (*(volatile unsigned int *)btrf_pll_reg77_adr)
  #define btrf_pll_reg78_adr                             0x006005e0                                                   // pll_adr_base + 0x00000038 * 0x00000004
  #define btrf_pll_reg78                                 (*(volatile unsigned int *)btrf_pll_reg78_adr)
  #define btrf_pll_reg79_adr                             0x006005e4                                                   // pll_adr_base + 0x00000039 * 0x00000004
  #define btrf_pll_reg79                                 (*(volatile unsigned int *)btrf_pll_reg79_adr)
  #define btrf_pll_reg7A_adr                             0x006005e8                                                   // pll_adr_base + 0x0000003a * 0x00000004
  #define btrf_pll_reg7A                                 (*(volatile unsigned int *)btrf_pll_reg7A_adr)
  #define btrf_pll_reg7B_adr                             0x006005ec                                                   // pll_adr_base + 0x0000003b * 0x00000004
  #define btrf_pll_reg7B                                 (*(volatile unsigned int *)btrf_pll_reg7B_adr)
  #define btrf_pll_reg7C_adr                             0x006005f0                                                   // pll_adr_base + 0x0000003c * 0x00000004
  #define btrf_pll_reg7C                                 (*(volatile unsigned int *)btrf_pll_reg7C_adr)
  #define btrf_pll_reg7D_adr                             0x006005f4                                                   // pll_adr_base + 0x0000003d * 0x00000004
  #define btrf_pll_reg7D                                 (*(volatile unsigned int *)btrf_pll_reg7D_adr)
  #define btrf_pll_reg7E_adr                             0x006005f8                                                   // pll_adr_base + 0x0000003e * 0x00000004
  #define btrf_pll_reg7E                                 (*(volatile unsigned int *)btrf_pll_reg7E_adr)
  #define btrf_pll_reg7F_adr                             0x006005fc                                                   // pll_adr_base + 0x0000003f * 0x00000004
  #define btrf_pll_reg7F                                 (*(volatile unsigned int *)btrf_pll_reg7F_adr)
  #define btrf_tx_reg80_adr                              0x00600600                                                   // tx_adr_base + 0x00000000 * 0x00000004
  #define btrf_tx_reg80                                  (*(volatile unsigned int *)btrf_tx_reg80_adr)
  #define btrf_tx_reg81_adr                              0x00600604                                                   // tx_adr_base + 0x00000001 * 0x00000004
  #define btrf_tx_reg81                                  (*(volatile unsigned int *)btrf_tx_reg81_adr)
  #define btrf_tx_reg82_adr                              0x00600608                                                   // tx_adr_base + 0x00000002 * 0x00000004
  #define btrf_tx_reg82                                  (*(volatile unsigned int *)btrf_tx_reg82_adr)
  #define btrf_tx_reg83_adr                              0x0060060c                                                   // tx_adr_base + 0x00000003 * 0x00000004
  #define btrf_tx_reg83                                  (*(volatile unsigned int *)btrf_tx_reg83_adr)
  #define btrf_tx_reg84_adr                              0x00600610                                                   // tx_adr_base + 0x00000004 * 0x00000004
  #define btrf_tx_reg84                                  (*(volatile unsigned int *)btrf_tx_reg84_adr)
  #define btrf_tx_reg85_adr                              0x00600614                                                   // tx_adr_base + 0x00000005 * 0x00000004
  #define btrf_tx_reg85                                  (*(volatile unsigned int *)btrf_tx_reg85_adr)
  #define btrf_tx_reg86_adr                              0x00600618                                                   // tx_adr_base + 0x00000006 * 0x00000004
  #define btrf_tx_reg86                                  (*(volatile unsigned int *)btrf_tx_reg86_adr)
  #define btrf_tx_reg87_adr                              0x0060061c                                                   // tx_adr_base + 0x00000007 * 0x00000004
  #define btrf_tx_reg87                                  (*(volatile unsigned int *)btrf_tx_reg87_adr)
  #define btrf_tx_reg88_adr                              0x00600620                                                   // tx_adr_base + 0x00000008 * 0x00000004
  #define btrf_tx_reg88                                  (*(volatile unsigned int *)btrf_tx_reg88_adr)
  #define btrf_tx_reg89_adr                              0x00600624                                                   // tx_adr_base + 0x00000009 * 0x00000004
  #define btrf_tx_reg89                                  (*(volatile unsigned int *)btrf_tx_reg89_adr)
  #define btrf_tx_reg8A_adr                              0x00600628                                                   // tx_adr_base + 0x0000000a * 0x00000004
  #define btrf_tx_reg8A                                  (*(volatile unsigned int *)btrf_tx_reg8A_adr)
  #define btrf_tx_reg8B_adr                              0x0060062c                                                   // tx_adr_base + 0x0000000b * 0x00000004
  #define btrf_tx_reg8B                                  (*(volatile unsigned int *)btrf_tx_reg8B_adr)
  #define btrf_tx_reg8C_adr                              0x00600630                                                   // tx_adr_base + 0x0000000c * 0x00000004
  #define btrf_tx_reg8C                                  (*(volatile unsigned int *)btrf_tx_reg8C_adr)
  #define btrf_tx_reg8D_adr                              0x00600634                                                   // tx_adr_base + 0x0000000d * 0x00000004
  #define btrf_tx_reg8D                                  (*(volatile unsigned int *)btrf_tx_reg8D_adr)
  #define btrf_tx_reg8E_adr                              0x00600638                                                   // tx_adr_base + 0x0000000e * 0x00000004
  #define btrf_tx_reg8E                                  (*(volatile unsigned int *)btrf_tx_reg8E_adr)
  #define btrf_tx_reg8F_adr                              0x0060063c                                                   // tx_adr_base + 0x0000000f * 0x00000004
  #define btrf_tx_reg8F                                  (*(volatile unsigned int *)btrf_tx_reg8F_adr)
  #define btrf_tx_reg90_adr                              0x00600640                                                   // tx_adr_base + 0x00000010 * 0x00000004
  #define btrf_tx_reg90                                  (*(volatile unsigned int *)btrf_tx_reg90_adr)
  #define btrf_tx_reg91_adr                              0x00600644                                                   // tx_adr_base + 0x00000011 * 0x00000004
  #define btrf_tx_reg91                                  (*(volatile unsigned int *)btrf_tx_reg91_adr)
  #define btrf_tx_reg92_adr                              0x00600648                                                   // tx_adr_base + 0x00000012 * 0x00000004
  #define btrf_tx_reg92                                  (*(volatile unsigned int *)btrf_tx_reg92_adr)
  #define btrf_tx_reg93_adr                              0x0060064c                                                   // tx_adr_base + 0x00000013 * 0x00000004
  #define btrf_tx_reg93                                  (*(volatile unsigned int *)btrf_tx_reg93_adr)
  #define btrf_misc_regC0_adr                            0x00600700                                                   // misc_adr_base + 0x00000000 * 0x00000004
  #define btrf_misc_regC0                                (*(volatile unsigned int *)btrf_misc_regC0_adr)
  #define btrf_misc_regC1_adr                            0x00600704                                                   // misc_adr_base + 0x00000001 * 0x00000004
  #define btrf_misc_regC1                                (*(volatile unsigned int *)btrf_misc_regC1_adr)
  #define btrf_misc_regC2_adr                            0x00600708                                                   // misc_adr_base + 0x00000002 * 0x00000004
  #define btrf_misc_regC2                                (*(volatile unsigned int *)btrf_misc_regC2_adr)
  #define btrf_misc_regC3_adr                            0x0060070c                                                   // misc_adr_base + 0x00000003 * 0x00000004
  #define btrf_misc_regC3                                (*(volatile unsigned int *)btrf_misc_regC3_adr)
  #define btrf_misc_regC4_adr                            0x00600710                                                   // misc_adr_base + 0x00000004 * 0x00000004
  #define btrf_misc_regC4                                (*(volatile unsigned int *)btrf_misc_regC4_adr)
  #define btrf_misc_regC5_adr                            0x00600714                                                   // misc_adr_base + 0x00000005 * 0x00000004
  #define btrf_misc_regC5                                (*(volatile unsigned int *)btrf_misc_regC5_adr)
  #define btrf_misc_regC6_adr                            0x00600718                                                   // misc_adr_base + 0x00000006 * 0x00000004
  #define btrf_misc_regC6                                (*(volatile unsigned int *)btrf_misc_regC6_adr)
  #define btrf_misc_regC7_adr                            0x0060071c                                                   // misc_adr_base + 0x00000007 * 0x00000004
  #define btrf_misc_regC7                                (*(volatile unsigned int *)btrf_misc_regC7_adr)
  #define btrf_misc_regC8_adr                            0x00600720                                                   // misc_adr_base + 0x00000008 * 0x00000004
  #define btrf_misc_regC8                                (*(volatile unsigned int *)btrf_misc_regC8_adr)
  #define btrf_misc_regC9_adr                            0x00600724                                                   // misc_adr_base + 0x00000009 * 0x00000004
  #define btrf_misc_regC9                                (*(volatile unsigned int *)btrf_misc_regC9_adr)
  #define btrf_misc_regCA_adr                            0x00600728                                                   // misc_adr_base + 0x0000000a * 0x00000004
  #define btrf_misc_regCA                                (*(volatile unsigned int *)btrf_misc_regCA_adr)
  #define btrf_misc_regCB_adr                            0x0060072c                                                   // misc_adr_base + 0x0000000b * 0x00000004
  #define btrf_misc_regCB                                (*(volatile unsigned int *)btrf_misc_regCB_adr)
  #define btrf_misc_regCC_adr                            0x00600730                                                   // misc_adr_base + 0x0000000c * 0x00000004
  #define btrf_misc_regCC                                (*(volatile unsigned int *)btrf_misc_regCC_adr)
  #define btrf_misc_regCD_adr                            0x00600734                                                   // misc_adr_base + 0x0000000d * 0x00000004
  #define btrf_misc_regCD                                (*(volatile unsigned int *)btrf_misc_regCD_adr)
  #define btrf_misc_regCE_adr                            0x00600738                                                   // misc_adr_base + 0x0000000e * 0x00000004
  #define btrf_misc_regCE                                (*(volatile unsigned int *)btrf_misc_regCE_adr)
  #define btrf_misc_regCF_adr                            0x0060073c                                                   // misc_adr_base + 0x0000000f * 0x00000004
  #define btrf_misc_regCF                                (*(volatile unsigned int *)btrf_misc_regCF_adr)
  #define btrf_misc_regD0_adr                            0x00600740                                                   // misc_adr_base + 0x00000010 * 0x00000004
  #define btrf_misc_regD0                                (*(volatile unsigned int *)btrf_misc_regD0_adr)
  #define btrf_misc_regD1_adr                            0x00600744                                                   // misc_adr_base + 0x00000011 * 0x00000004
  #define btrf_misc_regD1                                (*(volatile unsigned int *)btrf_misc_regD1_adr)
  #define btrf_misc_regD2_adr                            0x00600748                                                   // misc_adr_base + 0x00000012 * 0x00000004
  #define btrf_misc_regD2                                (*(volatile unsigned int *)btrf_misc_regD2_adr)
  #define btrf_misc_regD3_adr                            0x0060074c                                                   // misc_adr_base + 0x00000013 * 0x00000004
  #define btrf_misc_regD3                                (*(volatile unsigned int *)btrf_misc_regD3_adr)
  #define btrf_misc_regD4_adr                            0x00600750                                                   // misc_adr_base + 0x00000014 * 0x00000004
  #define btrf_misc_regD4                                (*(volatile unsigned int *)btrf_misc_regD4_adr)
  #define btrf_misc_regD5_adr                            0x00600754                                                   // misc_adr_base + 0x00000015 * 0x00000004
  #define btrf_misc_regD5                                (*(volatile unsigned int *)btrf_misc_regD5_adr)
  #define btrf_misc_regD6_adr                            0x00600758                                                   // misc_adr_base + 0x00000016 * 0x00000004
  #define btrf_misc_regD6                                (*(volatile unsigned int *)btrf_misc_regD6_adr)
  #define btrf_misc_regD7_adr                            0x0060075c                                                   // misc_adr_base + 0x00000017 * 0x00000004
  #define btrf_misc_regD7                                (*(volatile unsigned int *)btrf_misc_regD7_adr)
  #define btrf_misc_regD8_adr                            0x00600760                                                   // misc_adr_base + 0x00000018 * 0x00000004
  #define btrf_misc_regD8                                (*(volatile unsigned int *)btrf_misc_regD8_adr)
  #define btrf_misc_regD9_adr                            0x00600764                                                   // misc_adr_base + 0x00000019 * 0x00000004
  #define btrf_misc_regD9                                (*(volatile unsigned int *)btrf_misc_regD9_adr)
  #define btrf_misc_regDA_adr                            0x00600768                                                   // misc_adr_base + 0x0000001a * 0x00000004
  #define btrf_misc_regDA                                (*(volatile unsigned int *)btrf_misc_regDA_adr)
  #define btrf_misc_regDB_adr                            0x0060076c                                                   // misc_adr_base + 0x0000001b * 0x00000004
  #define btrf_misc_regDB                                (*(volatile unsigned int *)btrf_misc_regDB_adr)
  #define btrf_misc_regDC_adr                            0x00600770                                                   // misc_adr_base + 0x0000001c * 0x00000004
  #define btrf_misc_regDC                                (*(volatile unsigned int *)btrf_misc_regDC_adr)
  #define btrf_misc_regDD_adr                            0x00600774                                                   // misc_adr_base + 0x0000001d * 0x00000004
  #define btrf_misc_regDD                                (*(volatile unsigned int *)btrf_misc_regDD_adr)
  #define btrf_misc_regDE_adr                            0x00600778                                                   // misc_adr_base + 0x0000001e * 0x00000004
  #define btrf_misc_regDE                                (*(volatile unsigned int *)btrf_misc_regDE_adr)
  #define btrf_misc_regDF_adr                            0x0060077c                                                   // misc_adr_base + 0x0000001f * 0x00000004
  #define btrf_misc_regDF                                (*(volatile unsigned int *)btrf_misc_regDF_adr)
  #define btrf_misc_regE0_adr                            0x00600780                                                   // misc_adr_base + 0x00000020 * 0x00000004
  #define btrf_misc_regE0                                (*(volatile unsigned int *)btrf_misc_regE0_adr)
  #define btrf_misc_regE1_adr                            0x00600784                                                   // misc_adr_base + 0x00000021 * 0x00000004
  #define btrf_misc_regE1                                (*(volatile unsigned int *)btrf_misc_regE1_adr)
  #define btrf_misc_regE2_adr                            0x00600788                                                   // misc_adr_base + 0x00000022 * 0x00000004
  #define btrf_misc_regE2                                (*(volatile unsigned int *)btrf_misc_regE2_adr)
  #define btrf_misc_regE3_adr                            0x0060078c                                                   // misc_adr_base + 0x00000023 * 0x00000004
  #define btrf_misc_regE3                                (*(volatile unsigned int *)btrf_misc_regE3_adr)
  #define btrf_misc_regE4_adr                            0x00600790                                                   // misc_adr_base + 0x00000024 * 0x00000004
  #define btrf_misc_regE4                                (*(volatile unsigned int *)btrf_misc_regE4_adr)
  #define btrf_misc_regE5_adr                            0x00600794                                                   // misc_adr_base + 0x00000025 * 0x00000004
  #define btrf_misc_regE5                                (*(volatile unsigned int *)btrf_misc_regE5_adr)
  #define btrf_misc_regE6_adr                            0x00600798                                                   // misc_adr_base + 0x00000026 * 0x00000004
  #define btrf_misc_regE6                                (*(volatile unsigned int *)btrf_misc_regE6_adr)
  #define btrf_misc_regE7_adr                            0x0060079c                                                   // misc_adr_base + 0x00000027 * 0x00000004
  #define btrf_misc_regE7                                (*(volatile unsigned int *)btrf_misc_regE7_adr)
  #define btrf_misc_regE8_adr                            0x006007a0                                                   // misc_adr_base + 0x00000028 * 0x00000004
  #define btrf_misc_regE8                                (*(volatile unsigned int *)btrf_misc_regE8_adr)
  #define btrf_misc_regE9_adr                            0x006007a4                                                   // misc_adr_base + 0x00000029 * 0x00000004
  #define btrf_misc_regE9                                (*(volatile unsigned int *)btrf_misc_regE9_adr)
  #define btrf_misc_regEA_adr                            0x006007a8                                                   // misc_adr_base + 0x0000002a * 0x00000004
  #define btrf_misc_regEA                                (*(volatile unsigned int *)btrf_misc_regEA_adr)
  #define btrf_misc_regEB_adr                            0x006007ac                                                   // misc_adr_base + 0x0000002b * 0x00000004
  #define btrf_misc_regEB                                (*(volatile unsigned int *)btrf_misc_regEB_adr)
  #define btrf_misc_regEC_adr                            0x006007b0                                                   // misc_adr_base + 0x0000002c * 0x00000004
  #define btrf_misc_regEC                                (*(volatile unsigned int *)btrf_misc_regEC_adr)
  #define btrf_misc_regED_adr                            0x006007b4                                                   // misc_adr_base + 0x0000002d * 0x00000004
  #define btrf_misc_regED                                (*(volatile unsigned int *)btrf_misc_regED_adr)
  #define btrf_misc_regEE_adr                            0x006007b8                                                   // misc_adr_base + 0x0000002e * 0x00000004
  #define btrf_misc_regEE                                (*(volatile unsigned int *)btrf_misc_regEE_adr)
  #define btrf_misc_regEF_adr                            0x006007bc                                                   // misc_adr_base + 0x0000002f * 0x00000004
  #define btrf_misc_regEF                                (*(volatile unsigned int *)btrf_misc_regEF_adr)
  #define btrf_misc_regF0_adr                            0x006007c0                                                   // misc_adr_base + 0x00000030 * 0x00000004
  #define btrf_misc_regF0                                (*(volatile unsigned int *)btrf_misc_regF0_adr)
  #define btrf_misc_regF1_adr                            0x006007c4                                                   // misc_adr_base + 0x00000031 * 0x00000004
  #define btrf_misc_regF1                                (*(volatile unsigned int *)btrf_misc_regF1_adr)
  #define btrf_misc_regF2_adr                            0x006007c8                                                   // misc_adr_base + 0x00000032 * 0x00000004
  #define btrf_misc_regF2                                (*(volatile unsigned int *)btrf_misc_regF2_adr)
  #define btrf_misc_regF3_adr                            0x006007cc                                                   // misc_adr_base + 0x00000033 * 0x00000004
  #define btrf_misc_regF3                                (*(volatile unsigned int *)btrf_misc_regF3_adr)
  #define btrf_misc_regF4_adr                            0x006007d0                                                   // misc_adr_base + 0x00000034 * 0x00000004
  #define btrf_misc_regF4                                (*(volatile unsigned int *)btrf_misc_regF4_adr)
  #define btrf_misc_regF5_adr                            0x006007d4                                                   // misc_adr_base + 0x00000035 * 0x00000004
  #define btrf_misc_regF5                                (*(volatile unsigned int *)btrf_misc_regF5_adr)
  #define btrf_misc_regF6_adr                            0x006007d8                                                   // misc_adr_base + 0x00000036 * 0x00000004
  #define btrf_misc_regF6                                (*(volatile unsigned int *)btrf_misc_regF6_adr)
  #define btrf_misc_regF7_adr                            0x006007dc                                                   // misc_adr_base + 0x00000037 * 0x00000004
  #define btrf_misc_regF7                                (*(volatile unsigned int *)btrf_misc_regF7_adr)
  #define btrf_misc_regF8_adr                            0x006007e0                                                   // misc_adr_base + 0x00000038 * 0x00000004
  #define btrf_misc_regF8                                (*(volatile unsigned int *)btrf_misc_regF8_adr)
  #define btrf_misc_regF9_adr                            0x006007e4                                                   // misc_adr_base + 0x00000039 * 0x00000004
  #define btrf_misc_regF9                                (*(volatile unsigned int *)btrf_misc_regF9_adr)
  #define btrf_misc_regFA_adr                            0x006007e8                                                   // misc_adr_base + 0x0000003a * 0x00000004
  #define btrf_misc_regFA                                (*(volatile unsigned int *)btrf_misc_regFA_adr)
  #define btrf_misc_regFB_adr                            0x006007ec                                                   // misc_adr_base + 0x0000003b * 0x00000004
  #define btrf_misc_regFB                                (*(volatile unsigned int *)btrf_misc_regFB_adr)
  #define btrf_misc_regFC_adr                            0x006007f0                                                   // misc_adr_base + 0x0000003c * 0x00000004
  #define btrf_misc_regFC                                (*(volatile unsigned int *)btrf_misc_regFC_adr)
  #define btrf_misc_regFD_adr                            0x006007f4                                                   // misc_adr_base + 0x0000003d * 0x00000004
  #define btrf_misc_regFD                                (*(volatile unsigned int *)btrf_misc_regFD_adr)
  #define btrf_misc_regFE_adr                            0x006007f8                                                   // misc_adr_base + 0x0000003e * 0x00000004
  #define btrf_misc_regFE                                (*(volatile unsigned int *)btrf_misc_regFE_adr)
  #define btrf_misc_regFF_adr                            0x006007fc                                                   // misc_adr_base + 0x0000003f * 0x00000004
  #define btrf_misc_regFF                                (*(volatile unsigned int *)btrf_misc_regFF_adr)
  #define btrf_bs_reg1_adr                               0x00600650                                                   // bs_adr_base + 0x00000001 * 0x00000004
  #define btrf_bs_reg1                                   (*(volatile unsigned int *)btrf_bs_reg1_adr)
  #define btrf_bs_reg2_adr                               0x00600654                                                   // bs_adr_base + 0x00000002 * 0x00000004
  #define btrf_bs_reg2                                   (*(volatile unsigned int *)btrf_bs_reg2_adr)
  #define btrf_bs_reg3_adr                               0x00600658                                                   // bs_adr_base + 0x00000003 * 0x00000004
  #define btrf_bs_reg3                                   (*(volatile unsigned int *)btrf_bs_reg3_adr)
  #define btrf_bs_reg4_adr                               0x0060065c                                                   // bs_adr_base + 0x00000004 * 0x00000004
  #define btrf_bs_reg4                                   (*(volatile unsigned int *)btrf_bs_reg4_adr)
  #define btrf_bs_reg5_adr                               0x00600660                                                   // bs_adr_base + 0x00000005 * 0x00000004
  #define btrf_bs_reg5                                   (*(volatile unsigned int *)btrf_bs_reg5_adr)
  #define btrf_bs_reg6_adr                               0x00600664                                                   // bs_adr_base + 0x00000006 * 0x00000004
  #define btrf_bs_reg6                                   (*(volatile unsigned int *)btrf_bs_reg6_adr)
  #define btrf_bs_reg7_adr                               0x00600668                                                   // bs_adr_base + 0x00000007 * 0x00000004
  #define btrf_bs_reg7                                   (*(volatile unsigned int *)btrf_bs_reg7_adr)
  #define btrf_bs_reg8_adr                               0x0060066c                                                   // bs_adr_base + 0x00000008 * 0x00000004
  #define btrf_bs_reg8                                   (*(volatile unsigned int *)btrf_bs_reg8_adr)
  #define btrf_bs_reg9_adr                               0x00600670                                                   // bs_adr_base + 0x00000009 * 0x00000004
  #define btrf_bs_reg9                                   (*(volatile unsigned int *)btrf_bs_reg9_adr)
  #define btrf_bs_reg10_adr                              0x00600674                                                   // bs_adr_base + 0x0000000a * 0x00000004
  #define btrf_bs_reg10                                  (*(volatile unsigned int *)btrf_bs_reg10_adr)
  #define btrf_bs_reg11_adr                              0x00600678                                                   // bs_adr_base + 0x0000000b * 0x00000004
  #define btrf_bs_reg11                                  (*(volatile unsigned int *)btrf_bs_reg11_adr)
  #define btrf_bs_reg12_adr                              0x0060067c                                                   // bs_adr_base + 0x0000000c * 0x00000004
  #define btrf_bs_reg12                                  (*(volatile unsigned int *)btrf_bs_reg12_adr)
  #define btrf_bs_reg13_adr                              0x00600680                                                   // bs_adr_base + 0x0000000d * 0x00000004
  #define btrf_bs_reg13                                  (*(volatile unsigned int *)btrf_bs_reg13_adr)
  #define btrf_bs_reg14_adr                              0x00600684                                                   // bs_adr_base + 0x0000000e * 0x00000004
  #define btrf_bs_reg14                                  (*(volatile unsigned int *)btrf_bs_reg14_adr)
  #define btrf_bs_reg15_adr                              0x00600688                                                   // bs_adr_base + 0x0000000f * 0x00000004
  #define btrf_bs_reg15                                  (*(volatile unsigned int *)btrf_bs_reg15_adr)
  #define btrf_bs_reg16_adr                              0x0060068c                                                   // bs_adr_base + 0x00000010 * 0x00000004
  #define btrf_bs_reg16                                  (*(volatile unsigned int *)btrf_bs_reg16_adr)
  #define btrf_bs_reg17_adr                              0x00600690                                                   // bs_adr_base + 0x00000011 * 0x00000004
  #define btrf_bs_reg17                                  (*(volatile unsigned int *)btrf_bs_reg17_adr)
  #define btrf_bs_reg18_adr                              0x00600694                                                   // bs_adr_base + 0x00000012 * 0x00000004
  #define btrf_bs_reg18                                  (*(volatile unsigned int *)btrf_bs_reg18_adr)
  #define btrf_bs_reg19_adr                              0x00600698                                                   // bs_adr_base + 0x00000013 * 0x00000004
  #define btrf_bs_reg19                                  (*(volatile unsigned int *)btrf_bs_reg19_adr)
  #define btrf_bs_reg20_adr                              0x0060069c                                                   // bs_adr_base + 0x00000014 * 0x00000004
  #define btrf_bs_reg20                                  (*(volatile unsigned int *)btrf_bs_reg20_adr)
  #define btrf_bs_reg21_adr                              0x006006a0                                                   // bs_adr_base + 0x00000015 * 0x00000004
  #define btrf_bs_reg21                                  (*(volatile unsigned int *)btrf_bs_reg21_adr)
  #define btrf_bs_reg22_adr                              0x006006a4                                                   // bs_adr_base + 0x00000016 * 0x00000004
  #define btrf_bs_reg22                                  (*(volatile unsigned int *)btrf_bs_reg22_adr)
  #define btrf_bs_reg23_adr                              0x006006a8                                                   // bs_adr_base + 0x00000017 * 0x00000004
  #define btrf_bs_reg23                                  (*(volatile unsigned int *)btrf_bs_reg23_adr)
  #define btrf_bs_reg24_adr                              0x006006ac                                                   // bs_adr_base + 0x00000018 * 0x00000004
  #define btrf_bs_reg24                                  (*(volatile unsigned int *)btrf_bs_reg24_adr)
  #define btrf_bs_reg25_adr                              0x006006b0                                                   // bs_adr_base + 0x00000019 * 0x00000004
  #define btrf_bs_reg25                                  (*(volatile unsigned int *)btrf_bs_reg25_adr)
  #define btrf_bs_reg26_adr                              0x006006b4                                                   // bs_adr_base + 0x0000001a * 0x00000004
  #define btrf_bs_reg26                                  (*(volatile unsigned int *)btrf_bs_reg26_adr)
  #define btrf_bs_reg27_adr                              0x006006b8                                                   // bs_adr_base + 0x0000001b * 0x00000004
  #define btrf_bs_reg27                                  (*(volatile unsigned int *)btrf_bs_reg27_adr)
  #define btrf_bs_reg28_adr                              0x006006bc                                                   // bs_adr_base + 0x0000001c * 0x00000004
  #define btrf_bs_reg28                                  (*(volatile unsigned int *)btrf_bs_reg28_adr)
  #define btrf_bs_reg29_adr                              0x006006c0                                                   // bs_adr_base + 0x0000001d * 0x00000004
  #define btrf_bs_reg29                                  (*(volatile unsigned int *)btrf_bs_reg29_adr)
  #define btrf_bs_reg30_adr                              0x006006c4                                                   // bs_adr_base + 0x0000001e * 0x00000004
  #define btrf_bs_reg30                                  (*(volatile unsigned int *)btrf_bs_reg30_adr)
  #define btrf_bs_reg31_adr                              0x006006c8                                                   // bs_adr_base + 0x0000001f * 0x00000004
  #define btrf_bs_reg31                                  (*(volatile unsigned int *)btrf_bs_reg31_adr)
  #define btrf_bs_reg32_adr                              0x006006cc                                                   // bs_adr_base + 0x00000020 * 0x00000004
  #define btrf_bs_reg32                                  (*(volatile unsigned int *)btrf_bs_reg32_adr)
  #define btrf_bs_reg33_adr                              0x006006d0                                                   // bs_adr_base + 0x00000021 * 0x00000004
  #define btrf_bs_reg33                                  (*(volatile unsigned int *)btrf_bs_reg33_adr)
  #define btrf_bs_reg34_adr                              0x006006d4                                                   // bs_adr_base + 0x00000022 * 0x00000004
  #define btrf_bs_reg34                                  (*(volatile unsigned int *)btrf_bs_reg34_adr)
  #define btrf_bs_reg35_adr                              0x006006d8                                                   // bs_adr_base + 0x00000023 * 0x00000004
  #define btrf_bs_reg35                                  (*(volatile unsigned int *)btrf_bs_reg35_adr)
  #define btrf_bs_reg36_adr                              0x006006dc                                                   // bs_adr_base + 0x00000024 * 0x00000004
  #define btrf_bs_reg36                                  (*(volatile unsigned int *)btrf_bs_reg36_adr)
  #define btrf_bs_reg37_adr                              0x006006e0                                                   // bs_adr_base + 0x00000025 * 0x00000004
  #define btrf_bs_reg37                                  (*(volatile unsigned int *)btrf_bs_reg37_adr)
  #define btrf_bs_reg38_adr                              0x006006e4                                                   // bs_adr_base + 0x00000026 * 0x00000004
  #define btrf_bs_reg38                                  (*(volatile unsigned int *)btrf_bs_reg38_adr)
  #define btrf_bs_reg39_adr                              0x006006e8                                                   // bs_adr_base + 0x00000027 * 0x00000004
  #define btrf_bs_reg39                                  (*(volatile unsigned int *)btrf_bs_reg39_adr)
  #define btrf_bs_reg40_adr                              0x006006ec                                                   // bs_adr_base + 0x00000028 * 0x00000004
  #define btrf_bs_reg40                                  (*(volatile unsigned int *)btrf_bs_reg40_adr)
  #define btrf_bs_reg41_adr                              0x006006f0                                                   // bs_adr_base + 0x00000029 * 0x00000004
  #define btrf_bs_reg41                                  (*(volatile unsigned int *)btrf_bs_reg41_adr)
  #define btrf_bs_reg42_adr                              0x006006f4                                                   // bs_adr_base + 0x0000002a * 0x00000004
  #define btrf_bs_reg42                                  (*(volatile unsigned int *)btrf_bs_reg42_adr)
  #define btrf_bs_reg43_adr                              0x006006f8                                                   // bs_adr_base + 0x0000002b * 0x00000004
  #define btrf_bs_reg43                                  (*(volatile unsigned int *)btrf_bs_reg43_adr)
  #define swp_ctl_pwr_adr                                0x0032d640                                                   // swp_adr_base + ctl_pwr
  #define swp_ctl_pwr                                    (*(volatile unsigned int *)swp_ctl_pwr_adr)
  #define swp_sta_pwr_adr                                0x0032d644                                                   // swp_adr_base + sta_pwr
  #define swp_sta_pwr                                    (*(volatile unsigned int *)swp_sta_pwr_adr)
  #define swp_timer_div_lb_adr                           0x0032d660                                                   // swp_adr_base + timer_div_lb
  #define swp_timer_div_lb                               (*(volatile unsigned int *)swp_timer_div_lb_adr)
  #define swp_timer_div_hb_adr                           0x0032d664                                                   // swp_adr_base + timer_div_hb
  #define swp_timer_div_hb                               (*(volatile unsigned int *)swp_timer_div_hb_adr)
  #define swp_timer_prescl_adr                           0x0032d668                                                   // swp_adr_base + timer_prescl
  #define swp_timer_prescl                               (*(volatile unsigned int *)swp_timer_prescl_adr)
  #define swp_ctl_adr                                    0x0032d680                                                   // swp_adr_base + ctl
  #define swp_ctl                                        (*(volatile unsigned int *)swp_ctl_adr)
  #define swp_baud_adr                                   0x0032d684                                                   // swp_adr_base + baud
  #define swp_baud                                       (*(volatile unsigned int *)swp_baud_adr)
  #define swp_mgt_adr                                    0x0032d688                                                   // swp_adr_base + mgt
  #define swp_mgt                                        (*(volatile unsigned int *)swp_mgt_adr)
  #define swp_dat_tx0_adr                                0x0032d68c                                                   // swp_adr_base + dat_tx0
  #define swp_dat_tx0                                    (*(volatile unsigned int *)swp_dat_tx0_adr)
  #define swp_dat_tx1_adr                                0x0032d690                                                   // swp_adr_base + dat_tx1
  #define swp_dat_tx1                                    (*(volatile unsigned int *)swp_dat_tx1_adr)
  #define swp_dat_rx0_adr                                0x0032d694                                                   // swp_adr_base + dat_rx0
  #define swp_dat_rx0                                    (*(volatile unsigned int *)swp_dat_rx0_adr)
  #define swp_dat_rx1_adr                                0x0032d698                                                   // swp_adr_base + dat_rx1
  #define swp_dat_rx1                                    (*(volatile unsigned int *)swp_dat_rx1_adr)
  #define swp_sta_tx0_adr                                0x0032d69c                                                   // swp_adr_base + sta_tx0
  #define swp_sta_tx0                                    (*(volatile unsigned int *)swp_sta_tx0_adr)
  #define swp_sta_tx1_adr                                0x0032d6a0                                                   // swp_adr_base + sta_tx1
  #define swp_sta_tx1                                    (*(volatile unsigned int *)swp_sta_tx1_adr)
  #define swp_sta_rx0_adr                                0x0032d6a4                                                   // swp_adr_base + sta_rx0
  #define swp_sta_rx0                                    (*(volatile unsigned int *)swp_sta_rx0_adr)
  #define swp_sta_rx1_adr                                0x0032d6a8                                                   // swp_adr_base + sta_rx1
  #define swp_sta_rx1                                    (*(volatile unsigned int *)swp_sta_rx1_adr)
  #define swp_sta_lnk_adr                                0x0032d6ac                                                   // swp_adr_base + sta_lnk
  #define swp_sta_lnk                                    (*(volatile unsigned int *)swp_sta_lnk_adr)
  #define swp_irq_adr                                    0x0032d6b0                                                   // swp_adr_base + irq
  #define swp_irq                                        (*(volatile unsigned int *)swp_irq_adr)
  #define swp_msk_adr                                    0x0032d6b4                                                   // swp_adr_base + msk
  #define swp_msk                                        (*(volatile unsigned int *)swp_msk_adr)
  #define swp_irw_adr                                    0x0032d6b8                                                   // swp_adr_base + irw
  #define swp_irw                                        (*(volatile unsigned int *)swp_irw_adr)
  #define swp_timer_adr                                  0x0032d6bc                                                   // swp_adr_base + timer
  #define swp_timer                                      (*(volatile unsigned int *)swp_timer_adr)
  #define m154_rx_mpdu_00_adr                            0x00430000                                                   // base_mac154_top + 0x00000000
  #define m154_rx_mpdu_00                                (*(volatile unsigned int *)m154_rx_mpdu_00_adr)
  #define m154_rx_mpdu_01_adr                            0x00430004                                                   // base_mac154_top + 0x00000004
  #define m154_rx_mpdu_01                                (*(volatile unsigned int *)m154_rx_mpdu_01_adr)
  #define m154_rx_mpdu_02_adr                            0x00430008                                                   // base_mac154_top + 0x00000008
  #define m154_rx_mpdu_02                                (*(volatile unsigned int *)m154_rx_mpdu_02_adr)
  #define m154_rx_mpdu_03_adr                            0x0043000c                                                   // base_mac154_top + 0x0000000c
  #define m154_rx_mpdu_03                                (*(volatile unsigned int *)m154_rx_mpdu_03_adr)
  #define m154_rx_mpdu_04_adr                            0x00430010                                                   // base_mac154_top + 0x00000010
  #define m154_rx_mpdu_04                                (*(volatile unsigned int *)m154_rx_mpdu_04_adr)
  #define m154_rx_mpdu_05_adr                            0x00430014                                                   // base_mac154_top + 0x00000014
  #define m154_rx_mpdu_05                                (*(volatile unsigned int *)m154_rx_mpdu_05_adr)
  #define m154_rx_mpdu_06_adr                            0x00430018                                                   // base_mac154_top + 0x00000018
  #define m154_rx_mpdu_06                                (*(volatile unsigned int *)m154_rx_mpdu_06_adr)
  #define m154_rx_mpdu_07_adr                            0x0043001c                                                   // base_mac154_top + 0x0000001c
  #define m154_rx_mpdu_07                                (*(volatile unsigned int *)m154_rx_mpdu_07_adr)
  #define m154_rx_mpdu_08_adr                            0x00430020                                                   // base_mac154_top + 0x00000020
  #define m154_rx_mpdu_08                                (*(volatile unsigned int *)m154_rx_mpdu_08_adr)
  #define m154_rx_mpdu_09_adr                            0x00430024                                                   // base_mac154_top + 0x00000024
  #define m154_rx_mpdu_09                                (*(volatile unsigned int *)m154_rx_mpdu_09_adr)
  #define m154_rx_mpdu_10_adr                            0x00430028                                                   // base_mac154_top + 0x00000028
  #define m154_rx_mpdu_10                                (*(volatile unsigned int *)m154_rx_mpdu_10_adr)
  #define m154_rx_mpdu_11_adr                            0x0043002c                                                   // base_mac154_top + 0x0000002c
  #define m154_rx_mpdu_11                                (*(volatile unsigned int *)m154_rx_mpdu_11_adr)
  #define m154_rx_mpdu_12_adr                            0x00430030                                                   // base_mac154_top + 0x00000030
  #define m154_rx_mpdu_12                                (*(volatile unsigned int *)m154_rx_mpdu_12_adr)
  #define m154_rx_mpdu_13_adr                            0x00430034                                                   // base_mac154_top + 0x00000034
  #define m154_rx_mpdu_13                                (*(volatile unsigned int *)m154_rx_mpdu_13_adr)
  #define m154_rx_mpdu_14_adr                            0x00430038                                                   // base_mac154_top + 0x00000038
  #define m154_rx_mpdu_14                                (*(volatile unsigned int *)m154_rx_mpdu_14_adr)
  #define m154_rx_mpdu_15_adr                            0x0043003c                                                   // base_mac154_top + 0x0000003c
  #define m154_rx_mpdu_15                                (*(volatile unsigned int *)m154_rx_mpdu_15_adr)
  #define m154_rx_mpdu_16_adr                            0x00430040                                                   // base_mac154_top + 0x00000040
  #define m154_rx_mpdu_16                                (*(volatile unsigned int *)m154_rx_mpdu_16_adr)
  #define m154_rx_mpdu_17_adr                            0x00430044                                                   // base_mac154_top + 0x00000044
  #define m154_rx_mpdu_17                                (*(volatile unsigned int *)m154_rx_mpdu_17_adr)
  #define m154_rx_mpdu_18_adr                            0x00430048                                                   // base_mac154_top + 0x00000048
  #define m154_rx_mpdu_18                                (*(volatile unsigned int *)m154_rx_mpdu_18_adr)
  #define m154_rx_mpdu_19_adr                            0x0043004c                                                   // base_mac154_top + 0x0000004c
  #define m154_rx_mpdu_19                                (*(volatile unsigned int *)m154_rx_mpdu_19_adr)
  #define m154_rx_mpdu_20_adr                            0x00430050                                                   // base_mac154_top + 0x00000050
  #define m154_rx_mpdu_20                                (*(volatile unsigned int *)m154_rx_mpdu_20_adr)
  #define m154_rx_mpdu_21_adr                            0x00430054                                                   // base_mac154_top + 0x00000054
  #define m154_rx_mpdu_21                                (*(volatile unsigned int *)m154_rx_mpdu_21_adr)
  #define m154_rx_mpdu_22_adr                            0x00430058                                                   // base_mac154_top + 0x00000058
  #define m154_rx_mpdu_22                                (*(volatile unsigned int *)m154_rx_mpdu_22_adr)
  #define m154_rx_mpdu_23_adr                            0x0043005c                                                   // base_mac154_top + 0x0000005c
  #define m154_rx_mpdu_23                                (*(volatile unsigned int *)m154_rx_mpdu_23_adr)
  #define m154_rx_mpdu_24_adr                            0x00430060                                                   // base_mac154_top + 0x00000060
  #define m154_rx_mpdu_24                                (*(volatile unsigned int *)m154_rx_mpdu_24_adr)
  #define m154_rx_mpdu_25_adr                            0x00430064                                                   // base_mac154_top + 0x00000064
  #define m154_rx_mpdu_25                                (*(volatile unsigned int *)m154_rx_mpdu_25_adr)
  #define m154_rx_mpdu_26_adr                            0x00430068                                                   // base_mac154_top + 0x00000068
  #define m154_rx_mpdu_26                                (*(volatile unsigned int *)m154_rx_mpdu_26_adr)
  #define m154_rx_mpdu_27_adr                            0x0043006c                                                   // base_mac154_top + 0x0000006c
  #define m154_rx_mpdu_27                                (*(volatile unsigned int *)m154_rx_mpdu_27_adr)
  #define m154_rx_mpdu_28_adr                            0x00430070                                                   // base_mac154_top + 0x00000070
  #define m154_rx_mpdu_28                                (*(volatile unsigned int *)m154_rx_mpdu_28_adr)
  #define m154_rx_mpdu_29_adr                            0x00430074                                                   // base_mac154_top + 0x00000074
  #define m154_rx_mpdu_29                                (*(volatile unsigned int *)m154_rx_mpdu_29_adr)
  #define m154_rx_mpdu_30_adr                            0x00430078                                                   // base_mac154_top + 0x00000078
  #define m154_rx_mpdu_30                                (*(volatile unsigned int *)m154_rx_mpdu_30_adr)
  #define m154_rx_mpdu_31_adr                            0x0043007c                                                   // base_mac154_top + 0x0000007c
  #define m154_rx_mpdu_31                                (*(volatile unsigned int *)m154_rx_mpdu_31_adr)
  #define m154_tx_mpdu_00_adr                            0x00430080                                                   // base_mac154_top + 0x00000080
  #define m154_tx_mpdu_00                                (*(volatile unsigned int *)m154_tx_mpdu_00_adr)
  #define m154_tx_mpdu_01_adr                            0x00430084                                                   // base_mac154_top + 0x00000084
  #define m154_tx_mpdu_01                                (*(volatile unsigned int *)m154_tx_mpdu_01_adr)
  #define m154_tx_mpdu_02_adr                            0x00430088                                                   // base_mac154_top + 0x00000088
  #define m154_tx_mpdu_02                                (*(volatile unsigned int *)m154_tx_mpdu_02_adr)
  #define m154_tx_mpdu_03_adr                            0x0043008c                                                   // base_mac154_top + 0x0000008c
  #define m154_tx_mpdu_03                                (*(volatile unsigned int *)m154_tx_mpdu_03_adr)
  #define m154_tx_mpdu_04_adr                            0x00430090                                                   // base_mac154_top + 0x00000090
  #define m154_tx_mpdu_04                                (*(volatile unsigned int *)m154_tx_mpdu_04_adr)
  #define m154_tx_mpdu_05_adr                            0x00430094                                                   // base_mac154_top + 0x00000094
  #define m154_tx_mpdu_05                                (*(volatile unsigned int *)m154_tx_mpdu_05_adr)
  #define m154_tx_mpdu_06_adr                            0x00430098                                                   // base_mac154_top + 0x00000098
  #define m154_tx_mpdu_06                                (*(volatile unsigned int *)m154_tx_mpdu_06_adr)
  #define m154_tx_mpdu_07_adr                            0x0043009c                                                   // base_mac154_top + 0x0000009c
  #define m154_tx_mpdu_07                                (*(volatile unsigned int *)m154_tx_mpdu_07_adr)
  #define m154_tx_mpdu_08_adr                            0x004300a0                                                   // base_mac154_top + 0x000000a0
  #define m154_tx_mpdu_08                                (*(volatile unsigned int *)m154_tx_mpdu_08_adr)
  #define m154_tx_mpdu_09_adr                            0x004300a4                                                   // base_mac154_top + 0x000000a4
  #define m154_tx_mpdu_09                                (*(volatile unsigned int *)m154_tx_mpdu_09_adr)
  #define m154_tx_mpdu_10_adr                            0x004300a8                                                   // base_mac154_top + 0x000000a8
  #define m154_tx_mpdu_10                                (*(volatile unsigned int *)m154_tx_mpdu_10_adr)
  #define m154_tx_mpdu_11_adr                            0x004300ac                                                   // base_mac154_top + 0x000000ac
  #define m154_tx_mpdu_11                                (*(volatile unsigned int *)m154_tx_mpdu_11_adr)
  #define m154_tx_mpdu_12_adr                            0x004300b0                                                   // base_mac154_top + 0x000000b0
  #define m154_tx_mpdu_12                                (*(volatile unsigned int *)m154_tx_mpdu_12_adr)
  #define m154_tx_mpdu_13_adr                            0x004300b4                                                   // base_mac154_top + 0x000000b4
  #define m154_tx_mpdu_13                                (*(volatile unsigned int *)m154_tx_mpdu_13_adr)
  #define m154_tx_mpdu_14_adr                            0x004300b8                                                   // base_mac154_top + 0x000000b8
  #define m154_tx_mpdu_14                                (*(volatile unsigned int *)m154_tx_mpdu_14_adr)
  #define m154_tx_mpdu_15_adr                            0x004300bc                                                   // base_mac154_top + 0x000000bc
  #define m154_tx_mpdu_15                                (*(volatile unsigned int *)m154_tx_mpdu_15_adr)
  #define m154_tx_mpdu_16_adr                            0x004300c0                                                   // base_mac154_top + 0x000000c0
  #define m154_tx_mpdu_16                                (*(volatile unsigned int *)m154_tx_mpdu_16_adr)
  #define m154_tx_mpdu_17_adr                            0x004300c4                                                   // base_mac154_top + 0x000000c4
  #define m154_tx_mpdu_17                                (*(volatile unsigned int *)m154_tx_mpdu_17_adr)
  #define m154_tx_mpdu_18_adr                            0x004300c8                                                   // base_mac154_top + 0x000000c8
  #define m154_tx_mpdu_18                                (*(volatile unsigned int *)m154_tx_mpdu_18_adr)
  #define m154_tx_mpdu_19_adr                            0x004300cc                                                   // base_mac154_top + 0x000000cc
  #define m154_tx_mpdu_19                                (*(volatile unsigned int *)m154_tx_mpdu_19_adr)
  #define m154_tx_mpdu_20_adr                            0x004300d0                                                   // base_mac154_top + 0x000000d0
  #define m154_tx_mpdu_20                                (*(volatile unsigned int *)m154_tx_mpdu_20_adr)
  #define m154_tx_mpdu_21_adr                            0x004300d4                                                   // base_mac154_top + 0x000000d4
  #define m154_tx_mpdu_21                                (*(volatile unsigned int *)m154_tx_mpdu_21_adr)
  #define m154_tx_mpdu_22_adr                            0x004300d8                                                   // base_mac154_top + 0x000000d8
  #define m154_tx_mpdu_22                                (*(volatile unsigned int *)m154_tx_mpdu_22_adr)
  #define m154_tx_mpdu_23_adr                            0x004300dc                                                   // base_mac154_top + 0x000000dc
  #define m154_tx_mpdu_23                                (*(volatile unsigned int *)m154_tx_mpdu_23_adr)
  #define m154_tx_mpdu_24_adr                            0x004300e0                                                   // base_mac154_top + 0x000000e0
  #define m154_tx_mpdu_24                                (*(volatile unsigned int *)m154_tx_mpdu_24_adr)
  #define m154_tx_mpdu_25_adr                            0x004300e4                                                   // base_mac154_top + 0x000000e4
  #define m154_tx_mpdu_25                                (*(volatile unsigned int *)m154_tx_mpdu_25_adr)
  #define m154_tx_mpdu_26_adr                            0x004300e8                                                   // base_mac154_top + 0x000000e8
  #define m154_tx_mpdu_26                                (*(volatile unsigned int *)m154_tx_mpdu_26_adr)
  #define m154_tx_mpdu_27_adr                            0x004300ec                                                   // base_mac154_top + 0x000000ec
  #define m154_tx_mpdu_27                                (*(volatile unsigned int *)m154_tx_mpdu_27_adr)
  #define m154_tx_mpdu_28_adr                            0x004300f0                                                   // base_mac154_top + 0x000000f0
  #define m154_tx_mpdu_28                                (*(volatile unsigned int *)m154_tx_mpdu_28_adr)
  #define m154_tx_mpdu_29_adr                            0x004300f4                                                   // base_mac154_top + 0x000000f4
  #define m154_tx_mpdu_29                                (*(volatile unsigned int *)m154_tx_mpdu_29_adr)
  #define m154_tx_mpdu_30_adr                            0x004300f8                                                   // base_mac154_top + 0x000000f8
  #define m154_tx_mpdu_30                                (*(volatile unsigned int *)m154_tx_mpdu_30_adr)
  #define m154_tx_mpdu_31_adr                            0x004300fc                                                   // base_mac154_top + 0x000000fc
  #define m154_tx_mpdu_31                                (*(volatile unsigned int *)m154_tx_mpdu_31_adr)
  #define m154_alarm_00_target_adr                       0x00430100                                                   // base_mac154_top + 0x00000100
  #define m154_alarm_00_target                           (*(volatile unsigned int *)m154_alarm_00_target_adr)
  #define m154_alarm_01_target_adr                       0x00430104                                                   // base_mac154_top + 0x00000104
  #define m154_alarm_01_target                           (*(volatile unsigned int *)m154_alarm_01_target_adr)
  #define m154_alarm_02_target_adr                       0x00430108                                                   // base_mac154_top + 0x00000108
  #define m154_alarm_02_target                           (*(volatile unsigned int *)m154_alarm_02_target_adr)
  #define m154_alarm_03_target_adr                       0x0043010c                                                   // base_mac154_top + 0x0000010c
  #define m154_alarm_03_target                           (*(volatile unsigned int *)m154_alarm_03_target_adr)
  #define m154_alarm_04_target_adr                       0x00430110                                                   // base_mac154_top + 0x00000110
  #define m154_alarm_04_target                           (*(volatile unsigned int *)m154_alarm_04_target_adr)
  #define m154_alarm_05_target_adr                       0x00430114                                                   // base_mac154_top + 0x00000114
  #define m154_alarm_05_target                           (*(volatile unsigned int *)m154_alarm_05_target_adr)
  #define m154_alarm_06_target_adr                       0x00430118                                                   // base_mac154_top + 0x00000118
  #define m154_alarm_06_target                           (*(volatile unsigned int *)m154_alarm_06_target_adr)
  #define m154_alarm_07_target_adr                       0x0043011c                                                   // base_mac154_top + 0x0000011c
  #define m154_alarm_07_target                           (*(volatile unsigned int *)m154_alarm_07_target_adr)
  #define m154_sym_cnt_adr                               0x00430140                                                   // base_mac154_top + 0x00000140
  #define m154_sym_cnt                                   (*(volatile unsigned int *)m154_sym_cnt_adr)
  #define m154_sym_cnt_frc_adr                           0x00430144                                                   // base_mac154_top + 0x00000144
  #define m154_sym_cnt_frc                               (*(volatile unsigned int *)m154_sym_cnt_frc_adr)
  #define m154_sym_cnt_rx_beacon_p1_adr                  0x00430148                                                   // base_mac154_top + 0x00000148
  #define m154_sym_cnt_rx_beacon_p1                      (*(volatile unsigned int *)m154_sym_cnt_rx_beacon_p1_adr)
  #define m154_sym_cnt_rx_beacon_p2_adr                  0x0043014c                                                   // base_mac154_top + 0x0000014c
  #define m154_sym_cnt_rx_beacon_p2                      (*(volatile unsigned int *)m154_sym_cnt_rx_beacon_p2_adr)
  #define m154_sym_cnt_rx_start_adr                      0x00430150                                                   // base_mac154_top + 0x00000150
  #define m154_sym_cnt_rx_start                          (*(volatile unsigned int *)m154_sym_cnt_rx_start_adr)
  #define m154_sym_cnt_rx_end_adr                        0x00430154                                                   // base_mac154_top + 0x00000154
  #define m154_sym_cnt_rx_end                            (*(volatile unsigned int *)m154_sym_cnt_rx_end_adr)
  #define m154_sym_cnt_csma_ca_start_adr                 0x00430158                                                   // base_mac154_top + 0x00000158
  #define m154_sym_cnt_csma_ca_start                     (*(volatile unsigned int *)m154_sym_cnt_csma_ca_start_adr)
  #define m154_sym_cnt_tx_beacon_adr                     0x0043015c                                                   // base_mac154_top + 0x0000015c
  #define m154_sym_cnt_tx_beacon                         (*(volatile unsigned int *)m154_sym_cnt_tx_beacon_adr)
  #define m154_gci_ctrl_0_adr                            0x00430160                                                   // base_mac154_top + 0x00000160
  #define m154_gci_ctrl_0                                (*(volatile unsigned int *)m154_gci_ctrl_0_adr)
  #define m154_gci_ctrl_1_adr                            0x00430164                                                   // base_mac154_top + 0x00000164
  #define m154_gci_ctrl_1                                (*(volatile unsigned int *)m154_gci_ctrl_1_adr)
  #define m154_gci_ctrl_2_adr                            0x00430168                                                   // base_mac154_top + 0x00000168
  #define m154_gci_ctrl_2                                (*(volatile unsigned int *)m154_gci_ctrl_2_adr)
  #define m154_int_en_adr                                0x0043016c                                                   // base_mac154_top + 0x0000016c
  #define m154_int_en                                    (*(volatile unsigned int *)m154_int_en_adr)
  #define m154_int_clr_adr                               0x00430170                                                   // base_mac154_top + 0x00000170
  #define m154_int_clr                                   (*(volatile unsigned int *)m154_int_clr_adr)
  #define m154_int_mask_adr                              0x00430174                                                   // base_mac154_top + 0x00000174
  #define m154_int_mask                                  (*(volatile unsigned int *)m154_int_mask_adr)
  #define m154_int_raw_adr                               0x00430178                                                   // base_mac154_top + 0x00000178
  #define m154_int_raw                                   (*(volatile unsigned int *)m154_int_raw_adr)
  #define m154_int_adr                                   0x0043017c                                                   // base_mac154_top + 0x0000017c
  #define m154_int                                       (*(volatile unsigned int *)m154_int_adr)
  #define m154_rx_reg_00_adr                             0x00430180                                                   // base_mac154_top + 0x00000180
  #define m154_rx_reg_00                                 (*(volatile unsigned int *)m154_rx_reg_00_adr)
  #define m154_rx_reg_01_adr                             0x00430184                                                   // base_mac154_top + 0x00000184
  #define m154_rx_reg_01                                 (*(volatile unsigned int *)m154_rx_reg_01_adr)
  #define m154_rx_reg_02_adr                             0x00430188                                                   // base_mac154_top + 0x00000188
  #define m154_rx_reg_02                                 (*(volatile unsigned int *)m154_rx_reg_02_adr)
  #define m154_rx_reg_03_adr                             0x0043018c                                                   // base_mac154_top + 0x0000018c
  #define m154_rx_reg_03                                 (*(volatile unsigned int *)m154_rx_reg_03_adr)
  #define m154_rx_reg_04_adr                             0x00430190                                                   // base_mac154_top + 0x00000190
  #define m154_rx_reg_04                                 (*(volatile unsigned int *)m154_rx_reg_04_adr)
  #define m154_rx_reg_05_adr                             0x00430194                                                   // base_mac154_top + 0x00000194
  #define m154_rx_reg_05                                 (*(volatile unsigned int *)m154_rx_reg_05_adr)
  #define m154_rx_reg_06_adr                             0x00430198                                                   // base_mac154_top + 0x00000198
  #define m154_rx_reg_06                                 (*(volatile unsigned int *)m154_rx_reg_06_adr)
  #define m154_rx_reg_07_adr                             0x0043019c                                                   // base_mac154_top + 0x0000019c
  #define m154_rx_reg_07                                 (*(volatile unsigned int *)m154_rx_reg_07_adr)
  #define m154_rx_reg_08_adr                             0x004301a0                                                   // base_mac154_top + 0x000001a0
  #define m154_rx_reg_08                                 (*(volatile unsigned int *)m154_rx_reg_08_adr)
  #define m154_rx_reg_09_adr                             0x004301a4                                                   // base_mac154_top + 0x000001a4
  #define m154_rx_reg_09                                 (*(volatile unsigned int *)m154_rx_reg_09_adr)
  #define m154_rx_reg_10_adr                             0x004301a8                                                   // base_mac154_top + 0x000001a8
  #define m154_rx_reg_10                                 (*(volatile unsigned int *)m154_rx_reg_10_adr)
  #define m154_rx_reg_11_adr                             0x004301ac                                                   // base_mac154_top + 0x000001ac
  #define m154_rx_reg_11                                 (*(volatile unsigned int *)m154_rx_reg_11_adr)
  #define m154_rx_reg_12_adr                             0x004301b0                                                   // base_mac154_top + 0x000001b0
  #define m154_rx_reg_12                                 (*(volatile unsigned int *)m154_rx_reg_12_adr)
  #define m154_rx_reg_13_adr                             0x004301b4                                                   // base_mac154_top + 0x000001b4
  #define m154_rx_reg_13                                 (*(volatile unsigned int *)m154_rx_reg_13_adr)
  #define m154_rx_reg_14_adr                             0x004301b8                                                   // base_mac154_top + 0x000001b8
  #define m154_rx_reg_14                                 (*(volatile unsigned int *)m154_rx_reg_14_adr)
  #define m154_csma_ca_reg_0_adr                         0x004301c0                                                   // base_mac154_top + 0x000001c0
  #define m154_csma_ca_reg_0                             (*(volatile unsigned int *)m154_csma_ca_reg_0_adr)
  #define m154_csma_ca_reg_1_adr                         0x004301c4                                                   // base_mac154_top + 0x000001c4
  #define m154_csma_ca_reg_1                             (*(volatile unsigned int *)m154_csma_ca_reg_1_adr)
  #define m154_csma_ca_reg_2_adr                         0x004301c8                                                   // base_mac154_top + 0x000001c8
  #define m154_csma_ca_reg_2                             (*(volatile unsigned int *)m154_csma_ca_reg_2_adr)
  #define m154_csma_ca_reg_3_adr                         0x004301cc                                                   // base_mac154_top + 0x000001cc
  #define m154_csma_ca_reg_3                             (*(volatile unsigned int *)m154_csma_ca_reg_3_adr)
  #define m154_csma_ca_reg_4_adr                         0x004301d0                                                   // base_mac154_top + 0x000001d0
  #define m154_csma_ca_reg_4                             (*(volatile unsigned int *)m154_csma_ca_reg_4_adr)
  #define m154_tx_reg_0_adr                              0x004301e0                                                   // base_mac154_top + 0x000001e0
  #define m154_tx_reg_0                                  (*(volatile unsigned int *)m154_tx_reg_0_adr)
  #define m154_tx_reg_1_adr                              0x004301e4                                                   // base_mac154_top + 0x000001e4
  #define m154_tx_reg_1                                  (*(volatile unsigned int *)m154_tx_reg_1_adr)
  #define m154_tx_reg_2_adr                              0x004301e8                                                   // base_mac154_top + 0x000001e8
  #define m154_tx_reg_2                                  (*(volatile unsigned int *)m154_tx_reg_2_adr)
  #define m154_tx_reg_3_adr                              0x004301ec                                                   // base_mac154_top + 0x000001ec
  #define m154_tx_reg_3                                  (*(volatile unsigned int *)m154_tx_reg_3_adr)
  #define m154_bist_control_adr                          0x004301f0                                                   // base_mac154_top + 0x000001f0
  #define m154_bist_control                              (*(volatile unsigned int *)m154_bist_control_adr)
  #define m154_bist_pattern_trig_time_adr                0x004301f4                                                   // base_mac154_top + 0x000001f4
  #define m154_bist_pattern_trig_time                    (*(volatile unsigned int *)m154_bist_pattern_trig_time_adr)
  #define m154_general_config_adr                        0x004301f8                                                   // base_mac154_top + 0x000001f8
  #define m154_general_config                            (*(volatile unsigned int *)m154_general_config_adr)
  #define m154_reset_adr                                 0x004301fc                                                   // base_mac154_top + 0x000001fc
  #define m154_reset                                     (*(volatile unsigned int *)m154_reset_adr)
  #define base_seceng_top_adr                            0x00440000                                                  
  #define base_seceng_top                                (*(volatile unsigned int *)base_seceng_top_adr)
  #define last_seceng_top_adr                            0x00443fff                                                  
  #define last_seceng_top                                (*(volatile unsigned int *)last_seceng_top_adr)
  #define seceng_acr_adr                                 0x00440000                                                   // base_seceng_top + 0x00000000
  #define seceng_acr                                     (*(volatile unsigned int *)seceng_acr_adr)
  #define seceng_ier_adr                                 0x00440004                                                   // base_seceng_top + 0x00000004
  #define seceng_ier                                     (*(volatile unsigned int *)seceng_ier_adr)
  #define seceng_icr_adr                                 0x00440008                                                   // base_seceng_top + 0x00000008
  #define seceng_icr                                     (*(volatile unsigned int *)seceng_icr_adr)
  #define seceng_imr_adr                                 0x0044000c                                                   // base_seceng_top + 0x0000000c
  #define seceng_imr                                     (*(volatile unsigned int *)seceng_imr_adr)
  #define seceng_isr_adr                                 0x00440010                                                   // base_seceng_top + 0x00000010
  #define seceng_isr                                     (*(volatile unsigned int *)seceng_isr_adr)
  #define seceng_ir_adr                                  0x00440014                                                   // base_seceng_top + 0x00000014
  #define seceng_ir                                      (*(volatile unsigned int *)seceng_ir_adr)
  #define seceng_amr_adr                                 0x00440018                                                   // base_seceng_top + 0x00000018
  #define seceng_amr                                     (*(volatile unsigned int *)seceng_amr_adr)
  #define seceng_alr_adr                                 0x0044001c                                                   // base_seceng_top + 0x0000001c
  #define seceng_alr                                     (*(volatile unsigned int *)seceng_alr_adr)
  #define seceng_anr0_adr                                0x00440020                                                   // base_seceng_top + 0x00000020
  #define seceng_anr0                                    (*(volatile unsigned int *)seceng_anr0_adr)
  #define seceng_anr1_adr                                0x00440024                                                   // base_seceng_top + 0x00000024
  #define seceng_anr1                                    (*(volatile unsigned int *)seceng_anr1_adr)
  #define seceng_anr2_adr                                0x00440028                                                   // base_seceng_top + 0x00000028
  #define seceng_anr2                                    (*(volatile unsigned int *)seceng_anr2_adr)
  #define seceng_anr3_adr                                0x0044002c                                                   // base_seceng_top + 0x0000002c
  #define seceng_anr3                                    (*(volatile unsigned int *)seceng_anr3_adr)
  #define seceng_akr0_adr                                0x00440030                                                   // base_seceng_top + 0x00000030
  #define seceng_akr0                                    (*(volatile unsigned int *)seceng_akr0_adr)
  #define seceng_akr1_adr                                0x00440034                                                   // base_seceng_top + 0x00000034
  #define seceng_akr1                                    (*(volatile unsigned int *)seceng_akr1_adr)
  #define seceng_akr2_adr                                0x00440038                                                   // base_seceng_top + 0x00000038
  #define seceng_akr2                                    (*(volatile unsigned int *)seceng_akr2_adr)
  #define seceng_akr3_adr                                0x0044003c                                                   // base_seceng_top + 0x0000003c
  #define seceng_akr3                                    (*(volatile unsigned int *)seceng_akr3_adr)
  #define seceng_akr4_adr                                0x00440040                                                   // base_seceng_top + 0x00000040
  #define seceng_akr4                                    (*(volatile unsigned int *)seceng_akr4_adr)
  #define seceng_akr5_adr                                0x00440044                                                   // base_seceng_top + 0x00000044
  #define seceng_akr5                                    (*(volatile unsigned int *)seceng_akr5_adr)
  #define seceng_akr6_adr                                0x00440048                                                   // base_seceng_top + 0x00000048
  #define seceng_akr6                                    (*(volatile unsigned int *)seceng_akr6_adr)
  #define seceng_akr7_adr                                0x0044004c                                                   // base_seceng_top + 0x0000004c
  #define seceng_akr7                                    (*(volatile unsigned int *)seceng_akr7_adr)
  #define seceng_amicr0_adr                              0x00440050                                                   // base_seceng_top + 0x00000050
  #define seceng_amicr0                                  (*(volatile unsigned int *)seceng_amicr0_adr)
  #define seceng_amicr1_adr                              0x00440054                                                   // base_seceng_top + 0x00000054
  #define seceng_amicr1                                  (*(volatile unsigned int *)seceng_amicr1_adr)
  #define seceng_amicr2_adr                              0x00440058                                                   // base_seceng_top + 0x00000058
  #define seceng_amicr2                                  (*(volatile unsigned int *)seceng_amicr2_adr)
  #define seceng_amicr3_adr                              0x0044005c                                                   // base_seceng_top + 0x0000005c
  #define seceng_amicr3                                  (*(volatile unsigned int *)seceng_amicr3_adr)
  #define seceng_aasar_adr                               0x00440060                                                   // base_seceng_top + 0x00000060
  #define seceng_aasar                                   (*(volatile unsigned int *)seceng_aasar_adr)
  #define seceng_amsar_adr                               0x00440064                                                   // base_seceng_top + 0x00000064
  #define seceng_amsar                                   (*(volatile unsigned int *)seceng_amsar_adr)
  #define seceng_amdar_adr                               0x00440068                                                   // base_seceng_top + 0x00000068
  #define seceng_amdar                                   (*(volatile unsigned int *)seceng_amdar_adr)
  #define seceng_rxaadar_adr                             0x0044006c                                                   // base_seceng_top + 0x0000006c
  #define seceng_rxaadar                                 (*(volatile unsigned int *)seceng_rxaadar_adr)
  #define seceng_rxamdar_adr                             0x00440070                                                   // base_seceng_top + 0x00000070
  #define seceng_rxamdar                                 (*(volatile unsigned int *)seceng_rxamdar_adr)
  #define seceng_rxalr_adr                               0x00440074                                                   // base_seceng_top + 0x00000074
  #define seceng_rxalr                                   (*(volatile unsigned int *)seceng_rxalr_adr)
  #define seceng_asr0_adr                                0x00440080                                                   // base_seceng_top + 0x00000080
  #define seceng_asr0                                    (*(volatile unsigned int *)seceng_asr0_adr)
  #define seceng_asr1_adr                                0x00440084                                                   // base_seceng_top + 0x00000084
  #define seceng_asr1                                    (*(volatile unsigned int *)seceng_asr1_adr)
  #define seceng_scr_adr                                 0x00440100                                                   // base_seceng_top + 0x00000100
  #define seceng_scr                                     (*(volatile unsigned int *)seceng_scr_adr)
  #define seceng_ssr_adr                                 0x00440104                                                   // base_seceng_top + 0x00000104
  #define seceng_ssr                                     (*(volatile unsigned int *)seceng_ssr_adr)
  #define seceng_smsar_adr                               0x00440108                                                   // base_seceng_top + 0x00000108
  #define seceng_smsar                                   (*(volatile unsigned int *)seceng_smsar_adr)
  #define seceng_sksar_adr                               0x0044010c                                                   // base_seceng_top + 0x0000010c
  #define seceng_sksar                                   (*(volatile unsigned int *)seceng_sksar_adr)
  #define seceng_shr00_adr                               0x00440110                                                   // base_seceng_top + 0x00000110
  #define seceng_shr00                                   (*(volatile unsigned int *)seceng_shr00_adr)
  #define seceng_shr01_adr                               0x00440114                                                   // base_seceng_top + 0x00000114
  #define seceng_shr01                                   (*(volatile unsigned int *)seceng_shr01_adr)
  #define seceng_shr10_adr                               0x00440118                                                   // base_seceng_top + 0x00000118
  #define seceng_shr10                                   (*(volatile unsigned int *)seceng_shr10_adr)
  #define seceng_shr11_adr                               0x0044011c                                                   // base_seceng_top + 0x0000011c
  #define seceng_shr11                                   (*(volatile unsigned int *)seceng_shr11_adr)
  #define seceng_shr20_adr                               0x00440120                                                   // base_seceng_top + 0x00000120
  #define seceng_shr20                                   (*(volatile unsigned int *)seceng_shr20_adr)
  #define seceng_shr21_adr                               0x00440124                                                   // base_seceng_top + 0x00000124
  #define seceng_shr21                                   (*(volatile unsigned int *)seceng_shr21_adr)
  #define seceng_shr30_adr                               0x00440128                                                   // base_seceng_top + 0x00000128
  #define seceng_shr30                                   (*(volatile unsigned int *)seceng_shr30_adr)
  #define seceng_shr31_adr                               0x0044012c                                                   // base_seceng_top + 0x0000012c
  #define seceng_shr31                                   (*(volatile unsigned int *)seceng_shr31_adr)
  #define seceng_shr40_adr                               0x00440130                                                   // base_seceng_top + 0x00000130
  #define seceng_shr40                                   (*(volatile unsigned int *)seceng_shr40_adr)
  #define seceng_shr41_adr                               0x00440134                                                   // base_seceng_top + 0x00000134
  #define seceng_shr41                                   (*(volatile unsigned int *)seceng_shr41_adr)
  #define seceng_shr50_adr                               0x00440138                                                   // base_seceng_top + 0x00000138
  #define seceng_shr50                                   (*(volatile unsigned int *)seceng_shr50_adr)
  #define seceng_shr51_adr                               0x0044013c                                                   // base_seceng_top + 0x0000013c
  #define seceng_shr51                                   (*(volatile unsigned int *)seceng_shr51_adr)
  #define seceng_shr60_adr                               0x00440140                                                   // base_seceng_top + 0x00000140
  #define seceng_shr60                                   (*(volatile unsigned int *)seceng_shr60_adr)
  #define seceng_shr61_adr                               0x00440144                                                   // base_seceng_top + 0x00000144
  #define seceng_shr61                                   (*(volatile unsigned int *)seceng_shr61_adr)
  #define seceng_shr70_adr                               0x00440148                                                   // base_seceng_top + 0x00000148
  #define seceng_shr70                                   (*(volatile unsigned int *)seceng_shr70_adr)
  #define seceng_shr71_adr                               0x0044014c                                                   // base_seceng_top + 0x0000014c
  #define seceng_shr71                                   (*(volatile unsigned int *)seceng_shr71_adr)
  #define seceng_smcr_adr                                0x00440150                                                   // base_seceng_top + 0x00000150
  #define seceng_smcr                                    (*(volatile unsigned int *)seceng_smcr_adr)
  #define seceng_gcr_adr                                 0x00440154                                                   // base_seceng_top + 0x00000154
  #define seceng_gcr                                     (*(volatile unsigned int *)seceng_gcr_adr)
  #define seceng_gdr_adr                                 0x00440158                                                   // base_seceng_top + 0x00000158
  #define seceng_gdr                                     (*(volatile unsigned int *)seceng_gdr_adr)
  #define base_pka_top_adr                               0x00342000                                                  
  #define base_pka_top                                   (*(volatile unsigned int *)base_pka_top_adr)
  #define last_pka_top_adr                               0x00342fff                                                  
  #define last_pka_top                                   (*(volatile unsigned int *)last_pka_top_adr)
  #define pka_scr_adr                                    0x00342000                                                   // base_pka_top + 0x00000000
  #define pka_scr                                        (*(volatile unsigned int *)pka_scr_adr)
  #define pka_dir_adr                                    0x00342004                                                   // base_pka_top + 0x00000004
  #define pka_dir                                        (*(volatile unsigned int *)pka_dir_adr)
  #define pka_dor_adr                                    0x00342008                                                   // base_pka_top + 0x00000008
  #define pka_dor                                        (*(volatile unsigned int *)pka_dor_adr)
  #define pka_acr_adr                                    0x0034200c                                                   // base_pka_top + 0x0000000c
  #define pka_acr                                        (*(volatile unsigned int *)pka_acr_adr)
  #define pka_slsr_adr                                   0x00342010                                                   // base_pka_top + 0x00000010
  #define pka_slsr                                       (*(volatile unsigned int *)pka_slsr_adr)
  #define pka_mcr_adr                                    0x00342020                                                   // base_pka_top + 0x00000020
  #define pka_mcr                                        (*(volatile unsigned int *)pka_mcr_adr)
  #define pka_memcr_adr                                  0x00342024                                                   // base_pka_top + 0x00000024
  #define pka_memcr                                      (*(volatile unsigned int *)pka_memcr_adr)
  #define pka_dmy0_adr                                   0x00342028                                                   // base_pka_top + 0x00000028
  #define pka_dmy0                                       (*(volatile unsigned int *)pka_dmy0_adr)
  #define cscan_setting_adr                              0x00450000                                                   // base_capscan_top + 0x00000000
  #define cscan_setting                                  (*(volatile unsigned int *)cscan_setting_adr)
  #define cscan_porten_adr                               0x00450004                                                   // base_capscan_top + 0x00000004
  #define cscan_porten                                   (*(volatile unsigned int *)cscan_porten_adr)
  #define cscan_intrpflg_adr                             0x00450008                                                   // base_capscan_top + 0x00000008
  #define cscan_intrpflg                                 (*(volatile unsigned int *)cscan_intrpflg_adr)
  #define cscan_phasecyc_adr                             0x0045000c                                                   // base_capscan_top + 0x0000000c
  #define cscan_phasecyc                                 (*(volatile unsigned int *)cscan_phasecyc_adr)
  #define cscan_framecnt_adr                             0x00450010                                                   // base_capscan_top + 0x00000010
  #define cscan_framecnt                                 (*(volatile unsigned int *)cscan_framecnt_adr)
  #define cscan_rawcount0_adr                            0x00450020                                                   // base_capscan_top + 0x00000020
  #define cscan_rawcount0                                (*(volatile unsigned int *)cscan_rawcount0_adr)
  #define cscan_rawcount1_adr                            0x00450024                                                   // base_capscan_top + 0x00000024
  #define cscan_rawcount1                                (*(volatile unsigned int *)cscan_rawcount1_adr)
  #define cscan_rawcount2_adr                            0x00450028                                                   // base_capscan_top + 0x00000028
  #define cscan_rawcount2                                (*(volatile unsigned int *)cscan_rawcount2_adr)
  #define cscan_rawcount3_adr                            0x0045002c                                                   // base_capscan_top + 0x0000002c
  #define cscan_rawcount3                                (*(volatile unsigned int *)cscan_rawcount3_adr)
  #define cscan_portsts_adr                              0x00450040                                                   // base_capscan_top + 0x00000040
  #define cscan_portsts                                  (*(volatile unsigned int *)cscan_portsts_adr)
  #define cscan_sts_adr                                  0x00450044                                                   // base_capscan_top + 0x00000044
  #define cscan_sts                                      (*(volatile unsigned int *)cscan_sts_adr)
  #define spiffy_cfg_adr                                 0x00360600                                                   // spi_base + 0x00000000
  #define spiffy_cfg                                     (*(volatile unsigned int *)spiffy_cfg_adr)
  #define spiffy_TransmissionLength_adr                  0x00360604                                                   // spi_base + 0x00000004
  #define spiffy_TransmissionLength                      (*(volatile unsigned int *)spiffy_TransmissionLength_adr)
  #define spiffy_TxFIFOLevel_adr                         0x00360608                                                   // spi_base + 0x00000008
  #define spiffy_TxFIFOLevel                             (*(volatile unsigned int *)spiffy_TxFIFOLevel_adr)
  #define spiffy_TxAELevel_adr                           0x0036060c                                                   // spi_base + 0x0000000c
  #define spiffy_TxAELevel                               (*(volatile unsigned int *)spiffy_TxAELevel_adr)
  #define spiffy_TxDMALength_adr                         0x00360610                                                   // spi_base + 0x00000010
  #define spiffy_TxDMALength                             (*(volatile unsigned int *)spiffy_TxDMALength_adr)
  #define spiffy_RxLength_adr                            0x00360614                                                   // spi_base + 0x00000014
  #define spiffy_RxLength                                (*(volatile unsigned int *)spiffy_RxLength_adr)
  #define spiffy_RxFIFOLevel_adr                         0x00360618                                                   // spi_base + 0x00000018
  #define spiffy_RxFIFOLevel                             (*(volatile unsigned int *)spiffy_RxFIFOLevel_adr)
  #define spiffy_RxAFLevel_adr                           0x0036061c                                                   // spi_base + 0x0000001c
  #define spiffy_RxAFLevel                               (*(volatile unsigned int *)spiffy_RxAFLevel_adr)
  #define spiffy_RxDMALength_adr                         0x00360620                                                   // spi_base + 0x00000020
  #define spiffy_RxDMALength                             (*(volatile unsigned int *)spiffy_RxDMALength_adr)
  #define spiffy_IntStatus_adr                           0x00360624                                                   // spi_base + 0x00000024
  #define spiffy_IntStatus                               (*(volatile unsigned int *)spiffy_IntStatus_adr)
  #define spiffy_IntEnable_adr                           0x00360628                                                   // spi_base + 0x00000028
  #define spiffy_IntEnable                               (*(volatile unsigned int *)spiffy_IntEnable_adr)
  #define spiffy_Status_adr                              0x0036062c                                                   // spi_base + 0x0000002c
  #define spiffy_Status                                  (*(volatile unsigned int *)spiffy_Status_adr)
  #define spiffy_ClockCfg_adr                            0x00360630                                                   // spi_base + 0x00000030
  #define spiffy_ClockCfg                                (*(volatile unsigned int *)spiffy_ClockCfg_adr)
  #define spiffy_DBICLength_adr                          0x00360634                                                   // spi_base + 0x00000034
  #define spiffy_DBICLength                              (*(volatile unsigned int *)spiffy_DBICLength_adr)
  #define spiffy_QSPILength_adr                          0x00360638                                                   // spi_base + 0x00000038
  #define spiffy_QSPILength                              (*(volatile unsigned int *)spiffy_QSPILength_adr)
  #define spiffy_AHBMaster_adr                           0x0036063c                                                   // spi_base + 0x0000003c
  #define spiffy_AHBMaster                               (*(volatile unsigned int *)spiffy_AHBMaster_adr)
  #define spiffy_AHBMaster_code_adr                      0x00360640                                                   // spi_base + 0x00000040
  #define spiffy_AHBMaster_code                          (*(volatile unsigned int *)spiffy_AHBMaster_code_adr)
  #define spiffy_TxTest_adr                              0x00360644                                                   // spi_base + 0x00000044
  #define spiffy_TxTest                                  (*(volatile unsigned int *)spiffy_TxTest_adr)
  #define spiffy_RxFIFO0_adr                             0x00360680                                                   // spi_base + 0x00000080
  #define spiffy_RxFIFO0                                 (*(volatile unsigned int *)spiffy_RxFIFO0_adr)
  #define spiffy_RxFIFO1_adr                             0x00360684                                                   // spi_base + 0x00000084
  #define spiffy_RxFIFO1                                 (*(volatile unsigned int *)spiffy_RxFIFO1_adr)
  #define spiffy_RxFIFO2_adr                             0x00360688                                                   // spi_base + 0x00000088
  #define spiffy_RxFIFO2                                 (*(volatile unsigned int *)spiffy_RxFIFO2_adr)
  #define spiffy_RxFIFO3_adr                             0x0036068c                                                   // spi_base + 0x0000008c
  #define spiffy_RxFIFO3                                 (*(volatile unsigned int *)spiffy_RxFIFO3_adr)
  #define spiffy_RxFIFO4_adr                             0x00360690                                                   // spi_base + 0x00000090
  #define spiffy_RxFIFO4                                 (*(volatile unsigned int *)spiffy_RxFIFO4_adr)
  #define spiffy_RxFIFO5_adr                             0x00360694                                                   // spi_base + 0x00000094
  #define spiffy_RxFIFO5                                 (*(volatile unsigned int *)spiffy_RxFIFO5_adr)
  #define spiffy_RxFIFO6_adr                             0x00360698                                                   // spi_base + 0x00000098
  #define spiffy_RxFIFO6                                 (*(volatile unsigned int *)spiffy_RxFIFO6_adr)
  #define spiffy_RxFIFO7_adr                             0x0036069c                                                   // spi_base + 0x0000009c
  #define spiffy_RxFIFO7                                 (*(volatile unsigned int *)spiffy_RxFIFO7_adr)
  #define spiffy_RxFIFO8_adr                             0x003606a0                                                   // spi_base + 0x000000a0
  #define spiffy_RxFIFO8                                 (*(volatile unsigned int *)spiffy_RxFIFO8_adr)
  #define spiffy_RxFIFO9_adr                             0x003606a4                                                   // spi_base + 0x000000a4
  #define spiffy_RxFIFO9                                 (*(volatile unsigned int *)spiffy_RxFIFO9_adr)
  #define spiffy_RxFIFO10_adr                            0x003606a8                                                   // spi_base + 0x000000a8
  #define spiffy_RxFIFO10                                (*(volatile unsigned int *)spiffy_RxFIFO10_adr)
  #define spiffy_RxFIFO11_adr                            0x003606ac                                                   // spi_base + 0x000000ac
  #define spiffy_RxFIFO11                                (*(volatile unsigned int *)spiffy_RxFIFO11_adr)
  #define spiffy_RxFIFO12_adr                            0x003606b0                                                   // spi_base + 0x000000b0
  #define spiffy_RxFIFO12                                (*(volatile unsigned int *)spiffy_RxFIFO12_adr)
  #define spiffy_RxFIFO13_adr                            0x003606b4                                                   // spi_base + 0x000000b4
  #define spiffy_RxFIFO13                                (*(volatile unsigned int *)spiffy_RxFIFO13_adr)
  #define spiffy_RxFIFO14_adr                            0x003606b8                                                   // spi_base + 0x000000b8
  #define spiffy_RxFIFO14                                (*(volatile unsigned int *)spiffy_RxFIFO14_adr)
  #define spiffy_RxFIFO15_adr                            0x003606bc                                                   // spi_base + 0x000000bc
  #define spiffy_RxFIFO15                                (*(volatile unsigned int *)spiffy_RxFIFO15_adr)
  #define spiffy_TxFIFO0_adr                             0x003606c0                                                   // spi_base + 0x000000c0
  #define spiffy_TxFIFO0                                 (*(volatile unsigned int *)spiffy_TxFIFO0_adr)
  #define spiffy_TxFIFO1_adr                             0x003606c4                                                   // spi_base + 0x000000c4
  #define spiffy_TxFIFO1                                 (*(volatile unsigned int *)spiffy_TxFIFO1_adr)
  #define spiffy_TxFIFO2_adr                             0x003606c8                                                   // spi_base + 0x000000c8
  #define spiffy_TxFIFO2                                 (*(volatile unsigned int *)spiffy_TxFIFO2_adr)
  #define spiffy_TxFIFO3_adr                             0x003606cc                                                   // spi_base + 0x000000cc
  #define spiffy_TxFIFO3                                 (*(volatile unsigned int *)spiffy_TxFIFO3_adr)
  #define spiffy_TxFIFO4_adr                             0x003606d0                                                   // spi_base + 0x000000d0
  #define spiffy_TxFIFO4                                 (*(volatile unsigned int *)spiffy_TxFIFO4_adr)
  #define spiffy_TxFIFO5_adr                             0x003606d4                                                   // spi_base + 0x000000d4
  #define spiffy_TxFIFO5                                 (*(volatile unsigned int *)spiffy_TxFIFO5_adr)
  #define spiffy_TxFIFO6_adr                             0x003606d8                                                   // spi_base + 0x000000d8
  #define spiffy_TxFIFO6                                 (*(volatile unsigned int *)spiffy_TxFIFO6_adr)
  #define spiffy_TxFIFO7_adr                             0x003606dc                                                   // spi_base + 0x000000dc
  #define spiffy_TxFIFO7                                 (*(volatile unsigned int *)spiffy_TxFIFO7_adr)
  #define spiffy_TxFIFO8_adr                             0x003606e0                                                   // spi_base + 0x000000e0
  #define spiffy_TxFIFO8                                 (*(volatile unsigned int *)spiffy_TxFIFO8_adr)
  #define spiffy_TxFIFO9_adr                             0x003606e4                                                   // spi_base + 0x000000e4
  #define spiffy_TxFIFO9                                 (*(volatile unsigned int *)spiffy_TxFIFO9_adr)
  #define spiffy_TxFIFO10_adr                            0x003606e8                                                   // spi_base + 0x000000e8
  #define spiffy_TxFIFO10                                (*(volatile unsigned int *)spiffy_TxFIFO10_adr)
  #define spiffy_TxFIFO11_adr                            0x003606ec                                                   // spi_base + 0x000000ec
  #define spiffy_TxFIFO11                                (*(volatile unsigned int *)spiffy_TxFIFO11_adr)
  #define spiffy_TxFIFO12_adr                            0x003606f0                                                   // spi_base + 0x000000f0
  #define spiffy_TxFIFO12                                (*(volatile unsigned int *)spiffy_TxFIFO12_adr)
  #define spiffy_TxFIFO13_adr                            0x003606f4                                                   // spi_base + 0x000000f4
  #define spiffy_TxFIFO13                                (*(volatile unsigned int *)spiffy_TxFIFO13_adr)
  #define spiffy_TxFIFO14_adr                            0x003606f8                                                   // spi_base + 0x000000f8
  #define spiffy_TxFIFO14                                (*(volatile unsigned int *)spiffy_TxFIFO14_adr)
  #define spiffy_TxFIFO15_adr                            0x003606fc                                                   // spi_base + 0x000000fc
  #define spiffy_TxFIFO15                                (*(volatile unsigned int *)spiffy_TxFIFO15_adr)
  #define spiffy_RxFIFO_adr                              0x00360700                                                   // spi_base + 0x00000100
  #define spiffy_RxFIFO                                  (*(volatile unsigned int *)spiffy_RxFIFO_adr)
  #define spiffy_TxFIFO_adr                              0x00360704                                                   // spi_base + 0x00000104
  #define spiffy_TxFIFO                                  (*(volatile unsigned int *)spiffy_TxFIFO_adr)
  #define gpio_int_st_port0_adr                          0x00338120                                                   // lhl_adr_base + 0x00000120
  #define gpio_int_st_port0                              (*(volatile unsigned int *)gpio_int_st_port0_adr)
  #define gpio_int_st_port1_adr                          0x00338124                                                   // lhl_adr_base + 0x00000124
  #define gpio_int_st_port1                              (*(volatile unsigned int *)gpio_int_st_port1_adr)
  #define gpio_int_st_port2_adr                          0x00338128                                                   // lhl_adr_base + 0x00000128
  #define gpio_int_st_port2                              (*(volatile unsigned int *)gpio_int_st_port2_adr)
  #define lhl_ctl_adr                                    0x00338130                                                   // lhl_adr_base + 0x00000130
  #define lhl_ctl                                        (*(volatile unsigned int *)lhl_ctl_adr)
  #define lhl_status_adr                                 0x00338134                                                   // lhl_adr_base + 0x00000134
  #define lhl_status                                     (*(volatile unsigned int *)lhl_status_adr)
  #define hidoff_keepstate0_adr                          0x00338138                                                   // lhl_adr_base + 0x00000138
  #define hidoff_keepstate0                              (*(volatile unsigned int *)hidoff_keepstate0_adr)
  #define hidoff_keepstate1_adr                          0x0033813c                                                   // lhl_adr_base + 0x0000013c
  #define hidoff_keepstate1                              (*(volatile unsigned int *)hidoff_keepstate1_adr)
  #define hidoff_cnt0_adr                                0x00338140                                                   // lhl_adr_base + 0x00000140
  #define hidoff_cnt0                                    (*(volatile unsigned int *)hidoff_cnt0_adr)
  #define hidoff_cnt1_adr                                0x00338144                                                   // lhl_adr_base + 0x00000144
  #define hidoff_cnt1                                    (*(volatile unsigned int *)hidoff_cnt1_adr)
  #define lpo_ctl_adr                                    0x00338148                                                   // lhl_adr_base + 0x00000148
  #define lpo_ctl                                        (*(volatile unsigned int *)lpo_ctl_adr)
  #define ldo_ctl_en_adr                                 0x0033814c                                                   // lhl_adr_base + 0x0000014c
  #define ldo_ctl_en                                     (*(volatile unsigned int *)ldo_ctl_en_adr)
  #define lhl_rtc_wake_xo_adr                            0x00338150                                                   // lhl_adr_base + 0x00000150
  #define lhl_rtc_wake_xo                                (*(volatile unsigned int *)lhl_rtc_wake_xo_adr)
  #define lhl_rtc_wake_ro_adr                            0x00338154                                                   // lhl_adr_base + 0x00000154
  #define lhl_rtc_wake_ro                                (*(volatile unsigned int *)lhl_rtc_wake_ro_adr)
  #define lhl_adc_ctl_adr                                0x00338158                                                   // lhl_adr_base + 0x00000158
  #define lhl_adc_ctl                                    (*(volatile unsigned int *)lhl_adc_ctl_adr)
  #define lhl_rtc_wake_share_adr                         0x0033815c                                                   // lhl_adr_base + 0x0000015c
  #define lhl_rtc_wake_share                             (*(volatile unsigned int *)lhl_rtc_wake_share_adr)
  #define lhl_clk_sel_adr                                0x00338160                                                   // lhl_adr_base + 0x00000160
  #define lhl_clk_sel                                    (*(volatile unsigned int *)lhl_clk_sel_adr)
  #define qdxyz_in_dly_adr                               0x00338164                                                   // lhl_adr_base + 0x00000164
  #define qdxyz_in_dly                                   (*(volatile unsigned int *)qdxyz_in_dly_adr)
  #define optctl_adr                                     0x0033819c                                                   // lhl_adr_base + 0x0000019c
  #define optctl                                         (*(volatile unsigned int *)optctl_adr)
  #define realtimeclk1_adr                               0x003381a0                                                   // lhl_adr_base + 0x000001a0
  #define realtimeclk1                                   (*(volatile unsigned int *)realtimeclk1_adr)
  #define realtimeclk2_adr                               0x003381a4                                                   // lhl_adr_base + 0x000001a4
  #define realtimeclk2                                   (*(volatile unsigned int *)realtimeclk2_adr)
  #define realtimeclk3_adr                               0x003381a8                                                   // lhl_adr_base + 0x000001a8
  #define realtimeclk3                                   (*(volatile unsigned int *)realtimeclk3_adr)
  #define iocfg_p0_adr                                   0x00338200                                                   // lhl_adr_base + 0x00000200
  #define iocfg_p0                                       (*(volatile unsigned int *)iocfg_p0_adr)
  #define iocfg_p1_adr                                   0x00338204                                                   // lhl_adr_base + 0x00000204
  #define iocfg_p1                                       (*(volatile unsigned int *)iocfg_p1_adr)
  #define iocfg_p2_adr                                   0x00338208                                                   // lhl_adr_base + 0x00000208
  #define iocfg_p2                                       (*(volatile unsigned int *)iocfg_p2_adr)
  #define iocfg_p3_adr                                   0x0033820c                                                   // lhl_adr_base + 0x0000020c
  #define iocfg_p3                                       (*(volatile unsigned int *)iocfg_p3_adr)
  #define iocfg_p4_adr                                   0x00338210                                                   // lhl_adr_base + 0x00000210
  #define iocfg_p4                                       (*(volatile unsigned int *)iocfg_p4_adr)
  #define iocfg_p5_adr                                   0x00338214                                                   // lhl_adr_base + 0x00000214
  #define iocfg_p5                                       (*(volatile unsigned int *)iocfg_p5_adr)
  #define iocfg_p6_adr                                   0x00338218                                                   // lhl_adr_base + 0x00000218
  #define iocfg_p6                                       (*(volatile unsigned int *)iocfg_p6_adr)
  #define iocfg_p7_adr                                   0x0033821c                                                   // lhl_adr_base + 0x0000021c
  #define iocfg_p7                                       (*(volatile unsigned int *)iocfg_p7_adr)
  #define iocfg_p8_adr                                   0x00338220                                                   // lhl_adr_base + 0x00000220
  #define iocfg_p8                                       (*(volatile unsigned int *)iocfg_p8_adr)
  #define iocfg_p9_adr                                   0x00338224                                                   // lhl_adr_base + 0x00000224
  #define iocfg_p9                                       (*(volatile unsigned int *)iocfg_p9_adr)
  #define iocfg_p10_adr                                  0x00338228                                                   // lhl_adr_base + 0x00000228
  #define iocfg_p10                                      (*(volatile unsigned int *)iocfg_p10_adr)
  #define iocfg_p11_adr                                  0x0033822c                                                   // lhl_adr_base + 0x0000022c
  #define iocfg_p11                                      (*(volatile unsigned int *)iocfg_p11_adr)
  #define iocfg_p12_adr                                  0x00338230                                                   // lhl_adr_base + 0x00000230
  #define iocfg_p12                                      (*(volatile unsigned int *)iocfg_p12_adr)
  #define iocfg_p13_adr                                  0x00338234                                                   // lhl_adr_base + 0x00000234
  #define iocfg_p13                                      (*(volatile unsigned int *)iocfg_p13_adr)
  #define iocfg_p14_adr                                  0x00338238                                                   // lhl_adr_base + 0x00000238
  #define iocfg_p14                                      (*(volatile unsigned int *)iocfg_p14_adr)
  #define iocfg_p15_adr                                  0x0033823c                                                   // lhl_adr_base + 0x0000023c
  #define iocfg_p15                                      (*(volatile unsigned int *)iocfg_p15_adr)
  #define iocfg_p16_adr                                  0x00338240                                                   // lhl_adr_base + 0x00000240
  #define iocfg_p16                                      (*(volatile unsigned int *)iocfg_p16_adr)
  #define iocfg_p17_adr                                  0x00338244                                                   // lhl_adr_base + 0x00000244
  #define iocfg_p17                                      (*(volatile unsigned int *)iocfg_p17_adr)
  #define iocfg_p18_adr                                  0x00338248                                                   // lhl_adr_base + 0x00000248
  #define iocfg_p18                                      (*(volatile unsigned int *)iocfg_p18_adr)
  #define iocfg_p19_adr                                  0x0033824c                                                   // lhl_adr_base + 0x0000024c
  #define iocfg_p19                                      (*(volatile unsigned int *)iocfg_p19_adr)
  #define iocfg_p20_adr                                  0x00338250                                                   // lhl_adr_base + 0x00000250
  #define iocfg_p20                                      (*(volatile unsigned int *)iocfg_p20_adr)
  #define iocfg_p21_adr                                  0x00338254                                                   // lhl_adr_base + 0x00000254
  #define iocfg_p21                                      (*(volatile unsigned int *)iocfg_p21_adr)
  #define iocfg_p22_adr                                  0x00338258                                                   // lhl_adr_base + 0x00000258
  #define iocfg_p22                                      (*(volatile unsigned int *)iocfg_p22_adr)
  #define iocfg_p23_adr                                  0x0033825c                                                   // lhl_adr_base + 0x0000025c
  #define iocfg_p23                                      (*(volatile unsigned int *)iocfg_p23_adr)
  #define iocfg_p24_adr                                  0x00338260                                                   // lhl_adr_base + 0x00000260
  #define iocfg_p24                                      (*(volatile unsigned int *)iocfg_p24_adr)
  #define iocfg_p25_adr                                  0x00338264                                                   // lhl_adr_base + 0x00000264
  #define iocfg_p25                                      (*(volatile unsigned int *)iocfg_p25_adr)
  #define iocfg_p26_adr                                  0x00338268                                                   // lhl_adr_base + 0x00000268
  #define iocfg_p26                                      (*(volatile unsigned int *)iocfg_p26_adr)
  #define iocfg_p27_adr                                  0x0033826c                                                   // lhl_adr_base + 0x0000026c
  #define iocfg_p27                                      (*(volatile unsigned int *)iocfg_p27_adr)
  #define iocfg_p28_adr                                  0x00338270                                                   // lhl_adr_base + 0x00000270
  #define iocfg_p28                                      (*(volatile unsigned int *)iocfg_p28_adr)
  #define iocfg_p29_adr                                  0x00338274                                                   // lhl_adr_base + 0x00000274
  #define iocfg_p29                                      (*(volatile unsigned int *)iocfg_p29_adr)
  #define iocfg_p30_adr                                  0x00338278                                                   // lhl_adr_base + 0x00000278
  #define iocfg_p30                                      (*(volatile unsigned int *)iocfg_p30_adr)
  #define iocfg_p31_adr                                  0x0033827c                                                   // lhl_adr_base + 0x0000027c
  #define iocfg_p31                                      (*(volatile unsigned int *)iocfg_p31_adr)
  #define iocfg_p32_adr                                  0x00338280                                                   // lhl_adr_base + 0x00000280
  #define iocfg_p32                                      (*(volatile unsigned int *)iocfg_p32_adr)
  #define iocfg_p33_adr                                  0x00338284                                                   // lhl_adr_base + 0x00000284
  #define iocfg_p33                                      (*(volatile unsigned int *)iocfg_p33_adr)
  #define iocfg_p34_adr                                  0x00338288                                                   // lhl_adr_base + 0x00000288
  #define iocfg_p34                                      (*(volatile unsigned int *)iocfg_p34_adr)
  #define iocfg_p35_adr                                  0x0033828c                                                   // lhl_adr_base + 0x0000028c
  #define iocfg_p35                                      (*(volatile unsigned int *)iocfg_p35_adr)
  #define iocfg_p36_adr                                  0x00338290                                                   // lhl_adr_base + 0x00000290
  #define iocfg_p36                                      (*(volatile unsigned int *)iocfg_p36_adr)
  #define iocfg_p37_adr                                  0x00338294                                                   // lhl_adr_base + 0x00000294
  #define iocfg_p37                                      (*(volatile unsigned int *)iocfg_p37_adr)
  #define iocfg_p38_adr                                  0x00338298                                                   // lhl_adr_base + 0x00000298
  #define iocfg_p38                                      (*(volatile unsigned int *)iocfg_p38_adr)
  #define iocfg_p39_adr                                  0x0033829c                                                   // lhl_adr_base + 0x0000029c
  #define iocfg_p39                                      (*(volatile unsigned int *)iocfg_p39_adr)
  #define scanp_cntr_init_val_adr                        0x003382b0                                                   // lhl_adr_base + 0x000002b0
  #define scanp_cntr_init_val                            (*(volatile unsigned int *)scanp_cntr_init_val_adr)
  #define opt0_togg_val_adr                              0x003382b4                                                   // lhl_adr_base + 0x000002b4
  #define opt0_togg_val                                  (*(volatile unsigned int *)opt0_togg_val_adr)
  #define opt1_togg_val_adr                              0x003382b8                                                   // lhl_adr_base + 0x000002b8
  #define opt1_togg_val                                  (*(volatile unsigned int *)opt1_togg_val_adr)
  #define opt2_togg_val_adr                              0x003382bc                                                   // lhl_adr_base + 0x000002bc
  #define opt2_togg_val                                  (*(volatile unsigned int *)opt2_togg_val_adr)
  #define opt3_togg_val_adr                              0x003382c0                                                   // lhl_adr_base + 0x000002c0
  #define opt3_togg_val                                  (*(volatile unsigned int *)opt3_togg_val_adr)
  #define optx_smp_val_adr                               0x003382cc                                                   // lhl_adr_base + 0x000002cc
  #define optx_smp_val                                   (*(volatile unsigned int *)optx_smp_val_adr)
  #define opty_smp_val_adr                               0x003382d0                                                   // lhl_adr_base + 0x000002d0
  #define opty_smp_val                                   (*(volatile unsigned int *)opty_smp_val_adr)
  #define optz_smp_val_adr                               0x003382d4                                                   // lhl_adr_base + 0x000002d4
  #define optz_smp_val                                   (*(volatile unsigned int *)optz_smp_val_adr)
  #define hidoff_keepstate2_adr                          0x003382d8                                                   // lhl_adr_base + 0x000002d8
  #define hidoff_keepstate2                              (*(volatile unsigned int *)hidoff_keepstate2_adr)
  #define wake_from_hidoff_cntl_adr                      0x003382dc                                                   // lhl_adr_base + 0x000002dc
  #define wake_from_hidoff_cntl                          (*(volatile unsigned int *)wake_from_hidoff_cntl_adr)
  #define osc32k_ctl_adr                                 0x003382e0                                                   // lhl_adr_base + 0x000002e0
  #define osc32k_ctl                                     (*(volatile unsigned int *)osc32k_ctl_adr)
  #define retram_pwr_ctl_adr                             0x003382e4                                                   // lhl_adr_base + 0x000002e4
  #define retram_pwr_ctl                                 (*(volatile unsigned int *)retram_pwr_ctl_adr)
  #define keyscan_ctl_adr                                0x00338000                                                   // mia_adr_base + 0x00000000
  #define keyscan_ctl                                    (*(volatile unsigned int *)keyscan_ctl_adr)
  #define debounce_adr                                   0x00338004                                                   // mia_adr_base + 0x00000004
  #define debounce                                       (*(volatile unsigned int *)debounce_adr)
  #define keyfifo_cnt_adr                                0x00338008                                                   // mia_adr_base + 0x00000008
  #define keyfifo_cnt                                    (*(volatile unsigned int *)keyfifo_cnt_adr)
  #define keyfifo_adr                                    0x0033800c                                                   // mia_adr_base + 0x0000000c
  #define keyfifo                                        (*(volatile unsigned int *)keyfifo_adr)
  #define mia_irq_cfg_adr                                0x00338010                                                   // mia_adr_base + 0x00000010
  #define mia_irq_cfg                                    (*(volatile unsigned int *)mia_irq_cfg_adr)
  #define mia_ctl_adr                                    0x00338014                                                   // mia_adr_base + 0x00000014
  #define mia_ctl                                        (*(volatile unsigned int *)mia_ctl_adr)
  #define mia_status_adr                                 0x00338018                                                   // mia_adr_base + 0x00000018
  #define mia_status                                     (*(volatile unsigned int *)mia_status_adr)
  #define mia_dbg_adr                                    0x0033801c                                                   // mia_adr_base + 0x0000001c
  #define mia_dbg                                        (*(volatile unsigned int *)mia_dbg_adr)
  #define qctl_adr                                       0x00338020                                                   // mia_adr_base + 0x00000020
  #define qctl                                           (*(volatile unsigned int *)qctl_adr)
  #define qd_ch_en_adr                                   0x00338024                                                   // mia_adr_base + 0x00000024
  #define qd_ch_en                                       (*(volatile unsigned int *)qd_ch_en_adr)
  #define qdx_cnt_adr                                    0x00338028                                                   // mia_adr_base + 0x00000028
  #define qdx_cnt                                        (*(volatile unsigned int *)qdx_cnt_adr)
  #define qdy_cnt_adr                                    0x0033802c                                                   // mia_adr_base + 0x0000002c
  #define qdy_cnt                                        (*(volatile unsigned int *)qdy_cnt_adr)
  #define qdz_cnt_adr                                    0x00338030                                                   // mia_adr_base + 0x00000030
  #define qdz_cnt                                        (*(volatile unsigned int *)qdz_cnt_adr)
  #define qflag_adr                                      0x00338034                                                   // mia_adr_base + 0x00000034
  #define qflag                                          (*(volatile unsigned int *)qflag_adr)
  #define mia_spare_adr                                  0x00338038                                                   // mia_adr_base + 0x00000038
  #define mia_spare                                      (*(volatile unsigned int *)mia_spare_adr)
  #define rambo5_adr                                     0x0033803c                                                   // mia_adr_base + 0x0000003c
  #define rambo5                                         (*(volatile unsigned int *)rambo5_adr)
  #define mia_lpo_sel_adr                                0x00338040                                                   // mia_adr_base + 0x00000040
  #define mia_lpo_sel                                    (*(volatile unsigned int *)mia_lpo_sel_adr)
  #define mia_adc_intf_ctl_adr                           0x00338044                                                   // mia_adr_base + 0x00000044
  #define mia_adc_intf_ctl                               (*(volatile unsigned int *)mia_adc_intf_ctl_adr)
  #define mia_adc_dat_adr                                0x00338048                                                   // mia_adr_base + 0x00000048
  #define mia_adc_dat                                    (*(volatile unsigned int *)mia_adc_dat_adr)
  #define mia_ir_buf_ctl_adr                             0x0033804c                                                   // mia_adr_base + 0x0000004c
  #define mia_ir_buf_ctl                                 (*(volatile unsigned int *)mia_ir_buf_ctl_adr)
  #define mia_ir_cmd0_adr                                0x00338050                                                   // mia_adr_base + 0x00000050
  #define mia_ir_cmd0                                    (*(volatile unsigned int *)mia_ir_cmd0_adr)
  #define mia_ir_cmd1_adr                                0x00338054                                                   // mia_adr_base + 0x00000054
  #define mia_ir_cmd1                                    (*(volatile unsigned int *)mia_ir_cmd1_adr)
  #define mia_ir_cmd2_adr                                0x00338058                                                   // mia_adr_base + 0x00000058
  #define mia_ir_cmd2                                    (*(volatile unsigned int *)mia_ir_cmd2_adr)
  #define mia_ir_cmd3_adr                                0x0033805c                                                   // mia_adr_base + 0x0000005c
  #define mia_ir_cmd3                                    (*(volatile unsigned int *)mia_ir_cmd3_adr)
  #define mia_ir_cmd4_adr                                0x00338060                                                   // mia_adr_base + 0x00000060
  #define mia_ir_cmd4                                    (*(volatile unsigned int *)mia_ir_cmd4_adr)
  #define mia_ir_cmd5_adr                                0x00338064                                                   // mia_adr_base + 0x00000064
  #define mia_ir_cmd5                                    (*(volatile unsigned int *)mia_ir_cmd5_adr)
  #define mia_ir_cmd6_adr                                0x00338068                                                   // mia_adr_base + 0x00000068
  #define mia_ir_cmd6                                    (*(volatile unsigned int *)mia_ir_cmd6_adr)
  #define mia_ir_cmd7_adr                                0x0033806c                                                   // mia_adr_base + 0x0000006c
  #define mia_ir_cmd7                                    (*(volatile unsigned int *)mia_ir_cmd7_adr)
  #define mia_ir_ctl_adr                                 0x00338070                                                   // mia_adr_base + 0x00000070
  #define mia_ir_ctl                                     (*(volatile unsigned int *)mia_ir_ctl_adr)
  #define mia_irl_ctl_adr                                0x00338074                                                   // mia_adr_base + 0x00000074
  #define mia_irl_ctl                                    (*(volatile unsigned int *)mia_irl_ctl_adr)
  #define mia_irl_period_adr                             0x00338078                                                   // mia_adr_base + 0x00000078
  #define mia_irl_period                                 (*(volatile unsigned int *)mia_irl_period_adr)
  #define mia_irl_status_adr                             0x0033807c                                                   // mia_adr_base + 0x0000007c
  #define mia_irl_status                                 (*(volatile unsigned int *)mia_irl_status_adr)
  #define main60hz_ctl_adr                               0x00338080                                                   // mia_adr_base + 0x00000080
  #define main60hz_ctl                                   (*(volatile unsigned int *)main60hz_ctl_adr)
  #define triac_on_val1_adr                              0x00338084                                                   // mia_adr_base + 0x00000084
  #define triac_on_val1                                  (*(volatile unsigned int *)triac_on_val1_adr)
  #define triac_off_val1_adr                             0x00338088                                                   // mia_adr_base + 0x00000088
  #define triac_off_val1                                 (*(volatile unsigned int *)triac_off_val1_adr)
  #define triac_on_val2_adr                              0x0033808c                                                   // mia_adr_base + 0x0000008c
  #define triac_on_val2                                  (*(volatile unsigned int *)triac_on_val2_adr)
  #define triac_off_val2_adr                             0x00338090                                                   // mia_adr_base + 0x00000090
  #define triac_off_val2                                 (*(volatile unsigned int *)triac_off_val2_adr)
  #define main_debounce_val_adr                          0x00338094                                                   // mia_adr_base + 0x00000094
  #define main_debounce_val                              (*(volatile unsigned int *)main_debounce_val_adr)
  #define touch_measure_ctl_adr                          0x00338098                                                   // mia_adr_base + 0x00000098
  #define touch_measure_ctl                              (*(volatile unsigned int *)touch_measure_ctl_adr)
  #define touch_in_ctr_adr                               0x0033809c                                                   // mia_adr_base + 0x0000009c
  #define touch_in_ctr                                   (*(volatile unsigned int *)touch_in_ctr_adr)
  #define mia_adc_ctl0_adr                               0x003380a0                                                   // mia_adr_base + 0x000000a0
  #define mia_adc_ctl0                                   (*(volatile unsigned int *)mia_adc_ctl0_adr)
  #define mia_adc_ctl1_adr                               0x003380a4                                                   // mia_adr_base + 0x000000a4
  #define mia_adc_ctl1                                   (*(volatile unsigned int *)mia_adc_ctl1_adr)
  #define mia_adc_ctl2_adr                               0x003380a8                                                   // mia_adr_base + 0x000000a8
  #define mia_adc_ctl2                                   (*(volatile unsigned int *)mia_adc_ctl2_adr)
  #define triac_on_val3_adr                              0x003380b0                                                   // mia_adr_base + 0x000000b0
  #define triac_on_val3                                  (*(volatile unsigned int *)triac_on_val3_adr)
  #define triac_off_val3_adr                             0x003380b4                                                   // mia_adr_base + 0x000000b4
  #define triac_off_val3                                 (*(volatile unsigned int *)triac_off_val3_adr)
  #define triac_on_val4_adr                              0x003380b8                                                   // mia_adr_base + 0x000000b8
  #define triac_on_val4                                  (*(volatile unsigned int *)triac_on_val4_adr)
  #define triac_off_val4_adr                             0x003380bc                                                   // mia_adr_base + 0x000000bc
  #define triac_off_val4                                 (*(volatile unsigned int *)triac_off_val4_adr)
  #define pwm_cfg_adr                                    0x003380c0                                                   // mia_adr_base + 0x000000c0
  #define pwm_cfg                                        (*(volatile unsigned int *)pwm_cfg_adr)
  #define pwm0_init_val_adr                              0x003380c4                                                   // mia_adr_base + 0x000000c4
  #define pwm0_init_val                                  (*(volatile unsigned int *)pwm0_init_val_adr)
  #define pwm0_togg_val_adr                              0x003380c8                                                   // mia_adr_base + 0x000000c8
  #define pwm0_togg_val                                  (*(volatile unsigned int *)pwm0_togg_val_adr)
  #define pwm1_init_val_adr                              0x003380cc                                                   // mia_adr_base + 0x000000cc
  #define pwm1_init_val                                  (*(volatile unsigned int *)pwm1_init_val_adr)
  #define pwm1_togg_val_adr                              0x003380d0                                                   // mia_adr_base + 0x000000d0
  #define pwm1_togg_val                                  (*(volatile unsigned int *)pwm1_togg_val_adr)
  #define pwm2_init_val_adr                              0x003380d4                                                   // mia_adr_base + 0x000000d4
  #define pwm2_init_val                                  (*(volatile unsigned int *)pwm2_init_val_adr)
  #define pwm2_togg_val_adr                              0x003380d8                                                   // mia_adr_base + 0x000000d8
  #define pwm2_togg_val                                  (*(volatile unsigned int *)pwm2_togg_val_adr)
  #define pwm3_init_val_adr                              0x003380dc                                                   // mia_adr_base + 0x000000dc
  #define pwm3_init_val                                  (*(volatile unsigned int *)pwm3_init_val_adr)
  #define pwm3_togg_val_adr                              0x003380e0                                                   // mia_adr_base + 0x000000e0
  #define pwm3_togg_val                                  (*(volatile unsigned int *)pwm3_togg_val_adr)
  #define pwm0_cntr_adr                                  0x003380e4                                                   // mia_adr_base + 0x000000e4
  #define pwm0_cntr                                      (*(volatile unsigned int *)pwm0_cntr_adr)
  #define pwm1_cntr_adr                                  0x003380e8                                                   // mia_adr_base + 0x000000e8
  #define pwm1_cntr                                      (*(volatile unsigned int *)pwm1_cntr_adr)
  #define pwm2_cntr_adr                                  0x003380ec                                                   // mia_adr_base + 0x000000ec
  #define pwm2_cntr                                      (*(volatile unsigned int *)pwm2_cntr_adr)
  #define pwm3_cntr_adr                                  0x003380f0                                                   // mia_adr_base + 0x000000f0
  #define pwm3_cntr                                      (*(volatile unsigned int *)pwm3_cntr_adr)
  #define mia_ir_status_adr                              0x003380f4                                                   // mia_adr_base + 0x000000f4
  #define mia_ir_status                                  (*(volatile unsigned int *)mia_ir_status_adr)
  #define mia_ir_ctl_extend_adr                          0x003380f8                                                   // mia_adr_base + 0x000000f8
  #define mia_ir_ctl_extend                              (*(volatile unsigned int *)mia_ir_ctl_extend_adr)
  #define adc_dma_ctl0_adr                               0x003383e0                                                   // mia_adr_base + 0x000003e0
  #define adc_dma_ctl0                                   (*(volatile unsigned int *)adc_dma_ctl0_adr)
  #define adc_dma_ctl1_adr                               0x003383e4                                                   // mia_adr_base + 0x000003e4
  #define adc_dma_ctl1                                   (*(volatile unsigned int *)adc_dma_ctl1_adr)
  #define adc_dma_ctl2_adr                               0x003383e8                                                   // mia_adr_base + 0x000003e8
  #define adc_dma_ctl2                                   (*(volatile unsigned int *)adc_dma_ctl2_adr)
  #define adc_dma_data_adr                               0x003383ec                                                   // mia_adr_base + 0x000003ec
  #define adc_dma_data                                   (*(volatile unsigned int *)adc_dma_data_adr)
  #define adc_dma_status_adr                             0x003383f0                                                   // mia_adr_base + 0x000003f0
  #define adc_dma_status                                 (*(volatile unsigned int *)adc_dma_status_adr)
  #define mia_adc_intf_ctl2_adr                          0x003383fc                                                   // mia_adr_base + 0x000003fc
  #define mia_adc_intf_ctl2                              (*(volatile unsigned int *)mia_adc_intf_ctl2_adr)
  #define adc_filter_ctl0_adr                            0x00338300                                                   // mia_adr_base + 0x00000300
  #define adc_filter_ctl0                                (*(volatile unsigned int *)adc_filter_ctl0_adr)
  #define adc_filter_ctl1_adr                            0x00338304                                                   // mia_adr_base + 0x00000304
  #define adc_filter_ctl1                                (*(volatile unsigned int *)adc_filter_ctl1_adr)
  #define adc_filter_ctl2_adr                            0x00338308                                                   // mia_adr_base + 0x00000308
  #define adc_filter_ctl2                                (*(volatile unsigned int *)adc_filter_ctl2_adr)
  #define adc_filter_ctl3_adr                            0x0033830c                                                   // mia_adr_base + 0x0000030c
  #define adc_filter_ctl3                                (*(volatile unsigned int *)adc_filter_ctl3_adr)
  #define adc_filter_ctl4_adr                            0x00338310                                                   // mia_adr_base + 0x00000310
  #define adc_filter_ctl4                                (*(volatile unsigned int *)adc_filter_ctl4_adr)
  #define adc_filter_ctl5_adr                            0x00338314                                                   // mia_adr_base + 0x00000314
  #define adc_filter_ctl5                                (*(volatile unsigned int *)adc_filter_ctl5_adr)
  #define adc_filter_ctl6_adr                            0x00338318                                                   // mia_adr_base + 0x00000318
  #define adc_filter_ctl6                                (*(volatile unsigned int *)adc_filter_ctl6_adr)
  #define adc_filter_ctl7_adr                            0x0033831c                                                   // mia_adr_base + 0x0000031c
  #define adc_filter_ctl7                                (*(volatile unsigned int *)adc_filter_ctl7_adr)
  #define adc_filter_ctl8_adr                            0x00338320                                                   // mia_adr_base + 0x00000320
  #define adc_filter_ctl8                                (*(volatile unsigned int *)adc_filter_ctl8_adr)
  #define adc_filter_ctl9_adr                            0x00338324                                                   // mia_adr_base + 0x00000324
  #define adc_filter_ctl9                                (*(volatile unsigned int *)adc_filter_ctl9_adr)
  #define adc_filter_ctlA_adr                            0x00338328                                                   // mia_adr_base + 0x00000328
  #define adc_filter_ctlA                                (*(volatile unsigned int *)adc_filter_ctlA_adr)
  #define adc_filter_ctlB_adr                            0x0033832c                                                   // mia_adr_base + 0x0000032c
  #define adc_filter_ctlB                                (*(volatile unsigned int *)adc_filter_ctlB_adr)
  #define adc_filter_ctlC_adr                            0x00338330                                                   // mia_adr_base + 0x00000330
  #define adc_filter_ctlC                                (*(volatile unsigned int *)adc_filter_ctlC_adr)
  #define adc_filter_ctlD_adr                            0x00338334                                                   // mia_adr_base + 0x00000334
  #define adc_filter_ctlD                                (*(volatile unsigned int *)adc_filter_ctlD_adr)
  #define adc_filter_ctlE_adr                            0x00338338                                                   // mia_adr_base + 0x00000338
  #define adc_filter_ctlE                                (*(volatile unsigned int *)adc_filter_ctlE_adr)
  #define adc_filter_ctlF_adr                            0x0033833c                                                   // mia_adr_base + 0x0000033c
  #define adc_filter_ctlF                                (*(volatile unsigned int *)adc_filter_ctlF_adr)
  #define adc_api_ctl0_adr                               0x00338340                                                   // mia_adr_base + 0x00000340
  #define adc_api_ctl0                                   (*(volatile unsigned int *)adc_api_ctl0_adr)
  #define adc_api_ctl1_adr                               0x00338344                                                   // mia_adr_base + 0x00000344
  #define adc_api_ctl1                                   (*(volatile unsigned int *)adc_api_ctl1_adr)
  #define adc_api_ctl2_adr                               0x00338348                                                   // mia_adr_base + 0x00000348
  #define adc_api_ctl2                                   (*(volatile unsigned int *)adc_api_ctl2_adr)
  #define adc_api_ctl3_adr                               0x0033834c                                                   // mia_adr_base + 0x0000034c
  #define adc_api_ctl3                                   (*(volatile unsigned int *)adc_api_ctl3_adr)
  #define adc_api_ctl4_adr                               0x00338350                                                   // mia_adr_base + 0x00000350
  #define adc_api_ctl4                                   (*(volatile unsigned int *)adc_api_ctl4_adr)
  #define adc_dma_data_ch2_adr                           0x00338360                                                   // mia_adr_base + 0x00000360
  #define adc_dma_data_ch2                               (*(volatile unsigned int *)adc_dma_data_ch2_adr)
  #define gpio_i_st_port0_adr                            0x00338364                                                   // mia_adr_base + 0x00000364
  #define gpio_i_st_port0                                (*(volatile unsigned int *)gpio_i_st_port0_adr)
  #define gpio_i_st_port1_adr                            0x00338368                                                   // mia_adr_base + 0x00000368
  #define gpio_i_st_port1                                (*(volatile unsigned int *)gpio_i_st_port1_adr)
  #define gpio_i_st_port2_adr                            0x0033836c                                                   // mia_adr_base + 0x0000036c
  #define gpio_i_st_port2                                (*(volatile unsigned int *)gpio_i_st_port2_adr)
  #define pwm4_init_val_adr                              0x00338370                                                   // mia_adr_base + 0x00000370
  #define pwm4_init_val                                  (*(volatile unsigned int *)pwm4_init_val_adr)
  #define pwm4_togg_val_adr                              0x00338374                                                   // mia_adr_base + 0x00000374
  #define pwm4_togg_val                                  (*(volatile unsigned int *)pwm4_togg_val_adr)
  #define pwm4_cntr_adr                                  0x00338378                                                   // mia_adr_base + 0x00000378
  #define pwm4_cntr                                      (*(volatile unsigned int *)pwm4_cntr_adr)
  #define pwm5_init_val_adr                              0x0033837c                                                   // mia_adr_base + 0x0000037c
  #define pwm5_init_val                                  (*(volatile unsigned int *)pwm5_init_val_adr)
  #define pwm5_togg_val_adr                              0x00338380                                                   // mia_adr_base + 0x00000380
  #define pwm5_togg_val                                  (*(volatile unsigned int *)pwm5_togg_val_adr)
  #define pwm5_cntr_adr                                  0x00338384                                                   // mia_adr_base + 0x00000384
  #define pwm5_cntr                                      (*(volatile unsigned int *)pwm5_cntr_adr)
  #define aclk0_ctl_adr                                  0x00338388                                                   // mia_adr_base + 0x00000388
  #define aclk0_ctl                                      (*(volatile unsigned int *)aclk0_ctl_adr)
  #define aclk1_ctl_adr                                  0x0033838c                                                   // mia_adr_base + 0x0000038c
  #define aclk1_ctl                                      (*(volatile unsigned int *)aclk1_ctl_adr)
  #define ir_ctl_mia_adr                                 0x00338390                                                   // mia_adr_base + 0x00000390
  #define ir_ctl_mia                                     (*(volatile unsigned int *)ir_ctl_mia_adr)
  #define gpio_o_val_port0_adr                           0x00338394                                                   // mia_adr_base + 0x00000394
  #define gpio_o_val_port0                               (*(volatile unsigned int *)gpio_o_val_port0_adr)
  #define gpio_o_val_port1_adr                           0x00338398                                                   // mia_adr_base + 0x00000398
  #define gpio_o_val_port1                               (*(volatile unsigned int *)gpio_o_val_port1_adr)
  #define gpio_o_val_port2_adr                           0x0033839c                                                   // mia_adr_base + 0x0000039c
  #define gpio_o_val_port2                               (*(volatile unsigned int *)gpio_o_val_port2_adr)
  #define ksi_used_adr                                   0x003383a0                                                   // mia_adr_base + 0x000003a0
  #define ksi_used                                       (*(volatile unsigned int *)ksi_used_adr)
  #define iocfg_premux_0_adr                             0x003383a4                                                   // mia_adr_base + 0x000003a4
  #define iocfg_premux_0                                 (*(volatile unsigned int *)iocfg_premux_0_adr)
  #define ch_sel_cfg_adr                                 0x003383a8                                                   // mia_adr_base + 0x000003a8
  #define ch_sel_cfg                                     (*(volatile unsigned int *)ch_sel_cfg_adr)
  #define lhl_wait_cycle_adr                             0x003383ac                                                   // mia_adr_base + 0x000003ac
  #define lhl_wait_cycle                                 (*(volatile unsigned int *)lhl_wait_cycle_adr)
  #define iocfg_premux_1_adr                             0x003383b0                                                   // mia_adr_base + 0x000003b0
  #define iocfg_premux_1                                 (*(volatile unsigned int *)iocfg_premux_1_adr)
  #define iocfg_premux_2_adr                             0x003383b4                                                   // mia_adr_base + 0x000003b4
  #define iocfg_premux_2                                 (*(volatile unsigned int *)iocfg_premux_2_adr)
  #define iocfg_premux_3_adr                             0x003383b8                                                   // mia_adr_base + 0x000003b8
  #define iocfg_premux_3                                 (*(volatile unsigned int *)iocfg_premux_3_adr)
  #define iocfg_premux_4_adr                             0x003383bc                                                   // mia_adr_base + 0x000003bc
  #define iocfg_premux_4                                 (*(volatile unsigned int *)iocfg_premux_4_adr)
  #define iocfg_premux_5_adr                             0x003383c0                                                   // mia_adr_base + 0x000003c0
  #define iocfg_premux_5                                 (*(volatile unsigned int *)iocfg_premux_5_adr)
  #define iocfg_premux_6_adr                             0x003383c4                                                   // mia_adr_base + 0x000003c4
  #define iocfg_premux_6                                 (*(volatile unsigned int *)iocfg_premux_6_adr)
  #define iocfg_premux_7_adr                             0x003383c8                                                   // mia_adr_base + 0x000003c8
  #define iocfg_premux_7                                 (*(volatile unsigned int *)iocfg_premux_7_adr)
  #define iocfg_premux_8_adr                             0x003383cc                                                   // mia_adr_base + 0x000003cc
  #define iocfg_premux_8                                 (*(volatile unsigned int *)iocfg_premux_8_adr)
  #define iocfg_premux_9_adr                             0x003383d0                                                   // mia_adr_base + 0x000003d0
  #define iocfg_premux_9                                 (*(volatile unsigned int *)iocfg_premux_9_adr)
  #define iocfg_premux_10_adr                            0x003383d4                                                   // mia_adr_base + 0x000003d4
  #define iocfg_premux_10                                (*(volatile unsigned int *)iocfg_premux_10_adr)
  #define iocfg_premux_11_adr                            0x003383d8                                                   // mia_adr_base + 0x000003d8
  #define iocfg_premux_11                                (*(volatile unsigned int *)iocfg_premux_11_adr)
  #define iocfg_premux_12_adr                            0x003383dc                                                   // mia_adr_base + 0x000003dc
  #define iocfg_premux_12                                (*(volatile unsigned int *)iocfg_premux_12_adr)
  #define iocfg_fcn_p0_adr                               0x00338400                                                   // mia_adr_base + 0x00000400
  #define iocfg_fcn_p0                                   (*(volatile unsigned int *)iocfg_fcn_p0_adr)
  #define iocfg_fcn_p1_adr                               0x00338404                                                   // mia_adr_base + 0x00000404
  #define iocfg_fcn_p1                                   (*(volatile unsigned int *)iocfg_fcn_p1_adr)
  #define iocfg_fcn_p2_adr                               0x00338408                                                   // mia_adr_base + 0x00000408
  #define iocfg_fcn_p2                                   (*(volatile unsigned int *)iocfg_fcn_p2_adr)
  #define iocfg_fcn_p3_adr                               0x0033840c                                                   // mia_adr_base + 0x0000040c
  #define iocfg_fcn_p3                                   (*(volatile unsigned int *)iocfg_fcn_p3_adr)
  #define iocfg_fcn_p4_adr                               0x00338410                                                   // mia_adr_base + 0x00000410
  #define iocfg_fcn_p4                                   (*(volatile unsigned int *)iocfg_fcn_p4_adr)
  #define iocfg_fcn_p5_adr                               0x00338414                                                   // mia_adr_base + 0x00000414
  #define iocfg_fcn_p5                                   (*(volatile unsigned int *)iocfg_fcn_p5_adr)
  #define iocfg_fcn_p6_adr                               0x00338418                                                   // mia_adr_base + 0x00000418
  #define iocfg_fcn_p6                                   (*(volatile unsigned int *)iocfg_fcn_p6_adr)
  #define iocfg_fcn_p7_adr                               0x0033841c                                                   // mia_adr_base + 0x0000041c
  #define iocfg_fcn_p7                                   (*(volatile unsigned int *)iocfg_fcn_p7_adr)
  #define iocfg_fcn_p8_adr                               0x00338420                                                   // mia_adr_base + 0x00000420
  #define iocfg_fcn_p8                                   (*(volatile unsigned int *)iocfg_fcn_p8_adr)
  #define iocfg_fcn_p9_adr                               0x00338424                                                   // mia_adr_base + 0x00000424
  #define iocfg_fcn_p9                                   (*(volatile unsigned int *)iocfg_fcn_p9_adr)
  #define iocfg_fcn_p10_adr                              0x00338428                                                   // mia_adr_base + 0x00000428
  #define iocfg_fcn_p10                                  (*(volatile unsigned int *)iocfg_fcn_p10_adr)
  #define iocfg_fcn_p11_adr                              0x0033842c                                                   // mia_adr_base + 0x0000042c
  #define iocfg_fcn_p11                                  (*(volatile unsigned int *)iocfg_fcn_p11_adr)
  #define iocfg_fcn_p12_adr                              0x00338430                                                   // mia_adr_base + 0x00000430
  #define iocfg_fcn_p12                                  (*(volatile unsigned int *)iocfg_fcn_p12_adr)
  #define iocfg_fcn_p13_adr                              0x00338434                                                   // mia_adr_base + 0x00000434
  #define iocfg_fcn_p13                                  (*(volatile unsigned int *)iocfg_fcn_p13_adr)
  #define iocfg_fcn_p14_adr                              0x00338438                                                   // mia_adr_base + 0x00000438
  #define iocfg_fcn_p14                                  (*(volatile unsigned int *)iocfg_fcn_p14_adr)
  #define iocfg_fcn_p15_adr                              0x0033843c                                                   // mia_adr_base + 0x0000043c
  #define iocfg_fcn_p15                                  (*(volatile unsigned int *)iocfg_fcn_p15_adr)
  #define iocfg_fcn_p16_adr                              0x00338440                                                   // mia_adr_base + 0x00000440
  #define iocfg_fcn_p16                                  (*(volatile unsigned int *)iocfg_fcn_p16_adr)
  #define iocfg_fcn_p17_adr                              0x00338444                                                   // mia_adr_base + 0x00000444
  #define iocfg_fcn_p17                                  (*(volatile unsigned int *)iocfg_fcn_p17_adr)
  #define iocfg_fcn_p18_adr                              0x00338448                                                   // mia_adr_base + 0x00000448
  #define iocfg_fcn_p18                                  (*(volatile unsigned int *)iocfg_fcn_p18_adr)
  #define iocfg_fcn_p19_adr                              0x0033844c                                                   // mia_adr_base + 0x0000044c
  #define iocfg_fcn_p19                                  (*(volatile unsigned int *)iocfg_fcn_p19_adr)
  #define iocfg_fcn_p20_adr                              0x00338450                                                   // mia_adr_base + 0x00000450
  #define iocfg_fcn_p20                                  (*(volatile unsigned int *)iocfg_fcn_p20_adr)
  #define iocfg_fcn_p21_adr                              0x00338454                                                   // mia_adr_base + 0x00000454
  #define iocfg_fcn_p21                                  (*(volatile unsigned int *)iocfg_fcn_p21_adr)
  #define iocfg_fcn_p22_adr                              0x00338458                                                   // mia_adr_base + 0x00000458
  #define iocfg_fcn_p22                                  (*(volatile unsigned int *)iocfg_fcn_p22_adr)
  #define iocfg_fcn_p23_adr                              0x0033845c                                                   // mia_adr_base + 0x0000045c
  #define iocfg_fcn_p23                                  (*(volatile unsigned int *)iocfg_fcn_p23_adr)
  #define iocfg_fcn_p24_adr                              0x00338460                                                   // mia_adr_base + 0x00000460
  #define iocfg_fcn_p24                                  (*(volatile unsigned int *)iocfg_fcn_p24_adr)
  #define iocfg_fcn_p25_adr                              0x00338464                                                   // mia_adr_base + 0x00000464
  #define iocfg_fcn_p25                                  (*(volatile unsigned int *)iocfg_fcn_p25_adr)
  #define iocfg_fcn_p26_adr                              0x00338468                                                   // mia_adr_base + 0x00000468
  #define iocfg_fcn_p26                                  (*(volatile unsigned int *)iocfg_fcn_p26_adr)
  #define iocfg_fcn_p27_adr                              0x0033846c                                                   // mia_adr_base + 0x0000046c
  #define iocfg_fcn_p27                                  (*(volatile unsigned int *)iocfg_fcn_p27_adr)
  #define iocfg_fcn_p28_adr                              0x00338470                                                   // mia_adr_base + 0x00000470
  #define iocfg_fcn_p28                                  (*(volatile unsigned int *)iocfg_fcn_p28_adr)
  #define iocfg_fcn_p29_adr                              0x00338474                                                   // mia_adr_base + 0x00000474
  #define iocfg_fcn_p29                                  (*(volatile unsigned int *)iocfg_fcn_p29_adr)
  #define iocfg_fcn_p30_adr                              0x00338478                                                   // mia_adr_base + 0x00000478
  #define iocfg_fcn_p30                                  (*(volatile unsigned int *)iocfg_fcn_p30_adr)
  #define iocfg_fcn_p31_adr                              0x0033847c                                                   // mia_adr_base + 0x0000047c
  #define iocfg_fcn_p31                                  (*(volatile unsigned int *)iocfg_fcn_p31_adr)
  #define iocfg_fcn_p32_adr                              0x00338480                                                   // mia_adr_base + 0x00000480
  #define iocfg_fcn_p32                                  (*(volatile unsigned int *)iocfg_fcn_p32_adr)
  #define iocfg_fcn_p33_adr                              0x00338484                                                   // mia_adr_base + 0x00000484
  #define iocfg_fcn_p33                                  (*(volatile unsigned int *)iocfg_fcn_p33_adr)
  #define iocfg_fcn_p34_adr                              0x00338488                                                   // mia_adr_base + 0x00000488
  #define iocfg_fcn_p34                                  (*(volatile unsigned int *)iocfg_fcn_p34_adr)
  #define iocfg_fcn_p35_adr                              0x0033848c                                                   // mia_adr_base + 0x0000048c
  #define iocfg_fcn_p35                                  (*(volatile unsigned int *)iocfg_fcn_p35_adr)
  #define iocfg_fcn_p36_adr                              0x00338490                                                   // mia_adr_base + 0x00000490
  #define iocfg_fcn_p36                                  (*(volatile unsigned int *)iocfg_fcn_p36_adr)
  #define iocfg_fcn_p37_adr                              0x00338494                                                   // mia_adr_base + 0x00000494
  #define iocfg_fcn_p37                                  (*(volatile unsigned int *)iocfg_fcn_p37_adr)
  #define iocfg_fcn_p38_adr                              0x00338498                                                   // mia_adr_base + 0x00000498
  #define iocfg_fcn_p38                                  (*(volatile unsigned int *)iocfg_fcn_p38_adr)
  #define iocfg_fcn_p39_adr                              0x0033849c                                                   // mia_adr_base + 0x0000049c
  #define iocfg_fcn_p39                                  (*(volatile unsigned int *)iocfg_fcn_p39_adr)
  #define iocfg_premux_13_adr                            0x003384a0                                                   // mia_adr_base + 0x000004a0
  #define iocfg_premux_13                                (*(volatile unsigned int *)iocfg_premux_13_adr)
  #define iocfg_premux_14_adr                            0x00338354                                                   // mia_adr_base + 0x00000354
  #define iocfg_premux_14                                (*(volatile unsigned int *)iocfg_premux_14_adr)
  #define iocfg_premux_15_adr                            0x00338358                                                   // mia_adr_base + 0x00000358
  #define iocfg_premux_15                                (*(volatile unsigned int *)iocfg_premux_15_adr)
  #define cic_output_ch1_latch_adr                       0x003384a4                                                   // mia_adr_base + 0x000004a4
  #define cic_output_ch1_latch                           (*(volatile unsigned int *)cic_output_ch1_latch_adr)
  #define cic_output_ch2_latch_adr                       0x003384a8                                                   // mia_adr_base + 0x000004a8
  #define cic_output_ch2_latch                           (*(volatile unsigned int *)cic_output_ch2_latch_adr)
  #define clk_adc_cnt_adr                                0x003384ac                                                   // mia_adr_base + 0x000004ac
  #define clk_adc_cnt                                    (*(volatile unsigned int *)clk_adc_cnt_adr)
  #define clk_dma_cnt_adr                                0x003384b0                                                   // mia_adr_base + 0x000004b0
  #define clk_dma_cnt                                    (*(volatile unsigned int *)clk_dma_cnt_adr)
  #define data_toggle_cnt_adr                            0x003384b4                                                   // mia_adr_base + 0x000004b4
  #define data_toggle_cnt                                (*(volatile unsigned int *)data_toggle_cnt_adr)
  #define adc_fifo_status_ch2_adr                        0x003384b8                                                   // mia_adr_base + 0x000004b8
  #define adc_fifo_status_ch2                            (*(volatile unsigned int *)adc_fifo_status_ch2_adr)
  #define auxAdchpfNum23_adr                             0x003384bc                                                   // mia_adr_base + 0x000004bc
  #define auxAdchpfNum23                                 (*(volatile unsigned int *)auxAdchpfNum23_adr)
  #define auxAdchpfDen3_adr                              0x003384c0                                                   // mia_adr_base + 0x000004c0
  #define auxAdchpfDen3                                  (*(volatile unsigned int *)auxAdchpfDen3_adr)
  #define auxAdcBq12Num1_adr                             0x003384c4                                                   // mia_adr_base + 0x000004c4
  #define auxAdcBq12Num1                                 (*(volatile unsigned int *)auxAdcBq12Num1_adr)
  #define auxAdcBq34Num1_adr                             0x003384c8                                                   // mia_adr_base + 0x000004c8
  #define auxAdcBq34Num1                                 (*(volatile unsigned int *)auxAdcBq34Num1_adr)
  #define auxAdcCicGain_adr                              0x003384cc                                                   // mia_adr_base + 0x000004cc
  #define auxAdcCicGain                                  (*(volatile unsigned int *)auxAdcCicGain_adr)
  #define auxAdcOverride_adr                             0x003384d0                                                   // mia_adr_base + 0x000004d0
  #define auxAdcOverride                                 (*(volatile unsigned int *)auxAdcOverride_adr)
  #define auxAdcCoef_adr                                 0x003384d4                                                   // mia_adr_base + 0x000004d4
  #define auxAdcCoef                                     (*(volatile unsigned int *)auxAdcCoef_adr)
  #define spiffy2_spiffy_cfg_adr                         0x00352400                                                   // spiffy2_base + 0x00000000
  #define spiffy2_spiffy_cfg                             (*(volatile unsigned int *)spiffy2_spiffy_cfg_adr)
  #define spiffy2_spiffy_TransmissionLength_adr          0x00352404                                                   // spiffy2_base + 0x00000004
  #define spiffy2_spiffy_TransmissionLength              (*(volatile unsigned int *)spiffy2_spiffy_TransmissionLength_adr)
  #define spiffy2_spiffy_TxFIFOLevel_adr                 0x00352408                                                   // spiffy2_base + 0x00000008
  #define spiffy2_spiffy_TxFIFOLevel                     (*(volatile unsigned int *)spiffy2_spiffy_TxFIFOLevel_adr)
  #define spiffy2_spiffy_TxAELevel_adr                   0x0035240c                                                   // spiffy2_base + 0x0000000c
  #define spiffy2_spiffy_TxAELevel                       (*(volatile unsigned int *)spiffy2_spiffy_TxAELevel_adr)
  #define spiffy2_spiffy_TxDMALength_adr                 0x00352410                                                   // spiffy2_base + 0x00000010
  #define spiffy2_spiffy_TxDMALength                     (*(volatile unsigned int *)spiffy2_spiffy_TxDMALength_adr)
  #define spiffy2_spiffy_RxLength_adr                    0x00352414                                                   // spiffy2_base + 0x00000014
  #define spiffy2_spiffy_RxLength                        (*(volatile unsigned int *)spiffy2_spiffy_RxLength_adr)
  #define spiffy2_spiffy_RxFIFOLevel_adr                 0x00352418                                                   // spiffy2_base + 0x00000018
  #define spiffy2_spiffy_RxFIFOLevel                     (*(volatile unsigned int *)spiffy2_spiffy_RxFIFOLevel_adr)
  #define spiffy2_spiffy_RxAFLevel_adr                   0x0035241c                                                   // spiffy2_base + 0x0000001c
  #define spiffy2_spiffy_RxAFLevel                       (*(volatile unsigned int *)spiffy2_spiffy_RxAFLevel_adr)
  #define spiffy2_spiffy_RxDMALength_adr                 0x00352420                                                   // spiffy2_base + 0x00000020
  #define spiffy2_spiffy_RxDMALength                     (*(volatile unsigned int *)spiffy2_spiffy_RxDMALength_adr)
  #define spiffy2_spiffy_IntStatus_adr                   0x00352424                                                   // spiffy2_base + 0x00000024
  #define spiffy2_spiffy_IntStatus                       (*(volatile unsigned int *)spiffy2_spiffy_IntStatus_adr)
  #define spiffy2_spiffy_IntEnable_adr                   0x00352428                                                   // spiffy2_base + 0x00000028
  #define spiffy2_spiffy_IntEnable                       (*(volatile unsigned int *)spiffy2_spiffy_IntEnable_adr)
  #define spiffy2_spiffy_Status_adr                      0x0035242c                                                   // spiffy2_base + 0x0000002c
  #define spiffy2_spiffy_Status                          (*(volatile unsigned int *)spiffy2_spiffy_Status_adr)
  #define spiffy2_spiffy_ClockCfg_adr                    0x00352430                                                   // spiffy2_base + 0x00000030
  #define spiffy2_spiffy_ClockCfg                        (*(volatile unsigned int *)spiffy2_spiffy_ClockCfg_adr)
  #define spiffy2_spiffy_DBICLength_adr                  0x00352434                                                   // spiffy2_base + 0x00000034
  #define spiffy2_spiffy_DBICLength                      (*(volatile unsigned int *)spiffy2_spiffy_DBICLength_adr)
  #define spiffy2_spiffy_QSPILength_adr                  0x00352438                                                   // spiffy2_base + 0x00000038
  #define spiffy2_spiffy_QSPILength                      (*(volatile unsigned int *)spiffy2_spiffy_QSPILength_adr)
  #define spiffy2_spiffy_AHBMaster_adr                   0x0035243c                                                   // spiffy2_base + 0x0000003c
  #define spiffy2_spiffy_AHBMaster                       (*(volatile unsigned int *)spiffy2_spiffy_AHBMaster_adr)
  #define spiffy2_spiffy_AHBMaster_code_adr              0x00352440                                                   // spiffy2_base + 0x00000040
  #define spiffy2_spiffy_AHBMaster_code                  (*(volatile unsigned int *)spiffy2_spiffy_AHBMaster_code_adr)
  #define spiffy2_spiffy_TxTest_adr                      0x00352444                                                   // spiffy2_base + 0x00000044
  #define spiffy2_spiffy_TxTest                          (*(volatile unsigned int *)spiffy2_spiffy_TxTest_adr)
  #define spiffy2_spiffy_RxFIFO0_adr                     0x00352480                                                   // spiffy2_base + 0x00000080
  #define spiffy2_spiffy_RxFIFO0                         (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO0_adr)
  #define spiffy2_spiffy_RxFIFO1_adr                     0x00352484                                                   // spiffy2_base + 0x00000084
  #define spiffy2_spiffy_RxFIFO1                         (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO1_adr)
  #define spiffy2_spiffy_RxFIFO2_adr                     0x00352488                                                   // spiffy2_base + 0x00000088
  #define spiffy2_spiffy_RxFIFO2                         (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO2_adr)
  #define spiffy2_spiffy_RxFIFO3_adr                     0x0035248c                                                   // spiffy2_base + 0x0000008c
  #define spiffy2_spiffy_RxFIFO3                         (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO3_adr)
  #define spiffy2_spiffy_RxFIFO4_adr                     0x00352490                                                   // spiffy2_base + 0x00000090
  #define spiffy2_spiffy_RxFIFO4                         (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO4_adr)
  #define spiffy2_spiffy_RxFIFO5_adr                     0x00352494                                                   // spiffy2_base + 0x00000094
  #define spiffy2_spiffy_RxFIFO5                         (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO5_adr)
  #define spiffy2_spiffy_RxFIFO6_adr                     0x00352498                                                   // spiffy2_base + 0x00000098
  #define spiffy2_spiffy_RxFIFO6                         (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO6_adr)
  #define spiffy2_spiffy_RxFIFO7_adr                     0x0035249c                                                   // spiffy2_base + 0x0000009c
  #define spiffy2_spiffy_RxFIFO7                         (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO7_adr)
  #define spiffy2_spiffy_RxFIFO8_adr                     0x003524a0                                                   // spiffy2_base + 0x000000a0
  #define spiffy2_spiffy_RxFIFO8                         (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO8_adr)
  #define spiffy2_spiffy_RxFIFO9_adr                     0x003524a4                                                   // spiffy2_base + 0x000000a4
  #define spiffy2_spiffy_RxFIFO9                         (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO9_adr)
  #define spiffy2_spiffy_RxFIFO10_adr                    0x003524a8                                                   // spiffy2_base + 0x000000a8
  #define spiffy2_spiffy_RxFIFO10                        (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO10_adr)
  #define spiffy2_spiffy_RxFIFO11_adr                    0x003524ac                                                   // spiffy2_base + 0x000000ac
  #define spiffy2_spiffy_RxFIFO11                        (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO11_adr)
  #define spiffy2_spiffy_RxFIFO12_adr                    0x003524b0                                                   // spiffy2_base + 0x000000b0
  #define spiffy2_spiffy_RxFIFO12                        (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO12_adr)
  #define spiffy2_spiffy_RxFIFO13_adr                    0x003524b4                                                   // spiffy2_base + 0x000000b4
  #define spiffy2_spiffy_RxFIFO13                        (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO13_adr)
  #define spiffy2_spiffy_RxFIFO14_adr                    0x003524b8                                                   // spiffy2_base + 0x000000b8
  #define spiffy2_spiffy_RxFIFO14                        (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO14_adr)
  #define spiffy2_spiffy_RxFIFO15_adr                    0x003524bc                                                   // spiffy2_base + 0x000000bc
  #define spiffy2_spiffy_RxFIFO15                        (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO15_adr)
  #define spiffy2_spiffy_TxFIFO0_adr                     0x003524c0                                                   // spiffy2_base + 0x000000c0
  #define spiffy2_spiffy_TxFIFO0                         (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO0_adr)
  #define spiffy2_spiffy_TxFIFO1_adr                     0x003524c4                                                   // spiffy2_base + 0x000000c4
  #define spiffy2_spiffy_TxFIFO1                         (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO1_adr)
  #define spiffy2_spiffy_TxFIFO2_adr                     0x003524c8                                                   // spiffy2_base + 0x000000c8
  #define spiffy2_spiffy_TxFIFO2                         (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO2_adr)
  #define spiffy2_spiffy_TxFIFO3_adr                     0x003524cc                                                   // spiffy2_base + 0x000000cc
  #define spiffy2_spiffy_TxFIFO3                         (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO3_adr)
  #define spiffy2_spiffy_TxFIFO4_adr                     0x003524d0                                                   // spiffy2_base + 0x000000d0
  #define spiffy2_spiffy_TxFIFO4                         (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO4_adr)
  #define spiffy2_spiffy_TxFIFO5_adr                     0x003524d4                                                   // spiffy2_base + 0x000000d4
  #define spiffy2_spiffy_TxFIFO5                         (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO5_adr)
  #define spiffy2_spiffy_TxFIFO6_adr                     0x003524d8                                                   // spiffy2_base + 0x000000d8
  #define spiffy2_spiffy_TxFIFO6                         (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO6_adr)
  #define spiffy2_spiffy_TxFIFO7_adr                     0x003524dc                                                   // spiffy2_base + 0x000000dc
  #define spiffy2_spiffy_TxFIFO7                         (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO7_adr)
  #define spiffy2_spiffy_TxFIFO8_adr                     0x003524e0                                                   // spiffy2_base + 0x000000e0
  #define spiffy2_spiffy_TxFIFO8                         (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO8_adr)
  #define spiffy2_spiffy_TxFIFO9_adr                     0x003524e4                                                   // spiffy2_base + 0x000000e4
  #define spiffy2_spiffy_TxFIFO9                         (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO9_adr)
  #define spiffy2_spiffy_TxFIFO10_adr                    0x003524e8                                                   // spiffy2_base + 0x000000e8
  #define spiffy2_spiffy_TxFIFO10                        (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO10_adr)
  #define spiffy2_spiffy_TxFIFO11_adr                    0x003524ec                                                   // spiffy2_base + 0x000000ec
  #define spiffy2_spiffy_TxFIFO11                        (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO11_adr)
  #define spiffy2_spiffy_TxFIFO12_adr                    0x003524f0                                                   // spiffy2_base + 0x000000f0
  #define spiffy2_spiffy_TxFIFO12                        (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO12_adr)
  #define spiffy2_spiffy_TxFIFO13_adr                    0x003524f4                                                   // spiffy2_base + 0x000000f4
  #define spiffy2_spiffy_TxFIFO13                        (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO13_adr)
  #define spiffy2_spiffy_TxFIFO14_adr                    0x003524f8                                                   // spiffy2_base + 0x000000f8
  #define spiffy2_spiffy_TxFIFO14                        (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO14_adr)
  #define spiffy2_spiffy_TxFIFO15_adr                    0x003524fc                                                   // spiffy2_base + 0x000000fc
  #define spiffy2_spiffy_TxFIFO15                        (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO15_adr)
  #define spiffy2_spiffy_RxFIFO_adr                      0x00352500                                                   // spiffy2_base + 0x00000100
  #define spiffy2_spiffy_RxFIFO                          (*(volatile unsigned int *)spiffy2_spiffy_RxFIFO_adr)
  #define spiffy2_spiffy_TxFIFO_adr                      0x00352504                                                   // spiffy2_base + 0x00000104
  #define spiffy2_spiffy_TxFIFO                          (*(volatile unsigned int *)spiffy2_spiffy_TxFIFO_adr)

#endif // REGISTER_H

