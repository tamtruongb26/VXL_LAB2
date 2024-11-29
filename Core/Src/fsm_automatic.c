/*
 * fsm_automatic.c
 *
 *  Created on: Oct 30, 2024
 *      Author: THANH TAM
 */

#include "fsm_automatic.h"

//lấy giá trị cho led_buffer
void updateClockBuffer(){
  	led_buffer[0] = minute % 10;
  	led_buffer[1] = minute / 10;
  	led_buffer[2] = hour % 10;
  	led_buffer[3] = hour / 10;
}

//hàm hiển thị led 7 segment tương ứng
void numtoled(int ledbuffer){
	switch (ledbuffer){
		case 0:
			zero();
			break;
		case 1:
			one();
			break;
		case 2:
			two();
			break;
		case 3:
			three();
			break;
		case 4:
			four();
			break;
		case 5:
			five();
			break;
		case 6:
			six();
			break;
		case 7:
			seven();
			break;
		case 8:
			eight();
			break;
		case 9:
			nine();
			break;
		default:
			break;
		}
}

//hàm chuyển trạng thái
void fsm_automatic_run(){

	//timer_flag cho cập nhật đồng hồ
	if (timer_flag[2] == 1){
		second++;
		if (second >= 60){
			second = 0;
			minute++;
			if (minute >= 60){
				minute = 0;
				hour++;
				if (hour >= 24){
					hour = 0;
				}
			}
		}
		updateClockBuffer();
		setTimer(2, 1000);
	}

	//timer_flag cho đèn chớp
	if (timer_flag[1] == 1){
		HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
		setTimer(1, 500);
	}

	//các trạng thái
	switch (status){
		case INIT: //trạng thái khởi tạo
			//TODO

			hour = 15;
			minute = 8;
			second = 50;
			updateClockBuffer();

			status = STATUS_1;
			setTimer(0, 500);
			break;
		case STATUS_1: //led7seg 1 sáng
			//TODO
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			numtoled(led_buffer[3]);

			if (timer_flag[0] == 1) {
				status = STATUS_2;
				setTimer(0, 500);
			}
			break;
		case STATUS_2: //led7seg 2 sáng
			//TODO
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			numtoled(led_buffer[2]);

			if (timer_flag[0] == 1) {
				status = STATUS_3;
				setTimer(0, 500);
			}
			break;
		case STATUS_3: //led7seg 3 sáng
			//TODO
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			numtoled(led_buffer[1]);

			if (timer_flag[0] == 1) {
				status = STATUS_4;
				setTimer(0, 500);
			}
			break;
		case STATUS_4: //led7seg 4 sáng
			//TODO
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			numtoled(led_buffer[0]);

			if (timer_flag[0] == 1) {
				status = STATUS_1;
				setTimer(0, 500);
			}
			break;
		default:
			break;
	}
}
