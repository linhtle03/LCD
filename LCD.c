// Load the LiquidCrystal library, which will give us
// commands to interface to the LCD:

#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(16, 2);

  lcd.clear();

  lcd.print("hello, world!");
}

void loop()
{
 
  lcd.setCursor(0,1);

  lcd.print(millis()/1000);

}
