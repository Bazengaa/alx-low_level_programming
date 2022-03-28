#include "main.h"
#include <string.h>
/**
* _strpbrk - Entry point & function name
*
* @s: pointer name
* @accept: pointer name
*
* This string searches a string for any set of bytes
*
* Return: char
**/
char *_strpbrk(char *s, char *accept)
{
	char *b = strpbrk(s, accept);

	return (b);
}
