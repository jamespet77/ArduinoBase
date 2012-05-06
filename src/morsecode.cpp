#include <morsecode.h>

morsecode::morsecode() {
	morsecode(D13_PIN);
}

morsecode::morsecode(byte id) {
	led.init(D13_PIN);
}

morsecode::~morsecode() {}

void	morsecode::blink(int time) {
	led.blink(time);
}
void	morsecode::dot() {
	led.on();
	delay(100);
	led.off();
	delay(300);
}

void	morsecode::dash() {
	led.on();
	delay(1000);
	led.off();
	delay(300);
}

void	morsecode::decode(const char *str) {

	size_t i,j;

	for(i = 0; str[i]; i++) {
		for (j = 0; j < sizeof Morse / sizeof *Morse; j++) {
			if (toupper(str[i]) == Morse[j].letter) {
				play(Morse[j].code);
			}
		}
	}
}

void	morsecode::play(const char *str) {
	
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
