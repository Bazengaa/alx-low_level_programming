#include "main.h"
/**
* print_line - Entry point & function name
*
* @n: value type
*
* this function draws a straight line in the terminal
*
* return: Always 0
**/
void print_line(int n)
{
	while (n > 0)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
