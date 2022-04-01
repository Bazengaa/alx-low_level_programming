#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* @*_strcat - Entry point and function name
*
* @dest: name of first variable
*
* @src: name of second variable
*
* This function concatenates two strings
*
* Return: char
**/

char *_strcat(char *dest, char *src)
{
	char *hold = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (hold);
}

