#include "main.h"
#include <string.h>
/**
* _strstr - Entry point & function name
*
* @haystack: pointer name
* @needle: pointer name
*
* This function locates a substring
*
* Return: Char
**/
char *_strstr(char *haystack, char *needle)
{
	char *b = strstr(haystack, needle);

	return (b);
}
