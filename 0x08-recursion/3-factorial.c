#include "main.h"
/**
* factorial - Entry point and function name
*
* @n: variable name
*
* This function returns the factorial of a number
*
* Return: Always 0
**/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	return (n * factorial(n - 1));
}
