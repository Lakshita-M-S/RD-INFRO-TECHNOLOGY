# Task 4 - I2C Communication

## Aim
To communicate with an OLED display using I2C.

## Components Used
- Arduino Uno
- OLED Display (SSD1306)

## Code

```cpp
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
```

## Output
The OLED display shows the message "Hello".
