#include <stdio.h>
/**
* main - Entry point
*
* This program prints a combination of two numbers
*
* Return: Always 0 (Success)
*
**/

int main(void)
{
	int a, b;

	for (a = 48; a < 57; a++)
	{
	for (b = 49; b <= 57; b++)

		{
		if (a < b && a != b)
		{ putchar(a);
		putchar(b);
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
