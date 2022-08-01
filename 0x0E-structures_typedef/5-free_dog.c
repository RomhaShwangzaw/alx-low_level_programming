#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog previously created by new_dog.
 * @d: the dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	if (d)
		free(d);
}
