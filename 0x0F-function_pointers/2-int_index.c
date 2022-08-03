#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: The array.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to be used to compare values.
 * Return: The index of the first element for which the cmp function
 * does not return 0, or -1 on failure.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
