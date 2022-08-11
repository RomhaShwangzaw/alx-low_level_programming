#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The number to be checked.
 * @index: The index, starting from 0 of the bit you want to get.
 * Return: The value of the bit at index 'index' or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit, ret;

	bit = 1 << index;
	ret = (n & bit) ? 1 : 0;

	return (ret);
}
