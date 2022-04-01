#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function
 * @argc: number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 is success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
