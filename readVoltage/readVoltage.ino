int readPin = A0;
float V2 = 0;
int delayTime = 500;

void setup() {
  pinMode(readPin, INPUT); 
  Serial.begin(9600);

}

void loop() {
  int readVal = analogRead(readPin);
  V2 = (5./1023.)*readVal;
  Serial.println(V2);
  delay(delayTime);

}
