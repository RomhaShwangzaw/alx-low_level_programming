#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to be concatenated from s2.
 *
 * Return: A pointer to memory which contains the contents of s1,
 * followed by the first n bytes of s2, and null terminated, on success,
 * or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > strlen(s2))
		n = strlen(s2);

	s = malloc(strlen(s1) + n + 1);
	if (s == NULL)
		return (NULL);

	strcpy(s, s1);

	for (i = 0; i < n; i++)
		s[strlen(s1) + i] = s2[i];

	s[strlen(s1) + i] = '\0';

	return (s);
}
