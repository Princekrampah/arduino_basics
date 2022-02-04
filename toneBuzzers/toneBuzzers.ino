int buzzerPin = 9;
int ledPin1 = 10;
int dt1 = 1;
int dt2 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 100; i++){
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin1, HIGH);
    delay(dt1);
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin1, LOW);
    delay(dt1);
  }

  for(int i = 0; i < 100; i++){
    digitalWrite(buzzerPin, HIGH);
    delay(dt2);
    digitalWrite(buzzerPin, LOW);
    delay(dt2);
  }
}
