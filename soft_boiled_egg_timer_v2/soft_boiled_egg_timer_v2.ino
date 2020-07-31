
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int limit;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Soft Boiled Egg Timer");
  limit = 360;
}

void loop() {
  if (millis() / 1000 <= limit) {
    if (millis() / 1000 <= 350 || millis() / 500 % 2 == 0) {
      lcd.setCursor(0, 1);
      //print minutes left
      lcd.print(0);
      lcd.setCursor(1, 1);
      lcd.print((limit - (millis() / 1000)) / 60);
    
      lcd.setCursor(2, 1);
      lcd.print(':');
      
      //print seconds left
      lcd.setCursor(3, 1);
      
      //add condition when minutes < 10
      int second = (limit - (millis() / 1000)) % 60;
      if (second < 10) {
        lcd.print(0);
        lcd.setCursor(4, 1);
      }
      lcd.print((limit - (millis() / 1000)) % 60);
    } else {
      lcd.setCursor(0, 1);
      lcd.print(' ');
      lcd.setCursor(1, 1);
      lcd.print(' ');
      lcd.setCursor(2, 1);
      lcd.print(' ');
      lcd.setCursor(3, 1);
      lcd.print(' ');
      lcd.setCursor(4, 1);
      lcd.print(' ');
    }
    
  } else {
    //add end condition
      lcd.setCursor(0, 1);
      lcd.print('0');
      lcd.setCursor(1, 1);
      lcd.print('0');
      lcd.setCursor(2, 1);
      lcd.print(':');
      lcd.setCursor(3, 1);
      lcd.print('0');
      lcd.setCursor(4, 1);
      lcd.print('0');
  }
}
