/* ciclo while 

*/
int v = 10;
bool RUN = true;

void setup() {
  Serial.begin(9600); 
}

void loop() {
    // Variabie buleana che quindi può essere solo o verao falsa
  int i = 0;
  while (RUN) {
    i++;
    Serial.println(i);
    delay(200);
    if (i == v) {
      RUN = false;
    };
  }

  while(!RUN){
    v++;
     Serial.println("limite aumentato");
     RUN = true;
    }
  
  Serial.println("Uscito dal ciclo");
  delay(1000);
}
