/*
 * software_timer.c
 *
 *  Created on: Oct 30, 2024
 *      Author: THANH TAM
 */
#include "software_timer.h"
#define TICK 10
#define TIMER_COUNT 10

int timer_flag[TIMER_COUNT];
int timer_counter[TIMER_COUNT];

void setTimer(int index, int counter){
	timer_counter[index] = counter / TICK;
	timer_flag[index] = 0;
}

void clearTimer(int index){
	timer_counter[index] = 0;
	timer_flag[index] = 0;
}

void timerRun(){
	for (int i = 0; i < TIMER_COUNT; i++){
		if (timer_counter[i] > 0){
			timer_counter[i]--;
			if(timer_counter[i] <= 0){
				timer_flag[i] = 1;
			}
		}
	}
}


