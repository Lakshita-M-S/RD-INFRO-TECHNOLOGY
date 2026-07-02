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