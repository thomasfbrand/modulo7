const int ledPin = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000); // 1 segundo
  digitalWrite(ledPin, LOW);
  delay(1000); // 1 segundo
}
