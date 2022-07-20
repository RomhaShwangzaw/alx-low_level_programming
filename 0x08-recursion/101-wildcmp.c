#include "main.h"
#include <string.h>

/**
 * wildcmp - compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	char last_char1, last_char2;

	last_char1 = s1[strlen(s1) - 1];
	last_char2 = s2[strlen(s2) - 1];

	if (s1[0] != s2[0] && s2[0] != '*')
		return (0);

	if (s2[0] == '*' && (last_char1 == last_char2 || last_char2 == '*'))
		return (1);

	return (wildcmp(++s1, ++s2));
}
