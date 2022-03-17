#include "main.h"
/**
* print_numbers - Entry point & function name
*
* this function prints numbers from 0 to 9
*
* void: return nothing
**/
void print_numbers(void)
{
	char num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
