# Task 5 - UART Serial Communication

## Aim
To send data using UART Serial Communication.

## Components Used
- Arduino Uno

## Code

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello");
  delay(1000);
}
```

## Output
The word "Hello" is displayed continuously in the Serial Monitor.
