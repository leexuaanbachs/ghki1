/*
 * 7segment.h
 *
 *  Created on: Nov 4, 2022
 *      Author: admin
 */

#ifndef INC_7SEGMENT_H_
#define INC_7SEGMENT_H_

#define segled	GPIOB
#define seg0	GPIO_PIN_0
#define seg1	GPIO_PIN_1
#define seg2	GPIO_PIN_2
#define seg3	GPIO_PIN_3
#define seg4	GPIO_PIN_4
#define seg5	GPIO_PIN_5
#define seg6	GPIO_PIN_6

void display7SEG(int num);

#endif /* INC_7SEGMENT_H_ */
