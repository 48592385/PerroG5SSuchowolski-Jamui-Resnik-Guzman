#include <Wire.h>
#include <Adafruit_AHTX0.h>

Adafruit_AHTX0 aht;

void setup() {
  Serial.begin(115200);
  while (!Serial) delay(10);

  Serial.println("Prueba de AHT10/AHT20");

  if (!aht.begin()) {
    Serial.println("No se detecta el AHT10/AHT20, revisa conexiones!");
    while (1) delay(10);
  }
  Serial.println("Sensor AHT10/AHT20 detectado correctamente.");
}

void loop() {
  sensors_event_t humedad, temp;
  aht.getEvent(&humedad, &temp); // obtiene las lecturas

  Serial.print("Temperatura: ");
  Serial.print(temp.temperature);
  Serial.println(" *C");

  Serial.print("Humedad: ");
  Serial.print(humedad.relative_humidity);
  Serial.println(" %");

  Serial.println("---------------------");
  delay(2000);
}
