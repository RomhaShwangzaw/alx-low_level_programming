#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: The address of the number to be modified.
 * @index: The index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = 1 << index;
	*n |= bit;

	return (1);
}
