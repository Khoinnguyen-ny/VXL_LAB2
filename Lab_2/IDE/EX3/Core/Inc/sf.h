/*
 * sf.h
 *
 *  Created on: Oct 2, 2026
 *      Author: Admin
 */

#ifndef INC_SF_H_
#define INC_SF_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);

void timerRun();

#endif /* INC_SF_H_ */
