#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated, on success,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = malloc(strlen(s1) + strlen(s2) + 1);
	if (s == NULL)
		return (NULL);

	strcpy(s, s1);
	strcpy(s + strlen(s1), s2);
	return (s);
}
