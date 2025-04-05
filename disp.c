#include <STC8G.h>
#include "lcd.h"
#include "disp.h"
#include "tool.h"

unsigned char line1[]="I love my mother";
unsigned char line2[]="I love my father";

unsigned char line1S[]="I love my school";
unsigned char line2S[]="I  love  FUCHENG";

void disp_FirstLine()
{
	unsigned char i = zero;
	for(i=0;i<16;i++)
	{
		write_data(line1[i]);
		Delay100us(5);
	}
}

void disp_SecondLine()
{
	unsigned char i = zero;
	write_introduce(SecondLine);
	for(i=0;i<16;i++)
	{
		write_data(line2[i]);
		Delay100us(5);
	}
}




void disp_FirstLineS()
{
	unsigned char i = zero;
	for(i=0;i<16;i++)
	{
		write_data(line1S[i]);
		Delay100us(5);
	}
}

void disp_SecondLineS()
{
	unsigned char i = zero;
	write_introduce(SecondLine);
	for(i=0;i<16;i++)
	{
		write_data(line2S[i]);
		Delay100us(5);
	}
}




















void disp_EveryByte(unsigned char line)
{
	unsigned char i= zero,j= zero;
	if(line==0x01)
	{
		for(j=0;j<16;j++)
		{
			for(i=0;i<j;i++)
			{
				write_data(line1[i]);
				Delay100us(5);
			}
			Delay100us(10*300);
			write_introduce(ClearDisplay);
			
		}
		disp_FirstLine();
	}

	
	if(line==0x02)
	{
		for(j=0;j<16;j++)
		{
			for(i=0;i<j;i++)
			{
				write_data(line1[i]);
				Delay100us(5);
			}
			Delay100us(10*300);
			write_introduce(ClearDisplay);
			
		}
		disp_FirstLine();
		for(j=0;j<16;j++)
		{
			disp_FirstLine();
			write_introduce(SecondLine);
			for(i=0;i<j;i++)
			{
				write_data(line2[i]);
				Delay100us(5);
			}
			Delay100us(10*300);
			write_introduce(ClearDisplay);
		}
		while(1)
		{
			disp_FirstLine();
			disp_SecondLine();
		}			
	}
	
	
	if(line==0x03)
	{
		for(j=0;j<16;j++)
		{
			for(i=0;i<j;i++)
			{
				write_data(line1S[i]);
				Delay100us(5);
			}
			Delay100us(10*300);
			write_introduce(ClearDisplay);
			
		}
		disp_FirstLineS();
		for(j=0;j<16;j++)
		{
			disp_FirstLineS();
			write_introduce(SecondLine);
			for(i=0;i<j;i++)
			{
				write_data(line2S[i]);
				Delay100us(5);
			}
			Delay100us(10*300);
			write_introduce(ClearDisplay);
		}
		while(1)
		{
			disp_FirstLineS();
			disp_SecondLineS();
		}			
	}
	
	
	
}