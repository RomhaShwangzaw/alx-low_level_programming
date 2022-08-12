#include "main.h"

/**
 * count_active_bits - counts the number of bits set to 1 in the number.
 * @n: The number to be searched for active bits.
 * Return: The number of bits whose value is 1.
 */
unsigned int count_active_bits(unsigned long int n)
{
	unsigned int bits = 0;

	if (n > 1)
		bits += count_active_bits(n >> 1);

	bits += (n & 1) ? 1 : 0;
	return (bits);
}

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits you would need to flip to get from n to m.
 *
 * Description: You are not allowed to use the % or / operators.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;

	d = n ^ m;
	return (count_active_bits(d));
}
