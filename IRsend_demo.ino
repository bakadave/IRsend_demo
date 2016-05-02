#include "Onkyo_amp.h"
#include <IRremote.h>

//THIS code sends the POWER signal to an Onkyo amplifier. 
//The header file "Onlyo_amp.h" contains all the coldes read from an Onkyo remote I could find but not the one that should be used with my amplifier. Still better than nothing.
//An IR LED must be connected to Arduino PWM pin 9.

IRsend irsend;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	irsend.sendNEC(POWER, 32);
	Serial.println("signal_sent");
	delay(2000);
}