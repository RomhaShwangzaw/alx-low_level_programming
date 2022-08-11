#include "main.h"
#include <stddef.h>

/**
 * pow_two - multiplies a number x by n power of 2.
 * @x: The number to be multiplied.
 * @n: The power of 2, with which the number x will be multiplied.
 * Return: The result of the multiplication.
 */
unsigned int pow_two(unsigned int x, unsigned int n)
{
	unsigned int i, ret = 1;

	if (x == 0)
		return (0);

	if (n == 0)
		return (x);

	for (i = 0; i < n; i++)
		ret *= 2;

	return (ret);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: A pointer pointing to a string of 0 and 1 chars.
 * Return: The converted number on success, or 0 on failure.
 *
 * Description: Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0, i, j, len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		;

	for (i = len - 1, j = 0; b[j]; i--, j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		ret += pow_two(b[j] - '0', i);
	}

	return (ret);
}
