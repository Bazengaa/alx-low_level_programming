#include "main.h"

/**
* string_toupper - Entry point & function name
*
* @s: variable
*
* this program converts lowercase string to upper
*
* Return: char
*
**/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
