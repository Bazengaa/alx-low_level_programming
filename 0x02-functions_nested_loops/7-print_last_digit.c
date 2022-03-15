#include "main.h"
/**
* print_last_digit - Entry point
*
* this function prints the last digit
*
**/
int print_last_digit(int x)
{
	int pld;

	pld = (x % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
