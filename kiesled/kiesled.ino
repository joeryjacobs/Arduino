
int redled = 13;
int blueled = 12;
int greenled = 11;
int ontime;
int offtime=200;
int welkekleur;
int aantalblinks;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(greenled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Welke led wil je laten branden?");
  Serial.println("rood kies 1");
  Serial.println("blauw kies 2");
  Serial.println("groen kies 3");
  while(Serial.available()==0){}
  welkekleur=Serial.parseInt();
  
  
  if (welkekleur==1){
    Serial.println("Hoeveel keer wil je de led laten blinken?");
    while(Serial.available()==0){}
    aantalblinks=Serial.parseInt();
    Serial.println("bepaal de aan tijd in ms:");
    while(Serial.available()==0){}
    ontime=Serial.parseInt();
    for(int j=1; j<=aantalblinks; j=j+1){
    digitalWrite(redled, HIGH);
    delay(ontime);
    digitalWrite(redled, LOW);
    delay(offtime);
    }
    }
  if (welkekleur==2){
    Serial.println("Hoeveel keer wil je de led laten blinken?");
    while(Serial.available()==0){}
    aantalblinks=Serial.parseInt();
    Serial.println("bepaal de aan tijd in ms:");
    while(Serial.available()==0){}
    ontime=Serial.parseInt();
    for(int j=1; j<=aantalblinks; j=j+1){
    digitalWrite(blueled, HIGH);
    delay(ontime);
    digitalWrite(blueled, LOW);
    delay(offtime);
    }
    }
  if (welkekleur==3){
    Serial.println("Hoeveel keer wil je de led laten blinken?");
    while(Serial.available()==0){}
    aantalblinks=Serial.parseInt();
    Serial.println("bepaal de aan tijd in ms:");
    while(Serial.available()==0){}
    ontime=Serial.parseInt();
    for(int j=1; j<=aantalblinks; j=j+1){
    digitalWrite(greenled, HIGH);
    delay(ontime);
    digitalWrite(greenled, LOW);
    delay(offtime);
    }
    }
    
  if(welkekleur!=1 && welkekleur!=2 && welkekleur!=3){
    Serial.println(" ");
    Serial.println("kies 1,2 of 3");
    Serial.println(" ");
    //while(Serial.available()==0){}
    //welkekleur=Serial.parseInt();
}
}
