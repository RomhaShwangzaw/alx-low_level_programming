#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc,
 * and initializes every byte to 0.
 *
 * @nmemb: The number of elements of the array.
 * @size: The size of each element in the array.
 * Return: A pointer to the allocated memory on success, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	p = memset(p, 0, nmemb * size);
	return (p);
}
