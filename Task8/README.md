# Task 8 - PWM LED Control

## Aim
To control the brightness of an LED using PWM.

## Components Used
- Arduino Uno
- LED
- 220Ω Resistor

## Code

```cpp
int led = 9;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, 50);
  delay(1000);

  analogWrite(led, 150);
  delay(1000);

  analogWrite(led, 255);
  delay(1000);
}
```

## Output
The LED changes its brightness from dim to bright.
