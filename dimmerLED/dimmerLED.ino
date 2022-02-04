
int readPin = A0;
int outPin = 9;
float readVal;
float V = 0;
int delayTime = 500;
float inputV = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(outPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V = (255/1023.0)*readVal;

  analogWrite(outPin, V);

  Serial.print("Volts : ");
  Serial.println(V);
  delay(delayTime);

}
