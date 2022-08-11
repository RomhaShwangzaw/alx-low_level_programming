#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: The start of the list to be freed.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *h = NULL;

	for (h = head; h; h = h->next)
	{
		if (h->str)
			free(h->str);

		free(h);
	}
}
