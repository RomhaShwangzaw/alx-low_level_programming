#include "main.h"
#include <string.h>

/**
 * is_palindrome - Checks whether a string is a palindrome or not.
 * @s: The string.
 * Return: 1 if s is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	char tmp[1000] = {0};

	if (strlen(s) <= 1)
		return (1);

	if (s[0] != s[strlen(s) - 1])
		return (0);

	strncpy(tmp, s, strlen(s) - 1);

	return (is_palindrome(tmp + 1));
}
