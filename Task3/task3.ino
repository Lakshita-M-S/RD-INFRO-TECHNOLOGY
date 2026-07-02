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