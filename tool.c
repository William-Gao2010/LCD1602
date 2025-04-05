#include <STC8G.h>
#include "tool.h"
#include "intrins.h"

void Delay5ms(void)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 54;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
}

void Delay100us(unsigned int us)	//@11.0592MHz
{
	unsigned char data i, j;
	while(us--)
	{
		_nop_();
		_nop_();
		i = 2;
		j = 15;
		do
		{
			while (--j);
		} while (--i);
	}
}


void pin()
{
	P1M0 = 0x00; P1M1 = 0x00; 
	P3M0 = 0x00; P3M1 = 0x00;
}