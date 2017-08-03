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
 
 
  delay(2000);
}
