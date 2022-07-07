#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	j = 0;
	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		j++;
	}
}
