#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: A pointer to a 2 dimensional array of integers on success,
 * or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **table;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	table = malloc(height * sizeof(*table));
	if (table == NULL)
		return (NULL);

	/* Set each row's value to 0, starting from row 0 */
	for (i = 0; i < height; i++)
	{
		table[i] = malloc(width * sizeof(int));

		/* If malloc fails, we have to free every allocated memory iteratively */
		if (table[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(table[j]);
			free(table);
			return (NULL);
		}

		table[i] = memset(table[i], 0, width * sizeof(int));
	}

	return (table);
}
