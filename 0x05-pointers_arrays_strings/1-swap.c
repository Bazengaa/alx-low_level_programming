#include "main.h"
/**
* swap_int - Entry point & function name
*
* @a: name of first variable
* @b: name of second variable
*
* void: return nothing
**/
void swap_int(int *a, int *b)
{

	int c = *a;
	*a = *b;
	*b = c;
}
