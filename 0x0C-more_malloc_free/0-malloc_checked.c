#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc. If malloc fails,
 * the function causes normal process termination with a status value of 98.
 *
 * @b: The size of memory, in bytes, to be allocated.
 * Return: A pointer to the allocated memory on success.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
