/* VARIABILI
le variabili di arduino devo essere dichiarate con un tipo 
quando si usano e variabili bisogna stre molto attenti a dove la si mette 

*/

int led = 13;


void setup() {
 pinMode(led, OUTPUT);

}

void loop() {
  digitalWrite(led, HIGH);

}
