
#include <LiquidCrystal_I2C.h>
// download library and paste to library https://github.com/johnrickman/LiquidCrystal_I2C

//connection
/*
LCD Board   Uno Board
SDA-        A4/SDA
SCL-        A5/SCL
GND         GND
VCC         5v
*/

//try by comment and uncomment below line as per i2c address of lcd

//LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x3F,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello, Arduino!");
  lcd.setCursor(0,1);
  lcd.print("IOTwebplanet.com");
}


void loop()
{
}
