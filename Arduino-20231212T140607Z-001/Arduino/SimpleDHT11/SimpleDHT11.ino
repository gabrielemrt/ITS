// Sensore DHT11

#include <SimpleDHT.h>
#define DHTPIN 2
SimpleDHT11 dht11;

void setup() {
  Serial.begin(9600);
}

void loop() {
  byte temp = 0;
  byte umid = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(DHTPIN, &temp, &umid, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err=");
    Serial.println(err);
    delay(1000);
    return;
  }
  // Il return in questo contesto termina immediatamente l'esecuzione della funzione loop() in cui si trova, causando il ritorno al punto di partenza della funzione chiamante 
  
  Serial.print("Sample OK: ");
  Serial.print((int)temp);
  Serial.print(" *C, ");
  Serial.print((int)umid);
  Serial.println(" H");
  delay(1500);
}
