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