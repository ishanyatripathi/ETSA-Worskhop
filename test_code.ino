void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  Serial.println("LED Control Ready");
  Serial.println("Send 1 = ON");
  Serial.println("Send 0 = OFF");
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();

    if (command == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED: ON");
    }
    else if (command == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED: OFF");
    }
  }
}