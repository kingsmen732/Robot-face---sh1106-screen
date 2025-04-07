#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>
#include <RoboFace.h>

#define i2c_Address 0x3c
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SH1106G display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
RoboFace face(SCREEN_WIDTH, SCREEN_HEIGHT, 120);

void setup() {
  Serial.begin(9600);
  delay(250);
  display.begin(i2c_Address, true);
  face.begin();
}

void loop() {
  face.update();
}
