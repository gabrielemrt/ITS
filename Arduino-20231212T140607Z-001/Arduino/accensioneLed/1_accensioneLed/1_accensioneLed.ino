
void setup (){
pinMode (13, OUTPUT);  //inizializza pin 13 Come led (output)
}

void loop (){
digitalWrite(13, HIGH);  // accendi il led
delay(1000);
digitalWrite (13, LOW);  //spegni il led
delay(1000);
}

// qui possiamo vedere come possiamo cambiare i tempi e cambiano anche i risultati.

