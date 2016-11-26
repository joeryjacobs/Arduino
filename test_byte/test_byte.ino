

word leds = B00000000;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
 // byte shift = bitSet(leds,3);
  //Serial.print(shift);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i < 15; i++)
  {
     bitSet(leds, i);
     Serial.println(leds,BIN);
     delay(1000);
  }  
  for (int i = 0; i < 15; i++)
  {
     bitClear(leds, i);
     Serial.println(leds,BIN);
     delay(1000);
  }  
}
