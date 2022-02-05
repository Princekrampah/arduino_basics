int lightPin = A0;
int lightVal;
int redLight = 2;
int greenLight = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(100);

  if(lightVal <= 160){
    digitalWrite(redLight, HIGH);
  }
  else{
    digitalWrite(redLight, LOW);
  }

  if(lightVal > 161){
    digitalWrite(greenLight, HIGH);
  }
  else{
    digitalWrite(greenLight, LOW);
  }

}
