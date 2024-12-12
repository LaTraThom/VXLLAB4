/*
 * traffic_light.c
 *
 *  Created on: Dec 12, 2024
 *      Author: TIEN DUY
 */

#include "traffic_light.h"

void traffic_light(int status_light) {
	switch (status_light) {
	case RED_GREEN:
		HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_4_RED_GPIO_Port, LED_4_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_5_GREEN_GPIO_Port, LED_5_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_7_RED_GPIO_Port, LED_7_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_8_GREEN_GPIO_Port, LED_8_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_10_RED_GPIO_Port, LED_10_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_11_GREEN_GPIO_Port, LED_11_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, SET);
		break;
	case RED_YELLOW:
		HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED_4_RED_GPIO_Port, LED_4_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_5_GREEN_GPIO_Port, LED_5_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_7_RED_GPIO_Port, LED_7_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_8_GREEN_GPIO_Port, LED_8_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED_10_RED_GPIO_Port, LED_10_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_11_GREEN_GPIO_Port, LED_11_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, SET);
		break;
	case GREEN_RED:
		HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_4_RED_GPIO_Port, LED_4_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_5_GREEN_GPIO_Port, LED_5_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_7_RED_GPIO_Port, LED_7_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_8_GREEN_GPIO_Port, LED_8_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_10_RED_GPIO_Port, LED_10_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_11_GREEN_GPIO_Port, LED_11_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, SET);
		break;
	case YELLOW_RED:
		HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_4_RED_GPIO_Port, LED_4_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_5_GREEN_GPIO_Port, LED_5_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED_7_RED_GPIO_Port, LED_7_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_8_GREEN_GPIO_Port, LED_8_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_10_RED_GPIO_Port, LED_10_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_11_GREEN_GPIO_Port, LED_11_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, RESET);
		break;
	case RED_MODIFY:
		HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_4_RED_GPIO_Port, LED_4_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_5_GREEN_GPIO_Port, LED_5_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_7_RED_GPIO_Port, LED_7_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_8_GREEN_GPIO_Port, LED_8_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_10_RED_GPIO_Port, LED_10_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_11_GREEN_GPIO_Port, LED_11_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, SET);
		break;
	case YELLOW_MODIFY:
		HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED_4_RED_GPIO_Port, LED_4_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_5_GREEN_GPIO_Port, LED_5_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED_7_RED_GPIO_Port, LED_7_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_8_GREEN_GPIO_Port, LED_8_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED_10_RED_GPIO_Port, LED_10_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_11_GREEN_GPIO_Port, LED_11_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, RESET);
		break;
	case GREEN_MODIFY:
		HAL_GPIO_WritePin(LED_1_RED_GPIO_Port, LED_1_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_2_GREEN_GPIO_Port, LED_2_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_3_YELLOW_GPIO_Port, LED_3_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_4_RED_GPIO_Port, LED_4_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_5_GREEN_GPIO_Port, LED_5_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_6_YELLOW_GPIO_Port, LED_6_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_7_RED_GPIO_Port, LED_7_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_8_GREEN_GPIO_Port, LED_8_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_9_YELLOW_GPIO_Port, LED_9_YELLOW_Pin, SET);
		HAL_GPIO_WritePin(LED_10_RED_GPIO_Port, LED_10_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_11_GREEN_GPIO_Port, LED_11_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_12_YELLOW_GPIO_Port, LED_12_YELLOW_Pin, SET);
		break;
	default:
		break;
	}
}
