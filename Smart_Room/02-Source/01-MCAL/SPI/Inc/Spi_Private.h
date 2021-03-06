// /********************************************************************************************************************
// *  File		: Spi_Private.h
// *	Module		: SPI
// *	Target		: ATMEGA32
// *	Author		: mAboushenif
// *  Description	:
// *********************************************************************************************************************/
//#ifndef SPI_PRIVATE_H_
//#define SPI_PRIVATE_H_
//
///**********************************************************************************************************************
// * INCLUDES
// *********************************************************************************************************************/
//
//
//
///**********************************************************************************************************************
// *  GLOBAL CONSTANT MACROS
// *********************************************************************************************************************/
//
//#define SPI_CONTROL_REG  (*(volatile u8 *) 0x2D)
//#define SPR0  (0)     // SPI clock rate select
//#define SPR1  (1)
//
//#define CPHA  (2)     // clock phase
//#define CPOL  (3)	  // clock polarity
//#define MSTR  (4) 	  // Master slave select
//#define DORD  (5)     // Data order
//#define SPE   (6)     // SPI enable
//#define SPIE  (7)     // SPI Interrupt enable
//
//
//#define SPI_STATUS_REG   (*(volatile u8 *) 0x2E)
//#define SPI2X (0)  // double SPI speed bit
//#define WCOL  (6)  // Write collision detection
//#define SPIF  (7)  // SPI Interrupt flag
//
//#define SPI_DATA_REG     (*(volatile u8 *) 0x2F)
//
//
//
///**********************************************************************************************************************
// *  GLOBAL FUNCTION MACROS
// *********************************************************************************************************************/
//
//
///**********************************************************************************************************************
// *  GLOBAL DATA TYPES AND STRUCTURES
// *********************************************************************************************************************/
//
///**********************************************************************************************************************
// *  GLOBAL DATA PROTOTYPES
// *********************************************************************************************************************/
//
//
///**********************************************************************************************************************
// *  GLOBAL FUNCTION PROTOTYPES
// *********************************************************************************************************************/
//
//
//
//#endif  /* FILE_NAME_H */
//
///**********************************************************************************************************************
// *  END OF FILE: Spi_Private.h
// *********************************************************************************************************************/




/********************************************************************************************************************
 *  File		: Spi_Private.h
 *	Module		: SPI
 *	Target		: ATMEGA32
 *	Author		: mFawzi
 *  Description	:
 *********************************************************************************************************************/
#ifndef SPI_PRIVATE_H
#define SPI_PRIVATE_H
/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define SPI_SPCR_REG 			(*(volatile u8*)0x2D)
#define SPI_SPSR_REG			(*(volatile u8*)0x2E)
#define SPI_SPDR_REG			(*(volatile u8*)0x2F)

#define SPI_SPE_BIT_NO           	(6)
#define SPI_MSTR_BIT_NO				(4)
#define SPI_SPIF_BIT_NO				(7)
/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* SPI_PRIVATE_H */

/**********************************************************************************************************************
 *  END OF FILE: SPI_Private.h
 *********************************************************************************************************************/
