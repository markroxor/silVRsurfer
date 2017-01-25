#include <SoftwareSerial.h>
#include <Keyboard.h>
SoftwareSerial BT(8, 9); //RX, TX

void setup() {
  BT.begin(9600);
  Serial.begin(4800);
  // put your setup code here, to run once:

}

void loop() {
  if(BT.available())
  {
    int _read = BT.read();
    Serial.write(_read);
    Keyboard.write(_read);
  }
}
