#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup()
{
 lcd.begin (9600);
}

void loop()
{
  lcd.setBacklight(HIGH);
  lcd.setCursor(0,0);
  lcd.print("LCD I2C 20x4 baris1");
  lcd.setCursor(0,1);
  lcd.print("taufik adi s baris2");
  lcd.setCursor(0,2);
  lcd.print("baris 3");
  lcd.setCursor(0,3);
  lcd.print("baris 4 ");
  delay(1000);
}
