
#include "DIO.h"
void button_vInit(unsigned char portName, unsigned char pinNumber)
{
	DIO_vsetPINDir(portName, pinNumber, 0);
}

unsigned char button_u8read(unsigned char portName,unsigned char pinNumber)
{
	unsigned char x;
	x = DIO_u8read(portName, pinNumber);
	return x;
}
