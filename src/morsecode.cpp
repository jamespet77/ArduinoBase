#include "morsecode.h" //include the declaration for this class
#include "pins.h"

//<<constructor>> setup the morsecode, make pin 13 an OUTPUT
morsecode::morsecode(){
}
morsecode::morsecode(byte id){
	ld.init(id);
}
void morsecode::blink(int t) {
	ld.blink(t);
}

void   morsecode::dot() {
	ld.on();
	delay(200);
	ld.off();
	delay(200);
}

void   morsecode::dash() {
	ld.on();
	delay(500);
	ld.off();
	delay(200);
}
void   morsecode::decode(const char *str) {

	size_t i,j;

	for(i = 0; str[i]; i++) {
		for (j = 0; j < sizeof Morse / sizeof *Morse; j++) {
			if (toupper(str[i]) == Morse[j].letter) {
				play(Morse[j].code);
			}
		}
	}
}

void   morsecode::play(const char *str) {

	size_t i;

	for(i = 0; str[i]; i++) {
		if (str[i] == '.') {
			dot();
		} else if (str[i] == '-') {
			dash();
		} else if (str[i] == ' ') {
			delay(1000);
		} else {
		}
	}
}
