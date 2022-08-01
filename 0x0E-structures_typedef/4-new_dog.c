#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	d = malloc(sizeof(*d));
	if (d == NULL)
		return (NULL);

	name_copy = malloc(sizeof(name));
	if (name_copy == NULL)
		return (NULL);

	owner_copy = malloc(sizeof(owner));
	if (owner_copy == NULL)
		return (NULL);

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;
	return (d);
}
