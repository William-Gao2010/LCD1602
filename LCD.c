#include <STC8G.h>
#include "LCD.h"
#include "tool.h"

sbit RS = P3^2;
sbit RW	= P3^3;
sbit E  = P3^4;

void write_introduce(unsigned char pin)
{
	RS = RW = 0; E = 1; 
	P1 = pin; Delay5ms();
	E = 0;
}

void write_data(unsigned char byte)
{
	RW = 0; RS = E = 1; 
	P1 = byte; Delay5ms();
	E = 0;
}

void start()
{
	write_introduce(0x38);  //gn set
	write_introduce(0x0c);  //lightdesign back home
	write_introduce(0x06);  //disp key
	write_introduce(0x01);  //clear display
}