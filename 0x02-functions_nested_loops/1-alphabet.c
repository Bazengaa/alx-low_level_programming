#include "main.h"
/**
* main - Entry point
*
* this program prints alphabet in lowercase
*
* Return: Always 0
**/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return;
}
