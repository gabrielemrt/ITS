#include <LiquidCrystal.h>

const int rs = 7;
const int en = 8;
const int d4 = 9;
const int d5 = 10;
const int d6 = 11;
const int d7 = 12;
const int triggerPort = 6;
const int echoPort = 5;
const int buzzer = 13;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  pinMode(triggerPort, OUTPUT);
  pinMode(echoPort, INPUT);
  lcd.print("la distanza è:");
}
int c = 0;
void loop() {
  schermo();
  long distanza = misura();
  long freq = map(distanza, 5, 40, 800, 220);
  if (distanza < 50) {
    tone(buzzer, freq, 100);  // Genera un suono a 1000 Hz
  } else {
    noTone(buzzer);  // Interrompi il suono
  }
}

long misura() {
  digitalWrite(triggerPort, LOW);
  //invia un impulso di 10microsec sul trigger
  digitalWrite(triggerPort, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPort, LOW);
  long durata = pulseIn(echoPort, HIGH);
  long distanza = 0.034 * durata / 2;
  return distanza;
}
long schermo() {
  lcd.setCursor(0, 1);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  long distanza = misura();
  lcd.print(distanza);
  delay(100); 
  return lcd.print(distanza);
}
