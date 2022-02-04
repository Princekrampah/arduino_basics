
//Variables
int greenPin = 13;
int redPin = 9;
int yelloPin = 8;
int dips = 300;
int daps = 600;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  digitalWrite(greenPin, HIGH);
  delay(dips);
  digitalWrite(greenPin, LOW);
  delay(dips);
  digitalWrite(greenPin, HIGH);
  delay(dips);
  digitalWrite(greenPin, LOW);
  delay(dips);
  digitalWrite(greenPin, HIGH);
  delay(dips);
  digitalWrite(greenPin, LOW);

  digitalWrite(redPin, HIGH);
  delay(daps);
  digitalWrite(redPin, LOW);
  delay(daps);
  digitalWrite(redPin, HIGH);
  delay(daps);
  digitalWrite(redPin, LOW);
  delay(daps);
  digitalWrite(redPin, HIGH);
  delay(daps);
  digitalWrite(redPin, LOW);

  digitalWrite(yelloPin, HIGH);
  delay(dips);
  digitalWrite(yelloPin, LOW);
  delay(dips);
  digitalWrite(yelloPin, HIGH);
  delay(dips);
  digitalWrite(yelloPin, LOW);
  delay(dips);
  digitalWrite(yelloPin, HIGH);
  delay(dips);
  digitalWrite(yelloPin, LOW);


}
