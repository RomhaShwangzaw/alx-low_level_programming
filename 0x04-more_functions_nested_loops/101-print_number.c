#include "main.h"

/**
 * reverse_digits - reverses the digits of an integer.
 * @n: The integer to be reversed.
 * Return: The reversed integer.
 */
int reverse_digits(int n)
{
	int rem, reverse;

	reverse = 0;
	while (n != 0)
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n = n / 10;
	}

	return (reverse);
}

/**
 * print_number - prints an integer, using only _putchar()
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int rev;

	if (n == 0)
		_putchar(n % 10 + '0');

	rev = reverse_digits(n);
	if (n < 0)
	{
		_putchar('-');
		rev = -rev;
	}

	while (rev != 0)
	{
		_putchar(rev % 10 + '0');
		rev = rev / 10;
	}
}
