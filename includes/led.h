#ifndef LED13_H
#define LED13_H

#include <Arduino.h>

class LED {
public:
	LED();
	LED(byte id);
	~LED();
	void init(byte id);
	void on();
	void off();
	void blink(int time);
	void fade(int fadeAmount);
	void setID(byte id);
	byte getID();
private:
	byte ledID;
	int brightness;
	int fadeDirection;
};

#endif
