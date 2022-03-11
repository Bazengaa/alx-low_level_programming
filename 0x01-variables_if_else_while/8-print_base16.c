#include <stdio.h>
/**
* main - Entry point
*
* This program prints all numbers of base 16 in lowercase
*
* Return: Always 0 (Successful)
*
**/

int main(void)
{
	int c;
	char alphahex;

	for (c = 48; c < 58; c++)
	{putchar(c); }
	for (alphahex = 'a'; alphahex <= 'f'; alphahex++)
	{putchar(alphahex); }
	putchar('\n');
	return (0);
}
