#include <Arduino.h>
#include "led.h"
#include "pins.h"

//Attach LED to PIN 13
LED led(D13_PIN);

void setup(){
}

void loop() {
	led.blink(2000);
}
