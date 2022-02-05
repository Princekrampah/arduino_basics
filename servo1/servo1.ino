#include<Servo.h>

int controlPin = 9;
int servoPos;
Servo myservo;


void setup() {
  // put your setup code here, to run once:
  myservo.attach(controlPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Servo angle: ");

  while(Serial.available() == 0){
    
  }

  servoPos = Serial.parseInt();
  myservo.write(servoPos);
}
