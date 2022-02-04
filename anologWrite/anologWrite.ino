int pin1 = 3;
int brightness = 230;

void setup() {
  pinMode(pin1, OUTPUT);
}

void loop() {
 analogWrite(pin1, brightness);
}
