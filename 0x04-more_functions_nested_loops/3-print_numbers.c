#include "main.h"

/**
 * print_numbers - Print the numbers from 0 to 9 
 * REturn: The numbers from 0 to 9
 */

void print_numbers(void)

{
	int x;
	for (x = 0; x< 10 ; x++)
	{
	_pitchar(x + '0');
	}
	_putchar('\n');
}
