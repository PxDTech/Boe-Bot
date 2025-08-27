/* 
Robotics with the BOE Shield – RightServoCounterClockwise 
Generate a servo full speed counter clockwise signal on digital pin 12.  
*/ 

#include <Servo.h>

Servo servoRight;

void setup() 
{
    servoRight.attach(12);
    servoRight.writeMicroseconds(1700);
}

void loop() {
  // put your main code here, to run repeatedly:

}
