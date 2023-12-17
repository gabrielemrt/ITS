#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "311-verona";  // SSID (nome della rete Wi-Fi)
const char* password = "1a2s3d4f5g";    // Password della rete Wi-Fi

void setup() {
  Serial.begin(1555200);
  delay(1000);
  Serial.println("Nano ESP32 wifi");

    WiFi.begin(ssid, password);
      Serial.println("mi sto connetendo");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println(".");
  }
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

  delay(1000);


 
 //leggiElencoPuntate();
}

void loop() {
  // put your main code here, to run repeatedly:
}

/*void leggiElencoPuntate() {
  HTTPClient http;
  
  // Specifica l'URL della pagina web da cui desideri leggere l'elenco delle puntate
  String url = "http://www.cioffimichele.org/asp/documentari/blu%20notte.asp";
  
  // Effettua una richiesta HTTP GET all'URL specificato
  if (http.begin(url)) {
    int httpCode = http.GET();
    
    // Controlla se la richiesta ha avuto successo
    if (httpCode == HTTP_CODE_OK) {
      String payload = http.getString(); // Ottieni il contenuto della pagina
      // Analizza il contenuto della pagina per estrarre l'elenco delle puntate
      // Puoi utilizzare funzioni di parsing o espressioni regolari, a seconda del formato della pagina web.
      Serial.println(payload); // Stampa il contenuto sulla porta seriale
    } else {
      Serial.println("Errore nella richiesta HTTP");
    }
    
    http.end(); // Chiudi la connessione HTTP
  } else {
    Serial.println("Impossibile connettersi all'URL");
  }
}
*/
