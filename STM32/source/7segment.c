/*
 * 7segment.c
 *
 *  Created on: Nov 4, 2022
 *      Author: admin
 */

#include "7segment.h"
#include "main.h"

void display7SEG(int num){
	  if(num == 0){
		  HAL_GPIO_WritePin(segled, seg0, RESET);
		  HAL_GPIO_WritePin(segled, seg1, RESET);
		  HAL_GPIO_WritePin(segled, seg2, RESET);
		  HAL_GPIO_WritePin(segled, seg3, RESET);
		  HAL_GPIO_WritePin(segled, seg4, RESET);
		  HAL_GPIO_WritePin(segled, seg5, RESET);
		  HAL_GPIO_WritePin(segled, seg6, SET);
	  }
	  if(num == 1){
		  HAL_GPIO_WritePin(segled, seg0, SET);
		  HAL_GPIO_WritePin(segled, seg1, RESET);
		  HAL_GPIO_WritePin(segled, seg2, RESET);
		  HAL_GPIO_WritePin(segled, seg3, SET);
		  HAL_GPIO_WritePin(segled, seg4, SET);
		  HAL_GPIO_WritePin(segled, seg5, SET);
		  HAL_GPIO_WritePin(segled, seg6, SET);
	  }
	  if(num == 2){
		  HAL_GPIO_WritePin(segled, seg0, RESET);
		  HAL_GPIO_WritePin(segled, seg1, RESET);
		  HAL_GPIO_WritePin(segled, seg2, SET);
		  HAL_GPIO_WritePin(segled, seg3, RESET);
		  HAL_GPIO_WritePin(segled, seg4, RESET);
		  HAL_GPIO_WritePin(segled, seg5, SET);
		  HAL_GPIO_WritePin(segled, seg6, RESET);
	  }
	  if(num == 3){
		  HAL_GPIO_WritePin(segled, seg0, RESET);
		  HAL_GPIO_WritePin(segled, seg1, RESET);
		  HAL_GPIO_WritePin(segled, seg2, RESET);
		  HAL_GPIO_WritePin(segled, seg3, RESET);
		  HAL_GPIO_WritePin(segled, seg4, SET);
		  HAL_GPIO_WritePin(segled, seg5, SET);
		  HAL_GPIO_WritePin(segled, seg6, RESET);
	  }
	  if(num == 4){
		  HAL_GPIO_WritePin(segled, seg0, SET);
		  HAL_GPIO_WritePin(segled, seg1, RESET);
		  HAL_GPIO_WritePin(segled, seg2, RESET);
		  HAL_GPIO_WritePin(segled, seg3, SET);
		  HAL_GPIO_WritePin(segled, seg4, SET);
		  HAL_GPIO_WritePin(segled, seg5, RESET);
		  HAL_GPIO_WritePin(segled, seg6, RESET);
	  }
	  if(num == 5){
		  HAL_GPIO_WritePin(segled, seg0, RESET);
		  HAL_GPIO_WritePin(segled, seg1, SET);
		  HAL_GPIO_WritePin(segled, seg2, RESET);
		  HAL_GPIO_WritePin(segled, seg3, RESET);
		  HAL_GPIO_WritePin(segled, seg4, SET);
		  HAL_GPIO_WritePin(segled, seg5, RESET);
		  HAL_GPIO_WritePin(segled, seg6, RESET);
	  }
	  if(num == 6){
		  HAL_GPIO_WritePin(segled, seg0, RESET);
		  HAL_GPIO_WritePin(segled, seg1, SET);
		  HAL_GPIO_WritePin(segled, seg2, RESET);
		  HAL_GPIO_WritePin(segled, seg3, RESET);
		  HAL_GPIO_WritePin(segled, seg4, RESET);
		  HAL_GPIO_WritePin(segled, seg5, RESET);
		  HAL_GPIO_WritePin(segled, seg6, RESET);
	  }
	  if(num == 7){
		  HAL_GPIO_WritePin(segled, seg0, RESET);
		  HAL_GPIO_WritePin(segled, seg1, RESET);
		  HAL_GPIO_WritePin(segled, seg2, RESET);
		  HAL_GPIO_WritePin(segled, seg3, SET);
		  HAL_GPIO_WritePin(segled, seg4, SET);
		  HAL_GPIO_WritePin(segled, seg5, SET);
		  HAL_GPIO_WritePin(segled, seg6, SET);
	  }
	  if(num == 8){
		  HAL_GPIO_WritePin(segled, seg0, RESET);
		  HAL_GPIO_WritePin(segled, seg1, RESET);
		  HAL_GPIO_WritePin(segled, seg2, RESET);
		  HAL_GPIO_WritePin(segled, seg3, RESET);
		  HAL_GPIO_WritePin(segled, seg4, RESET);
		  HAL_GPIO_WritePin(segled, seg5, RESET);
		  HAL_GPIO_WritePin(segled, seg6, RESET);
	  }
	  if(num == 9){
		  HAL_GPIO_WritePin(segled, seg0, RESET);
		  HAL_GPIO_WritePin(segled, seg1, RESET);
		  HAL_GPIO_WritePin(segled, seg2, RESET);
		  HAL_GPIO_WritePin(segled, seg3, RESET);
		  HAL_GPIO_WritePin(segled, seg4, SET);
		  HAL_GPIO_WritePin(segled, seg5, RESET);
		  HAL_GPIO_WritePin(segled, seg6, RESET);
	  }
}
