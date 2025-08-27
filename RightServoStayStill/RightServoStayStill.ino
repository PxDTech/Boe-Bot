/* 
Robotics with the BOE Shield – RightServoStayStill 
Generate signal to make the servo stay still for centering. 
*/

#include <Servo.h>                                  // Include servo library

Servo servoRight;                                    // Declare right servo 

void setup() {
  // put your setup code here, to run once:
  servoRight.attach(12);                             // Attach left signal to pin 12
  servoRight.writeMicroseconds(1500);                // 1.5 ms stay still signal 
}

void loop() {
  // put your main code here, to run repeatedly:
}
