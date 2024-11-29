/*
 * global.h
 *
 *  Created on: Oct 30, 2024
 *      Author: THANH TAM
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

//include
#include "software_timer.h"
#include "main.h"

// define status
#define INIT 1
#define STATUS_1 2
#define STATUS_2 3
#define STATUS_3 4
#define STATUS_4 5

// status
extern int status;
extern int led_buffer[4];
extern int minute, hour, second;

#endif /* INC_GLOBAL_H_ */
