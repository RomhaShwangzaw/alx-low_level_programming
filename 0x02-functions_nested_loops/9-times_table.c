#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	char a, b;
	int c;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = (a - '0') * (b - '0');
			if (c < 10)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (b != '9')
			{
				_putchar(',');
				_putchar(' ');
				if ((c + (a - '0')) < 10)
					_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
