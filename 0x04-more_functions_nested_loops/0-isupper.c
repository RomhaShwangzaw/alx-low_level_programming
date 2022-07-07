#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: The character to check
 *
 * Return: If uppercase 1.
 * If not uppercase 0 is returned.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
