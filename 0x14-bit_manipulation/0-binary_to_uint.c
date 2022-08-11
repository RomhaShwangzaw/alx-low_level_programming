#include "main.h"
#include <stddef.h>

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
	unsigned int ret = 0, i, j, len, digit;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		;

	for (i = len - 1, j = 0; b[j]; i--, j++)
	{
		digit = b[j] - '0';
		if (digit != 0 && digit != 1)
			return (0);

		ret += (digit * (1 << i)); /* (1 << i) is the same as 2 ^ i */
	}

	return (ret);
}
