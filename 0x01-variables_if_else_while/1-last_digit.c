#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - Entry point
*
* Return: Always 0 (Success)
**/
int main(void)
{
	int n;
	int LastDigit;
	char str[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	LastDigit = n % 10;
	if (LastDigit > 5)
	{printf("%s %d is %d and is greater than 5\n", str, n, LastDigit); }
	else if (LastDigit < 6 && LastDigit != 0)
{printf("%s %d is %d and is less than 6 and not 0\n", str, n, LastDigit); }
	else
	{printf("%s %d is %d and is 0\n", str, n, LastDigit); }
	return (0);
}
