#include "main.h"
/**
 * _isalpha - a function that checks for alphabet character
 * @c: single letter input
 * Return: 1 if int c is lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}

