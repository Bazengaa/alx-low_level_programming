#include <stdio.h>

/**
* main - Entry point
*
* This code prints the alphabet in lowercase and reverse
*
* Return: Always 0 (Successful)
**/

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{putchar(alpha); }
	putchar('\n');
	return (0);
}
