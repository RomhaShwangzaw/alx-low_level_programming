#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers, which contains all the values
 * from min (included) to max (included), ordered from min to max.
 *
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 * Return: A pointer to the newly created array on success, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
		arr[j] = i;

	return (arr);
}
