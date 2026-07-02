# Task 2 - Digital I/O

## Aim
To control the built-in LED using a push button.

## Components Used
- Arduino Uno
- Push Button

## Code

```cpp
int button = 2;
int led = 13;

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(button) == LOW) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
```

## Output
- Press the button → LED ON
- Release the button → LED OFF
