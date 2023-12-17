/* DEBOUNCE
quando su arduino premiamo un pulnte "a molla" corriamo il rischio che questo rimbalzi e crei del rumore dentro al nostro circuito,
questo rumore potrerrbbe causarci ddei falsi positivi che noi vogliamm evitare.
questo medoto è lternativo all'aggiunta di un delay che a lungo andare potrebbe rendere lento il nostro codice e poco responsivo */

long t = 0;
long debounce_delay = 200; //impsto un delay minomo da aspettare per premere il tato una secoonda volta 

void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if (digitalRead(7)){
    if((millis() - t)> debounce_delay);{ //millis misura il tempo dall'accensione dell'arduino 
    Serial.print ("ok"); //se il tempo trascorso dopo la pressine del tasto e piy lungo del delay si può cotinuare 
    t = millis(); //reggistro l'ultima volta che è statp remuto il tasto
    }
  }

}
