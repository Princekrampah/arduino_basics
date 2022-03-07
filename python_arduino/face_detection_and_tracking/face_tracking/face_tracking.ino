#include <VarSpeedServo.h>


int controlPin = 10;
int servoPos;
int servo_speed;
String input = "";
int i;
int pos;
VarSpeedServo myservo;


void setup() {
  // put your setup code here, to run once:
  myservo.attach(controlPin);
  Serial.begin(9600);
}

void loop() {
  
  while(Serial.available() == 0){
    
  }

  input = Serial.readStringUntil('!');
  servo_speed = input.toInt(); 
  Serial.println(servo_speed);
  
  
  if(input.endsWith("x")){
    Serial.println(servo_speed);
    
    if (servo_speed > 2){
        myservo.write(180, servo_speed, false);
    }
            
    else if (servo_speed < -2){
      myservo.write(0, -servo_speed, false);
    }
            
    else{
      int pos = myservo.read();
      myservo.write(pos, 255, false);       
    } 
  }

  else if(input.endsWith("o")){
      i++;
      if (i >= 100){
        pos = myservo.read();
        myservo.write(90, 20, true);       
 
      }
      else{
        pos = myservo.read();
        myservo.write(pos, 255, false);     
      }
      
            
    }
  
}
