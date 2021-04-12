 /**********************************************************************************************************************
 *  File		: Led.c
 *	Module		: LED
 *	Target		: General
 *	Author		: mAboushenif
 *  Description	: Functions for using the Led module
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Led.h"
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : void Led_TurnON(LED_ID LedID)
* \Description     : Turn Led On
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : LedID
* \Return value:   : None
*******************************************************************************/
void Led_TurnON(LED_ID LedID){
	if(LedID==LED0){
		Dio_WRITEChannel(Led0_Port, Led0_Channel, STD_HIGH);
	}
	if(LedID==LED1){
		Dio_WRITEChannel(Led1_Port, Led1_Channel, STD_HIGH);
	}
	if(LedID==LED2){
		Dio_WRITEChannel(Led2_Port, Led2_Channel, STD_HIGH);
	}
}

/******************************************************************************
* \Syntax          : void Led_TurnOFF(LED_ID LedID)
* \Description     : Turn Led Off
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : LedID
* \Return value:   : None
*******************************************************************************/
void Led_TurnOFF(LED_ID LedID){
	if(LedID==LED0){
		Dio_WRITEChannel(Led0_Port, Led0_Channel, STD_LOW);
	}
	if(LedID==LED1){
		Dio_WRITEChannel(Led1_Port, Led1_Channel, STD_LOW);
	}
	if(LedID==LED2){
		Dio_WRITEChannel(Led2_Port, Led2_Channel, STD_LOW);
	}
}

/******************************************************************************
* \Syntax          : void Led_Toggle(LED_ID LedID)
* \Description     : Toggle Led
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : LedID
* \Return value:   : None
*******************************************************************************/
void Led_Toggle(LED_ID LedID){
	if(LedID==LED0){
		Dio_TOGGLEChannel(Led0_Port, Led0_Channel);
	}
	if(LedID==LED1){
		Dio_TOGGLEChannel(Led1_Port, Led1_Channel);
	}
	if(LedID==LED2){
		Dio_TOGGLEChannel(Led2_Port, Led2_Channel);
	}
}


/******************************************************************************
* \Syntax          : void Led_Init(void)
* \Description     : Initialize Led channels as output
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : LedID
* \Return value:   : None
*******************************************************************************/
void Led_Init(void){
	Dio_CONFIGChannel(Led0_Port, Led0_Channel, OUTPUT);
	Dio_CONFIGChannel(Led1_Port, Led1_Channel, OUTPUT);
	Dio_CONFIGChannel(Led2_Port, Led2_Channel, OUTPUT);

}


/**********************************************************************************************************************
 *  END OF FILE: Led.c
 *********************************************************************************************************************/
