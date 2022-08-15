#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: The start of the list.
 * @index: The index of the node, starting at 0.
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int count = 0;

	for (node = head; node; node = node->next)
	{
		if (index == count)
			return (node);

		count++;
	}

	return (node);
}
