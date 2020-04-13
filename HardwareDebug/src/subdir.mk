################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/CANTest2.c 

C_DEPS += \
./src/CANTest2.d 

OBJS += \
./src/CANTest2.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking Compiler'
	$(file > $@.in,-O0 -ffunction-sections -fdata-sections -g2 -Wstack-usage=100 -mcpu=rx600 -misa=v1 -mbig-endian-data -I"C:/Users/kosuke/Develop/RX/CANTest2/generate" -Wa,-adlnh="$(basename $(notdir $<)).lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" "$<" -c -o "$@")
	@echo 'rx-elf-gcc -O0 -ffunction-sections -fdata-sections -g2 -Wstack-usage=100 -mcpu=rx600 -misa=v1 -mbig-endian-data -I"C:/Users/kosuke/Develop/RX/CANTest2/generate" -Wa,-adlnh="$(basename $(notdir $<)).lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" "$<" -c -o "$@"'

	rx-elf-gcc @"$@.in"
	@echo 'Finished building: $<'
	@echo ' '


