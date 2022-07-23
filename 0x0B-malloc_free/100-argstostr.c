#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: The number of arguments.
 * @av: An array containing all the arguments.
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += strlen(av[i]);

	s = malloc((size + ac) * sizeof(char));
	if (s == NULL)
		return (NULL);

	size = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(s + size, av[i]);
		s[size + strlen(av[i])] = '\n';
		size += strlen(av[i]) + 1;
	}

	return (s);
}
