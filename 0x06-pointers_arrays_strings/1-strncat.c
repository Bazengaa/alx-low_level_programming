#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _strncat - Entry point and function name
*
* @dest: first variable
*
* @src: second variable
*
* @n: third variable
*
* This function concatenates two strings
*
* Return: char
**/
char *_strncat(char *dest, char *src, int n)
{
	/**char *hold = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src == n)
	{
		*dest = *src;
		dest++;
		src = src + n;
		src++;
	}
	*dest = '\0';
	return (hold);**/

	char *c = strcat(dest, src);
	return (c);
}
