/************************************************************************/
/*																		*/
/*	Board_Defs.h --	Board Customization for Digilent Cerebot 32MX4		*/
/*																		*/
/************************************************************************/
/*	Author: Gene Apperson												*/
/*	Copyright 2011, Digilent. All rights reserved						*/
/************************************************************************/
/*  File Description:													*/
/*																		*/
/* This file contains the board specific declartions and data structure	*/
/* to customize the chipKIT MPIDE for use with the Digilent Cerebot		*/
/* 32MX4 board.															*/
/*																		*/
/* This code is based on earlier work:									*/
/*		Copyright (c) 2010, 2011 by Mark Sproul							*/
/*		Copyright (c) 2005, 2006 by David A. Mellis						*/
/*																		*/
/************************************************************************/
/*  Revision History:													*/
/*																		*/
/*	10/06/2011(GeneA): Created											*/
/*	11/28/2011(GeneA): Moved data definitions and configuration			*/
/*		functions to Board_Data.c										*/
/*	11/29/2011(GeneA): Moved int priority definitions to System_Defs.h	*/
/*																		*/
/************************************************************************/
//*	This library is free software; you can redistribute it and/or
//*	modify it under the terms of the GNU Lesser General Public
//*	License as published by the Free Software Foundation; either
//*	version 2.1 of the License, or (at your option) any later version.
//*	
//*	This library is distributed in the hope that it will be useful,
//*	but WITHOUT ANY WARRANTY; without even the implied warranty of
//*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//*	Lesser General Public License for more details.
//*	
//*	You should have received a copy of the GNU Lesser General
//*	Public License along with this library; if not, write to the
//*	Free Software Foundation, Inc., 59 Temple Place, Suite 330,
//*	Boston, MA  02111-1307  USA
/************************************************************************/

#if !defined(BOARD_DEFS_H)
#define BOARD_DEFS_H

#include <inttypes.h>

/* ------------------------------------------------------------ */
/*				Public Board Declarations						*/
/* ------------------------------------------------------------ */
/* The following define symbols that can be used in a sketch to
** refer to periperhals on the board generically.
*/

#define	_BOARD_NAME_	"Cerebot 32MX4"

/* Define the peripherals available on the board.
*/
#define	NUM_DIGITAL_PINS	70
#define	NUM_ANALOG_PINS		14
#define	NUM_OC_PINS			5
#define	NUM_IC_PINS			5
#define	NUM_TCK_PINS		4
#define	NUM_INT_PINS		5

#define	NUM_SERIAL_PORTS	2
#define	NUM_SPI_PORTS		1
#define	NUM_I2C_PORTS		1

#define	NUM_DSPI_PORTS		2
#define NUM_DTWI_PORTS		2

/* Define I/O devices on the board.
*/
#define	NUM_LED				4
#define NUM_BTN				2
#define	NUM_SWT				0
#define NUM_SERVO			8

/* Define the number of extended i/o pins. These are pins
** that are not native to the microcontroller. This board
** doesn't have any.
*/
#define	NUM_DIGITAL_PINS_EXTENDED	NUM_DIGITAL_PINS
#define	NUM_ANALOG_PINS_EXTENDED	NUM_ANALOG_PINS

/* ------------------------------------------------------------ */
/*						LED Declarations						*/
/* ------------------------------------------------------------ */

/* Define the pin numbers for the LEDs
*/
#define	PIN_LED1	60
#define	PIN_LED2	61
#define	PIN_LED3	62
#define	PIN_LED4	63

/* ------------------------------------------------------------ */
/*					Button Declarations							*/
/* ------------------------------------------------------------ */

/* Define the pin numbers for the buttons
*/
#define	PIN_BTN1	42	
#define	PIN_BTN2	43

/* ------------------------------------------------------------ */
/*					Switch Declarations							*/
/* ------------------------------------------------------------ */

/* No switches on this board.
*/

/* ------------------------------------------------------------ */
/*					Servo Pin Declarations						*/
/* ------------------------------------------------------------ */

/* Define the pin numbers for the servo connectors
*/
#define	PIN_SERVO1	16
#define	PIN_SERVO2	17
#define	PIN_SERVO3	18
#define	PIN_SERVO4	19
#define	PIN_SERVO5	20
#define	PIN_SERVO6	21
#define	PIN_SERVO7	22
#define	PIN_SERVO8	23

/* ------------------------------------------------------------ */
/*					Timer Pin Declarations						*/
/* ------------------------------------------------------------ */

#define PIN_OC1		49
#define	PIN_OC2		25
#define	PIN_OC3		29
#define	PIN_OC4		37
#define	PIN_OC5		14

#define PIN_IC1		50
#define PIN_IC2		26
#define PIN_IC3		30
#define PIN_IC4		38
#define	PIN_IC5		66

//#define	PIN_TCK1	not connected
#define	PIN_TCK2	27
#define	PIN_TCK3	31
#define	PIN_TCK4	39
#define	PIN_TCK5	67

/* ------------------------------------------------------------ */
/*					Interrupt Pin Declarations					*/
/* ------------------------------------------------------------ */

#define	PIN_INT0	49
#define	PIN_INT1	48
#define PIN_INT2	51
#define	PIN_INT3	68
#define	PIN_INT4	69

/* ------------------------------------------------------------ */
/*					SPI Pin Declarations						*/
/* ------------------------------------------------------------ */
/* These symbols are defined for compatibility with the original
** SPI library and the original pins_arduino.h
*/
static const uint8_t SS   = 8;		// PIC32 SS2
static const uint8_t MOSI = 9;		// PIC32 SDO2
static const uint8_t MISO = 10;		// PIC32 SDI2
static const uint8_t SCK  = 11;		// PIC32 SCK2

/* The Digilent DSPI library uses these ports.
**		DSPI0	connector JB
**		DSPI1	connector J1
*/
#define	PIN_DSPI0_SS	8
#define	PIN_DSPI1_SS	26

/* ------------------------------------------------------------ */
/*					Analog Pins									*/
/* ------------------------------------------------------------ */
/* Define symbols for accessing the analog pins. This table is
** used to map an analog pin number to the corresponding digital
** pin number.
*/
#define	A0		52
#define	A1		53
#define A2		54
#define A3		55
#define A4		56
#define A5		57
#define A6		58
#define A7		59
#define A8		60
#define A9		61
#define A10		62
#define A11		63
#define A12		12
#define	A13		15

/* ------------------------------------------------------------ */
/*					Change Notice Pins							*/
/* ------------------------------------------------------------ */
/* These define the pin numbers for the various change notice
** pins.
*/
//#define	PIN_CN0		//not connected	
//#define	PIN_CN1		//not connected	
#define	PIN_CN2		52
#define	PIN_CN3		53
#define	PIN_CN4		54
#define	PIN_CN5		55
#define	PIN_CN6		56
#define	PIN_CN7		57
#define	PIN_CN8		11
#define	PIN_CN9		10
#define	PIN_CN10	9
#define	PIN_CN11	8
#define	PIN_CN12	12
#define	PIN_CN13	14
#define	PIN_CN14	13
#define	PIN_CN15	28
#define	PIN_CN16	24
#define	PIN_CN17	46
#define	PIN_CN18	47
#define	PIN_CN19	36
#define	PIN_CN20	32
#define	PIN_CN21	33

/* ------------------------------------------------------------ */
/*					Pin Mapping Macros							*/
/* ------------------------------------------------------------ */
/* This section contains the definitions for pin mapping macros that
** are being redefined for this board variant.
*/

#undef digitalPinToAnalog
#define	digitalPinToAnalog(P) ( ((P) < NUM_ANALOG_PINS) ? (P) : digital_pin_to_analog_PGM[P] )

#undef analogInPinToChannel
#define analogInPinToChannel(P) ( analog_pin_to_channel_PGM[P]  )

/* ------------------------------------------------------------ */
/*					Data Definitions							*/
/* ------------------------------------------------------------ */

/* The following declare externals to access the pin mapping
** tables.
*/

#if !defined(OPT_BOARD_DATA)

extern const uint32_t	port_to_tris_PGM[];
extern const uint8_t	digital_pin_to_port_PGM[];
extern const uint16_t	digital_pin_to_bit_mask_PGM[];
extern const uint16_t	digital_pin_to_timer_PGM[];
extern const uint8_t 	digital_pin_to_analog_PGM[];
extern const uint8_t	analog_pin_to_channel_PGM[];

#endif

/* ------------------------------------------------------------ */
/*				Internal Declarations							*/
/* ------------------------------------------------------------ */
/* The following declarations are used to map peripherals for	*/
/* the core and libraries and to provide configuration options	*/
/* for the core. They are not normally needed by a user sketch.	*/
/* ------------------------------------------------------------ */

#if defined(OPT_BOARD_INTERNAL)

/* ------------------------------------------------------------ */
/*				Core Configuration Declarations					*/
/* ------------------------------------------------------------ */
/*																*/
/* These are conditional compilation switches that control the	*/
/* board core configuration functions. These functions provide	*/
/* hooks that can call from some of the core functions into		*/
/* functions defined below that can be used to extend or		*/
/* replace the default behavior of the core function. To use	*/
/* this, enter the appropriate code into the appropriate		*/
/* function skeleton below and then set the appropriate switch	*/
/* value to 1. This will cause the configuration function to be	*/
/* compiled into the build and will cause the code to call the	*/
/* hook function to be compiled into the core function.			*/
/*																*/
/* ------------------------------------------------------------ */

#define	OPT_BOARD_INIT			0	//board needs no special init code
#define	OPT_BOARD_DIGITAL_IO	0	//board does not extend digital i/o functions
#define	OPT_BOARD_ANALOG_READ	0	//board does not extend analogRead
#define	OPT_BOARD_ANALOG_WRITE	0	//board does not extend analogWrite

#endif	// OPT_BOARD_INTERNAL

/* ------------------------------------------------------------ */
/*					Serial Port Declarations					*/
/* ------------------------------------------------------------ */

/* Serial port 0 uses UART1
*/
#define	_SER0_BASE		_UART1_BASE_ADDRESS
#define	_SER0_IRQ		_UART1_ERR_IRQ
#define	_SER0_VECTOR	_UART_1_VECTOR
#define	_SER0_IPL_ISR	IPL2SOFT
#define	_SER0_IPL		2
#define	_SER0_SPL		0

/* Serial port 1 uses UART2
*/
#define	_SER1_BASE		_UART2_BASE_ADDRESS
#define	_SER1_IRQ		_UART2_ERR_IRQ
#define	_SER1_VECTOR	_UART_2_VECTOR
#define	_SER1_IPL_ISR	IPL2SOFT
#define	_SER1_IPL		2
#define	_SER1_SPL		0

/* ------------------------------------------------------------ */
/*					SPI Port Declarations						*/
/* ------------------------------------------------------------ */


/* The Digilent DSPI and standard SPI libraries uses these ports.
**		DSPI0	connector JB
**		DSPI1	connector J1
*/
#define	_DSPI0_BASE			_SPI2_BASE_ADDRESS
#define	_DSPI0_ERR_IRQ		_SPI2_ERR_IRQ
#define	_DSPI0_RX_IRQ		_SPI2_RX_IRQ
#define	_DSPI0_TX_IRQ		_SPI2_TX_IRQ
#define	_DSPI0_VECTOR		_SPI_2_VECTOR
#define	_DSPI0_IPL_ISR		IPL3SOFT
#define	_DSPI0_IPL			3
#define	_DSPI0_SPL			0

#define	_DSPI1_BASE			_SPI1_BASE_ADDRESS
#define	_DSPI1_ERR_IRQ		_SPI1_ERR_IRQ
#define	_DSPI1_RX_IRQ		_SPI1_RX_IRQ
#define	_DSPI1_TX_IRQ		_SPI1_TX_IRQ
#define	_DSPI1_VECTOR		_SPI_1_VECTOR
#define	_DSPI1_IPL_ISR		IPL3SOFT
#define	_DSPI1_IPL			3
#define	_DSPI1_SPL			0

/* ------------------------------------------------------------ */
/*					I2C Port Declarations						*/
/* ------------------------------------------------------------ */

/* The standard I2C port uses I2C1 on connector J6. This I2C
** bus has fixed pull-ups and contains the EEPROM and DAC.
*/
#define	_TWI_BASE		_I2C1_BASE_ADDRESS
#define	_TWI_BUS_IRQ	_I2C1_BUS_IRQ
#define	_TWI_SLV_IRQ	_I2C1_SLAVE_IRQ
#define	_TWI_MST_IRQ	_I2C1_MASTER_IRQ
#define	_TWI_VECTOR		_I2C_1_VECTOR
#define	_TWI_IPL_ISR	IPL3SOFT
#define _TWI_IPL		3
#define	_TWI_SPL		0

/* Declarations for Digilent DTWI library.
**		DTWI0 is on I2C2, connector J2
**		DTWI1 is on I2C1, connector J6.
**
** DTWI1 has the I2C EEPROM and DAC.
*/
#define	_DTWI0_BASE		_I2C1_BASE_ADDRESS
#define	_DTWI0_BUS_IRQ	_I2C1_BUS_IRQ
#define	_DTWI0_VECTOR	_I2C_1_VECTOR
#define	_DTWI0_IPL_ISR	IPL3SOFT
#define	_DTWI0_IPL		3
#define	_DTWI0_SPL		0
#define _DTWI0_SCL_PIN  40 
#define _DTWI0_SDA_PIN  41

#define	_DTWI1_BASE		_I2C2_BASE_ADDRESS
#define	_DTWI1_BUS_IRQ	_I2C2_BUS_IRQ
#define	_DTWI1_VECTOR	_I2C_2_VECTOR
#define	_DTWI1_IPL_ISR	IPL3SOFT
#define	_DTWI1_IPL		3
#define	_DTWI1_SPL		0
#define _DTWI1_SCL_PIN  68 
#define _DTWI1_SDA_PIN  69

/* ------------------------------------------------------------ */
/*					A/D Converter Declarations					*/
/* ------------------------------------------------------------ */


/* ------------------------------------------------------------ */

/* ------------------------------------------------------------ */
/*					Defines for the SD on JK     				*/
/* ------------------------------------------------------------ */

#define _uSD_SPI_CONFIG_

#define SD_CS_PIN 64

//Pin 65
#define	prtSDO				IOPORT_B	//JK
#define	bnSDO				BIT_11

//Pin 66
#define	prtSDI				IOPORT_B
#define	bnSDI				BIT_12

//Pin 67
#define	prtSCK				IOPORT_B
#define	bnSCK				BIT_13

// Leave the real SPI on JB for the MRF24
// we can bit bang the SPI on JK, plus this is
// backwards compatible with the old SD library
// SoftSPI(CS, SDO, SDI, SCK)
#define DefineSDSPI(var) SoftSPI var(SD_CS_PIN, 65, 66, 67)
#define DefineDSDVOL(vol, spi) DSDVOL vol(spi, 66)     // Create an DSDVOL object

/* ------------------------------------------------------------ */
/*					Defines for the MRF on JB                   */
/* ------------------------------------------------------------ */

#define _MRF24_SPI_CONFIG_

#define WF_INT              3
#define WF_SPI              2
#define WF_SPI_FREQ         10000000
#define WF_IPL_ISR          IPL3SOFT
#define WF_IPL              3
#define WF_SUB_IPL          0

#define WF_INT_TRIS         (TRISAbits.TRISA14)  // INT3, SET JP3 TO INT3
#define WF_INT_IO           (PORTAbits.RA14)

#define WF_HIBERNATE_TRIS   (TRISBbits.TRISB14)
#define	WF_HIBERNATE_IO     (LATBbits.LATB14)

#define WF_RESET_TRIS       (TRISDbits.TRISD5)
#define WF_RESET_IO         (LATDbits.LATD5)

#define WF_CS_TRIS          (TRISGbits.TRISG9)
#define WF_CS_IO            (LATGbits.LATG9)

/* ------------------------------------------------------------ */

#endif	// BOARD_DEFS_H

/************************************************************************/
