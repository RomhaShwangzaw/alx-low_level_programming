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

	d = malloc(sizeof(*d));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(name));
	if (d->name == NULL)
		return (NULL);

	d->owner = malloc(sizeof(owner));
	if (d->owner == NULL)
		return (NULL);

	strcpy(d->name, name);
	strcpy(d->owner, owner);

	d->age = age;
	return (d);
}
