#include <Arduino.h>
#include "led.h"
#include "button.h"

LED led(13);
BUTTON button(2);

void setup(){
}

void loop() {
	if (button.getState() == HIGH) {
		led.on();
	} else {
		led.off();
	}
}
