#include <PZEM004Tv30.h>
#include <SoftwareSerial.h>
#define RX0 3
#define TX0 1
#define RX1 26
#define TX1 25
#define RX2 16
#define TX2 17
SoftwareSerial Help(RX0,TX0);
PZEM004Tv30 R(Help);
PZEM004Tv30 S(Serial, RX0, TX0);
PZEM004Tv30 T(Serial2, RX2, TX2);

float RN=0,SN=0,TN=0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  RN= R.voltage();
  SN= S.voltage();
  TN= T.voltage();

  Serial.println(String(RN,2)+" "+String(RN,2)+" "+String(RN,2));
  delay(100);
}
