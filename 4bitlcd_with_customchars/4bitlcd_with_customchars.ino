/*
 * This Program makes use of the 4bit mode 
 * in an LCD to display characters
 * LCD connections are based on
 * the parameters of the LiquidCrystal object
 * 
 * You can make upto 8 custom characters on a 16x2 display and starting from 0 to 7
 * https://maxpromer.github.io/LCD-Character-Creator/
 * you can use this visualize your character and it also gives you a neat code to print the custom character
 * 
 * https://www.tinkercad.com/things/azQprrIQxR7
 * Link to Simulation on TinkerCAD.
 * Try experimenting around with the code.
 * 
 * created by Vakesan M
 * on 08 Aug 2020
 */
#include <LiquidCrystal.h>

// Create an LCD object. Parameters: (RS, E, D4, D5, D6, D7):
LiquidCrystal lcd(4, 3, 9, 8, 7, 6);

//uncomment to use the smiley character
/*byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};*/

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2); //put (20, 4) for 20x4 Displays
  // Print a message to the LCD.
  lcd.print("hello, world!");

  //lcd.createChar(0, smiley);
  //lcd.setCursor(0, 1);          //uncomment to create and use custom characters
  //lcd.write(byte(0));
  //delay(1000);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(1, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
}
