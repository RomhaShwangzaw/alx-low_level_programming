#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: times table ending number.
 *
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n < 0 || n > 15)
		return;

	a = 0;
	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			c = a * b;
			print_digits(c);
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
				if ((c + a) < 100)
					_putchar(' ');
				if ((c + a) < 10)
					_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

/**
 * print_digits - prints a number, digit by digit.
 * @c: The number to be printed
 *
 */
void print_digits(int c)
{
	int d;

	if (c < 10)
	{
		_putchar(c + '0');
	}
	else if (c < 100)
	{
		_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
	}
	else
	{
		d = c % 100;
		_putchar((c / 100) + '0');
		_putchar((d / 10) + '0');
		_putchar((d % 10) + '0');
	}
}
