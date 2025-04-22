
int trig=13;
int echo=12;
long mesafe;
long sure;
void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig,LOW);
  sure=pulseln(echo,HIGH);
  mesafe=(sure / 2);
  Serial.println(mesafe);  
}
