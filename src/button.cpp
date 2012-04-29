#include "button.h"
#include "pins.h"

BUTTON::BUTTON() {
	BUTTON(D2_PIN);
}

BUTTON::BUTTON(byte id) {
	setID(id);
	pinMode(id, INPUT);
}

BUTTON::~BUTTON() {}

int BUTTON::getState() {
	return digitalRead(buttonID);
}

void	BUTTON::setID(byte id) {
	buttonID = id;
}

byte	BUTTON::getID() {
	return buttonID;
}
