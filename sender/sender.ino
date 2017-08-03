#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); //RX, TX

int r = 0;
long randNumber=0;
void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  
 delay(3000);
r = r+1;
 randNumber = random(99999);
mySerial.println("LoRa "+String(r)+" - "+String(randNumber));
 
 /*
  if(Serial.available() > 0){//Read from serial monitor and send over HC-12
    String input = Serial.readString();
    mySerial.println(input);    
  }
 */
  //if(mySerial.available() > 1){//Read from HC-12 and send to serial monitor
  //  String input = mySerial.readString();
  //  Serial.println(input);    
  //}
  
  delay(2000);
}
