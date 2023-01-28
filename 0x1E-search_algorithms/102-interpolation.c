#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * using the Interpolation search algorithm.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located, or -1 if
 * value is not present in array or if array is NULL.
 *
 * Description: Every time you compare a value in the array to the value
 * you are searching, you have to print this value.
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, pos, low, high;

	low = 0;
	high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low]))
					* (value - array[low]));

	if (pos >= size)
		printf("Value checked array[%ld] is out of range\n", pos);

	for (i = pos; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
