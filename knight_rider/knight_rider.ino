/*
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;
int led6 = 7;
int led7 = 6;
int led8 = 5;
int led;
*/
int shiftdelay = 50;
//int pin_num;

void setup() {
  // put your setup code here, to run once:
 /* pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  */
  
  for (int pin = 5; pin < 13; pin ++){
    pinMode(pin, OUTPUT);
    }
  
 
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int pin = 5 ; pin < 13; pin ++){
    digitalWrite(pin, HIGH);
    delay (shiftdelay);
    digitalWrite(pin, LOW);  
    }
  for(int pin = 12; pin >=5; pin --){
    digitalWrite(pin, HIGH);
    delay (shiftdelay);
    digitalWrite(pin, LOW); 
   
  }

}
