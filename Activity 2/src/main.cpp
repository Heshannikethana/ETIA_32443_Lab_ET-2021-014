#include <Arduino.h>

void setup() {
  DDRC |= (1 << PC0) | (1 << PC1) | (1 << PC2) | (1 << PC3);

  DDRC &= ~((1 << PC4) | (1 << PC5));
}

void loop() {

  PORTC = (1 << PC0);
  delay(1000);

  PORTC = (1 << PC1);
  delay(1000);


  PORTC = (1 << PC2);
  delay(1000);

  PORTC = (1 << PC3);
  delay(1000);
}
