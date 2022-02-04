int outputPin = 8;
int userInput = 0;
int ledPin = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(outputPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Input a value below 10: ");
  while(Serial.available() == 0){}

  userInput = Serial.parseInt();

  if(userInput >= 10){
    digitalWrite(outputPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(2000);
    digitalWrite(outputPin, LOW);
    digitalWrite(ledPin, LOW);
  }

}
