#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // 0x27 (I2C address)

void setup()
{
	lcd.init();		// Initialize LCD
	lcd.backlight();	// Enable backlight
	
	// Set cursor position to column 1, row 1
	lcd.setCursor(0, 0);
	lcd.print("Hello");
	
	// Set cursor position to column 10, row 2
	lcd.setCursor(10, 1);
	lcd.print("World");
	
	// Set cursor position to column 1, row 3
	lcd.setCursor(0, 3);
	lcd.write(0B11110011); // Infinity symbol
}

void loop()
{
}