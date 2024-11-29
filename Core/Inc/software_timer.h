	/*
 * software_timer.h
 *
 *  Created on: Oct 30, 2024
 *      Author: THANH TAM
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

// function prototypes
void setTimer(int index, int counter);
void clearTimer(int index);
void timerRun(void);

// Timer flags and counters
extern int timer_flag[10];
extern int timer_counter[10];

#endif /* INC_SOFTWARE_TIMER_H_ */
