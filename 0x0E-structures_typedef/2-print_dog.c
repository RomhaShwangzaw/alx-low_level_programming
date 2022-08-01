#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: the dog struct to be printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
