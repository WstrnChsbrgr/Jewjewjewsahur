#include <Arduino.h>

const int PIN_LED = 4;
int contador = 0;

void setup() {
  Serial.begin(115200);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  Serial.print("Ciclo número ");
  Serial.println(contador);
  digitalWrite(PIN_LED, HIGH);
  delay(500);
  digitalWrite(PIN_LED, LOW);
  delay(500);
  contador++;   
}