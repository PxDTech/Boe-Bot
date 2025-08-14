/* 
Robotics with the BOE Shield - HighLowLed 
Turn LED connected to digital pin 13 on/off once every second. 
*/ 

void setup() {
// put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  delay(250);
}
