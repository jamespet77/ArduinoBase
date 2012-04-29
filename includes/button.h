#ifndef BUTTON_HH
#define BUTTON_HH

#include <Arduino.h>

class BUTTON {
public:
	BUTTON();
	BUTTON(byte id);
	~BUTTON();
	int getState();
	void setID(byte id);
	byte getID();
private:
	byte buttonID;

};

#endif
