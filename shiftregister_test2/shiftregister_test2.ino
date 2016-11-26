//Pin connected to ST_CP of 74HC595
int latchPin = 8;
//Pin connected to SH_CP of 74HC595
int clockPin = 12;
////Pin connected to DS of 74HC595
int dataPin = 11;
int outputEnablePin = 3;
int timer = 50;

byte leds = B11111111;

long randomnumber;



void setup() {
  //set pins to output so you can control the shift register
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(outputEnablePin, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  }

void loop() {
  // put your main code here, to run repeatedly:
    setBrightness(255);
  
  
    
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11111111);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B01111111);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B10111111);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11011111);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11101111);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11110111);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11111011);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11111101);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11111110);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11111101);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11111011);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11110111);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11101111);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B11011111);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B10111111);
  digitalWrite(latchPin, HIGH);
  delay(timer);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, B01111111);
  digitalWrite(latchPin, HIGH);
  delay(timer);

  
  /*
  for (int i = 0; i <= 255; i++){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, i);
  digitalWrite(latchPin, HIGH);
  delay(100);
  }
  
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 0);
  digitalWrite(latchPin, HIGH);
  delay(1000);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, 255);
  digitalWrite(latchPin, HIGH);
  delay(1000);
  
 /* for (byte b = 255; b > 0; b--)
  {
    setBrightness(b);
    delay(50);  
    Serial.println(b);
  }  
  delay(1000);
  
  for (byte c = 0; c >= 255; c++)
  {
    setBrightness(c);
    delay(50);  
    Serial.println(c);
  }  */

}

void setBrightness(byte brightness)
{
  analogWrite(outputEnablePin, 255-brightness);
}
