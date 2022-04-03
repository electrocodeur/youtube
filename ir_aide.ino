#include <Servo.h>

Servo myservo;
int pos = 0;

int ir = 6;

void setup() {
  pinMode(ir, INPUT);
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(ir) == HIGH) {
    /*ICI OU IL FAUT ECRIRE CE QU'IL VA SE PASSER SI ON DÉTECTE QUELQUE CHOSE
      IL FAUT PEUT ETRE INVERSE LE HIGH-LOW SI LE MODULE DETCTE HIGH ALORS QU'IL N'Y A RIEN */
    for (pos = 0; pos <= 90; pos += 1) { 
      myservo.write(pos);
      delay(15);
    }
    delay(1000);
    for (pos = 90; pos >= 0; pos -= 1) {
      myservo.write(pos);
      delay(15);
    }
  }
  if (digitalRead(ir) == LOW) {
    //NE RIEN FAIRE SI AUCUNE DÉTECTION
  }
}
