#include "main.h"
#include <string.h>
/**
* rev_string - Entry point & function name
*
* @s: variable name
*
* This function prints string in reverse
*
* void: returns nothing
**/
void rev_string(char *s)
{
	int i, len, temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
	temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
	}
}
