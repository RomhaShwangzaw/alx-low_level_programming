#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: The string.
 * Return: The converted string.
 */
char *cap_string(char *s)
{
	unsigned long int i, j;
	char *start = s;
	char sep[] = {32, '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'}

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			for (j = 0; sep[j] != '\0'; j++)
				if (s[i - 1] == sep[j])
				{
					s[i] -= 32;
					break;
				}

	return (start);
}

