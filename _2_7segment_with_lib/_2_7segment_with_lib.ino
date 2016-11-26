
#include <SevenSeg.h>

SevenSeg disp (6,7,8,9,10,11,12);
const int numOfDigits = 2;
int digitPins[numOfDigits]={4,5};
int timer = 0;

void setup() {
  // put your setup code here, to run once:
  disp.setDigitPins(numOfDigits, digitPins);
  disp.setCommonCathode();
  disp.setDutyCycle(50);
  Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
/* if (timer != 99){
   timer++;
   disp.write(timer);
   Serial.println(timer);
   delay(1000);
   }
 else{
   disp.write("00");
 }  */
 
 
  for(int i = 1; i<100; i++){
  disp.write(i);

  delay(500);
  Serial.println(i);
  // disp.writeDigit(i);
   //disp.write(i);
}

}
