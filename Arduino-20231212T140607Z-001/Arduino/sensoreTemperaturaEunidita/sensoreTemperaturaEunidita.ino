/* SENSORE DI UMIDITÀ

*/

#include <SimpleDHT.h>
SimpleDHT11 dht11;
int pin = 2

void setup() {
  Serial.begin(9600);
}

void loop() {
  byte t = 0;
  byte u = 0;
  int err = SimpleDHTErrSuccess;  //Variabile che va a rilevare lo sttato della lettura e ci dice se ci sono stati problemi
  if ((err = dht11.read(pin, &t, &u, NULL)) != SimpleDHTErrSuccess) {
    //diciamo all'if che se la lettura che sta svolgendo in questo moemnto arduino dovesse essere diversa dalla lettura del SimpleDHTErrSuccess questo vorrebbe dire che c'e stato un errore e quindi possiamo
    Serial.println("Errore lettura");
    delay(1000);
    return;
  }else{
  Serial.print("Temperatura: ");
  Serial.print((int)t);  // Per leggere t passiamo il suo valore che abbiamo solo in byte ad un intero
  Serial.print("° C & umidita': ");
  Serial.print((int)u);
  Serial.print("%");
  delay(2000);
  }
}
