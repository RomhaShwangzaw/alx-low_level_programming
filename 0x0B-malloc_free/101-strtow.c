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
	char **s;
	char tmp[100];
	int i = 0;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);

	strcpy(tmp, str);

	s = malloc(20 * sizeof(*s));
	if (s == NULL)
		return (NULL);

	s[i] = malloc(15 * sizeof(char));
	if (s[i] == NULL)
		return (NULL);

	s[i] = strtok(tmp, " ");
	while (s[i])
	{
		i++;
		s[i] = malloc(15 * sizeof(char));
		if (s[i] == NULL)
			return (NULL);

		s[i] = strtok(NULL, " ");
	}

	return (s);
}
