#include "main.h"
/**
* print_square - Entry point and function name
*
* @size: variable name
*
* this function prints a square
*
* Return: void, returns nothing
**/
void print_square(int size)
{
	int i = 0, j = 0;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			_putchar('#');
			if (j == size - 1 && i != j)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
