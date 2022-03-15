#include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* this program prints the alphabet in lowercase 10 times
*
*
**/
void print_alphabet_x10(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);

		}
		j++;
		_putchar('\n');
	}
	  /**_putchar('\n');**/
}
