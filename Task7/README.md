# Task 7 - Embedded C Basics

## Aim
To write a simple Embedded C program using variables and if condition.

## Components Used
- Arduino Uno

## Code

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  int number = 10;

  if (number > 5) {
    Serial.println("Number is Greater than 5");
  }

  delay(1000);
}
```

## Output
The message "Number is Greater than 5" is displayed in the Serial Monitor.
