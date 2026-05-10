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

  DDRD &= ~(1 << PD2);

  DDRD &= ~(
    (1 << PD0) |
    (1 << PD1) |
    (1 << PD3) |
    (1 << PD4) |
    (1 << PD5) |
    (1 << PD6) |
    (1 << PD7)
  );
}

void loop() {

  if (PIND & (1 << PD2)) {

    PORTB |= (1 << PB0);

  } else {
    PORTB &= ~(1 << PB0);
  }
}
