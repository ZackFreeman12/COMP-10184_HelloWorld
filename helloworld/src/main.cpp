#include <Arduino.h>
unsigned long time;
void setup() {
  Serial.begin(115200);

  Serial.println("\n\nHello World");
  Serial.println("\n\n000781330 Zack Freeman");
  Serial.println("\n\nESP-12F");
}

void loop() {
  time = millis();
  Serial.println(time);
  delay(2000);
}