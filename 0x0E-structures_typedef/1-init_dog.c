#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: a pointer to a dog struct.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: the dog owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(*d));
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}