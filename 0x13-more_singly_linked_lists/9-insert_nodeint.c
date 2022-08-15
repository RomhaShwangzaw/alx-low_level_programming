#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: The address of the start of the list.
 * @idx: The index of the list where the new node should be added.
 * Index starts at 0.
 *
 * @n: The integer to be inserted in the new node.
 * Return: The address of the new node, or NULL if it failed.
 *
 * Description: if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL, *tmp = NULL;
	unsigned int count = 0;

	if (idx == 0)
	{
		node = malloc(sizeof(*node));
		if (node == NULL)
			return (NULL);

		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}

	for (tmp = *head; tmp; tmp = tmp->next)
	{
		if (idx == count + 1)
		{
			node = malloc(sizeof(*node));
			if (node == NULL)
				return (NULL);

			node->n = n;
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}

		count++;
	}

	return (NULL);
}
