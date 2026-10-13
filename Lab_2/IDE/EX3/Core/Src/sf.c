/*
 * software.c
 *
 *  Created on: Oct 2, 2026
 *      Author: Admin
 */

#include "sf.h"

int timer1_flag=0;
int timer1_counter=0;

int timer2_flag=0;
int timer2_counter=0;

void setTimer1(int duration) {
    // duration là số chu kỳ ngắt.
    // Ví dụ setTimer1(50) với ngắt 10ms -> thời gian chờ là 500ms
    timer1_counter = duration;
    timer1_flag = 0;
}

void setTimer2(int duration) {
    // duration là số chu kỳ ngắt.
    // Ví dụ setTimer1(50) với ngắt 10ms -> thời gian chờ là 500ms
    timer2_counter = duration;
    timer2_flag = 0;
}

void timerRun(void) {
    if (timer1_counter > 0) {
        timer1_counter--;
        if (timer1_counter <= 0) {
            timer1_flag = 1; // Bật cờ lên 1 khi đếm ngược về 0
        }
    }
    if (timer2_counter > 0) {
            timer2_counter--;
            if (timer2_counter <= 0) {
                timer2_flag = 1; // Bật cờ lên 1 khi đếm ngược về 0
            }
        }
}
