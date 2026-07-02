# Task 1 - Arduino Blink

## Aim
To blink the built-in LED on the Arduino Uno.

## Components Used
- Arduino Uno

## Code

```cpp
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
```

## Output
- The built-in LED turns ON for 1 second.
- The built-in LED turns OFF for 1 second.
- This process repeats continuously.
