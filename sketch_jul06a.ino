void setup() {
  pinMode(9,OUTPUT);
}

void loop() {
  digitalWrite(9,HIGH); // 1 == HIGH
  delay(2000); // 2 seconds 
  digitalWrite(9,LOW); // 0 == LOW
  delay(2000); // 2 seconds 
}
