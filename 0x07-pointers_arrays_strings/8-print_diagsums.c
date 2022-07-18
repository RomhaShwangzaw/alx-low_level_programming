#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The square matrix of integers.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_d1 = 0, sum_d2 = 0;

	for (i = 0; i < size * size; i += size + 1)
		sum_d1 += a[i];

	for (i = size - 1; i < ((size * size) - 1); i += size - 1)
		sum_d2 += a[i];

	printf("%d, %d\n", sum_d1, sum_d2);
}
