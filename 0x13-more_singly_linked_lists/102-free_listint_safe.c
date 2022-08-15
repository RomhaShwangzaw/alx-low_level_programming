#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: The address of the start of the list to be freed.
 * Return: The size of the list that was free’d.
 *
 * Description:
 * - This function can free lists with a loop.
 * - You should go though the list only once.
 * - The function sets the head to NULL.
 *
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);

	for (; *h; *h = tmp)
	{
		tmp = (*h)->next;
		free(*h);
		count++;

		if (*h <= tmp)
		{
			*h = NULL;
			return (count);
		}
	}

	*h = NULL;
	return (count);
}
