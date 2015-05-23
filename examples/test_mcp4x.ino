#include <MCP42010.h>

// SPI pins for Arduino UNO are CS=2, CLK=4, MOSI=5
// SPI pins for ESP8266 are CS=15, CLK=14, MOSI=13
MCP42010 digipot(2, 4, 5);

void setup() {}

void loop() {
  for (byte i=0; i<=255; i++) {
    digipot.setPot(1, i);
    delay(100);
  }
}
