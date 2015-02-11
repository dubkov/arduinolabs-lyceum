#include "myawslib.h"
#include "Arduino.h"

void blink(int pinNum, int onTime, int offTime){
  digitalWrite(pinNum,HIGH);
  delay(onTime);
  digitalWrite(pinNum,LOW);
  delay(offTime);
}
