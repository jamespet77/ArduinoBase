#include <Arduino.h>
#include <pins.h>
#include <morsecode.h>

morsecode mc(D13_PIN);


void setup(){
	mc.decode("Hello World");
}

void loop() {
}
