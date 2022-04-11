#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - intialize to data struct
 * @d : pointing to data struct
 * @name : pointer
 * @age : float
 * @owner : pointer
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
