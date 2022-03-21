#include "main.h"
/**
* puts2 - Entry point & function name
*
* @str: variable name
*
* This function prints every other character of a strin
*
* void: returns nothing
**/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		i++;
	}
	_putchar('\n');
}
