#include "main.h"

/**
 * _isdigit -check if a character is a digit 
 * 0x: The number to be checked 
 * Return: 1 for a character that will be a digit or 0 for any else 
 */

int _isdigit(int x)

{
	//we can also use '0' and '9' as checks
	if(x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
