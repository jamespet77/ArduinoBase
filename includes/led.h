#ifndef LED13_H
#define LED13_H

#include <Arduino.h>

class LED {
public:
	LED();
	LED(byte id);
	~LED();
	void on();
	void off();
	void blink(int time);
	void fade(int fadeAmount);
private:
	byte ledID;
	int brightness;
	int fadeDirection;
	void setID(byte id);
	byte getID();
};

#endif
