#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: The string.
 * Return: The converted string.
 */
char *cap_string(char *s)
{
	int i;
	char *start = s;

	for (i = 0; i < _strlen(s); i++)
		if (s[i] >= 97 && s[i] <= 122)
			if (s[i - 1] == 32 || s[i - 1] == '\t' || s[i - 1] == '\n'
					|| s[i - 1] == ',' || s[i - 1] == ';'
					|| s[i - 1] == '.' || s[i - 1] == '!'
					|| s[i - 1] == '?' || s[i - 1] == '"'
					|| s[i - 1] == '(' || s[i - 1] == ')'
					|| s[i - 1] == '{' || s[i - 1] == '}')
				s[i] -= 32;

	return (start);
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
