#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string to be copied.
 * Return: A pointer to the duplicated string on success, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(strlen(str) + 1);
	if (s == NULL)
		return (NULL);

	strcpy(s, str);
	return (s);
}
