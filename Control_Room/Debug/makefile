################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include 03-App/subdir.mk
-include 02-Source/02-HAL/MOTOR_DRIVER/Src/subdir.mk
-include 02-Source/02-HAL/LED/Src/subdir.mk
-include 02-Source/02-HAL/BUTTON/Src/subdir.mk
-include 02-Source/01-MCAL/UART/Src/subdir.mk
-include 02-Source/01-MCAL/SPI/Src/subdir.mk
-include 02-Source/01-MCAL/INTERRUPTS/Src/subdir.mk
-include 02-Source/01-MCAL/EEPROM/Src/subdir.mk
-include 02-Source/01-MCAL/DIO/Src/subdir.mk
-include 01-Doc/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Control_Room.lss \

FLASH_IMAGE += \
Control_Room.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Control_Room.elf secondary-outputs

# Tool invocations
Control_Room.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Control_Room.map -mmcu=atmega32 -o "Control_Room.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Control_Room.lss: Control_Room.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Control_Room.elf  >"Control_Room.lss"
	@echo 'Finished building: $@'
	@echo ' '

Control_Room.hex: Control_Room.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Control_Room.elf  "Control_Room.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Control_Room.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Control_Room.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Control_Room.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
