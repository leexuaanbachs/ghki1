/*
 * fsm_auto.c
 *
 *  Created on: 4 Nov 2022
 *      Author: admin
 */

#include "fsm_auto.h"

void fsm_simple_buttons_run(){
	// check the status
	switch (status){
	case NORMAL_PRESS:
		// check button RESET press
		if (isButtonPressed(0) == 1){
			time_out = 10;
			count = 0;
		}
		// check button INC press
		if (isButtonPressed(1) == 1){
			time_out = 10;
			count+=1;
		}
		// check button DEC press
		if (isButtonPressed(2) == 1){
			time_out = 10;
			count-=1;
		}
		// check if the button INC is holding to change status
		if (isButtonHolding(1) == 1){
			count+=1;
			time_out = 10;
			status = LONG_PRESS;
		}
		// check if the button DEC is holding to change status
		if (isButtonHolding(2) == 1){
			count-=1;
			time_out = 10;
			status = LONG_PRESS;
		}
		// limit the count variable
		if (count >= 10) count = 0;
		if (count <= -1) count = 9;
		// check if no button press in 10s to change status
		if (timer2_flag == 1 && isButtonPressed(0) == 0 && isButtonPressed(1) == 0 && isButtonPressed(2) == 0){
			time_out--;
			setTimer2(100);
		}
		if (time_out <= 0){
			time_out = 10;
			status = COUNT_DOWN;
		}
		break;
	case LONG_PRESS:
		// check if the button INC is holding
		if (isButtonHolding(1) == 1){
			count+=1;
			time_out = 10;
		}
		// check if the button DEC is holding
		if (isButtonHolding(2) == 1){
			count-=1;
			time_out = 10;
		}
		// check button RESET press to change status
		if (isButtonPressed(0) == 1){
			count = 0;
			time_out = 10;
			status = NORMAL_PRESS;
		}
		// check button INC press to change status
		if (isButtonPressed(1) == 1){
			count++;
			time_out = 10;
			status = NORMAL_PRESS;
		}
		// check button DEC press to change status
		if (isButtonPressed(2) == 1){
			count--;
			time_out = 10;
			status = NORMAL_PRESS;
		}
		// limit the count variable
		if (count >= 10) count = 0;
		if (count <= -1) count = 9;
		// check if no button press in 10s to change status
		if (timer2_flag == 1 && isButtonHolding(0) == 0 && isButtonHolding(1) == 0 && isButtonHolding(2) == 0){
			time_out--;
			setTimer2(100);
		}
		if (time_out <= 0){
			time_out = 10;
			status = COUNT_DOWN;
		}
		break;
	case COUNT_DOWN:
		// let the count value decrease 1 unit every 1s to 0
		if (count > 0 && timer3_flag == 1){
			count--;
			setTimer3(100);
		}
		// limit count variable at 0
		if (count <= 0) count = 0;
		// check button RESET press to change status
		if (isButtonPressed(0) == 1){
			count = 0;
			time_out = 10;
			status = NORMAL_PRESS;
		}
		// check button INC press to change status
		if (isButtonPressed(1) == 1){
			count++;
			time_out = 10;
			status = NORMAL_PRESS;
		}
		// check button DEC press to change status
		if (isButtonPressed(2) == 1){
			count--;
			time_out = 10;
			status = NORMAL_PRESS;
		}
		break;
	default:
		break;
	}
}
