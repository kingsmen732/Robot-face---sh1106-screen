#include "roboface.h"

RoboFace::RoboFace(int screenWidth, int screenHeight, int frameRate)
  : lastChangeTime(0), changeInterval(2000) {
  eyes.begin(screenWidth, screenHeight, frameRate);
  eyes.setAutoblinker(ON, 3, 2);
  eyes.setIdleMode(OFF, 0, 0);
}

void RoboFace::begin() {
  lastChangeTime = millis();
}

void RoboFace::update() {
  unsigned long currentTime = millis();
  if (currentTime - lastChangeTime > changeInterval) {
    lastChangeTime = currentTime;
    changeInterval = random(1000, 4000);

    int pos = random(9);
    switch (pos) {
      case 0: eyes.setPosition(N); break;
      case 1: eyes.setPosition(NE); break;
      case 2: eyes.setPosition(E); break;
      case 3: eyes.setPosition(SE); break;
      case 4: eyes.setPosition(S); break;
      case 5: eyes.setPosition(SW); break;
      case 6: eyes.setPosition(W); break;
      case 7: eyes.setPosition(NW); break;
      case 8: eyes.setPosition(DEFAULT); break;
    }

    int mood = random(6);
    switch (mood) {
      case 0: eyes.setMood(DEFAULT); break;
      case 1: eyes.setMood(HAPPY); break;
      case 2: eyes.setMood(ANGRY); break;
      case 3: eyes.setMood(TIRED); break;
      case 4: eyes.anim_confused(); break;
      case 5: eyes.anim_laugh(); break;
    }
  }

  eyes.update();
}
