/*
 * Project1.c
 *
 * Created: 4/7/2020 1:14:33 PM
 * Author : MrTrashCan
 */ 

#include <avr/io.h>
#include "avr.h"

void my_wait();

int main(void)
{
    /* Replace with your application code */
	SET_BIT(DDRB,0);
	CLR_BIT(DDRB,1);
    while (1) 
    {
		if(GET_BIT(PINB,1))
		{
			CLR_BIT(PORTB,0);
		}
		else
		{
			SET_BIT(PORTB,0);
			avr_wait(500);
			CLR_BIT(PORTB,0);
			avr_wait(500);
		}
    }
}
