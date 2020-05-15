#include <RH_ASK.h>
#include <SPI.h> 

// Arduino                     Transmitter
//  GND--------------------------GND
//  D12--------------------------Data
//  5V---------------------------VCC

RH_ASK driver(2000, 11, 12);

void setup() {
  Serial.begin(9600);   
  if (!driver.init()) Serial.println("init failed");
}

void loop() {
  const char *msg = "Oncle Faouzi says : hello Amen Allah-2019";
  driver.send((uint8_t *)msg, strlen(msg));
  Serial.println(msg);
  driver.waitPacketSent();
  delay(200);
}
