#include <LiquidCrystal.h>

const int rs = 8;
const int en = 7;
const int d4 = 5;
const int d5 = 4;
const int d6 = 3;
const int d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello, Arduino!");
}
int c = 0; 
void loop() {
  lcd.setCursor(0,1);
  lcd.print(c);
  delay(1000);
  lcd.print("                ");
  c++;
}


