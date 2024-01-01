// setWidth.cpp
#include "setWidth.h"

void setWLeftStr(String value, int width) {
  while (value.length() < width) {
    Serial.print(' ');  // Pad with spaces to the left to achieve the desired width
    width--;
  }
  Serial.print(value);
}

void setWRightStr(String value, int width) {
  Serial.print(value);
  while (value.length() < width) {
    Serial.print(' ');  // Pad with spaces to the right to achieve the desired width
    width--;
  }
}
