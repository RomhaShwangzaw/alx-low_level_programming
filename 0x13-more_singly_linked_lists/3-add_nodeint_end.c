#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: The address of the start of the list.
 * @n: The integer to be inserted in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL;
	listint_t *tmp;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL) /* The list is empty */
		*head = node;
	else
	{
		for (tmp = *head; tmp->next; tmp = tmp->next)
			;

		tmp->next = node;
	}

	return (node);
}
