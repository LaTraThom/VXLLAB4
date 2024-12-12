/*
 * led7_segment.c
 *
 *  Created on: Dec 12, 2024
 *      Author: TIEN DUY
 */

#include "led7_segment.h"
#include "global.h"
int time_lane1;
int time_lane2;

void display7SEG(int num) {
	if (num == 0) {
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	}
	if (num == 1) {
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	}
	if (num == 2) {
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	}
	if (num == 3) {
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	}
	if (num == 4) {
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	}
	if (num == 5) {
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	}
	if (num == 6) {
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	}
	if (num == 7) {
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	}
	if (num == 8) {
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	}
	if (num == 9) {
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
	}
}
void update_led_buffer() {
    led_buffer[0] = time_lane1 / 10;
    led_buffer[1] = time_lane1 % 10;
    led_buffer[2] = time_lane2 / 10;
    led_buffer[3] = time_lane2 % 10;
}
void led7_segment() {
	int digit_high, digit_low, value;
	switch (MODE) {
		case MODE_RED_MODIFY:
			value = RED_TIME_MODIFY;
			break;
		case MODE_YELLOW_MODIFY:
			value = YELLOW_TIME_MODIFY;
			break;
		case MODE_GREEN_MODIFY:
			value = GREEN_TIME_MODIFY;
			break;
		default:
			break;
	}
    digit_high = (value / 1000) / 10;
    digit_low = (value / 1000) % 10;
    if (status != MODIFY) {
		  switch (index_led) {
		  	case 0:
		  		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		  		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		  		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		  		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		  		display7SEG(led_buffer[0]);
		  		break;
		  	case 1:
		  		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		  		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		  		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		  		display7SEG(led_buffer[1]);
		  		break;
		  	case 2:
		  		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		  		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		  		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		  		display7SEG(led_buffer[2]);
		  		break;
		  	case 3:
		  		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		  		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		  		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		  		display7SEG(led_buffer[3]);
		  		break;
		  	default:
		  		break;
		  	}
		  index_led++;
		  if (index_led > 3) {
			  index_led = 0;
		  }
    }
    if (status == MODIFY) {
        switch (index_led_manual) {
            case 0:
                HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
                HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
                HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
                HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
                display7SEG(digit_high);
                break;
            case 1:
                HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
                HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
                HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
                HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
                display7SEG(digit_low);
                break;
            case 2:
                HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
                HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
                HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
                HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
                if (MODE == MODE_RED_MODIFY) {
                	display7SEG(led_buffer1[0]);
                }
                if (MODE == MODE_YELLOW_MODIFY) {
                	display7SEG(led_buffer1[1]);
                }
                if (MODE == MODE_GREEN_MODIFY) {
                	display7SEG(led_buffer1[2]);
                }
            	break;
            case 3:
                HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
                HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
                HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
                HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
                if (MODE == MODE_RED_MODIFY) {
                	display7SEG(led_buffer1[0]);
                }
                if (MODE == MODE_YELLOW_MODIFY) {
                	display7SEG(led_buffer1[1]);
                }
                if (MODE == MODE_GREEN_MODIFY) {
                	display7SEG(led_buffer1[2]);
                }
            	break;
            default:
                break;
        }
        index_led_manual++;
        if (index_led_manual > 3) {
            index_led_manual = 0;
        }
    }
}

void traffic_light_modify() {
    if (MODE == MODE_RED_MODIFY) {
    	HAL_GPIO_TogglePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin);
    	HAL_GPIO_TogglePin(LED_4_RED_GPIO_Port, LED_4_RED_Pin);
    	HAL_GPIO_TogglePin(LED_7_RED_GPIO_Port, LED_7_RED_Pin);
    	HAL_GPIO_TogglePin(LED_10_RED_GPIO_Port, LED_10_RED_Pin);
    }
    if (MODE == MODE_YELLOW_MODIFY) {
    	HAL_GPIO_TogglePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin);
    	HAL_GPIO_TogglePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin);
    	HAL_GPIO_TogglePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin);
    	HAL_GPIO_TogglePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin);
    }
    if (MODE == MODE_GREEN_MODIFY) {
    	HAL_GPIO_TogglePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin);
    	HAL_GPIO_TogglePin(LED_5_GREEN_GPIO_Port, LED_5_GREEN_Pin);
    	HAL_GPIO_TogglePin(LED_8_GREEN_GPIO_Port, LED_8_GREEN_Pin);
    	HAL_GPIO_TogglePin(LED_11_GREEN_GPIO_Port, LED_11_GREEN_Pin);
    }
}
