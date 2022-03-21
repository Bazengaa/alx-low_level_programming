#include "main.h"
/**
* puts_half - Entry point & function name
*
* @str: variable name
*
* This program prints the second half of string
*
* void: returns nothing
**/
void puts_half(char *str)
{
	int len, i, n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	n = (len - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
