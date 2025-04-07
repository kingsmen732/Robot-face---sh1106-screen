#pragma once

#include <FluxGarage_RoboEyes.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

class RoboFace {
public:
  RoboFace(int screenWidth, int screenHeight, int frameRate);
  void begin();
  void update();
  void randomize();

private:
  roboEyes eyes;
  unsigned long lastChangeTime;
  int changeInterval;
};
