#include "main.h"
#include <limits.h>

/**
 * print_number - prints an integer, using only _putchar()
 * @n: The integer to be printed
 */
void print_number(int n)
{
	char last_digit;

	last_digit = '0';
	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			last_digit = (n % -10) + '0';
			n = -n / 10;
		}
		else
		{
			n = -n;
		}
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
	if (last_digit != '0')
		_putchar(last_digit);
}
