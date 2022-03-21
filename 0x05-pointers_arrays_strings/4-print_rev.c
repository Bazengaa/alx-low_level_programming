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
	int len;
	for (len = 0; s[len] != '\0'; len++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
