#include "main.h"

/**
 * print_number - prints an integer, using only _putchar()
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int x;

	x = -3;
	if (n < 0)
	{
		_putchar(x + '0');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
