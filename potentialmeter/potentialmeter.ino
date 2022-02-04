int readPin = A0;
float readVal;
float V2;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V2 = (5.0/1023.0)*readVal;
  Serial.println(V2);
  delay(delayTime);
}
