# Task 3 - Analog Sensor Reading

## Aim
To read analog values from the LDR sensor.

## Components Used
- Arduino Uno
- LDR

## Code

```cpp
int sensor = A0;
int value;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(sensor);
  Serial.println(value);
  delay(1000);
}
```

## Output
The analog values are displayed in the Serial Monitor.
