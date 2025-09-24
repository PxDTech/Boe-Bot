/* 
Robotics with the BOE Shield 
Chapter 2, Exercise 3
Write a setup function that makes one servo turn the same direction for 3 
seconds.  The other servo should turn the opposite direction for the first 1.5 
seconds and the same direction for the second 1.5 seconds.  Then, make both 
servos stop.
*/ 

#include <Servo.h>

Servo servoLeft;          // Declare left servo signal
Servo servoRight;         // Declare right servo signal

void setup() {
  servoLeft.attach(13);   // Attach left signal to pin 13 
  servoRight.attach(12);  // Attach right signal to pin 12

  servoLeft.writeMicroseconds(1700);  // 1.7 ms -> cc-wise
  servoRight.writeMicroseconds(1300); // 1.3 ms -> clockwise 
  delay(1500);                        // ..for 1.5 seconds
  servoRight.writeMicroseconds(1700); // 1.7 ms -> cc-wise 
  delay(1500); 
  servoLeft.writeMicroseconds(1500);  // 1.5 ms -> stop 
  servoRight.writeMicroseconds(1500); // 1.5 ms -> stop 
}

void loop() {
}
