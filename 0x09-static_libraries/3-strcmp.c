#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _strcmp - Entry point and function name
*
* @s1: variable name
*
* @s2: variable name
*
* this function compares two strings
*
* Return: int
**/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = strcmp(s1, s2);

	return (i);
}

