#include "main.h"
/**
* _puts_recursion - Entry point and function name
*
* @s - pointer name
*
* This function prints a string followed by a new line
*
* Return: nothing
**/
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
