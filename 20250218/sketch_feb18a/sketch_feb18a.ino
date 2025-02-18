void setup() {
   Serial.begin(9600);
}

void loop() {
 int  LDR=analogRead(A0);
 Serial.println("LDR=");
 Serial.begin(LDR);
 delay(1);

}
