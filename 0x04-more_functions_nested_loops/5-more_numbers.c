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
	int i = 0, j;

	while (i < 10)
	{
		j = 48;
		while (j <= 57)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	/**_putchar('\n');**/
}
