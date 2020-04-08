/*Welcome
step on the mark
point your forehead at the red light
3...2...1
Step into the next chamber
Beginining Disinfection
Complete, Goodbye*/

#include <LiquidCrystal_I2C.h>
#include <Wire.h>


LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 20, 4);

int phrase = 1;


		void setup(){

			lcd.init();
			lcd.backlight();
			lcd.print 0.

		}


		void loop(){

			lcd_print(2);
			lcd_print(3);
			lcd_print(1);
		}


lcd_print(phrase){

switch(phrase){

		case 1:
		setCursor(0,0);
		lcd.print("IDLE MODE");
		setCursor(1,0);
		lcd.print("TANK : 86%");
		delay(2000);
		break;

		case 2:
		setCursor(0,0);
		lcd.print("TEMP READ");
		delay(3000);
		break;

		setCursor(1,0);
		lcd.print("SPRAYING..");
		delay(6000);
		break;

	}


}