/*
 * login_system.h
 *
 *  Created on: 2023. 3. 21.
 *      Author: CBT
 */

#ifndef SRC_PERIPHERAL_LOGIN_SYSTEM_H_
#define SRC_PERIPHERAL_LOGIN_SYSTEM_H_

//아이디 생성
int createUser();
int loginUser();

int changePWUser();
int changePWloginUser();
int DeletConfirmloginUser();

void ReadInputCreateIDPWFromLCD();
void ReadInputLoginIDPWFromLCD();
void ReadInputManagmentIDPWFromLCD();


#endif /* SRC_PERIPHERAL_LOGIN_SYSTEM_H_ */
