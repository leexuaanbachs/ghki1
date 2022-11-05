/*
 * button.h
 *
 *  Created on: Nov 4, 2022
 *      Author: admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

int isButtonPressed(int n);
int isButtonHolding(int n);

void getKeyInput();

#endif /* INC_BUTTON_H_ */
