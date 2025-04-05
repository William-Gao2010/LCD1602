#include <STC8G.H>
#include "intrins.h"
#include "LCD.h"
#include "tool.h"
#include "disp.h"

void WelcomeWord()
{
	disp_EveryByte(0x02);
	while(1);
}