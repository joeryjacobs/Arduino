int ontime = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
 // Serial.println("Led 1");
  delay(ontime);
  
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
 // Serial.println("Led 2");
  delay(ontime);
  
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
//  Serial.println("Led 3");
  delay(ontime);
  
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
 // Serial.println("Led 2");
  delay(ontime);
  
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
//  Serial.println("Led 1");
  delay(ontime);
  
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
//  Serial.println("Led 1");
  delay(ontime);
//  Serial.println();

  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
//  Serial.println("Led 1");
  delay(ontime);
}
