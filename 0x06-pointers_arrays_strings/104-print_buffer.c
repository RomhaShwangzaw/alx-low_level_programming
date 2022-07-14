#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: The buffer to be printed..
 * @size: The size of the buffer to be printed.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%.8x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
				printf("  ");
			else
				printf("%.2x", b[i + j]);

			if ((j % 2) != 0)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
				break;

			if (b[i + j] >= 32 && b[i + j] <= 126)
				printf("%c", b[i + j]);
			else
				printf(".");
		}

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
