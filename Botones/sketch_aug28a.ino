#define BTN1 18
#define BTN2 12
#define BTN3 14
#define BTN4 27
#define BTN5 26

void setup() {
  Serial.begin(115200);

  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);
  pinMode(BTN4, INPUT_PULLUP);
  pinMode(BTN5, INPUT_PULLUP);

  Serial.println("Prueba de 5 pulsadores");
}

void loop() {
  if (digitalRead(BTN1) == LOW) {
    Serial.println("Boton 1 presionado");
  }
  if (digitalRead(BTN2) == LOW) {
    Serial.println("Boton 2 presionado");
  }
  if (digitalRead(BTN3) == LOW) {
    Serial.println("Boton 3 presionado");
  }
  if (digitalRead(BTN4) == LOW) {
    Serial.println("Boton 4 presionado");
  }
  if (digitalRead(BTN5) == LOW) {
    Serial.println("Boton 5 presionado");
  }
}
