#define LDR_PIN 33

void setup() {
  Serial.begin(115200);
}

void loop() {
  int luz = analogRead(LDR_PIN);
  int lecturaLuz = map(luz,0,4095,0,100);
  Serial.println(lecturaLuz);
  Serial.print("%");
  

  delay(500);
}
