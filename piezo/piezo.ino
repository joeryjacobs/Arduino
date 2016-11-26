int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0 ;
const int ledpin = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  digitalWrite(ledpin, HIGH);
  while (millis() < 5000){
    sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh){
      sensorHigh = sensorValue;
      }
    if (sensorValue < sensorLow){
     sensorLow = sensorValue;   
      }
    digitalWrite(ledpin, LOW);  
    }

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A0);
  int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 8000);
  tone (8, pitch, 20);
  delay(10);

}
