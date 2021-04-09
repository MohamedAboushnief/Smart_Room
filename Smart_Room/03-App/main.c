/*
 * main.c
 *
 *  Created on: Feb 8, 2021
 *      Author: mohamedaboushenif
 */

//smart room
#define F_CPU 16000000UL
#include "Button.h"
#include "Led.h"
#include "Eeprom.h"
#include "Dio.h"
#include <util/delay.h>
#include "Uart.h"
#include "Spi.h"



/*******************************   SMART ROOM  ***************************************/




int main(void) {

	Led_Init();
	Button_Init();

//	UART_Init(ASYNC, 38400, INTERRUPT_OFF, UART_8_BIT_DATA, UART_1_STOP_BIT,
//			UART_NO_PARITY, UART_TRANSCIEVE);


	//initialize this node as a slave
	SPI_vInitSlave();

	u8 data;

	while (1) {




		data = SPI_ui8TransmitRecieve(0xFF);

		if(data=='m'){
			Led_Toggle(LED0);
		}

		if(data=='g'){
			Led_Toggle(LED1);
		}

		if(data=='b'){
			Led_Toggle(LED1);
		}


//		if(Button_Read(BUTTON0)==PRESSED){
//			Led_Toggle(LED0);
//
//		}









	}
}
