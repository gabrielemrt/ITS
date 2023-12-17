//FIDATEVI FUNZIONA 
//OTTIMA OTTIMIZZAZIONE
//ORDINE ORDINATO

#include <LiquidCrystal.h>

const int rs = 7;
const int en = 8;
const int d4 = 9;
const int d5 = 10;
const int d6 = 11;
const int d7 = 12;
const int triggerPort = 6;
const int echoPort = 5;


LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {

 lcd.begin(16, 2);
 pinMode(triggerPort, OUTPUT);
 pinMode(echoPort, INPUT);
 Serial.begin(9600);

}

void loop() {

  Schermo(dist());

}

int dist() {

  digitalWrite(triggerPort, LOW);
  digitalWrite(triggerPort, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPort, LOW);

  long durata = pulseIn(echoPort, HIGH);
  long distanza = 0.034*durata/2;

  delay(1000);

  return distanza;

}

void Schermo(int a) {


  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print(a);
  lcd.print(" cm");
  delay(2);

}

