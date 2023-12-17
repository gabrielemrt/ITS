/*VALORE RANDOM SULLA SERIALE 

*/

void setup()
{
	Serial.begin(9600);
}

void loop()
{
  	int numeroCasuale;
  	numeroCasuale = random(1, 1000);
  	Serial.println(numeroCasuale);
  	delay(1000);
}