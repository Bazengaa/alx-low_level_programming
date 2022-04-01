#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _strncpy - Entry point & function name
*
* @dest: first variable
*
* @src: second variable
*
* @n: third variable
*
* this function copies a string
*
* Return: char
**/
char *_strncpy(char *dest, char *src, int n)
{
	char *c = strncpy(dest, src, n);

	return (c);

}

