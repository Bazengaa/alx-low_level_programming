#include "main.h"
/**
* _isupper - Entry point/ name of function
*
* this function checks for uppercase characters
*
* @c: is the type of value to be used
*
* Return: Always 0
**/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	return (0);
}

