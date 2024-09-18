################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Exercise1.c \
../Core/Src/Exercise10.c \
../Core/Src/Exercise2.c \
../Core/Src/Exercise3.c \
../Core/Src/Exercise4.c \
../Core/Src/Exercise5.c \
../Core/Src/Exercise6.c \
../Core/Src/Exercise7.c \
../Core/Src/Exercise8.c \
../Core/Src/Exercise9.c \
../Core/Src/main.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c 

OBJS += \
./Core/Src/Exercise1.o \
./Core/Src/Exercise10.o \
./Core/Src/Exercise2.o \
./Core/Src/Exercise3.o \
./Core/Src/Exercise4.o \
./Core/Src/Exercise5.o \
./Core/Src/Exercise6.o \
./Core/Src/Exercise7.o \
./Core/Src/Exercise8.o \
./Core/Src/Exercise9.o \
./Core/Src/main.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o 

C_DEPS += \
./Core/Src/Exercise1.d \
./Core/Src/Exercise10.d \
./Core/Src/Exercise2.d \
./Core/Src/Exercise3.d \
./Core/Src/Exercise4.d \
./Core/Src/Exercise5.d \
./Core/Src/Exercise6.d \
./Core/Src/Exercise7.d \
./Core/Src/Exercise8.d \
./Core/Src/Exercise9.d \
./Core/Src/main.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

