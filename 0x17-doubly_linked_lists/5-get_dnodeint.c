#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: The head of the linked list.
 * @index: The index of the node, starting from 0.
 * Return: The nth node if it exists, NULL if it doesn't.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}

	return (NULL);
}
