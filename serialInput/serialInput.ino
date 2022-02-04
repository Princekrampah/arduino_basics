String msg = "Input a number of times to blink LED: ";
int inputValue;
int ledPin = 10;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  Serial.println(msg);

  while(Serial.available() == 0){
    
  }

  inputValue = Serial.parseInt();
  Serial.println(inputValue);

  for(int i = 0; i < inputValue; i++){
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  

}
