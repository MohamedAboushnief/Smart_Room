/*
 * main.c
 *
 *  Created on: Feb 8, 2021
 *      Author: mohamedaboushenif
 */
#define F_CPU 16000000UL
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



//ISR(USART_RXC_vect)   //for creating clock
//{
//	if (USART_DATA_REG == 'm') {
//		Led_Toggle(LED0);
//	}
//}

int main(void) {

	Led_INIT();
	Button_INIT();
	UART_Init(ASYNC, 9600 , INTERRUPT_OFF, UART_8_BIT_DATA, UART_1_STOP_BIT,
			UART_NO_PARITY, UART_TRANSCIEVE);

//
//	//initialize this node as a master
	SPI_vInitMaster();

	u8 data;

	while (1) {


		data = UART_ReceiveChr();
		if (data == 'm') {
			Led_Toggle(LED0);
			SPI_ui8TransmitRecieve('m');
		}

		if (data == 'g') {
			Led_Toggle(LED1);
			SPI_ui8TransmitRecieve('g');
		}

		if (data == 'b') {
			Led_Toggle(LED2);
			SPI_ui8TransmitRecieve('b');
		}




//
//		if (Button_READ(BUTTON0) == PRESSED) {
//			Led_Toggle(LED0);
//			SPI_ui8TransmitRecieve('m');
//			_delay_ms(250);
//		}
//
//		if (Button_READ(BUTTON1) == PRESSED) {
//			Led_Toggle(LED1);
//			SPI_ui8TransmitRecieve('g');
//			_delay_ms(250);
//		}
//
//		if (Button_READ(BUTTON2) == PRESSED) {
//			Led_Toggle(LED2);
//			SPI_ui8TransmitRecieve('b');
//			_delay_ms(250);
//		}





	}
}
