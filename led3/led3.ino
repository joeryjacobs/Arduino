int numberoffblinksred;
int numberoffblinksblue;
int numberoffblinksgreen;
int redled = 13;
int blueled = 12;
int greenled = 11;
int ontime;
int offtime = 200;
String st1=("This is the begin of the ");
String st2=("loop!");
String st3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(greenled, OUTPUT);
  Serial.println("How many red blinks?");
  while(Serial.available()==0){}
  numberoffblinksred=Serial.parseInt();
  
  Serial.println("How many blue blinks?");
  while(Serial.available()==0){}
  numberoffblinksblue=Serial.parseInt();
  
  Serial.println("How many green blinks?");
  while(Serial.available()==0){}
  numberoffblinksgreen=Serial.parseInt();
  
  Serial.println("define the ontime (ms)");
  while(Serial.available()==0){}
  ontime=Serial.parseInt();
  

}

void loop() {
  // put your main code here, to run repeatedly:
    st3=st1+st2;
  Serial.println(st3);
  Serial.println("The red led is blinking");
  for(int j=1; j<=numberoffblinksred; j=j+1){
    Serial.print("    This is blink # ");
    Serial.println(j);
    digitalWrite (redled, HIGH);
    delay(ontime);
    digitalWrite (redled, LOW);
    delay(offtime);
    }
  Serial.println("The blue led is blinking");  
  for(int j=1; j<=numberoffblinksblue; j=j+1){
    Serial.print("    This is blink # ");
    Serial.println(j);
    digitalWrite (blueled, HIGH);
    delay(ontime);
    digitalWrite (blueled, LOW);
    delay(offtime);
    }
  Serial.println("The green led is blinking");
  for(int j=1; j<=numberoffblinksgreen; j=j+1){
    Serial.print("    This is blink # ");
    Serial.println(j);
    digitalWrite (greenled, HIGH);
    delay(ontime);
    digitalWrite (greenled, LOW);
    delay(offtime);   
  }

}
