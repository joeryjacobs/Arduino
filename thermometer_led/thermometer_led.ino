const int sensorPin = A0;
const float basistemp = 23.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(sensorPin);
  Serial.print ("Sensor value: ");
  Serial.print (sensorVal);
  float voltage = (sensorVal/1024.0)*5.0;
  Serial.print (", Volts: ");
  Serial.print (voltage);
  Serial.print (", degrees C: ");
  float temperature = (voltage - .5)*100;
  Serial.println (temperature);
  //delay(2000);
  if (temperature < basistemp) {
      digitalWrite (2, LOW);
      digitalWrite (3, LOW);
      digitalWrite (4, LOW);
  }
  
  else if (temperature >= basistemp + 1 && temperature < basistemp + 4){
      digitalWrite (2, HIGH);
      digitalWrite (3, LOW);
      digitalWrite (4, LOW);
  }
  
  else if (temperature >= basistemp + 4 && temperature < basistemp + 6) {
      digitalWrite (2, HIGH);
      digitalWrite (3, HIGH);
      digitalWrite (4, LOW);
  }
  
  else if (temperature > basistemp + 6) {
      digitalWrite (2, HIGH);
      digitalWrite (3, HIGH);
      digitalWrite (4, HIGH);
  }
  delay(100);
}
