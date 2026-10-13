/*
 * software.c
 *
 *  Created on: Oct 1, 2026
 *      Author: Admin
 */

#ifndef SRC_SOFTWARE_C_
#define SRC_SOFTWARE_C_

#include "software.h"

// Định nghĩa biến đếm và biến cờ
int timer1_counter = 0;
int timer1_flag = 0;

int timer2_counter = 0;
int timer2_flag = 0;

// Hàm thiết lập thời gian đếm
void setTimer1(int duration) {
    // duration là số chu kỳ ngắt.
    // Ví dụ setTimer1(50) với ngắt 10ms -> thời gian chờ là 500ms
    timer1_counter = duration;
    timer1_flag = 0;
}

void setTimer2(int duration) {
    timer2_counter = duration;
    timer2_flag = 0;
}

// Hàm này sẽ được gọi liên tục bên trong ngắt Timer
void timerRun(void) {
    if (timer1_counter >= 0) {
        timer1_counter--;
        if (timer1_counter <= 0) {
            timer1_flag = 1; // Bật cờ lên 1 khi đếm ngược về 0
        }
    }
    if (timer2_counter >= 0) {
            timer2_counter--;
            if (timer2_counter <= 0) {
                timer2_flag = 1; // Bật cờ lên 1 khi đếm ngược về 0
            }
        }
}


#endif /* SRC_SOFTWARE_C_ */
