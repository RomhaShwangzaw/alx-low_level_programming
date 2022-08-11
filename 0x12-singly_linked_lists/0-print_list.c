#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: The list whose elements are to be printed.
 * Return: The number of nodes in the list.
 *
 * Description: If str is NULL, print [0] (nil)
 *
 */
size_t print_list(const list_t *h)
{
	size_t count = 1;

	if (!h)
		return (0);

	for (; h->next; h = h->next)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");

		count++;
	}

	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[%d] %s\n", 0, "(nil)");

	return (count);
}
