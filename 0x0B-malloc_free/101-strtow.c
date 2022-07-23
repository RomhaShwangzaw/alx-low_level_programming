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
	char *token;
	int i = 0;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);

	s = malloc(20 * sizeof(*s));
	if (s == NULL)
		return (NULL);

	s[i] = malloc(15 * sizeof(char));
	if (s[i] == NULL)
		return (NULL);

	token = strtok(str, " ");
	strcpy(s[i], token);
	while (s[i] != NULL)
	{
		i++;
		s[i] = malloc(15 * sizeof(char));
		if (s[i] == NULL)
			return (NULL);

		token = strtok(NULL, " ");
		strcpy(s[i], token);
	}

	return (s);
}
