/*
 * T1_Ex1.c
 *
 * Created: 26.08.2025 15:54:45
 * Author : teo
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0xFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTC = (1 << PC0) | (1 << PC2) | (1 << PC4) | (1 << PC6);
		
		_delay_ms(500);
		
		PORTC = (1 << PC1) | (1 << PC3) | (1 << PC5) | (1 << PC7);

		_delay_ms(500);
    }
}



