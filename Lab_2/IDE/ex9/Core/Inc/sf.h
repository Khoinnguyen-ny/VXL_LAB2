/*
 * sf.h
 *
 *  Created on: Oct 3, 2026
 *      Author: Admin
 */

#ifndef INC_SF_H_
#define INC_SF_H_

extern int timer0_flag;
extern int timer0_counter;

extern int timer1_flag;
extern int timer1_counter;

extern int timer2_flag;
extern int timer2_counter;

extern int timer3_flag;
extern int timer3_counter;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timerRun();

#endif /* INC_SF_H_ */
