#include<Servo.h>

int controlPin = 10;
int servoPos;
Servo myservo;


void setup() {
  // put your setup code here, to run once:
  myservo.attach(controlPin);
  Serial.begin(9600);
}

void loop() {
  
  while(Serial.available() == 0){
    
  }

  servoPos = Serial.parseInt();
  Serial.println(servoPos);
  myservo.write(servoPos);
}
