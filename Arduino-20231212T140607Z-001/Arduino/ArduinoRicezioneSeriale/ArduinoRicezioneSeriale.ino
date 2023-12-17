#include <SoftwareSerial.h>

#define SOFTRX 10  // per la ricezione - con defien si possono dichiarare delle costanti
#define SOFTTX 11  // per la trasmissione

SoftwareSerial seriale2(SOFTRX, SOFTTX);
void setup() {
  pinMode(SOFTRX, INPUT);
  pinMode(SOFTTX, OUTPUT);

  delay(2000);

  Serial.begin(9600);  // inizializzo la porta seriale
  Serial.println("pronto a ricevere da arduino 1");

  seriale2.begin(9600);
  delay(1000);
}

void loop() {
  if (seriale2.available()) {
    Serial.write(seriale2.read());  //uso write e non println 
  }
}
