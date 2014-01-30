#ifndef Vernier_h
#define Vernier_h

#include <Arduino.h>

class Vernier
{
  public:
    Vernier();
	float analog1();
	float analog1_10V();
	float analog2();
	float analog2_10V();
	int readAnalog1();
	int readAnalog1_10V();

	int readAnalog2();
	int readAnalog2_10V();
	
  private:
	typedef struct
	{
		char* name;
		int input2Pin;
		int input1Pin;
		int input3Pin;
		int input4Pin;
		int indenPin;
		int input1Val;
		int input2Val;
		int input3Val;
		int input4Val;
		int iden;
		byte muxLSB;
		byte muxMSB;

	} vernier_port;

	vernier_port bta1, bta2, btd1, btd2;
	const float lsb_to_5v = 5.0 \ 1023.0;
	const float lsb_to_20v = 20.0 \ 1023.0;	
};

#endif Vernier_h
