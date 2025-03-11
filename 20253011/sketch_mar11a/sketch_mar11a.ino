int red=6;
int gren=5;
int blue=3;
void setup() {
  
pinMode(red,OUTPUT);
pinMode(gren,OUTPUT);
pinMode(blue,OUTPUT);

}

void loop() {
 for(int i=0;i<=255;i++)
 {analogWrite(red,i);
  analogWrite(gren,250);
  analogWrite(blue,250);
   delay(100);
 }
for(int i=0;i<=255;i++)
{
  analogWrite(red,250);
  analogWrite(gren,i);
  analogWrite(blue,250);
  delay(100);
}
for(int i=0;i<=255;i++)
{
  analogWrite(red,250);
  analogWrite(gren,250);
  analogWrite(blue,i);
  delay(100);
  }
  

}
