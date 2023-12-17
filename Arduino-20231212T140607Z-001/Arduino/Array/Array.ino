/* ARRAY
attenzione il valore parte semre da 0 non da 1

*/
int key[3] = { LOW, LOW, LOW };
int pin[3] = { 7, 8, 9 };
void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(pin[i], INPUT);
  }
  Serial.begin(9600);
  Serial.print(pin [1]);
}

void loop() {

  for (int i = 0; i < 3; i++) {
    if (digitalRead(pin[i]) == HIGH) {
      key[i] = !key[i];
    }
    if (key[i] == HIGH) {
      Serial.println("pin ");
      Serial.print(pin[i]);
      Serial.println(" on");
      delay(200);
    } else {
      Serial.println("pin ");
      Serial.print(pin[i]);
      Serial.println(" off");
      delay(200);
    }
  }
} 