/* CICLO FOR 
Per far ripetere un operazione per un numero finito di volte
*/

void setup() {
}

void loop() {
  for (int i = 0; i < 225; i++) {
    analogWrite(11, i);
    delay(5);
  }
}
