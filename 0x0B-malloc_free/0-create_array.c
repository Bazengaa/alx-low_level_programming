#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - Creates an array of chars
*
* @size: Name of first variable
*
* @c: Name of second variable
*
* Return: 0 if size = 0 or if it fails
**/
char *create_array(unsigned int size, char c)
{

	char *str;
	unsigned int i;

	str = (char *) malloc(sizeof(char) * size);

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
