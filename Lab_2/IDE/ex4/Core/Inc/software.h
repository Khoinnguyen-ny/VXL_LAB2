/*
 * software.h
 *
 *  Created on: Oct 2, 2026
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_H_
#define INC_SOFTWARE_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duaration);
void timerRun(void);

#endif /* INC_SOFTWARE_H_ */
