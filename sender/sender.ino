#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); //RX, TX

int r = 0;
long randNumber=0;
void setup() {
  Serial.begin(9600);
  mySerial.begin(1200);// 1200 --> FU4 enabled on HC-12!
  randomSeed(analogRead(0));
}

void loop() {
  
 delay(3000);
r = r+1;
 randNumber = random(99999);
mySerial.println("LoRa "+String(r)+" - "+String(randNumber));
 
 
  delay(3000);
}
