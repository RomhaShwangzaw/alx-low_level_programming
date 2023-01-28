#include "search_algos.h"

/**
 * binary_search_recursive - searches for a value in an array of integers
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
int binary_search_recursive(int *array, size_t start, size_t end, int value)
{
	size_t i;

	if (end < start)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = start + (end - start) / 2;
	if (array[i] == value && (i == start || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (binary_search_recursive(array, start, i, value));
	return (binary_search_recursive(array, i + 1, end, value));
}

/**
 * advanced_binary - searches for a value in an array of integers
 * using the Binary search algorithm.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located, or -1 if
 * value is not present in array or if array is NULL.
 *
 * Description: It will print the array being searched every time it changes.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
