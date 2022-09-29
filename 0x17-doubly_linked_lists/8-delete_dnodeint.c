#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 *					dlistint_t linked list.
 *
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int counter = 0;

	while (tmp)
	{
		if (counter == index)
		{
			if (tmp->prev != NULL)
				tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			if (index == 0)
				*head = tmp->next;

			free(tmp);
			return (1);
		}
		counter++;
		tmp = tmp->next;
	}

	return (-1);
}
