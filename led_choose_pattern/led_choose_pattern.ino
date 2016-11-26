int ledpin[] = {5, 6, 7, 8, 9, 10, 11, 12, 13};
int button = 2;
int switchState = 0;
int readoutput = 0;
int count ;
int timer = 100;
int keuze ;
int count2;
long randomnumber;

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
  pinMode(ledpin[8], OUTPUT);
  pinMode(button, INPUT);
  
  digitalWrite(ledpin[0], LOW);
  digitalWrite(ledpin[1], LOW);
  digitalWrite(ledpin[2], LOW);
  digitalWrite(ledpin[3], LOW);
  digitalWrite(ledpin[4], LOW);
  digitalWrite(ledpin[5], LOW);
  digitalWrite(ledpin[6], LOW);
  digitalWrite(ledpin[7], LOW);
  digitalWrite(ledpin[8], LOW);
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("*****************************");
  Serial.println("* 1. Van buiten naar binnen *");
  Serial.println("* 2. Van binnen naar buiten *");
  Serial.println("* 3. Van links naar rechts  *");
  Serial.println("* 4. Van rechts naar links  *");
  Serial.println("*****************************");
  Serial.println(" ");
  
  while(Serial.available()==0){}
  keuze=Serial.parseInt();
  
  switch (keuze){
    case 1: // van buiten naar binnen
    
    for (count2 = 0 ;count2 < 10 ; count2 ++){   
      for (count = 0 ; count <= 4 ; count ++) {
      //Serial.println(count);
      //Serial.println(8 - count);
      digitalWrite(ledpin[count], HIGH);
      digitalWrite(ledpin[8 - count], HIGH);
      delay(timer);
      digitalWrite(ledpin[count], LOW);
      digitalWrite(ledpin[8 - count], LOW);
      delay(timer);
      }
    }
    break;
    case 2: // van binnen naar buiten
    for (count = 4 ; count >= 0 ; count --) {
    //Serial.println(count);
    //Serial.println(8 - count);
    digitalWrite(ledpin[count], HIGH);
    digitalWrite(ledpin[8 - count], HIGH);
    delay(timer);
    digitalWrite(ledpin[count], LOW);
    digitalWrite(ledpin[8 - count], LOW);
    delay(timer);
    }
    break;
    case 3: // van links naar rechts
    for (count = 0 ; count < 9 ; count ++){
    digitalWrite(ledpin[count], HIGH);
    delay (timer);
    digitalWrite(ledpin[count], LOW);
    delay (timer);
    }
    break;
    case 4: // van rechts naar links
    for (count = 8 ; count >=0 ; count --){
    digitalWrite(ledpin[count], HIGH);
    delay (timer);
    digitalWrite(ledpin[count], LOW);
    delay (timer);
    }
    break;
    case 5: 
    for (count2 = 0 ;count2 < 10 ; count2 ++){
    for (count = 8 ; count >=0 ; count --){
    digitalWrite(ledpin[count], HIGH);
    digitalWrite(ledpin[count - 1], HIGH);
    delay (timer);
    digitalWrite(ledpin[count], LOW);
    digitalWrite(ledpin[count - 1], LOW);
    delay (timer);
    }
    }
    break;
    case 6: // 1 voor 1 aan, dan 1 voor 1 uit
    for (count2 = 0 ;count2 < 10 ; count2 ++){
    for (count = 0; count < 9; count ++){
      digitalWrite(ledpin[count], HIGH);
      delay(timer);
      }
    for (count = 8; count >= 0; count --){
      digitalWrite(ledpin[count], LOW);
      delay(timer);
    }  
     }
     break;
    case 7: //random
    for (count2=0 ; count2 < 200; count2++){
    randomnumber = random(0,9);
    Serial.println(randomnumber);
    digitalWrite(ledpin[randomnumber], HIGH);
    delay(timer);
    digitalWrite(ledpin[randomnumber], LOW);
    delay(timer);
    }
    break;
    delay(1000);
    Serial.println(" ");
    }
    
/*  
  for (count = 0 ; count <= 4 ; count ++) {
    Serial.println(count);
    Serial.println(8 - count);
    digitalWrite(ledpin[count], HIGH);
    digitalWrite(ledpin[8 - count], HIGH);
    delay(timer);
    digitalWrite(ledpin[count], LOW);
    digitalWrite(ledpin[8 - count], LOW);
    delay(timer);
  }
  for (count = 3 ; count >= 1 ; count --) {
    Serial.println(count);
    Serial.println(8 - count);
    digitalWrite(ledpin[count], HIGH);
    digitalWrite(ledpin[8 - count], HIGH);
    delay(timer);
    digitalWrite(ledpin[count], LOW);
    digitalWrite(ledpin[8 - count], LOW);
    delay(timer);
  }
  for (count = 0 ; count < 9 ; count ++){
    digitalWrite(ledpin[count], HIGH);
    delay (timer);
    digitalWrite(ledpin[count], LOW);
    delay (timer);
    }
  for (count = 7 ; count >=0 ; count --){
    digitalWrite(ledpin[count], HIGH);
    delay (timer);
    digitalWrite(ledpin[count], LOW);
    delay (timer);
  }  
*/
}


