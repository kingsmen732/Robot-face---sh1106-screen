# Robo Face - SH1106 Screen

This library animates expressive robotic eyes on SH1106-based OLED displays using Arduino or ESP32 boards. **RoboFace** is a wrapper library for creating animated facial expressions on an OLED screen using the [FluxGarage_RoboEyes](https://github.com/kingsmen732/FluxGarage_RoboEyes) library.

## Features
- Random emotion and direction switching
- Support for SH1106 OLED displays
- Works on ESP32 and Arduino Nano (I2C-based)
- Random moods: HAPPY, ANGRY, TIRED, etc.
- Compatible with I2C OLEDs (SH1106)

## Installation

Install from Arduino Library Manager (once published), or clone manually.


## Example

```cpp
#include <robotface.h>
RoboFace face(128, 64, 120);
face.begin();
face.update();
```
