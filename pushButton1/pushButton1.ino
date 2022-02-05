int LED = 8;
int readVal = 13;
int readVolt = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(readVal, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVolt = digitalRead(readVal);
  Serial.println(readVolt);
  delay(200);
  digitalWrite(LED, HIGH);

}
