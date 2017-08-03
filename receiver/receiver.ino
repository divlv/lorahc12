//HC-12 messenger send/receive

#include <SoftwareSerial.h>
#include <Wire.h>  // Comes with Arduino IDE
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

SoftwareSerial mySerial(2, 3); //RX, TX

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  lcd.begin(16,2);   // initialize the lcd for 16 chars 2 lines, turn on backlight
  lcd.noBacklight();
  lcd.clear();

lcd.setCursor(0,0);
lcd.print("LoRa receiver");
lcd.setCursor(0,1);
lcd.print("started...");

}

void loop() {
  
   
  if(mySerial.available() > 1){//Read from HC-12 and send to serial monitor
    String input = mySerial.readString();
    //Serial.println(input);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("LoRa data:");
lcd.setCursor(0,1);
lcd.print(input);

        
  }
  delay(20);
}
