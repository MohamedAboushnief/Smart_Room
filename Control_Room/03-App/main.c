/*
 * main.c
 *
 *  Created on: Feb 8, 2021
 *      Author: mohamedaboushenif
 */
#define F_CPU 8000000UL
#include "Button.h"
#include "Led.h"
#include "Eeprom.h"
#include "Dio.h"
#include "Uart.h"
#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "Spi.h"



/*******************************   CONTROL ROOM  ***************************************/

ISR(USART_RXC_vect)
{

	u8 data= USART_DATA_REG;

	if (data == '1') {
		Led_Toggle(LED0);
		SPI_ui8TransmitRecieve('1');
		UART_TransmitStr("Air Conditioner turned on/off \n");

	}

	if (data == '2') {
		Led_Toggle(LED1);
		SPI_ui8TransmitRecieve('2');
		UART_TransmitStr("Lights turned on/off \n");

	}

	if (data == '3') {
		Led_Toggle(LED2);
		SPI_ui8TransmitRecieve('3');
		UART_TransmitStr("TV turned on/off  \n");

	}
}

int main(void) {

	Led_INIT();
	Button_INIT();
	UART_Init(ASYNC, 9600, INTERRUPT_ON, UART_8_BIT_DATA, UART_1_STOP_BIT,
			UART_NO_PARITY, UART_TRANSCIEVE);

//	//initialize this node as a master
	SPI_vInitMaster();

	u8 data;

	while (1) {



	}
}

