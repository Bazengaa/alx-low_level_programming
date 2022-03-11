#include <stdio.h>

/**
* main - Entry point
*
* This code prints the alphabet in lowercase
*
* Return: Always 0 (Successful)
**/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{putchar(alpha); }
	putchar('\n');
	return (0);
}
