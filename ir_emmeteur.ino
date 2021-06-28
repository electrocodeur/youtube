/*
   IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
   An IR LED must be connected to Arduino PWM pin 3.
   Version 0.1 July, 2009
   Copyright 2009 Ken Shirriff
   http://arcfn.com
*/

#include <IRremote.h>

IRsend irsend;

long avant = /*A MODIFIER PAR UN CODE EXEMPLE:*/ 0x00FF629D;
long derriere = /*A MODIFIER PAR UN CODE EXEMPLE:*/ 0x00FFA857;
long droite = /*A MODIFIER PAR UN CODE EXEMPLE:*/ 0x00FFC23D;
long gauche = /*A MODIFIER PAR UN CODE EXEMPLE:*/ 0x00FF22DD;

void setup()
{
}

void loop() {
  if(/*CONDITION A METTRE ICI*/){
    irsend.sendNEC(avant, 32);
    delay(1000);
  }
  if(/*CONDITION A METTRE ICI*/){
    irsend.sendNEC(derriere, 32);
    delay(1000);
  }
  if(/*CONDITION A METTRE ICI*/){
    irsend.sendNEC(droite, 32);
    delay(1000);
  }
  if(/*CONDITION A METTRE ICI*/){
    irsend.sendNEC(gauche, 32);
    delay(1000);
  }
}
