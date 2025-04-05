#include <STC8G.H>
#include "disp.h"
#include "tool.h"
#include "LCD.h"

sbit UP = P3^5;
sbit LEFT = P3^6;

void main()
{
	pin();
	start();
	while(1)
	{
		
			disp_FirstLineS();
			disp_SecondLineS();
		}
}