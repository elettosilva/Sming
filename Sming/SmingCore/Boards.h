/****
 * Sming Framework Project - Open Source framework for high efficiency native ESP8266 development.
 * Created 2015 by Skurydin Alexey
 * http://github.com/anakod/Sming
 * All files of the Sming Core are provided under the LGPL v3 license.
 ****/

#ifndef _SMING_CORE_BOARDS_H_
#define _SMING_CORE_BOARDS_H_

#include "../SmingCore/ESP8266EX.h"

// BETA state. Will be rewritten with new interface.

#ifdef BOARD_ESP01

class ESP01_Description
{
public:
	EspDigitalPin gpio0 = EspDigitalPins[0];
	EspDigitalPin gpio2 = EspDigitalPins[2];
	EspDigitalPin tx = EspDigitalPins[1];
	EspDigitalPin rx = EspDigitalPins[3];
};

static ESP01_Description ESP01;

#endif

#ifdef BOARD_ESP07

class ESP07_Description
{
public:
	EspDigitalPin gpio0 = EspDigitalPins[0];
	EspDigitalPin gpio2 = EspDigitalPins[2];
	EspDigitalPin tx = EspDigitalPins[1];
	EspDigitalPin rx = EspDigitalPins[3];
	EspDigitalPin gpio4 = EspDigitalPins[4];
	EspDigitalPin gpio5 = EspDigitalPins[5];
	EspDigitalPin gpio12 = EspDigitalPins[12];
	EspDigitalPin gpio13 = EspDigitalPins[13];
	EspDigitalPin gpio14 = EspDigitalPins[14];
	EspDigitalPin gpio15 = EspDigitalPins[15];
	EspDigitalPin gpio16 = EspDigitalPins[16];
};

static ESP07_Description ESP07;

#endif

#endif /* _SMING_CORE_BOARDS_H_ */
