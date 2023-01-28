#include "search_algos.h"

/**
 * _binary_search - searches for a value in an array of integers
 * recursively using the Binary search algorithm.
 *
 * @array: an array of integers to search the value in.
 * @start: the starting index of the search.
 * @end: the last index of the search.
 * @value: the value to search for.
 *
 * Return: the first index where value is located, or -1 if
 * value is not present in array or if array is NULL.
 *
 * Description: It will print the array being searched every time it changes.
 */
int _binary_search(int *array, int start, int end, int value)
{
	int mid, i;

	if (start >= end)
		return (-1);

	printf("Searching in array:");
	for (i = start; i < end - 1; i++)
		printf(" %d,", array[i]);
	printf(" %d\n", array[end - 1]);

	mid = (start + end - 1) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid - 1] >= value)
		return (_binary_search(array, start, mid, value));
	else
		return (_binary_search(array, mid + 1, end, value));
}

/**
 * exponential_search - searches for a value in an array of integers
 * using the Exponential search algorithm.
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
 * Once you’ve found the good range, you need to use a binary search:
 *	- Every time you split the array, you have to print the new array
 *	(or subarray) you’re searching in.
 *
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i + 1 : size;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right - 1);
	return (_binary_search(array, i / 2, right, value));
}
