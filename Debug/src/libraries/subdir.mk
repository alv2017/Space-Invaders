################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/libraries/Controller.cpp \
../src/libraries/Factory.cpp \
../src/libraries/Model.cpp \
../src/libraries/Size.cpp \
../src/libraries/Utilities.cpp \
../src/libraries/View.cpp 

OBJS += \
./src/libraries/Controller.o \
./src/libraries/Factory.o \
./src/libraries/Model.o \
./src/libraries/Size.o \
./src/libraries/Utilities.o \
./src/libraries/View.o 

CPP_DEPS += \
./src/libraries/Controller.d \
./src/libraries/Factory.d \
./src/libraries/Model.d \
./src/libraries/Size.d \
./src/libraries/Utilities.d \
./src/libraries/View.d 


# Each subdirectory must supply rules for building sources it contributes
src/libraries/%.o: ../src/libraries/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

