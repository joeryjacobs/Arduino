//Pin connected to ST_CP of 74HC595
int latchPin = 8;
//Pin connected to SH_CP of 74HC595
int clockPin = 12;
////Pin connected to DS of 74HC595
int dataPin = 11;

byte leds = B00000000;

long randomnumber;



void setup() {
  //set pins to output so you can control the shift register
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop() {
  
  for (int i = 0; i <= 7; i++)
  {
    bitSet(leds, i);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, leds);
    digitalWrite(latchPin, HIGH);
    delay(50);
    Serial.println(leds, BIN);
    }
  for (int i = 0; i <= 7; i++)
  {
    bitClear(leds, i);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, leds);
    digitalWrite(latchPin, HIGH);
    delay(50);   
    Serial.println(leds, BIN);
    }
    
    delay(2000);
    
    for (int i = 0; i <= 7; i++)
  {
    bitSet(leds, i);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, leds);
    digitalWrite(latchPin, HIGH);
    delay(50);
    Serial.println(leds, BIN);
    }
  for (int i = 0; i <= 7; i++)
  {
    bitClear(leds, i);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, leds);
    digitalWrite(latchPin, HIGH);
    delay(50);   
    Serial.println(leds, BIN);
    }
    
    delay(2000);
  
  for (int i =0; i < 10; i++){
    randomnumber = random(0,255);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, randomnumber);
    digitalWrite(latchPin, HIGH);
    delay(250);
  
  }  
    
    
}
