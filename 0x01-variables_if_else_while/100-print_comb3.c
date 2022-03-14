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

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (a < b && a != 57)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
