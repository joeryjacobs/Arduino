
#include <LedControl.h>


LedControl lc=LedControl(12,10,11,1);

int delaytime=500;

byte heart[8]={0x18,0x3c,0x7e,0xff,0xff,0xff,0x66,0x00};
byte tree[8]={0x18,0x18,0x3c,0x3c,0x7e,0xff,0x18,0x18};
byte L[8]={0xf0,0x60,0x60,0x60,0x62,0x66,0xfe,0x00};
byte o[8]={0x00,0x00,0x7c,0xc6,0xc6,0xc6,0x7c,0x00};
byte t[8]={0x30,0x30,0xfc,0x30,0x30,0x36,0x1c,0x00};
byte e[8]={0x00,0x00,0x7c,0xc6,0xfe,0xc0,0x7c,0x00};
byte pacman1[8]={0x3c,0x7e,0xdf,0xff,0xf0,0xff,0x7e,0x3c};
byte pacman2[8]={0x3c,0x7e,0xdc,0xf8,0xf8,0xfc,0x7e,0x3c};

void setup() {
  // put your setup code here, to run once:
  lc.shutdown(0,false);
  lc.setIntensity(0,1);
  lc.clearDisplay(0);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  lc.setLed(0,3,0,HIGH);
  delay(delaytime);
  lc.setLed(0,3,0,LOW);
  delay(delaytime);
  lc.setColumn(0,2,B10101010);
  delay(delaytime);
  lc.clearDisplay(0);
  */
  for (int i = 0; i<8; i++){ 
  lc.setColumn(0,i,heart[i]);
  }
  delay(1000);
  for (int i = 0; i<8; i++){ 
  lc.setColumn(0,i,tree[7-i]);
  }
  delay(1000);
  for (int i = 0; i<8; i++){ 
  lc.setColumn(0,i,L[7-i]);
  }
  delay(1000);
  for (int i = 0; i<8; i++){ 
  lc.setColumn(0,i,o[7-i]);
  }
  delay(1000);
  for (int i = 0; i<8; i++){ 
  lc.setColumn(0,i,t[7-i]);
  }
  delay(1000);
  for (int i = 0; i<8; i++){ 
  lc.setColumn(0,i,t[7-i]);
  }
  delay(1000);
  for (int i = 0; i<8; i++){ 
  lc.setColumn(0,i,e[7-i]);
  }
  delay(1000);
  for (int count = 0 ; count < 15; count ++){
  for (int i = 0; i<8; i++){ 
  lc.setColumn(0,i,pacman1[7-i]);
  }
  delay(300);
  for (int i = 0; i<8; i++){ 
  lc.setColumn(0,i,pacman2[7-i]);
  }
  delay(300);
  }
  lc.clearDisplay(0);
  lc.setRow(0,7,0x82);
  delay(500);
  lc.setRow(0,6,0x82);
  lc.setRow(0,7,0xfe);
  delay(500);
  lc.setRow(0,5,0x82);
  lc.setRow(0,6,0xfe);
  lc.setRow(0,7,0xfe);
  delay(500);
  lc.setRow(0,4,0x82);
  lc.setRow(0,5,0xfe);
  lc.setRow(0,6,0xfe);
  lc.setRow(0,7,0x82);
  delay(500);
  lc.setRow(0,3,0x82);
  lc.setRow(0,4,0xfe);
  lc.setRow(0,5,0xfe);
  lc.setRow(0,6,0x82);
  lc.setRow(0,7,0xc0);
  delay(500);
  lc.setRow(0,2,0x82);
  lc.setRow(0,3,0xfe);
  lc.setRow(0,4,0xfe);
  lc.setRow(0,5,0x82);
  lc.setRow(0,6,0xc0);
  lc.setRow(0,7,0xe0);
  delay(500);
  lc.setRow(0,1,0x82);
  lc.setRow(0,2,0xfe);
  lc.setRow(0,3,0xfe);
  lc.setRow(0,4,0x82);
  lc.setRow(0,5,0xc0);
  lc.setRow(0,6,0xe0);
  lc.setRow(0,7,0x00);
  delay(500);
  
  //delay(delaytime);
  //lc.clearDisplay(0);
}


