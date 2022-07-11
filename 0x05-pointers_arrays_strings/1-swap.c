#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The first value to be swapped.
 * @b: The second value to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
