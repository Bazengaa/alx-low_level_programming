#include "main.h"
#include <string.h>
/**
* _strspn - Entry point and function name
*
* @s: pointer name
* @accept: pointer name
*
* This function gets the lenght of a prefix substring
*
* Return: unsigned int
**/
unsigned int _strspn(char *s, char *accept)
{
	int i = strspn(s, accept);

	return (i);
}
