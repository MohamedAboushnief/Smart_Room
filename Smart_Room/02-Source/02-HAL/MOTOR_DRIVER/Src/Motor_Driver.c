 /**********************************************************************************************************************
 *  File		: Motor_Driver.c
 *	Module		: L298n MOTOR DRIVER
 *	Target		: General
 *	Author		: mAboushenif
 *  Description	: Functions for using the motor driver module
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Motor_Driver.h"
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
* \Syntax          : void Motors_Init(void)
* \Description     : Initialize Motor Driver channels as output
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : void
* \Return value:   : None
*******************************************************************************/
void Motors_Init(void){
	Dio_CONFIGChannel(ENA_Port, ENA_Channel, OUTPUT);
	Dio_CONFIGChannel(ENB_Port, ENB_Channel, OUTPUT);
	Dio_CONFIGChannel(IN1_Port, IN1_Channel, OUTPUT);
	Dio_CONFIGChannel(IN2_Port, IN2_Channel, OUTPUT);
	Dio_CONFIGChannel(IN3_Port, IN3_Channel, OUTPUT);
	Dio_CONFIGChannel(IN4_Port, IN4_Channel, OUTPUT);
}


/******************************************************************************
* \Syntax          : void Motors_Forward(void)
* \Description     : Move motors in forward direction
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : void
* \Return value:   : None
*******************************************************************************/
void Motors_Forward(void){
	Dio_WRITEChannel(ENA_Port, ENA_Channel, STD_HIGH);
	Dio_WRITEChannel(IN1_Port, IN1_Channel, STD_HIGH);
	Dio_WRITEChannel(IN2_Port, IN2_Channel, STD_LOW);

	Dio_WRITEChannel(ENB_Port, ENB_Channel, STD_HIGH);
	Dio_WRITEChannel(IN3_Port, IN3_Channel, STD_HIGH);
	Dio_WRITEChannel(IN4_Port, IN4_Channel, STD_LOW);


}

/******************************************************************************
* \Syntax          : void Motors_Backward(void)
* \Description     : Move motors in backward direction
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : void
* \Return value:   : None
*******************************************************************************/
void Motors_Backward(void){
	Dio_WRITEChannel(ENA_Port, ENA_Channel, STD_HIGH);
	Dio_WRITEChannel(IN1_Port, IN1_Channel, STD_LOW);
	Dio_WRITEChannel(IN2_Port, IN2_Channel, STD_HIGH);

	Dio_WRITEChannel(ENB_Port, ENB_Channel, STD_HIGH);
	Dio_WRITEChannel(IN3_Port, IN3_Channel, STD_LOW);
	Dio_WRITEChannel(IN4_Port, IN4_Channel, STD_HIGH);

}

/******************************************************************************
* \Syntax          : void Motors_Stop(void)
* \Description     : Stop motors
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : void
* \Return value:   : None
*******************************************************************************/
void Motors_Stop(void){
	Dio_WRITEChannel(ENA_Port, ENA_Channel, STD_HIGH);
	Dio_WRITEChannel(IN1_Port, IN1_Channel, STD_HIGH);
	Dio_WRITEChannel(IN2_Port, IN2_Channel, STD_HIGH);

	Dio_WRITEChannel(ENB_Port, ENB_Channel, STD_HIGH);
	Dio_WRITEChannel(IN3_Port, IN3_Channel, STD_HIGH);
	Dio_WRITEChannel(IN4_Port, IN4_Channel, STD_HIGH);

}





/**********************************************************************************************************************
 *  END OF FILE: Motor_Driver.c
 *********************************************************************************************************************/
