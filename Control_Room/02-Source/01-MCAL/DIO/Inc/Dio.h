 /********************************************************************************************************************
 *  File		: Dio_Private.h
 *	Module		: DIO
 *	Target		: ATMEGA32
 *	Author		: mAboushenif
 *  Description	: Defining registers for DIO
 *********************************************************************************************************************/
#ifndef DIO_H_
#define DIO_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Bit_Math.h"
#include "Dio_Private.h"


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
	DIO_CH_0,
	DIO_CH_1,
	DIO_CH_2,
	DIO_CH_3,
	DIO_CH_4,
	DIO_CH_5,
	DIO_CH_6,
	DIO_CH_7
}DIO_ChannelID;

typedef enum{
	DIO_PORTA,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD
}DIO_PortID;

typedef enum{
	STD_LOW,
	STD_HIGH
}DIO_LevelType;

typedef enum{
	INPUT,
	OUTPUT
}DIO_DirectionType;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void Dio_CONFIGChannel(DIO_PortID portID, DIO_ChannelID channelID, DIO_DirectionType ChannelDir);
void Dio_WRITEChannel(DIO_PortID portID, DIO_ChannelID channelID, DIO_LevelType channelLevel);
void Dio_TOGGLEChannel(DIO_PortID portID, DIO_ChannelID channelID);
DIO_LevelType Dio_ReadChannel(DIO_PortID portID, DIO_ChannelID channelID);
void Dio_CONFIGChannelGroup(DIO_PortID portID, u8 mask, DIO_DirectionType ChannelDir);
void Dio_WRITEChannelGroup(DIO_PortID portID, u8 mask, u8 position, u8 data);


#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: Dio_Private.h
 *********************************************************************************************************************/
