String serialData;
int pin = 10;

void setup() {
  pinMode(pin, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  while(Serial.available() == 0){
    
  }
  
  serialData = Serial.readStringUntil('\n');
  Serial.println(serialData);

  if(serialData == "1"){
    digitalWrite(pin, HIGH);
    Serial.println("LED is on");
  }

  if(serialData == "0"){
    digitalWrite(pin, LOW);
    Serial.println("LED is off");
  }
}
