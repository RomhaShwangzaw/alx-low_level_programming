#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: the dog owner's name.
 * Return: The newly created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;
	int lenname, lenowner, i;

	for (lenname = 0; name[lenname] != '\0'; lenname++)
		;
	lenname++;
	for (lenowner = 0; owner[lenowner] != '\0'; lenowner++)
		;
	lenowner++;
	name_copy = malloc(sizeof(*name_copy) * lenname);
	if (name_copy == NULL)
		return (NULL);
	owner_copy = malloc(sizeof(*owner_copy) * lenowner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		return (NULL);
	}
	d = malloc(sizeof(*d));
	if (d == NULL)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	for (i = 0; i < lenname; i++)
		name_copy[i] = name[i];

	for (i = 0; i < lenowner; i++)
		owner_copy[i] = owner[i];

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;
	return (d);
}
