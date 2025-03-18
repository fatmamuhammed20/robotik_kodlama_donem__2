void setup() {
 pinMode(2,OUTPUT);

}

void loop() {
  tone(2,1000,500);
  delay(50);
  noTone(2);

}
