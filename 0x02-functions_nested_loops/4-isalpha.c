#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to check
 *
 * Return: If alphabetic 1.
 * If not alphabetic 0 is returned.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
