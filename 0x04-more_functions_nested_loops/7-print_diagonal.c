#include "main.h"
/**
* print_diagonal - Entry point & function name
*
* @n: variable name
*
* this function draws a diagonal line
*
* Return: Always 0
**/
void print_diagonal(int n)
{
	int i = 0, j = 0;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (i == j)
			{
				_putchar('\\');
				break;
			}
				_putchar(' ');
		}
		if (i != n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
