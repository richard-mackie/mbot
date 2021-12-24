/* The makeblock library did not work for the me Arugia board. This sketch does.
 *  
 *  https://github.com/Makeblock-official/Makeblock-Libraries/issues/70
*/

#include "Arduino.h"

#define INA1 48
#define INA2 49
#define PWMA 11

#define INB1 47
#define INB2 46
#define PWMB 10

void Forward_M1(int speed) {
digitalWrite(INA1,HIGH);
digitalWrite(INA2,LOW);
analogWrite(PWMA,constrain(speed,0,255));
}

void Forward_M2(int speed) {
digitalWrite(INB1,HIGH);
digitalWrite(INB2,LOW);
analogWrite(PWMB,constrain(speed,0,255));
}

void Backward_M1(int speed) {
digitalWrite(INA1,LOW);
digitalWrite(INA2,HIGH);
analogWrite(PWMA,constrain(speed,0,255));
}

void Backward_M2(int speed) {
digitalWrite(INB1,LOW);
digitalWrite(INB2,HIGH);
analogWrite(PWMB,constrain(speed,0,255));
}

void Stop_M1(void) {
digitalWrite(INA1,LOW);
digitalWrite(INA2,LOW);
}

void Stop_M2(void) {
digitalWrite(INB1,LOW);
digitalWrite(INB2,LOW);
}

void setup() {
// io init
pinMode(INA1,OUTPUT);
pinMode(INA2,OUTPUT);
pinMode(INB1,OUTPUT);
pinMode(INB2,OUTPUT);
}

void loop() {
Forward_M1(255);
Forward_M2(255);
delay(3000);
Backward_M1(255);
Backward_M2(255);
delay(3000);
Stop_M1();
Stop_M2();
delay(1000);
}
