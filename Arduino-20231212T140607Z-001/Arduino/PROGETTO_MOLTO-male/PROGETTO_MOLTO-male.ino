/* CHE FORTUNATI
Siete sicuramnte quelli che hanno l'esercizio più difficile da capire, ma nulla di impossibile.
leggerete qua sotto una sfilza di codice, anche collegare l'arduino alla breadboard non sarà per niente facile
i numeri del vostro display non si possono contrallare singolarmente uno per uno, ma solamente tutti insieme*/


int digit1 = 6;   //PWM accende il primo led
int digit2 = 9;   //PWM accende il secondo led
int digit3 = 10;  //PWM accende il terzo led
int digit4 = 11;  //PWM accende il quarto led

#define DIGIT_ON LOW
#define DIGIT_OFF HIGH


int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = A0;  //il 6 è PWM quindi usiamo A0 al posto del 6
int segF = 7;
int segG = 8;

void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);

  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
  pinMode(digit3, OUTPUT);
  pinMode(digit4, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int number;
  Serial.println(number);
  int numberToDisplay = 4;  // Cambia il valore di numberToDisplay come desideri
  lightNumber(numberToDisplay);
  digitalWrite(digit1, DIGIT_ON);
  digitalWrite(digit2, DIGIT_OFF);
  digitalWrite(digit3, DIGIT_OFF);
  digitalWrite(digit4, DIGIT_OFF);
  numberToDisplay = 1;  // Cambia il valore di numberToDisplay come desideri
  lightNumber(numberToDisplay);
  digitalWrite(digit1, DIGIT_OFF);
  digitalWrite(digit2, DIGIT_ON);
  digitalWrite(digit3, DIGIT_OFF);
  digitalWrite(digit4, DIGIT_OFF);
  numberToDisplay = 3;  // Cambia il valore di numberToDisplay come desideri
  lightNumber(numberToDisplay);
  digitalWrite(digit1, DIGIT_OFF);
  digitalWrite(digit2, DIGIT_OFF);
  digitalWrite(digit3, DIGIT_ON);
  digitalWrite(digit4, DIGIT_OFF);
  numberToDisplay = 4;  // Cambia il valore di numberToDisplay come desideri
  lightNumber(numberToDisplay);
  digitalWrite(digit1, DIGIT_OFF);
  digitalWrite(digit2, DIGIT_OFF);
  digitalWrite(digit3, DIGIT_OFF);
  digitalWrite(digit4, DIGIT_ON);
}

void lightNumber(int numberToDisplay) {

#define SEGMENT_ON HIGH
#define SEGMENT_OFF LOW

  switch (numberToDisplay) {

    case 0:
      digitalWrite(segA, SEGMENT_ON);
      digitalWrite(segB, SEGMENT_ON);
      digitalWrite(segC, SEGMENT_ON);
      digitalWrite(segD, SEGMENT_ON);
      digitalWrite(segE, SEGMENT_ON);
      digitalWrite(segF, SEGMENT_ON);
      digitalWrite(segG, SEGMENT_OFF);
      break;

    case 1:
      digitalWrite(segA, SEGMENT_OFF);
      digitalWrite(segB, SEGMENT_ON);
      digitalWrite(segC, SEGMENT_ON);
      digitalWrite(segD, SEGMENT_OFF);
      digitalWrite(segE, SEGMENT_OFF);
      digitalWrite(segF, SEGMENT_OFF);
      digitalWrite(segG, SEGMENT_OFF);
      break;

    case 2:
      digitalWrite(segA, SEGMENT_ON);
      digitalWrite(segB, SEGMENT_ON);
      digitalWrite(segC, SEGMENT_OFF);
      digitalWrite(segD, SEGMENT_ON);
      digitalWrite(segE, SEGMENT_ON);
      digitalWrite(segF, SEGMENT_OFF);
      digitalWrite(segG, SEGMENT_ON);
      break;

    case 3:
      digitalWrite(segA, SEGMENT_ON);
      digitalWrite(segB, SEGMENT_ON);
      digitalWrite(segC, SEGMENT_ON);
      digitalWrite(segD, SEGMENT_ON);
      digitalWrite(segE, SEGMENT_OFF);
      digitalWrite(segF, SEGMENT_OFF);
      digitalWrite(segG, SEGMENT_ON);
      break;

    case 4:
      digitalWrite(segA, SEGMENT_OFF);
      digitalWrite(segB, SEGMENT_ON);
      digitalWrite(segC, SEGMENT_ON);
      digitalWrite(segD, SEGMENT_OFF);
      digitalWrite(segE, SEGMENT_OFF);
      digitalWrite(segF, SEGMENT_ON);
      digitalWrite(segG, SEGMENT_ON);
      break;

    case 5:
      digitalWrite(segA, SEGMENT_ON);
      digitalWrite(segB, SEGMENT_OFF);
      digitalWrite(segC, SEGMENT_ON);
      digitalWrite(segD, SEGMENT_ON);
      digitalWrite(segE, SEGMENT_OFF);
      digitalWrite(segF, SEGMENT_ON);
      digitalWrite(segG, SEGMENT_ON);
      break;

    case 6:
      digitalWrite(segA, SEGMENT_ON);
      digitalWrite(segB, SEGMENT_OFF);
      digitalWrite(segC, SEGMENT_ON);
      digitalWrite(segD, SEGMENT_ON);
      digitalWrite(segE, SEGMENT_ON);
      digitalWrite(segF, SEGMENT_ON);
      digitalWrite(segG, SEGMENT_ON);
      break;

    case 7:
      digitalWrite(segA, SEGMENT_ON);
      digitalWrite(segB, SEGMENT_ON);
      digitalWrite(segC, SEGMENT_ON);
      digitalWrite(segD, SEGMENT_OFF);
      digitalWrite(segE, SEGMENT_OFF);
      digitalWrite(segF, SEGMENT_OFF);
      digitalWrite(segG, SEGMENT_OFF);
      break;

    case 8:
      digitalWrite(segA, SEGMENT_ON);
      digitalWrite(segB, SEGMENT_ON);
      digitalWrite(segC, SEGMENT_ON);
      digitalWrite(segD, SEGMENT_ON);
      digitalWrite(segE, SEGMENT_ON);
      digitalWrite(segF, SEGMENT_ON);
      digitalWrite(segG, SEGMENT_ON);
      break;

    case 9:
      digitalWrite(segA, SEGMENT_ON);
      digitalWrite(segB, SEGMENT_ON);
      digitalWrite(segC, SEGMENT_ON);
      digitalWrite(segD, SEGMENT_ON);
      digitalWrite(segE, SEGMENT_OFF);
      digitalWrite(segF, SEGMENT_ON);
      digitalWrite(segG, SEGMENT_ON);
      break;

    case 10:
      digitalWrite(segA, SEGMENT_OFF);
      digitalWrite(segB, SEGMENT_OFF);
      digitalWrite(segC, SEGMENT_OFF);
      digitalWrite(segD, SEGMENT_OFF);
      digitalWrite(segE, SEGMENT_OFF);
      digitalWrite(segF, SEGMENT_OFF);
      digitalWrite(segG, SEGMENT_OFF);
      break;
  }
}
