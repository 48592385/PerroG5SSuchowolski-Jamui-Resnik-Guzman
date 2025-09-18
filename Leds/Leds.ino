#define LED1_PIN 18
#define LED2_PIN 19
#define LED3_PIN 21

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED1_PIN, HIGH); delay(500); digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, HIGH); delay(500); digitalWrite(LED2_PIN, LOW);
  digitalWrite(LED3_PIN, HIGH); delay(500); digitalWrite(LED3_PIN, LOW);
}
