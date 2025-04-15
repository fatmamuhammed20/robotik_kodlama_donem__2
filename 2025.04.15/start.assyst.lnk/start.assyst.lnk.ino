Include "TM1637.h"
const int CLK=6;
const int =7;
TM1637  (CLK,DIO);
void setup() {
 TM1637.init();
 tm1637.set(BRIGHT-TYPICAL); 
 float num=2008;
 tm1637.displayNum(num);
 delay(2000);

}

void loop() {
 tm1637.displayStr("FATMA NAİLE");
 DELAY(1000);

}
