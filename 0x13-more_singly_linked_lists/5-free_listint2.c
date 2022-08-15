#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: The address of the start of the list to be freed.
 * Return: Nothing.
 *
 * Description: The function sets the head to NULL.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *h = NULL;

	for (; *head; *head = h)
	{
		h = (*head)->next;
		free(*head);
	}
	*head = NULL;
}
