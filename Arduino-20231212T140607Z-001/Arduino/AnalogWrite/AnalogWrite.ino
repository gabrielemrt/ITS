/* Analog Write ---> Pin PWM
sono i pin contrasegnati da una tilde 
serve per fare in modoche un led sia acceso per metà 
è possibile solo perchè il led viene accesso tante volte in un secondo da sembrare che cambi intensità
*/
void setup() {

}

void loop() {
  
  analogWrite(11, 100); //negli argomenti mettiamo prima il numero del led e un numero che va da 0 a 255 per la sua intensità
  }
 

