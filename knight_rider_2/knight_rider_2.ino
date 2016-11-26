int ledpin[] = {5,6,7,8,9,10,11,12};
int count = 0;
int timer = 500;

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
  for (count = 0; count<8; count++){
    digitalWrite(ledpin[count], HIGH);
   // Serial.println(count);
    delay(timer);
    digitalWrite(ledpin[count], LOW);
    //if (count == 3){
     // break;
    // }
   // Serial.print(count +1);
    //delay(timer);
   // digitalWrite(ledpin[count], LOW);
   // delay(timer*2);
    }
  for (count = 7; count>=0; count--){
    digitalWrite(ledpin[count], HIGH);
    delay(timer);
    digitalWrite(ledpin[count], LOW);
   // delay(timer);
    //digitalWrite(ledpin[count], LOW);
    //delay(timer*2);
    }

}
