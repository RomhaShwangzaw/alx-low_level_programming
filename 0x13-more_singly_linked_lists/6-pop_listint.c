#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: The address of the start of the list.
 * Return: The head node's data (n).
 *
 * Description: If the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	int ret;
	listint_t *tmp = NULL;

	if (*head == NULL)
		return (0);

	ret = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (ret);
}
