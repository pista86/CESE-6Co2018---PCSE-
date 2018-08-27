/*
 * Copyright 2014, Broadcom Corporation
 * All Rights Reserved.
 *
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom Corporation;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom Corporation.
 */

/** @file
*
* List of parameters and defined functions needed to access the
* Peripheral SPI driver.
*
*/

#ifndef __WICED_PSPI_DRIVER_H__
#define __WICED_PSPI_DRIVER_H__

#include "brcm_fw_types.h"

/**  \addtogroup PeripheralSpiDriver
* \ingroup HardwareDrivers
*/
/*! @{ */
/**
* Defines an SPI driver to facilitate communication with other devices on an
* SPI bus (such as a temperature sensor, etc). The driver is capable of
* assuming either a master or a slave role on said bus. Applications use
* this driver to obtain the status from and control the behavior of the SPI
* hardware. This driver only offers services for clock control, mode control
* and data transfer operations. The application is responsible for
* generating the slave/chip select signals (if it's in a master role).
* This could be done by mapping a GPIO pin for each slave the application
* wants to control (See wiced_hal_gpio.h for more information on driving a
* GPIO pin).
*
* All master data transfer operations (half/full duplex)
* provided by this driver assume that the desired
* slave has already been selected and will remain selected
* throughout the duration of the transaction.
*
* Please note that this driver cannot access supplied off-chip memory
* (if installed; serial flash, etc). Please use the drivers found in
* wiced_hal_sflash.h or wiced_hal_seeprom.h to access those modules, as those
* drivers deal with a separate SPI bus and include checks to ensure safe data
* handling operations. This driver is intended only to interface with other
* devices on the peripheral SPI bus, such as a motion sensor. Of course,
* this restriction does not preclude the user from adding their own memory
* module to the peripheral bus, and using this driver with it.
*
*/

/******************************************************************************
*** Parameters.
***
*** The following parameters are used to configure the SPI driver or define
*** return status. They are not modifiable.
******************************************************************************/

/// Type Definitions

// SPI Device Role
enum
{
    MASTER = 1,
    SLAVE  = 2,
};

/**
///
/// For all the available GPIO config combinations (spiGpioCfg) for master
/// and slave modes, please reference the User Documentation, since the values
/// vary by hardware platform.
///

/// SPI Endian: Direction of bit data flow (MSB or LSB first).
typedef enum SPI_ENDIAN
{
    /// Transmit most significant bit first
    SPI_MSB_FIRST,
    /// Transmit least significant bit first
    SPI_LSB_FIRST
} SPI_ENDIAN;

/// Slave Select mode (output from master)
typedef enum SPI_SS_MODE
{
    /// Slave select normal
    SPI_SS_NORMAL,
    /// Slave select goes inactive between bytes
    SPI_SS_INACTIVE_BTW_BYTES
} SPI_SS_MODE;

/// Slave select polarity (output from master)
typedef enum SPI_SS_POLARITY
{
    /// Slave select active low
    SPI_SS_ACTIVE_LOW,
    /// Slave select active high
    SPI_SS_ACTIVE_HIGH,
} SPI_SS_POLARITY;

/// Clock polarity and phase
/// If CPOL=0, base value of the clock is zero
/// If CPOL=1, base value of the clock is one
/// If CPHA=0, sample on leading (first) clock edge
/// If CPHA=1, sample on trailing (second) clock edge
typedef enum SPI_MODE
{
    /// CPOL = 0, CPHA = 0
    /// Data read on clock's rising edge, data changed on a falling edge
    SPI_MODE_0,
    /// CPOL = 0, CPHA = 1
    /// Data read on clock's falling edge, data changed on a rising edge
    SPI_MODE_1,
    /// CPOL = 1, CPHA = 0
    /// Data read on clock's falling edge, data changed on a rising edge
    SPI_MODE_2,
    /// CPOL = 1, CPHA = 1
    /// Data read on clock's rising edge, data changed on a falling edge
    SPI_MODE_3
} SPI_MODE;

// Pull configure for input-pin
// - Master input pin
//      -- MISO
//
// - Slave input pin
//      -- CLOCK
//      -- MOSI
//      -- CS
enum
{
    // pull up for MISO if master mode, for MOSI if Slave mode
    INPUT_PIN_PULL_UP   = 0x0400,
    // pull DOWN for MISO if master mode, for MOSI if Slave mode
    INPUT_PIN_PULL_DOWN = 0x0200,
    // FLOAT for MISO if master mode, for MOSI if Slave mode
    INPUT_PIN_FLOATING  = 0x0,
};

// Return values.
typedef enum
{
    SPIFFY_SUCCESS,
    SPIFFY_SLAVE_NOT_ENOUGH_RX_FIFO_BYTES
} SPIFFY_STATUS;
**/

/******************************************************************************
*** Function prototypes.
******************************************************************************/

///////////////////////////////////////////////////////////////////////////////
/// Initialize the SPI driver with the given parameters. Please reference
/// the various parameters above.
///
/// In this function, the hardware block will be reset. The driver will
/// be configured before the first transaction with a device.
///
/// For the chip select (CS) line, define the Port/Pin you want to use. There
/// could be up to 40 GPIO pins on a board so the numbering is P0 - P39.
///
/// Remember that P# is the physical pin number on the board minus 1.
///         Ex: Board Pin 4 = P3.
///
/// \param devRole          - SPI HW to play either master (1) or slave (2).
/// \param spiPinPullConfig - Pin pull-up or pull-down.
/// \param spiGpioCfg       - Pins to use for the data and clk lines (see
///                           User Documentation for specific values which
///                           vary by platform).
/// \param clkSpeed         - Clock speed (non-zero for master, zero for slave).
/// \param endian           - Direction of bit data flow (MSB or LSB first).
/// \param polarity         - Active high or active low for chip select line.
/// \param mode,            - SPI mode (0-3).
/// \param csPin            - GPIO pin of chip select line (see above).
///
/// \return none
///////////////////////////////////////////////////////////////////////////////
void wiced_hal_pspi_init(UINT8           devRole,
                         UINT8           spiPinPullConfig,
                         UINT32          spiGpioCfg,
                         UINT32          clkSpeed,
                         SPI_ENDIAN      endian,
                         SPI_SS_POLARITY polarity,
                         SPI_MODE        mode,
                         UINT8           csPin);

///////////////////////////////////////////////////////////////////////////////
/// Send/transmit data over SPI as the master. Assumes that the slave/chip
/// select line will be active throughout the transaction.
///
/// \param txLen - The number of bytes-to-send that this buffer contains.
/// \param txBuf - Pointer to the data buffer to transmit.
///
/// \return none
///////////////////////////////////////////////////////////////////////////////
void wiced_hal_pspi_tx_data(UINT32 txLen, const UINT8* txBuf);

///////////////////////////////////////////////////////////////////////////////
/// Receive data over SPI as the master. Assumes that the slave/chip select
/// line will be active throughout the transaction.
///
/// \param txLen - Length of the data buffer to receive.
/// \param txBuf - Pointer to the data buffer which will receive data.
///
/// \return none
///////////////////////////////////////////////////////////////////////////////
void wiced_hal_pspi_rx_data(UINT32 rxLen, UINT8* rxBuf);


///////////////////////////////////////////////////////////////////////////////
/// Reset and bring the SPI driver to a known good state with default
/// configuration. Note that the hardware block will be reset.
///
/// \param none
///
/// \return none
///////////////////////////////////////////////////////////////////////////////
void wiced_hal_pspi_reset(void);


///////////////////////////////////////////////////////////////////////////////
/// Transmit one buffer of data while simultaneously receiving data
/// (as the master). Assumes that the slave/chip select line
/// will be active throughout this transaction.
///
/// \param len   - The number of bytes to transmit and receive.
/// \param txBuf - Pointer to the data buffer to transmit.
/// \param rxBuf - Pointer to the buffer where the read data will be stored.
///
/// \return none
///////////////////////////////////////////////////////////////////////////////
void wiced_hal_pspi_exchange_data(UINT32 len, const UINT8* txBuf, UINT8* rxBuf);


///////////////////////////////////////////////////////////////////////////////
/// Enable the tx fifo so any data in it will be transmitted when the
/// SPI master clocks it out.
///
/// \param none
///
/// \return none
///////////////////////////////////////////////////////////////////////////////
void wiced_hal_pspi_slave_enable_tx(void);


///////////////////////////////////////////////////////////////////////////////
/// Disable the tx fifo.
///
/// \param none
///
/// \return none
///////////////////////////////////////////////////////////////////////////////
void wiced_hal_pspi_slave_disable_tx(void);


///////////////////////////////////////////////////////////////////////////////
/// Enable the rx fifo for incoming data when the SPI master clocks it in.
///
/// \param none
///
/// \return none
///////////////////////////////////////////////////////////////////////////////
void wiced_hal_pspi_slave_enable_rx(void);


///////////////////////////////////////////////////////////////////////////////
/// Disable the rx fifo.
///
/// \param none
///
/// \return none
///////////////////////////////////////////////////////////////////////////////
void wiced_hal_pspi_slave_disable_rx(void);


///////////////////////////////////////////////////////////////////////////////
/// Send/transmit data over SPI as a slave. If the tx fifo is enabled, the
/// data in the tx fifo will be transmitted when the SPI master clocks it out.
///
/// \param txLen - The number of bytes-to-send that this buffer contains.
/// \param txBuf - Pointer to the data buffer to transmit.
///
/// \return none
///////////////////////////////////////////////////////////////////////////////
void wiced_hal_pspi_slave_tx_data(UINT32 txLen, const UINT8* txBuf);


///////////////////////////////////////////////////////////////////////////////
/// Receive data over SPI as a slave. If the rx fifo is enabled, pull data
/// from the rx fifo if there are at least rxLen bytes in the rx fifo.
///
/// \param txLen - Length of the data buffer to receive.
/// \param txBuf - Pointer to the data buffer which will receive data.
///
/// \return SUCCESS if bytes were received or NOT_ENOUGH_RX_FIFO_BYTES if fail.
///////////////////////////////////////////////////////////////////////////////
UINT32 wiced_hal_pspi_slave_rx_data(UINT32 rxLen, UINT8* rxBuf);


///////////////////////////////////////////////////////////////////////////////
/// Get the number of bytes in the slave tx fifo.
///
/// \param none
///
/// \return Number of bytes in the tx fifo.
///////////////////////////////////////////////////////////////////////////////
UINT32 wiced_hal_pspi_slave_get_tx_fifo_count(void);


///////////////////////////////////////////////////////////////////////////////
/// Get the number of bytes in the slave rx fifo.
///
/// \param none
///
/// \return Number of bytes in the rx fifo.
///////////////////////////////////////////////////////////////////////////////
UINT32 wiced_hal_pspi_slave_get_rx_fifo_count(void);


/* @} */

#endif // __WICED_PSPI_DRIVER_H__

