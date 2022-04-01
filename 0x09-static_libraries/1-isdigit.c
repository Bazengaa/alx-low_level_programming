#include "main.h"
/**
* _isdigit - Entry point & name of function
*
* @c: is the input value type
*
* this function checks for a digit 0 through 9
*
* Return: 1 if c is a digit between 0 and 9, 0 if c isn't
**/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	return (0);
}

