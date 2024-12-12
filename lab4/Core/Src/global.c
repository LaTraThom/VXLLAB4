/*
 * global.c
 *
 *  Created on: Dec 12, 2024
 *      Author: TIEN DUY
 */

#include "global.h"

int RED_TIME = 5000;
int YELLOW_TIME = 2000;
int GREEN_TIME = 3000;
int status = INIT;

int MODE = MODE_NORMAL;
int RED_TIME_MODIFY = 5000;
int YELLOW_TIME_MODIFY = 2000;
int GREEN_TIME_MODIFY = 3000;

int index_led = 0;
int index_led_manual = 0;

int led_buffer[4] = {1,2,3,4};
int led_buffer1[3] = {2,3,4};

int counter = 3000; //GREEN_TIME
