#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: The address of the number to be modified.
 * @index: The index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	/* Check for index out of range */
	if (index >= (sizeof(*n) * 8))
		return (-1);

	bit = 1 << index;
	*n |= bit;
	*n ^= bit;

	return (1);
}
