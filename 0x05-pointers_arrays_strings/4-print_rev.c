#include "main.h"
#include <string.h>
/**
* print_rev - Entry point & function name
*
* @s: variable name
*
* This function prints string in reverse
*
* void: return nothing
**/
void print_rev(char *s)
{
	int len, i;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
