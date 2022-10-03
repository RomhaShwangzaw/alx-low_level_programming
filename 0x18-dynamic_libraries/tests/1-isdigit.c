#include "main.h"

/**
 * _isdigit - checks for a digit(0 through 9).
 * @c: The character to check
 *
 * Return: If c is a digit, 1.
 * If not, 0 is returned.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
