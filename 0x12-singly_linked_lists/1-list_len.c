#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: The list whose number of elements is to be printed.
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (!h)
		return (0);

	for (; h->next; h = h->next)
	{
		count++;
	}

	return (count);
}
