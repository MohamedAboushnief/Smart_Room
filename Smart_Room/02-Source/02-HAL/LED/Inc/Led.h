 /********************************************************************************************************************
 *  File		: Led.h
 *	Module		: LED
 *	Target		: General
 *	Author		: mAboushenif
 *  Description	:
 *********************************************************************************************************************/
#ifndef LED_H_
#define LED_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Led_Cfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum{
	LED0,
	LED1,
	LED2
	}LED_ID;
/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void Led_TurnON(LED_ID LedID);
void Led_TurnOFF(LED_ID LedID);
void Led_Toggle(LED_ID LedID);
void Led_Init(void);


#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: Led.h
 *********************************************************************************************************************/
