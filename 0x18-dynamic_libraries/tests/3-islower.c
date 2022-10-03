#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: The character to check
 *
 * Return: If lowercase 1.
 * If not lowercase 0 is returned.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
