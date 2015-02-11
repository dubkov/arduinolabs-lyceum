#include "./myawslib.h"

void setup(){
  pinMode(13,OUTPUT);
}

void loop(){
//  digitalWrite(13,HIGH);
  blink(13,500,500);
}
