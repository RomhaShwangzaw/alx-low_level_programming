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

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			if (s[i - 1] == 32 || s[i - 1] == '\t' || s[i - 1] == '\n'
					|| s[i - 1] == ',' || s[i - 1] == ';'
					|| s[i - 1] == '.' || s[i - 1] == '!'
					|| s[i - 1] == '?' || s[i - 1] == '"'
					|| s[i - 1] == '(' || s[i - 1] == ')'
					|| s[i - 1] == '{' || s[i - 1] == '}')
				s[i] -= 32;

	return (start);
}

