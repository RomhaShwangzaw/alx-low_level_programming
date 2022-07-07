#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: The size of the square to be printed.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
