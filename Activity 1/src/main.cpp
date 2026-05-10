#include <Arduino.h>

void setup() {
  
  DDRB |= (1 << PB0);

  DDRB &= ~(
    (1 << PB1) |
    (1 << PB2) |
    (1 << PB3) |
    (1 << PB4) |
    (1 << PB5)
  );
}

void loop() {
  PORTB |= (1 << PB0);
  delay(1000);   

  // Turn LED OFF
  PORTB &= ~(1 << PB0);
  delay(1000);  
}