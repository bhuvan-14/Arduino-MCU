#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define ADC A3

void setup() {
  lcd.begin(16, 2);
  lcd.print("ADC ");
}

void loop() {
  int adcValue = analogRead(ADC);
  lcd.setCursor(0, 0);
  lcd.print("ADC: ");
  lcd.print(adcValue);
  lcd.print("   ");


  delay(500);
}
