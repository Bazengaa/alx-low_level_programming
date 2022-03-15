#include "main.h"
/**
* main - Entry point
*
* this program prints _putchar
*
* Return: Always 0 (Success)
*
**/
int main(void)
{
	char *alpha = "_putchar";

	while (*alpha)
	{
		_putchar(*alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
