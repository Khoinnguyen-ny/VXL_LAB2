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

void setTimer0(int duration);

void timerRun();

#endif /* INC_SF_H_ */
