#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: The start of the list to be freed.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *h = NULL;

	for (; head; head = h)
	{
		if (head->str)
			free(head->str);

		h = head->next;
		free(head);
	}
}
