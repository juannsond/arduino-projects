// Sensore ultrasuoni
const int TRIG = 3;
const int ECHO = 2;

// Altri componenti
const int ledGreen = 7;
const int ledRed = 8;
const int buzzer = 9;

// Soglie di distanza in cm
int distanza_min = 5;    // sotto questa distanza ignora
int distanza_max = 50;   // oltre questa distanza non suona

void setup() {
  Serial.begin(9600);
  
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int distanza = sensor_morcego(TRIG, ECHO);

  Serial.print("Distanza: ");
  Serial.print(distanza);
  Serial.println(" cm");

  if (distanza >= distanza_min && distanza <= distanza_max) {
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);
    allarmeDinamico(distanza);
  } 
  else {
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);
    noTone(buzzer);
  }

  delay(50);
}

int sensor_morcego(int pinotrig, int pinoecho) {
  digitalWrite(pinotrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pinotrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinotrig, LOW);

  long durata = pulseIn(pinoecho, HIGH, 30000);

  if (durata == 0) {
    return 999; // Nessun eco → distanza enorme
  }

  return durata / 58; // conversione in cm
}

// Allarme dinamico: più vicino → suono più acuto e veloce
void allarmeDinamico(int distanza) {
  int frequenza;
  int pausa;

  // Frequenza tra 1500 e 3500 Hz in base alla distanza
  frequenza = map(distanza, distanza_max, distanza_min, 1500, 3500);

  // Pausa tra i beep tra 200ms e 20ms in base alla distanza
  pausa = map(distanza, distanza_max, distanza_min, 200, 20);

  tone(buzzer, frequenza);
  delay(pausa);
  noTone(buzzer);
  delay(pausa);
}
