# Task 6 - RTOS Basics

## Aim
To create a simple task using FreeRTOS.

## Components Used
- ESP32

## Code

```cpp
void task1(void *p) {
  while (1) {
    Serial.println("Task 1");
    vTaskDelay(1000);
  }
}

void setup() {
  Serial.begin(115200);

  xTaskCreate(
    task1,
    "Task1",
    1000,
    NULL,
    1,
    NULL
  );
}

void loop() {

}
```

## Output
The message "Task 1" is displayed continuously in the Serial Monitor.
