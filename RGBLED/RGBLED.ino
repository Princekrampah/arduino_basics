int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
String colorChoice;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Type color: ");

  while(Serial.available() == 0){
    
  }

  colorChoice = Serial.readString();

  
  if(colorChoice == "red"){
    Serial.println(colorChoice);
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    delay(500);
  }

  digitalWrite(pin1, HIGH);

}
