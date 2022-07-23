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
	char **s, *token_arr[20];
	char tmp[100];
	int i = 0, j;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);

	strcpy(tmp, str);

	token_arr[i] = strtok(tmp, " ");
	if (token_arr[i] == NULL)
		return (NULL);

	while (token_arr[i])
	{
		i++;
		token_arr[i] = strtok(NULL, " ");
	}

	s = malloc((i + 1) * sizeof(*s));
	for (j = 0; j < i; j++)
	{
		s[j] = malloc((strlen(token_arr[j]) + 1) * sizeof(char));
		strcpy(s[j], token_arr[j]);
	}
	s[j] = NULL;

	return (s);
}
