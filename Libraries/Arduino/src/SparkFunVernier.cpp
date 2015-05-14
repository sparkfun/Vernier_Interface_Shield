
/******************************************************************************
SparkFunVernier.cpp
Brian@ SparkFun Electronics
10/2013
https://github.com/sparkfun/SparkFun_Vernier_Interface_Shield_Arduino_Library

Basic functionality of the Vernier sensors. 

Development environment specifics:
Developed in Arduino 1.0+
Updated for Arduino 1.6.4 5/2015

This code is beerware; if you see me (or any other SparkFun employee) at the
local, and you've found our code helpful, please buy us a round!

Distributed as-is; no warranty is given.
******************************************************************************/

#include "SparkFunVernier.h"
#include <Arduino.h>

/*


*/

Vernier::Vernier()
{
  bta1.name = "Analog 1";
  bta1.input1Pin = A0;
  bta1.input2Pin = A1;
  bta1.muxLSB = 0;
  bta1.muxMSB = 0;

  bta2.name = "Analog 2";
  bta2.input1Pin = A2;
  bta2.input2Pin = A3;
  bta2.muxLSB = 1;
  bta2.muxMSB = 0;

  btd1.name = "Digital 1";
  btd1.input1Pin = 2;
  btd1.input2Pin = 4;
  btd1.input3Pin = 6;
  btd1.input4Pin = 8;
  btd1.muxLSB = 0;
  btd1.muxMSB = 1;

  btd2.name = "Digital 2";
  btd2.input1Pin = 3;
  btd2.input2Pin = 5;
  btd2.input3Pin = 7;
  btd2.input4Pin = 9;
  btd2.muxLSB = 1;
  btd2.muxMSB = 1;

}

Vernier::readAnalog1();
{
	int sensorVal = analogRead(bta1.input1Pin);
	analog1 = sensorVal * lsb_to_5v;
	return sensorVal;
}

Vernier::readAnalog2();
{
	int sensorVal = analogRead(bta2.input1Pin);
	analog2 = sensorVal * lsb_to_5v;
	return sensorVal;
}

Vernier::readAnalog1_10V();
{
	int sensorVal = analogRead(bta1.input2Pin);
	analog1_10V = sensorVal * lsb_to_20v;
	return sensorVal;
}

Vernier::readAnalog2_10V();
{
	int sensorVal = analogRead(bta2.input2Pin);
	analog2_10V = sensorVal * lsb_to_20v;
	return sensorVal;
}


	