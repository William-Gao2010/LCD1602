#ifndef __LCD_H__
#define __LCD_H__

#define FunctionSet 0x38
#define LightDesignBack 0x0c
#define DispKey 0x06
#define ClearDisplay 0x01
#define SecondLine 0xc0

void write_introduce(unsigned char pin);
void write_data(unsigned char byte);
void start();

#endif