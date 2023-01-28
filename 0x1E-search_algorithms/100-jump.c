#include "search_algos.h"

/**
 * jump_search - searches for a value in an ordered array of integers
 * using the Jump search algorithm.
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
 * We use the square root of the size of the array as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j;

	for (i = 0; i < size; i += sqrt(size))
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if ((i + (int)sqrt(size) >= size) ||
		(array[i + (int)sqrt(size)] >= value))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
						i, i + (int)sqrt(size));
			for (j = i; j < size; j++)
			{
				printf("Value checked array[%ld] = [%d]\n",
							j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}

	return (-1);
}
