/*
 * task.c
 *
 *  Created on: Nov 30, 2023
 *      Author: giang
 */

#include "task.h"

void ToggleLed1(void){
	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
}

void ToggleLed2(void){
	HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
}

void ToggleLed3(void){
	HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
}

void ToggleLed4(void){
	HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
}

void ToggleLed5(void){
	HAL_GPIO_TogglePin(LED5_GPIO_Port, LED5_Pin);
}
