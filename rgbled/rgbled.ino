int redled = 11;
int blueled = 10;
int greenled = 9;
int valuered;
int valuegreen;
int valueblue;

void setup() {
  // put your setup code here, to run once:
  pinMode(redled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(greenled, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Waarde voor rood:"); // definieer de waarde voor rood
  while(Serial.available()==0){}
  valuered=Serial.parseInt();
  
  Serial.println("Waarde voor groen:"); // definieer de waarde voor groen
  while(Serial.available()==0){}
  valuegreen=Serial.parseInt();
  
  Serial.println("Waarde voor blauw:"); // definieer de waarde voor blauw
  while(Serial.available()==0){}
  valueblue=Serial.parseInt();
  
  analogWrite(redled, valuered);
  analogWrite(greenled,valuegreen);
  analogWrite(blueled,valueblue);

}
