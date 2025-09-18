#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Dirección más común del I2C (0x27 o 0x3F, según el módulo)
LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup() {
  // Inicializa la pantalla
  lcd.init();      
  lcd.backlight(); // Enciende la luz de fondo

  // Mensaje de prueba
  lcd.setCursor(0, 0);
  lcd.print("LCD I2C OK!");
  lcd.setCursor(0, 1);
  lcd.print("Iniciando...");
  delay(2000);
  lcd.clear();
}

void loop() {
  static int contador = 0;

  lcd.setCursor(0, 0);
  lcd.print("Contador: ");
  lcd.print(contador);

  lcd.setCursor(0, 1);
  lcd.print("Hola mundo :)  ");

  contador++;
  delay(1000);
}
