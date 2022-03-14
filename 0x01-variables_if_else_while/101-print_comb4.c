#include <stdio.h>
/**
* main - Entry point
*
* this program prints a combination of three digits
*
* Return: Always 0 (Success)
**/
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i < j && j < k && i != j && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
