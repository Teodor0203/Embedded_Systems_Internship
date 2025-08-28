/*
 * T1_Ex2.c
 *
 * Created: 26.08.2025 17:41:08
 * Author : teo
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	uint8_t leds_pattern = 0b00000011;  
	uint8_t direction = 0;
	
	DDRC = 0xFF;

    /* Replace with your application code */
    while (1) 
    {

		PORTC = leds_pattern;
		
		if(direction == 0)
		{
			leds_pattern = leds_pattern << 1;
			
			if(leds_pattern == 0b11000000)
			{
				direction = 1;
			}
		}
		else
		{
			leds_pattern = leds_pattern >> 1;
			
			if(leds_pattern == 0b00000011)
			{
				direction = 0;
			}
		}
			
		_delay_ms(500);	
    }
}

