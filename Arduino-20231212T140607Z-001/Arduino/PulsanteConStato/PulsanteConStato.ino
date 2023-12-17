/* PULSANTE CON STATO
quei pusanti che premi una volta e poi rimangono accesi
*/

int stato = LOW;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
}

void loop() {
  //costruiamo prima un bottone che cambia stato nel oomento in cui viene premuto
  if (digitalRead(7) == HIGH) {
    stato = !stato;
    delay(200);
  }

  if (stato == HIGH) {
    digitalWrite(13, HIGH);
  } else{
    digitalWrite(13, LOW);
  }
}
