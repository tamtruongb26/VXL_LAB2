/*
 * led7_segment.c
 *
 *  Created on: Oct 30, 2024
 *      Author: THANH TAM
 */

#include "led7_segment.h"

void off(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}

void zero(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}

void one(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}
void two(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void three(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void four(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void five(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void six(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void seven(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}
void eight(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void nine(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
