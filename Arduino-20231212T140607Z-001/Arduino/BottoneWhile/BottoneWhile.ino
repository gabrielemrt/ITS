/* ciclo while 

*/

void setup() {
  Serial.begin(9600); 
  pinMode(7, INPUT);
}

void loop() {
  bool RUN = true; // Variabie buleana che quindi può essere solo o verao falsa 
  int i = 0;
  while(RUN){
    if (digitalRead(7) == HIGH){
      RUN = false;
    }  
    Serial.print(".");
    delay(200);
  }
  Serial.println("END"); 
  delay(1000);

}
