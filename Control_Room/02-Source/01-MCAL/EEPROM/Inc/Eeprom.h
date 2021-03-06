 /********************************************************************************************************************
 *  File		: Eeprom.h
 *	Module		: EEPROM
 *	Target		: ATMEGA32
 *	Author		: mAboushenif
 *  Description	: Defining functions for EEPROM
 *********************************************************************************************************************/
#ifndef EEPROM_H_
#define EEPROM_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Eeprom_Private.h"
#include "Bit_Math.h"
#include "Std_Types.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/




/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
void EEPROM_Write(u16 address, u8 data);
u8 EEPROM_Read(u16 address);


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: Eeprom.h
 *********************************************************************************************************************/
