#include <REGX51.H>
#include "DIO.h"
#include "std_macros.h"

unsigned char seg[]={0000,0001,0010,0011,0100,0101,0110,0111,1000,1001};
unsigned char value;

void SevenSegment_SetUp(unsigned char portName, unsigned char pinNumber)
{
	for (pinNumber = 4; pinNumber <= 7; pinNumber++)
	{
		DIO_vsetPINDir(portName, pinNumber, 0);
	}
}

void SevenSegment_Display(unsigned char portName, unsigned char value)
{
		DIO_write_high_nibble(portName, value);
}