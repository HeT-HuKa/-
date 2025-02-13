#include<Servo.h>

#define SERVO 46

Servo servo_1; 

void setup(){
  Serial.begin(9600);
  servo_1.attach(SERVO);
}

void loop() {
  servo_1.write(0);
  delay(5000);
  servo_1.write(70);
  delay(5000);
}
