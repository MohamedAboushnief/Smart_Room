################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../03-App/main.c 

OBJS += \
./03-App/main.o 

C_DEPS += \
./03-App/main.d 


# Each subdirectory must supply rules for building sources it contributes
03-App/%.o: ../03-App/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\moham\OneDrive\Desktop\Smart_Home\Smart_Room\02-Source\01-MCAL\DIO\Inc" -I"C:\Users\moham\OneDrive\Desktop\Smart_Home\Smart_Room\02-Source\01-MCAL\EEPROM\Inc" -I"C:\Users\moham\OneDrive\Desktop\Smart_Home\Smart_Room\02-Source\01-MCAL\INTERRUPTS\Inc" -I"C:\Users\moham\OneDrive\Desktop\Smart_Home\Smart_Room\02-Source\01-MCAL\SPI\Inc" -I"C:\Users\moham\OneDrive\Desktop\Smart_Home\Smart_Room\02-Source\01-MCAL\UART\Inc" -I"C:\Users\moham\OneDrive\Desktop\Smart_Home\Smart_Room\02-Source\02-HAL\BUTTON\Inc" -I"C:\Users\moham\OneDrive\Desktop\Smart_Home\Smart_Room\02-Source\02-HAL\LED\Inc" -I"C:\Users\moham\OneDrive\Desktop\Smart_Home\Smart_Room\02-Source\02-HAL\MOTOR_DRIVER\Inc" -I"C:\Users\moham\OneDrive\Desktop\Smart_Home\Smart_Room\02-Source\04-LIB" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


