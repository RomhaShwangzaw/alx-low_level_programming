#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words, based on a space delimiter.
 * @str: The string to be split.
 * Return: A pointer to an array of strings (words) on success,
 * or NULL on failure.
 */
char **strtow(char *str)
{
	char **s, **a;
	char tmp[100];
	int i = 0, j;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);

	strcpy(tmp, str);

	s = malloc(20 * sizeof(*s));
	if (s == NULL)
		return (NULL);

	s[i] = malloc(20 * sizeof(char));
	if (s[i] == NULL)
		return (NULL);
	s[i] = strtok(tmp, " ");
	if (s[i] == NULL)
		return (NULL);
	while (s[i])
	{
		i++;
		s[i] = malloc(20 * sizeof(char));
		if (s[i] == NULL)
			return (NULL);
		s[i] = strtok(NULL, " ");
	}

	a = malloc((i + 1) * sizeof(*a));
	for (j = 0; j < i; j++)
	{
		a[j] = malloc((strlen(s[j]) + 1) * sizeof(char));
		strcpy(a[j], s[j]);
	}
	a[j] = NULL;

	return (a);
}
