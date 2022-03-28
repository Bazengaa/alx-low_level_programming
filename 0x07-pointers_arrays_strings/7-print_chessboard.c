#include "main.h"
/**
* print_chessboard - Entry point & function name
*
* @a: pointer name
* @8: Array
*
* This function prints a chessboard
*
* Return: nothing
**/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for(i = 0; a[i] != '\0'; i++)
	{
		for(j = 0; j < 8; j++)
		{
			_putchar(i);
			_putchar(j);
		}
		_putchar('\n');
	}
}
