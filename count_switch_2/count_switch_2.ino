// telt het aantal keren dat er op de schakelaar wordt gedrukt
// na 4 keer drukken brand de led groen
// na 8 keer drukken brand de led rood
// na 12 keer drukken brand de led blauw ( led blijft blauw tot de teller weer op 4 staat)
// en begint de cyclus opnieuw

int redled = 11;
int blueled = 10;
int greenled = 9;
int button = 2;
int switchState = 0;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode (button, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(button);
  if (switchState == HIGH) {
    
    //analogWrite(redled, 0);
    //analogWrite(greenled, 255); // led brand groen
    //analogWrite(blueled, 0);
    
    count++;
    Serial.println("on");
    Serial.print("number of pushes: ");
    Serial.println(count);
    delay(50);
    }
    if (count ==1){
      analogWrite(redled, 0);
      analogWrite(greenled, 255); // led brand groen
      analogWrite(blueled, 0);
      //delay (2000);
      //count = 0 ;
      }
    else if (count==2){
      analogWrite(redled, 255);
      analogWrite(greenled, 0); // led brand groen
      analogWrite(blueled, 0);
      //count = 0;
      //delay (5000);
    }
    
  else if (count == 3) {
    count = 0;
    analogWrite(redled, 0);
    analogWrite(greenled, 0); 
    analogWrite(blueled, 255);
    delay(1000);
    analogWrite(redled, 0);
    analogWrite(greenled, 0); 
    analogWrite(blueled, 0);
  } 
  delay(50);
}
