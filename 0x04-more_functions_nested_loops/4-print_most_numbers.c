#include "main.h"
/**
* print_most_numbers - Entry point & function name
*
* this function prints numbers from 0 to 9 without 2 & 4
*
* void: return nothing
**/
void print_most_numbers(void)
{
	char num = 48;

	while (num <= 57)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
