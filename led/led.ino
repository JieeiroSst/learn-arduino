#include <Arduino.h>

const int ledvang = 13;
const int letxanh = 8;
const int letdo = 9;

void setup() {
  pinMode(ledvang, OUTPUT);
  pinMode(letxanh, OUTPUT);
  pinMode(letdo, OUTPUT);
}

void loop() {
  digitalWrite(ledvang, HIGH);
  digitalWrite(letxanh, HIGH);
  digitalWrite(letdo, LOW);
  // Wait for 1 second
  delay(1000);

  digitalWrite(ledvang, LOW);
  digitalWrite(letxanh, LOW);
  digitalWrite(letdo, HIGH);
  // Wait for 1 second
  delay(1000);
}