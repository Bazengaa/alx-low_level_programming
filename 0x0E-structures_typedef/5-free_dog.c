#include <string.h>
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free dog structure
 *@d: pointer struct
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
