#include "main.h"
/**
* more_numbers - Entry point & function name
*
* this function prints numbers from 0 to 14, 10 times
*
* void: return nothing
**/
void more_numbers(void)
{
	int i, j = 10;
while (j--)
{
for (i = 0; i <= 14; ++i)
{
	if (i >= 10)
	{
		_putchar(i / 10 + '0');
	}
	_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
