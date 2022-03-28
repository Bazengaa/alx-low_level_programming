#include "main.h"
#include <string.h>
/**
* _strchr - Entry point and function name
*
* @s: name of pointer
* @c: name of variable
*
* This function locates a character in a string
*
* Return: char
**/
char *_strchr(char *s, char c)
{
	char *d = strchr(s, c);

	return (d);
}
