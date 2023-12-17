/*CONDIZIONE IF
*/
void setup() {
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
}

void loop() {
  if (digitalRead(7) == HIGH) {  // tra paentesi la codizione, legge sul pin 7 se passa corrente, se passa corrente sul pin 7 vuol dire che il tasto è premuto
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}
