#include "main.h"
#include <string.h>
/**
* _memcpy - Entry point and function name
*
* @dest: name of pointer
* @src: name of pointer
* @n: varaible name
*
* This function copies a memory area
*
* Return: char
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = memcpy(dest, src, n);

	return (c);
}
