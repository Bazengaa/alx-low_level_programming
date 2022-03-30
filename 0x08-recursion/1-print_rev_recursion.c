#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _print_rev_recursion - Entry point and name of function
*
* @s: Pointer name
*
* This function prints a string in reverse
*
* Return: nothing
**/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
