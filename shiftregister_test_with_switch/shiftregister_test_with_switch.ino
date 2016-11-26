//Pin connected to ST_CP of 74HC595
int latchPin = 8;
//Pin connected to SH_CP of 74HC595
int clockPin = 12;
////Pin connected to DS of 74HC595
int dataPin = 11;
int outputEnablePin = 3;
int timer = 100;
int timerrandom;
int program;
int button = 2;
int switchState;
int count = 0;

byte leds = 0;
byte data;
byte dataArray[9];

long randomnumber;
long randomnumber2;


void setup() {
  //set pins to output so you can control the shift register
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(outputEnablePin, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  
  dataArray[0] = B00000000;
  dataArray[1] = B10000001;
  dataArray[2] = B11000011;
  dataArray[3] = B11100111;
  dataArray[4] = B11111111;
  dataArray[5] = B11100111;
  dataArray[6] = B11000011;
  dataArray[7] = B10000001;
  dataArray[8] = B00000000;
  //dataArray[9] = b11111111;
  
  }

void loop() {
  leds = 0;
  switchState = digitalRead(button);   
 //program = random (1,6);
  timerrandom = random (50,300);
  if (timerrandom >= 250) timer = 250;
  else if (timerrandom < 250 && timerrandom >= 200) timer = 200;
  else if (timerrandom < 200 && timerrandom >= 150) timer = 150;
  else if (timerrandom < 150 && timerrandom >= 100) timer = 100;
  else if (timerrandom < 100 && timerrandom >= 50) timer = 50;
  else (timer = timerrandom);
  //Serial.println(program);
  Serial.println(timerrandom);
  Serial.println(timer);

 // if (switchState == HIGH){
 //     count ++;
//      delay(50);
 // }
 
  Serial.println(count);    
  
  switch (count){
    case 1:
    
    for (int k = 0; k < 5; k++){
      for (int j = 0; j < 9; j++){
        data = dataArray[j];
        digitalWrite(latchPin, LOW);
        shiftOut(dataPin,clockPin, LSBFIRST,data);
        digitalWrite(latchPin, HIGH);
        delay(timer);
        }
        
          }
        // if (switchState == HIGH){
          //count ++;
         //delay(50);
        // break;
        
        //}
        break;
        
    case 2:
      for (int l = 0; l < 5; l++){
      leds = 0;
      updateShiftRegister();
      delay(timer);
      for(int i = 0; i<8; i++)
      {
      bitSet(leds,i);
      updateShiftRegister();
      delay(timer);
      }
      }
      //if (switchState == HIGH){
         //count ++;
       //   delay(50);
       //   break;
   // }
      
      break;
      
  case 3:
      for (int l = 0; l < 5; l++){
      leds = 0;
      updateShiftRegisterLSB();
      delay(timer);
      for(int i = 0; i<8; i++)
      {
      bitSet(leds,i);
      updateShiftRegisterLSB();
      delay(timer);
      }
      }
     // if (switchState == HIGH){
          //count ++;
        //  delay(50);
          //break;
      //}
      
      break;   
      
  case 4:
      for (int l = 0; l < 5; l++){
      leds = 0;
      updateShiftRegister();
      delay(timer);
      for(int i = 0; i<8; i++)
      {
      bitSet(leds,i);
      updateShiftRegister();
      delay(timer);
      }
      leds = 0;
      updateShiftRegisterLSB();
      delay(timer);
      for(int i = 0; i<8; i++)
      {
      bitSet(leds,i);
      updateShiftRegisterLSB();
      delay(timer);
      }
      }
      //if (switchState == HIGH){
          //count ++;
        //  delay(50);
       //   break;
   //  }
     
     break; 
      
  case 5:
    for (int i =0; i < 100; i++){
    randomnumber2 = random(0,255);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, randomnumber2);
    digitalWrite(latchPin, HIGH);
    delay(timer);
    }
    //if (switchState == HIGH){
          //count ++;
        //  delay(50);
        //  break;
   // }
    
    break;
    default:
    leds = 0;
    break;
  }
  count++;
  if (count > 5){
    count = 1;
    }
  
  

}
void updateShiftRegister()
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin, MSBFIRST,leds);
  digitalWrite(latchPin, HIGH);  
}

void updateShiftRegisterLSB()
{
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin, LSBFIRST,leds);
  digitalWrite(latchPin, HIGH);  
}
