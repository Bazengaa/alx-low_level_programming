#include "main.h"
#include <stdio.h>
/**
* reverse_array - Entry point & function name
*
* @a: First variable
*
* @n: second variable
*
* this function prints array in reverse
*
* Return: nothing
**/
void reverse_array(int *a, int n)
{
	int i, j;

	int array2[50];

	for (i = n - 1, j = 0; i >= 0; i--, j++)
	array2[j] = a[i];

	for (i = 0; i < n; i++)
	a[i] = array2[i];

	for (i = 0; i < n; i++)
	;
}
