#include "main.h"
/**
* _puts - Entry point & function name
*
* @str: variable name
*
* void: returns nothing
**/
void _puts(char *str)
{
	while (*str)
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}

