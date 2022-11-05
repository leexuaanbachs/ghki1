/*
 * global.h
 *
 *  Created on: Nov 4, 2022
 *      Author: admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "timer.h"
#include "button.h"
#include "7segment.h"
#include "fsm_auto.h"

#define NORMAL_PRESS 	2
#define LONG_PRESS	 	3
#define COUNT_DOWN		4

extern int status;
extern int count;
extern int time_out;

#endif /* INC_GLOBAL_H_ */
