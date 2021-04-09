 /**********************************************************************************************************************
 *  File		: Interrupts.c
 *	Module		: INTERRUPTS
 *	Target		: ATMEGA32
 *	Author		: mAboushenif
 *  Description	: Functions for using the Interrupts module (enable global interrupts, configure external interrupts, etc..)
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Interrupts.h"
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
* \Syntax          : void Global_Interrupt_En(void)
* \Description     : Enable global interrupt
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : void
* \Return value:   : None
*******************************************************************************/
void Global_Interrupt_En(void){
	SET_BIT(STATUS_REG,GLOBAL_INT_EN);
}


/******************************************************************************
* \Syntax          : void Global_Interrupt_Dis(void)
* \Description     : Enable global interrupt
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : void
* \Return value:   : None
*******************************************************************************/
void Global_Interrupt_Dis(void){
	CLEAR_BIT(STATUS_REG,GLOBAL_INT_EN);
}

/******************************************************************************
* \Syntax          : void Ext_Interrupt_Enable(Ext_Interrupt_ID)
* \Description     : Enable external interrupt
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : interruptID
* \Return value:   : None
*******************************************************************************/
void Ext_Interrupt_Enable(Ext_InterruptID interruptID){
	switch(interruptID){
	case INTERRUPT_0:
		SET_BIT(GENERAL_INTERRUPT_CONTROL_REG,INTERRUPT0);
		break;
	case INTERRUPT_1:
		SET_BIT(GENERAL_INTERRUPT_CONTROL_REG,INTERRUPT1);
		break;
	case INTERRUPT_2:
		SET_BIT(GENERAL_INTERRUPT_CONTROL_REG,INTERRUPT2);
		break;
	}
}

/******************************************************************************
* \Syntax          : void Ext_Interrupt_Disable(Ext_InterruptID)
* \Description     : Enable external interrupt
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : interruptID
* \Return value:   : None
*******************************************************************************/
void Ext_Interrupt_Disable(Ext_InterruptID interruptID){
	switch(interruptID){
	case INTERRUPT_0:
		CLEAR_BIT(GENERAL_INTERRUPT_CONTROL_REG,INTERRUPT0);
		break;
	case INTERRUPT_1:
		CLEAR_BIT(GENERAL_INTERRUPT_CONTROL_REG,INTERRUPT1);
		break;
	case INTERRUPT_2:
		CLEAR_BIT(GENERAL_INTERRUPT_CONTROL_REG,INTERRUPT2);
		break;
	}
}

/******************************************************************************
* \Syntax          : void Ext_Interrupt_Config(Ext_InterruptID,Ext_Interrupt_Mode)
* \Description     : configure external interrupt sense control
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : interruptID mode
* \Return value:   : None
*******************************************************************************/

void Ext_Interrupt_Config(Ext_InterruptID interruptID,Ext_Interrupt_Mode mode){
	switch(interruptID){
			case INTERRUPT_0:
				if(mode==LOW_LEVEL){
					CLEAR_BIT(MCU_CONTROL_REG,ISC00);
					CLEAR_BIT(MCU_CONTROL_REG,ISC01);
				}
				else if(mode==FALLING_EDGE){
					CLEAR_BIT(MCU_CONTROL_REG,ISC00);
					SET_BIT(MCU_CONTROL_REG,ISC01);
				}
				else if(mode==RISING_EDGE){
					SET_BIT(MCU_CONTROL_REG,ISC00);
					SET_BIT(MCU_CONTROL_REG,ISC01);
				}
				else if(mode==ANY_CHANGE){
					SET_BIT(MCU_CONTROL_REG,ISC00);
					CLEAR_BIT(MCU_CONTROL_REG,ISC01);
				}
				break;

			case INTERRUPT_1:
				if(mode==LOW_LEVEL){
					CLEAR_BIT(MCU_CONTROL_REG,ISC10);
					CLEAR_BIT(MCU_CONTROL_REG,ISC11);
				}
				else if(mode==FALLING_EDGE){
					CLEAR_BIT(MCU_CONTROL_REG,ISC10);
					SET_BIT(MCU_CONTROL_REG,ISC11);
				}
				else if(mode==RISING_EDGE){
					SET_BIT(MCU_CONTROL_REG,ISC10);
					SET_BIT(MCU_CONTROL_REG,ISC11);
				}
				else if(mode==ANY_CHANGE){
					SET_BIT(MCU_CONTROL_REG,ISC10);
					CLEAR_BIT(MCU_CONTROL_REG,ISC11);
				}
				break;

			case INTERRUPT_2:
				if(mode==FALLING_EDGE){
					CLEAR_BIT(MCU_CONTROL_REG,ISC2);
				}
				else if(mode==RISING_EDGE){
					SET_BIT(MCU_CONTROL_REG,ISC2);
				}
				break;
			}



}

/**********************************************************************************************************************
 *  END OF FILE: Interrupts.c
 *********************************************************************************************************************/
