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

LIBENC_DIR :=



# ################################################################
#
# libENC definition
#
# ################################################################

#LIBENC_INCS := \

LIBENC_INCLUDES := \
	$(LIBENC_DIR)/

LIBENC_SRCS := \
	$(LIBENC_DIR)/wputils.c \
	$(LIBENC_DIR)/pack.c \
	$(LIBENC_DIR)/words.c \
	$(LIBENC_DIR)/bits.c

#	$(LIBENC_DIR)/tinypack.c \



KEEP_LIST:= \
	$(LIBENC_INCLUDES)/wavpack_enc.h \
	$(LIBENC_INCLUDES)/wplocal.h \
	wavpack*.a \
	wavpack*.mk



#
# library build
# 
$(info wavpack_tiny_enc build type is $(BUILD_TYPE).)

$(NAME)_SOURCES += \
		$(LIBENC_SRCS)

$(NAME)_INCLUDES += \
		$(CURDIR)/$(LIBENC_INCLUDES)

$(NAME)_DEFINES := WICED

$(NAME)_CFLAGS := -O2



#
# debug/release flags
#
ifeq ($(BUILD_TYPE),debug)
$(info ************************************************************** )
$(info ==> WAVPACK-TINY-ENC: Enabling debug build.)
$(info ************************************************************** )


$(NAME)_DEFINES += DEBUG=1

else

$(NAME)_DEFINES += NDEBUG=1
$(NAME)_CFLAGS  += \
		-funroll-loops \
		-ftree-vectorize
endif
