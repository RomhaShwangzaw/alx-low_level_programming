#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: The string.
 * Return: The converted string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;

	return (s);
}

/**
 * _strlen - returns the length of a string.
 * @s: The string, whose length will be calculated.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}

	return (count);
}
