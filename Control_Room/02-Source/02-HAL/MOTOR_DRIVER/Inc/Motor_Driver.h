 /********************************************************************************************************************
 *  File		: Motor_Driver.h
 *	Module		: L298n MOTOR DRIVER
 *	Target		: General
 *	Author		: mAboushenif
 *  Description	: Contains prototypes and new datatypes for motor driver L298n
 *********************************************************************************************************************/
#ifndef MOTOR_DRIVER_H_
#define MOTOR_DRIVER_H_

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Motor_Driver_Cfg.h"

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


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void Motors_Init(void);
void Motors_Forward(void);
void Motors_Backward(void);
void Motors_Stop(void);


#endif  /* FILE_NAME_H */

/**********************************************************************************************************************
 *  END OF FILE: Motor_Driver.h
 *********************************************************************************************************************/
