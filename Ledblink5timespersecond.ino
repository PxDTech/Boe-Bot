/* 
Chapter 2 Exercise 1
Write a loop function that makes an LED blink 5 times per second, with an on 
time that’s 1/3rd of its off time. 
*/ 

void setup() {
// put your setup code here, to run once:
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(50);
  digitalWrite(13, LOW);
  delay(150);
}
