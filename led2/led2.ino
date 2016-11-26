int numberoffblinksred = 2;
int numberoffblinksblue = 4;
int numberoffblinksgreen = 2;
int redled = 13;
int blueled = 12;
int greenled = 11;
int ontime = 2000;
int offtime = 1000;
String st1=("This is the begin of the ");
String st2=("loop!");
String st3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redled, OUTPUT);
  pinMode(blueled, OUTPUT);
  pinMode(greenled, OUTPUT);

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
