 /**********************************************************************************************************************
 *  File		: Dio.c
 *	Module		: DIO
 *	Target		: ATMEGA32
 *	Author		: mAboushenif
 *  Description	: Functions for using the DIO module
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Dio.h"
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
* \Syntax          : void Dio_ConfigChannel(DIO_PortID portID, DIO_ChannelID channelID, DIO_DirectionType ChannelDir)
* \Description     : configure channel as input or output
*
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : portID channelID ChannelDir
* \Return value:   : None
*******************************************************************************/
void Dio_CONFIGChannel(DIO_PortID portID, DIO_ChannelID channelID, DIO_DirectionType ChannelDir){
	switch(portID){
		case DIO_PORTA:
			if(ChannelDir==OUTPUT){
				SET_BIT(DIO_PORTA_DDR,channelID);
			}
			else{
				CLEAR_BIT(DIO_PORTA_DDR,channelID);
			}
			break;
		case DIO_PORTB:
			if(ChannelDir==OUTPUT){
				SET_BIT(DIO_PORTB_DDR,channelID);
			}
			else{
				CLEAR_BIT(DIO_PORTB_DDR,channelID);
			}
			break;
		case DIO_PORTC:
			if(ChannelDir==OUTPUT){
				SET_BIT(DIO_PORTC_DDR,channelID);
			}
			else{
				CLEAR_BIT(DIO_PORTC_DDR,channelID);
			}
			break;
		case DIO_PORTD:
			if(ChannelDir==OUTPUT){
				SET_BIT(DIO_PORTD_DDR,channelID);
			}
			else{
				CLEAR_BIT(DIO_PORTD_DDR,channelID);
			}
			break;
	}

}

/******************************************************************************
* \Syntax          : void Dio_WRITEChannel(DIO_PortID portID, DIO_ChannelID channelID, DIO_LevelType channelLevel);
* \Description     : Write a signal on channel
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : portID channelID channelLevel
* \Return value:   : None
*******************************************************************************/

void Dio_WRITEChannel(DIO_PortID portID, DIO_ChannelID channelID, DIO_LevelType channelLevel){
	switch(portID){
		case DIO_PORTA:
			if(channelLevel==STD_HIGH){
				SET_BIT(DIO_PORTA_DATA_OUT,channelID);
			}
			else{
				CLEAR_BIT(DIO_PORTA_DATA_OUT,channelID);
			}
			break;
		case DIO_PORTB:
			if(channelLevel==STD_HIGH){
				SET_BIT(DIO_PORTB_DATA_OUT,channelID);
			}
			else{
				CLEAR_BIT(DIO_PORTB_DATA_OUT,channelID);
			}
			break;
		case DIO_PORTC:
			if(channelLevel==STD_HIGH){
				SET_BIT(DIO_PORTC_DATA_OUT,channelID);
			}
			else{
				CLEAR_BIT(DIO_PORTC_DATA_OUT,channelID);
			}
			break;
		case DIO_PORTD:
			if(channelLevel==STD_HIGH){
				SET_BIT(DIO_PORTD_DATA_OUT,channelID);
			}
			else{
				CLEAR_BIT(DIO_PORTD_DATA_OUT,channelID);
			}
			break;
	}

}

/******************************************************************************
* \Syntax          : void Dio_TOGGLEChannel(DIO_PortID portID, DIO_ChannelID channelID)
* \Description     : Flip signal on channel
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : portID channelID
* \Return value:   : None
*******************************************************************************/

void Dio_TOGGLEChannel(DIO_PortID portID, DIO_ChannelID channelID){
	switch(portID){
		case DIO_PORTA:
			FLIP_BIT(DIO_PORTA_DATA_OUT,channelID);
			break;
		case DIO_PORTB:
			FLIP_BIT(DIO_PORTB_DATA_OUT,channelID);
			break;
		case DIO_PORTC:
			FLIP_BIT(DIO_PORTC_DATA_OUT,channelID);
			break;
		case DIO_PORTD:
			FLIP_BIT(DIO_PORTD_DATA_OUT,channelID);
			break;
		}


}

/******************************************************************************
* \Syntax          : DIO_LevelType Dio_ReadChannel(DIO_PortID portID, DIO_ChannelID channelID)
* \Description     : Read signal from channel
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : portID channelID
* \Return value:   : DIO_LevelType
*******************************************************************************/

DIO_LevelType Dio_ReadChannel(DIO_PortID portID, DIO_ChannelID channelID){
	switch(portID){
		case DIO_PORTA:
			if(CHECK_BIT(DIO_PORTA_DATA_IN,channelID)){
				return STD_HIGH;
			}
			else{
				return STD_LOW;
			}
			break;
		case DIO_PORTB:
			if(CHECK_BIT(DIO_PORTB_DATA_IN,channelID)){
				return STD_HIGH;
			}
			else{
				return STD_LOW;
			}
			break;
		case DIO_PORTC:
			if(CHECK_BIT(DIO_PORTC_DATA_IN,channelID)){
				return STD_HIGH;
			}
			else{
				return STD_LOW;
			}
			break;
		case DIO_PORTD:
			if(CHECK_BIT(DIO_PORTD_DATA_IN,channelID)){
				return STD_HIGH;
			}
			else{
				return STD_LOW;
			}
			break;
		}

}

/******************************************************************************
* \Syntax          : void Dio_CONFIGChannelGroup(Dio_PortID portID, u8 mask, Dio_DirectionType ChannelDir)
* \Description     : configure a group of channels
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : portID mask ChannelDir
* \Return value:   : DIO_LevelType
*******************************************************************************/

void Dio_CONFIGChannelGroup(DIO_PortID portID, u8 mask, DIO_DirectionType ChannelDir){
	switch(portID){
		case DIO_PORTA:
			if(ChannelDir==INPUT){
				DIO_PORTA_DDR &= ~(mask);
			}
			else{
				DIO_PORTA_DDR |= mask;
			}
			break;
		case DIO_PORTB:
			if(ChannelDir==INPUT){
				DIO_PORTB_DDR &= ~(mask);
			}
			else{
				DIO_PORTB_DDR |= mask;
			}
			break;
		case DIO_PORTC:
			if(ChannelDir==INPUT){
				DIO_PORTC_DDR &= ~(mask);
			}
			else{
				DIO_PORTC_DDR |= mask;
			}
			break;
		case DIO_PORTD:
			if(ChannelDir==INPUT){
				DIO_PORTD_DDR &= ~(mask);
			}
			else{
				DIO_PORTD_DDR |= mask;
			}
			break;
		}

}

/******************************************************************************
* \Syntax          : void Dio_WRITEChannelGroup(Dio_PortID portID, u8 mask, u8 position, u8 data)
* \Description     : Write a signal on group of channels
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : portID mask position data
* \Return value:   : DIO_LevelType
*******************************************************************************/

void Dio_WRITEChannelGroup(DIO_PortID portID, u8 mask, u8 position, u8 data){
	switch(portID){
		case DIO_PORTA:
			DIO_PORTA_DDR &= ~(mask);
			DIO_PORTA_DDR |= data<<position;
			break;
		case DIO_PORTB:
			DIO_PORTB_DDR &= ~(mask);
			DIO_PORTB_DDR |= data<<position;
			break;
		case DIO_PORTC:
			DIO_PORTC_DDR &= ~(mask);
			DIO_PORTC_DDR |= data<<position;
			break;
		case DIO_PORTD:
			DIO_PORTD_DDR &= ~(mask);
			DIO_PORTD_DDR |= data<<position;
			break;
		}
}


/**********************************************************************************************************************
 *  END OF FILE: Dio.c
 *********************************************************************************************************************/
