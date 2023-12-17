int buzzer= 13;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  tone(buzzer, 1000); // Genera un suono a 1000 Hz
  delay(1000);           // Attendi per 1 secondo
  noTone(buzzer);        // Interrompi il suono
  delay(1000);           // Attendi per 1 secondo
}

/* void loop() {
  int nota = random(200 , 1000); 
  tone(buzzer, nota, 100); // l'ultimo argomento sta ad indicare la durata in millisecondi del suono 
  delay(100);              // In questo caso il delay serve per permettere alla nota di suonare 
} */
