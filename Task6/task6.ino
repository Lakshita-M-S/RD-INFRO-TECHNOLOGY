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