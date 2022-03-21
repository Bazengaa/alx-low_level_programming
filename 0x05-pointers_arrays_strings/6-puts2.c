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
	while (*str)
	{
		if (*str > '\0' && *str == '\0')
		{
			break;
		}
		else
		{
			_putchar(*str);
		}
		str += 2;
	}
	_putchar('\n');
}
