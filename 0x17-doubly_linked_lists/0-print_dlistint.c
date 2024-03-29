#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: The head of the doubly linked list.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
