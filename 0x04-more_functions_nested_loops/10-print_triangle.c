#include "main.h"
/**
* print_triangle - Prints a triangle, followed by a new line.
*@size: Size of the triangle.
* Return: Void.
*/
void print_triangle(int size)
{
	int i = 0, j = 0;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size - i - 1; ++j)
		{
			_putchar(' ');
		}
		for (j = size - i - 1	; j < size; ++j)
		{
			_putchar('#');
			if (j == size - 1 && i != size - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
