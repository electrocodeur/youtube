int ir = 6;
void setup() {
  pinMode(ir, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(ir) == HIGH) {
    /*ICI OU IL FAUT ECRIRE CE QU'IL VA SE PASSER SI ON DÉTECTE QUELQUE CHOSE 
    IL FAUT PEUT ETRE INVERSE LE HIGH-LOW SI LE MODULE DETCTE HIGH ALORS QU'IL N'Y A RIEN */
  }
  if (digitalRead(ir) == LOW) {
    //NE RIEN FAIRE SI AUCUNE DÉTECTION
  }
}
