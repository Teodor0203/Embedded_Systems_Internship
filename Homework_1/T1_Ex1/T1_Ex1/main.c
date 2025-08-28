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
	DDRB = 0xFF;
	DDRD = 0xFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTB = (1 << PB7) | (1 << PB5);
		PORTD = (1 << PD3) | (1 << PD1);
		
		_delay_ms(500);
		
		PORTB = (1 << PB6) | (1 << PB4);
		PORTD = (1 << PD2) | (1 << PD0); 

	
		_delay_ms(500);
    }
}



