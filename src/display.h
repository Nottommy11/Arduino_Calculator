// display.h
#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h> // Include necessary Arduino headers

#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSans9pt7b.h>

extern Adafruit_SSD1306 display;
extern const int OLED_RESET_PIN;

extern const unsigned char PROGMEM calc[];

void initDisplay();
void printToDisplay(String str);

#endif // DISPLAY_H
