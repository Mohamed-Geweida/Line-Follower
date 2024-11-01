﻿/*
 * MOTOR_INTERFACE.h
 *
 *  Author: 0110
 */ 


#ifndef MOTOR_INTERFACE_H_
#define MOTOR_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_register.h"
#include "MOTOR_DEFINITION.h"

void L298N_Init(void);
void MotorA_Forward(void);
void MotorA_Backward(void);
void MotorA_Stop(void);
void MotorB_Forward(void);
void MotorB_Backward(void);
void MotorB_Stop(void);
void Turn_Left(void);
void Turn_Right(void);


//ir sensor
u8 Read_Left_IR(void);
u8 Read_Right_IR(void);
#endif /* MOTOR_INTERFACE_H_ */
