/* 
Robotics with the BOE Shield 
Chapter 2, Project 2
Write a program that makes the pin 13 servo turn counterclockwise while the pin
12 servo turns clockwise. After 3 seconds, make both servos turn
counterclockwise for 0.6 seconds. Next, make both turn clockwise for 0.6
seconds. Then, make the pin 13 servo turn clockwise and the pin 12 servo turn
counterclockwise for 3 seconds.
*/ 

#include <Servo.h>

Servo servoLeft;          // Declare left servo signal
Servo servoRight;         // Declare right servo signal

void setup() {
  servoLeft.attach(13);   // Attach left signal to pin 13 
  servoRight.attach(12);  // Attach right signal to pin 12

  servoLeft.writeMicroseconds(1700);  // 1.7 ms -> cc-wise
  servoRight.writeMicroseconds(1300); // 1.3 ms -> clockwise 
  delay(3000);      
  servoLeft.writeMicroseconds(1700);  // 1.7 ms -> cc-wise                  // ..for 3 seconds
  servoRight.writeMicroseconds(1700); // 1.7 ms -> cc-wise 
  delay(600); 
  servoLeft.writeMicroseconds(1300);  // 1.5 ms -> clockwise 
  servoRight.writeMicroseconds(1300); // 1.5 ms -> clockwise 
  delay(600);
  servoLeft.writeMicroseconds(1300);  // 1.5 ms -> clockwise 
  servoRight.writeMicroseconds(1700); // 1.5 ms -> cc-wise
  delay(3000);
}

void loop() {
}
