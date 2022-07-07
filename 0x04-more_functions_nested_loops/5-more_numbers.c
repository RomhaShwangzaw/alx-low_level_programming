#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		c = 0;
		while (c <= 14)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			c++;
		}
		_putchar('\n');
	}
}
