#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the data struct
 *@d : pointer
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
