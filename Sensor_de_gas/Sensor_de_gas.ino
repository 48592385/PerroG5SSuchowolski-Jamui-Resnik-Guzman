#include <U8g2lib.h>

#define MQ2_PIN 33
#define MQ9_PIN 32

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0);

void setup() {
  Serial.begin(115200);
  u8g2.begin();
}

void loop() {
  int gasValue = analogRead(MQ2_PIN);
  int porcentaje = map(gasValue, 0, 4095, 0, 100);
  Serial.print("MQ2: ");
  Serial.println(porcentaje);
  int gasValue2 = analogRead(MQ9_PIN);
  int porcentaje2 = map(gasValue2, 0, 4095, 0, 100);
  Serial.print("MQ9: ");
  Serial.println(porcentaje2);
  delay(500);
}
