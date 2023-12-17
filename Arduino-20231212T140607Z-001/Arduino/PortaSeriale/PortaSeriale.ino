//Inizzializare una porta seriale 

int x= 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
    x++;
  Serial.print("x vale");
  Serial.println(x);
  delay(500);



}
