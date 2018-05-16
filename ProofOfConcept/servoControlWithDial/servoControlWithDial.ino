#include <Servo.h>

Servo servo;
int potentiometerPin = 0;
int val;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potentiometerPin);
  val = map(val, 0, 1023, 5, 160);
  servo.write(val);
  delay(10);
}
