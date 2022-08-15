#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: The list whose elements are to be printed.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}

	return (count);
}
