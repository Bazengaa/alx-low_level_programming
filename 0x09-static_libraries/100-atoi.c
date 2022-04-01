#include "main.h"

/**
 * _atoi - print nums
 * @s: the array value
 *
 * Return: x
 */
int _atoi(char *s)
{
	int length;
	int length2;
	int length3;
	int dash = 0;
	int x;

	for (length = 0; s[length] != '\0'; length++)
	{
		if (s[length] == '-')
		{
			dash++;
		}
	}
	for (length = 0; length != '\0'; length++)
	{
		if (s[length] >= '0' && s[length] <= '9')
		{
			break;
		}
	}
	for (length2 = length; s[length2] != '\0'; length2++)
	{
		if (s[length2] <= '0' && s[length] >= '9')
		{
			break;
		}
	}
	if (dash % 2 == 0)
	{
		for (length3 = length; s[length3] <= s[length2]; length3++)
		{
			x = ((10 * x + s[length3]) * -1);
		}
	}
	else
		for (length3 = length; s[length3] <= s[length2]; length3++)
		{
			x = (10 * x + s[length3]);
		}
	return (x);
}
