#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: A pointer to the head of the linked list.
 * @idx: The index of the list where the new node should be added.
 *						Index starts at 0.
 *
 * @n: The integer to be inserted in the new node.
 * Return: The address of the new node, or NULL if it failed.
 *
 * Description: If it is not possible to add the new node at index idx,
 *				do not add the new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new;
	unsigned int counter = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}

	while (head)
	{
		if (counter == idx)
		{
			new->prev = head->prev;
			head->prev = new;
			new->next = head;
			new->prev->next = new;
			return (new);
		}
		counter++;
		head = head->next;
	}

	free(new);
	return (NULL);
}
