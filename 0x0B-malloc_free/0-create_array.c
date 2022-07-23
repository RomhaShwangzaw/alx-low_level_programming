#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: The size of the array to be created.
 * @c: The char, with which the array will be initialized.
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	s = memset(s, c, size);
	return (s);
}
