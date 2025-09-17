/* 
Robotics with the BOE Shield 
Chapter 2, Exercise 2
Write a setup function that makes the pin 13 servo turn full speed clockwise for 
1.2 seconds, while the pin 12 servo stays still.  After that, set both servos to stop.
*/ 

#include <Servo.h>

Servo servoLeft;          // Declare left servo signal
Servo servoRight;         // Declare right servo signal

void setup() {
  servoLeft.attach(13);   // Attach left signal to pin 13 
  servoRight.attach(12);  // Attach right signal to pin 12

  servoLeft.writeMicroseconds(1300);  // 1.3 ms -> clockwise
  servoRight.writeMicroseconds(1500); // Stay still
  delay(1200);                        // .. for 3 seconds
  servoLeft.writeMicroseconds(1500);  // Stay still 
  servoRight.writeMicroseconds(1500); // Stay still 
}

void loop() {
}
