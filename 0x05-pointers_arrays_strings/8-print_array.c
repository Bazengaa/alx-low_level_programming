#include "main.h"
#include <stdio.h>
/**
* print_array - Entry point and function name
*
* @a: variable name
* @n: second variable
*
* void: return nothing
**/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
