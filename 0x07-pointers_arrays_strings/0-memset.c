#include "main.h"
#include <string.h>
/**
* _memset - Entry point & function name
*
* @s: string name
* @b: variable name
* @n: variable name
*
* This function fills memory with a constant byte
*
* Return: char value
*
**/
char *_memset(char *s, char b, unsigned int n)
{
	char *c = memset(s, b, sizeof(char) * n);

	return (c);
}
