#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: The start of the list to be freed.
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *h = NULL;

	for (; head; head = h)
	{
		h = head->next;
		free(head);
	}
}
