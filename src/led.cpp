#include "led.h" //include the declaration for this class
#include "pins.h"


//<<constructor>> setup the LED, make pin 13 an OUTPUT
LED::LED(){
	init(D13_PIN);
}

//<<constructor>> setup the LED, make pin id an OUTPUT
LED::LED(byte id){
	init(id);
}

void	LED::init(byte id){
    setID(id);//make that pin an OUTPUT
	brightness = 255;
	fadeDirection = 1;
    pinMode(id, OUTPUT); //make that pin an OUTPUT
}

//<<destructor>>
LED::~LED(){/*nothing to destruct*/}

//turn the LED on
void LED::on(){
	digitalWrite(ledID,HIGH); //set the pin HIGH and thus turn LED on
}

//turn the LED off
void LED::off(){
	digitalWrite(ledID,LOW); //set the pin LOW and thus turn LED off
}

//blink the LED in a period equal to paramterer -time.
void LED::blink(int time){
	on(); 			//turn LED on
	delay(time/2);  //wait half of the wanted period
	off();			//turn LED off
	delay(time/2);  //wait the last half of the wanted period
}

void LED::fade(int fadeAmount) {
	if (brightness <= 0 || brightness >= 255) {
		fadeDirection = -fadeDirection;
	}
	brightness = brightness + (fadeAmount * fadeDirection);
	analogWrite(ledID, brightness);
}

void	LED::setID(byte id) {
	ledID = id;	
}

byte	LED::getID() {
	return ledID;
}
