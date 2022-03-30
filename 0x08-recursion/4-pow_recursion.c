#include "main.h"
/**
* _pow_recursion - Entry point and function name
*
* @x: first variable
* @y: second variable
*
* This function returns x raised to power of y
*
* Return: -1 if y is less than 0
**/
int _pow_recursion(int x, int y)
{

	/**i = pow(x, y);**/

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
