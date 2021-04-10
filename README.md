# Smart Room 

This is an embedded systems project which is an implementation of a smart room using Atmega32 microcontroller, Bluetooth, SPI, and UART  communication protocols. The idea is to emulate having a smart room that you can control from your smartphone. This project is written in a layered architecture similar to the Autosar standard, and consists of drivers for LED, Button, SPI, UART, Motor, Digital I/O, Interrupts, EEPROM, some of them are not used but might be used in the future. You will find a proteus simulation file of the project in the repo.



## Software Drivers Used
- SPI protocol
- UART protocol
- LED
- Button
- Digital I/O


## Description
This project consists of two ATmega32 microcontrollers, the first one acts as the control room and the second one as the smart room. The control room microcontroller is connected to the HC-05 Bluetooth module using UART protocol and then it is connected to the smart room microcontroller using the SPI protocol, the smart room microcontroller has two LEDs connected to it acting as smart lamps or any actuator you want.

## Proteus Simulation
![](https://github.com/MohamedAboushnief/Smart_Room/blob/main/Image.PNG)

## Scenarios
- Turn on/off the first LED:  Send 'm' through the Bluetooth Terminal app 
- Turn on/off the second LED: Send 'g' through the Bluetooth Terminal app 


## Installation

- git clone the repo
- Build the control_room project and add hex file to the first microcontroller
- Build the smart_room project and add hex file to the second microcontroller

## Prerequisites
- Install Proteus simulation software
- Install HC-05 Bluetooth library and add it to Proteus Library
- Install Bluetooth Terminal application on your Android smartphone




