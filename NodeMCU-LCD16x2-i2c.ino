#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
//lcd.begin();
lcd.backlight();
lcd.setCursor(3, 0);
lcd.print("Welcome to");
lcd.setCursor(1, 1);
lcd.print("indomaker.com");
}

void loop(){}
