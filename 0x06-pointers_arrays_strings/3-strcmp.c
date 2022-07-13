#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: the difference between the two strings.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
