set remotetimeout 20
shell ./tools/common/Linux64/dash -c "trap \"\" 2;"./tools/OpenOCD/Linux64/openocd-all-brcm-libftdi" -s "./tools/OpenOCD/scripts" -f ./tools/OpenOCD/stlink-v2.cfg -f ./tools/OpenOCD/stm32f4x.cfg -f ./tools/OpenOCD/stm32f4x_gdb_jtag.cfg  -l build/openocd_log.txt &"
