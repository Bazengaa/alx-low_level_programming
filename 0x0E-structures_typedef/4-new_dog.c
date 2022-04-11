#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * *new_dog - new dog structure
 *@name : pointer
 *@owner : pointer
 *@age : float
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_n;

	new_n = malloc(sizeof(dog_t));

	if (new_n == NULL)
		return (NULL);
	if (name == NULL)
		new_n->name = NULL;
	else
	{
	new_n->name = malloc(_strlen(name) + 1);
	if (new_n->name == NULL)
	{
		free(new_n);
		return (NULL);
	}
		new_n->name = _strcpy(new_n->name, name);
	}
	if (owner == NULL)
		new_n->owner = NULL;
	else
	{
	new_n->owner = malloc(_strlen(owner) + 1);
	if (new_n->owner == NULL)
	{
		free(new_n->name);
		free(new_n);
		return (NULL);
	}
		new_n->owner = _strcpy(new_n->owner, owner);
	}
	new_n->age = age;
	return (new_n);

}

/**
 * _strlen - pointer s
 *@s: pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int len = 0;

	while  (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
/**
 * *_strcpy -pointer
 *@dest : pointer
 *@src : pointer
 *Return: On success 1
 *On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0 ; src[j] ; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
