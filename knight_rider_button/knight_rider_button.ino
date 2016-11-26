int ledpin[] = {5,6,7,8,9,10,11,12};
int button = 2;
int switchState = 0;
int count = 0;
int timer = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin[0], OUTPUT);
  pinMode(ledpin[1], OUTPUT);
  pinMode(ledpin[2], OUTPUT);
  pinMode(ledpin[3], OUTPUT);
  pinMode(ledpin[4], OUTPUT);
  pinMode(ledpin[5], OUTPUT);
  pinMode(ledpin[6], OUTPUT);
  pinMode(ledpin[7], OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(ledpin[0], LOW);
  digitalWrite(ledpin[1], LOW);
  digitalWrite(ledpin[2], LOW);
  digitalWrite(ledpin[3], LOW);
  digitalWrite(ledpin[4], LOW);
  digitalWrite(ledpin[5], LOW);
  digitalWrite(ledpin[6], LOW);
  digitalWrite(ledpin[7], LOW);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for (count = 0; count < 8; count++){
    digitalWrite(ledpin[count], HIGH);
    delay(timer);
    digitalWrite(ledpin[count], LOW);
    
    switchState = digitalRead(button);
    if (switchState == HIGH){
        digitalWrite(ledpin[count], HIGH);

        if (ledpin[4] == HIGH){
          digitalWrite(ledpin[4], LOW);
          delay(200);
          digitalWrite(ledpin[4], HIGH);
          delay(200);
          digitalWrite(ledpin[4], LOW);
          delay(200);
          digitalWrite(ledpin[4], HIGH);
          delay(200);
          }
          
        delay(2000);
         break;
  }
  }
    
    
  for (count = 7; count>=0; count--){
    digitalWrite(ledpin[count], HIGH);
    delay(timer);
    digitalWrite(ledpin[count], LOW);
    switchState = digitalRead(button);
    if (switchState == HIGH){
        digitalWrite(ledpin[count], HIGH);
        
        if (ledpin[4] == HIGH){
          digitalWrite(ledpin[4], LOW);
          delay(200);
          digitalWrite(ledpin[4], HIGH);
          delay(200);
          digitalWrite(ledpin[4], LOW);
          delay(200);
          digitalWrite(ledpin[4], HIGH);
          delay(200);
          }
          delay(2000);
        break;
    }
    
    }

}
