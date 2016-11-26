int redled = 11;
int blueled = 10;
int greenled = 9;
int button = 2;
int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode (button, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(button);
  if (switchState == LOW) {
    
    analogWrite(redled, 0);
    analogWrite(greenled, 255); // led brand groen
    analogWrite(blueled, 0);
   }
  else {
   
    analogWrite(redled, 255); // led brand rood
    analogWrite(greenled, 0); 
    analogWrite(blueled, 0);
    delay(250);
    analogWrite(redled, 0); // led brand rood
    analogWrite(greenled, 0); 
    analogWrite(blueled, 255);//led brand blauw
    delay(250);
  } 
}
