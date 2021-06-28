//"HELLO WORLD!" ACTIVE
//MY FIRST C++ PROJECT
//MY FIRST ARDUINO PROJECT
#include <LiquidCrystal.h>
 
//PIN DEFINITION:
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup()
{
//MODEL DISPLAY DEFINITION:
  lcd.begin(16, 2);
}
 
void loop()
{
  //CLEAN SCREEN:
  lcd.clear();
  //TOP LINE AND PRINT TEXT:
  lcd.setCursor(3, 0);
  lcd.print("HELLO WORLD!");
  delay(150);
   
  //SCROOL LEFT - OPTIONAL
  for (int posicao = 0; posicao < 3; posicao++){
    lcd.scrollDisplayLeft();
    delay(300);
  }
   
  //SCROOL RIGHT - OPTIONAL
  for (int posicao = 0; posicao < 4; posicao++){
    lcd.scrollDisplayRight();
    delay(300);
  }
}
