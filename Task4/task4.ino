#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 oled(128, 64, &Wire);

void setup() {

  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  oled.clearDisplay();

  oled.setTextSize(2);

  oled.setTextColor(SSD1306_WHITE);

  oled.setCursor(15, 20);

  oled.print("Hello");

  oled.display();

}

void loop() {

}