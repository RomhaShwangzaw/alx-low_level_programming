#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to be converted to binary.
 * Return: Nothing.
 *
 * Description:
 * - You are not allowed to use arrays
 * - You are not allowed to use malloc
 * - You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	(n & 1) ? _putchar('1') : _putchar('0');
}
