#include <stdio.h>
/**
* main - Entry point
*
* This program prints the alphabet in lowercase without letters q and e
*
* Return: Always 0 (Successful)
**/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
	if (alpha != 'e' && alpha != 'q')
	{putchar(alpha); }
	alpha++; }
	putchar('\n');
	return (0);
}
