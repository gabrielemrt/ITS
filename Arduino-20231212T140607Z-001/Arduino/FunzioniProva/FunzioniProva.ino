void setup() {
  Serial.begin(9600);

  procedura_vuota(); //questo è il modo per richiamare una fuzione vuota
  sayHello("pluto");// il valore che scrivo tra virgolette è un valore
  int n = somma(5,4);
  Serial.println(n);
}

void loop() {
  // put your main code here, to run repeatedly:
}


void procedura_vuota() {  //funzione che non restituisce risultati
  Serial.print("hello ");
}
void sayHello(String nome) {  // funzione che non restituisce niente a cui passo dei valori da fuori
  Serial.print("Mr ");
  Serial.println(nome);
}

int somma(int n, int m) {
  int res = n + m;
  return res;
}