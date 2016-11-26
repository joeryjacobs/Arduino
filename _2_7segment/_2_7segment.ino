const int leda = 6;
const int ledb = 7;
const int ledc = 8;
const int ledd = 9;
const int lede = 10;
const int ledf = 11;
const int ledg = 12;
const int digit1 = 5;
const int digit2 = 4;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode (leda, OUTPUT);
  pinMode (ledb, OUTPUT);
  pinMode (ledc, OUTPUT);
  pinMode (ledd, OUTPUT);
  pinMode (lede, OUTPUT);
  pinMode (ledf, OUTPUT);
  pinMode (ledg, OUTPUT);
  pinMode (digit1, OUTPUT);
  pinMode (digit2, OUTPUT);
  
  for(int i=6; i<13; i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    delay(500);
    }
    
  for(int i=6; i<13; i++)
  {
    digitalWrite(i,LOW);
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, LOW);
    delay(500);
    }  
 /* for(int i=6; i<13; i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, LOW);
    delay(500);
    }  
    
  for(int i=6; i<13; i++)
  {
    digitalWrite(i,LOW);
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, LOW);
    delay(500);
  
 }*/
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(digit1, LOW);
  digitalWrite(digit2, HIGH);
  
  // write 0
  digitalWrite(leda, HIGH);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, HIGH);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, LOW);
  delay(1000);
  
  // write 1
  digitalWrite(leda, LOW);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, LOW);
  digitalWrite(lede, LOW);
  digitalWrite(ledf, LOW);
  digitalWrite(ledg, LOW);
  delay (1000);
  
  // write 2
  digitalWrite(leda, HIGH);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, LOW);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, HIGH);
  digitalWrite(ledf, LOW);
  digitalWrite(ledg, HIGH);
  delay (1000);
  
  // write 3
  digitalWrite(leda, HIGH);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, LOW);
  digitalWrite(ledf, LOW);
  digitalWrite(ledg, HIGH);
  delay (1000);
  
  // write 4
  digitalWrite(leda, LOW);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, LOW);
  digitalWrite(lede, LOW);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, HIGH);
  delay(1000);
  
  // write 5
  digitalWrite(leda, HIGH);
  digitalWrite(ledb, LOW);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, LOW);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, HIGH);
  delay(1000);
  
  // write 6
  digitalWrite(leda, HIGH);
  digitalWrite(ledb, LOW);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, HIGH);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, HIGH);
  delay(1000);
  
  // write 7
  digitalWrite(leda, HIGH);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, LOW);
  digitalWrite(lede, LOW);
  digitalWrite(ledf, LOW);
  digitalWrite(ledg, LOW);
  delay(1000);
  
  // write 8
  digitalWrite(leda, HIGH);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, HIGH);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, HIGH);
  delay(1000);
  
  // write 9
  digitalWrite(leda, HIGH);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, LOW);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, HIGH);
  delay(1000);
  
  digitalWrite(digit1, HIGH);
  digitalWrite(digit2, LOW);
  
  // write 1
  digitalWrite(leda, LOW);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, LOW);
  digitalWrite(lede, LOW);
  digitalWrite(ledf, LOW);
  digitalWrite(ledg, LOW);
  //delay (1000);
  
  digitalWrite(digit1, LOW);
  digitalWrite(digit2, LOW);
  
  // write 0
  digitalWrite(leda, HIGH);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, HIGH);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, LOW);
  delay(1000);
  */
  // write 1
  digitalWrite(leda, LOW);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, LOW);
  digitalWrite(lede, LOW);
  digitalWrite(ledf, LOW);
  digitalWrite(ledg, LOW);
  digitalWrite(digit1, HIGH);
  digitalWrite(digit2, LOW);
  delay (1);
  
  // write 0
  digitalWrite(leda, HIGH);
  digitalWrite(ledb, HIGH);
  digitalWrite(ledc, HIGH);
  digitalWrite(ledd, HIGH);
  digitalWrite(lede, HIGH);
  digitalWrite(ledf, HIGH);
  digitalWrite(ledg, HIGH);
  digitalWrite(digit1, LOW);
  digitalWrite(digit2, HIGH);
  delay(1);

  
 /* for (int i=0; i<5000; i++){                     //   The for loop, for running the program 500 times.
    digitalWrite(leda, HIGH);
    digitalWrite(ledb, HIGH);
    digitalWrite(ledc, LOW);
    digitalWrite(ledd, HIGH);
    digitalWrite(lede, HIGH);
    digitalWrite(ledf, LOW);
    digitalWrite(ledg, HIGH);
    digitalWrite(digit1, HIGH);
    digitalWrite(digit2, LOW);
    delay(0.5);  

    digitalWrite(leda, HIGH);
    digitalWrite(ledb, HIGH);
    digitalWrite(ledc, HIGH);
    digitalWrite(ledd, HIGH);
    digitalWrite(lede, HIGH);
    digitalWrite(ledf, HIGH);
    digitalWrite(ledg, LOW);    //          Writes 20 to the display.
    digitalWrite(digit1, LOW);
    digitalWrite(digit2, HIGH);     
    delay(0.5);
   
  }
  
  count ++;
  
  Serial.println(count);
  
  */
}
