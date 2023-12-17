// Sensore di prossimità HCSR-04


const int triggerPort = 4; 
const int echoPort = 3;

void setup() {
  pinMode(triggerPort, OUTPUT);
  pinMode(echoPort, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(triggerPort, LOW);
  //invia un impulso di 10microsec sul trigger
  digitalWrite(triggerPort, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPort, LOW);

  long durata = pulseIn(echoPort, HIGH); //il valore di pulseIn è la durata dell'impulso in microsecondi - è unafunzione bloccante 
  long distanza = 0.034*durata/2;  //velocità = spazio/tempo -> spaizo uguale velocità * tempo -> velocità del suono 343 m/s ->0.034 cm/us
  Serial.print(distanza); //cm/us*us = cm
  Serial.println("cm");
  delay(1000);
}
