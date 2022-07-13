#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int x[100], i, j = 0;

	for (i = n - 1; i >= 0; i--)
	{
		x[j] = a[i];
		j++;
	}

	for (i = 0; i < n; i++)
		a[i] = x[i];
}
