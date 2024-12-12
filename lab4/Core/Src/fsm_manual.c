/*
 * fsm_manual.c
 *
 *  Created on: Dec 12, 2024
 *      Author: TIEN DUY
 */

#include "global.h"

void fsm_manual() {
    if (button1_flag == 1) {
    	button1_flag = 0;
        switch (MODE) {
            case MODE_NORMAL:
            	status = MODIFY;
                MODE = MODE_RED_MODIFY;
                traffic_light(RED_MODIFY);
                break;
            case MODE_RED_MODIFY:
                MODE = MODE_YELLOW_MODIFY;
                traffic_light(YELLOW_MODIFY);
                break;
            case MODE_YELLOW_MODIFY:
                MODE = MODE_GREEN_MODIFY;
                traffic_light(GREEN_MODIFY);
                break;
            case MODE_GREEN_MODIFY:
                MODE = MODE_NORMAL;
                status = INIT;
                break;
            default:
            	break;
        }
    }
}
