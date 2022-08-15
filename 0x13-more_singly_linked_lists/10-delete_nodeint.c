#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * 'index' of a listint_t linked list.
 *
 * @head: The address of the start of the list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL, *prev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (tmp = *head; tmp; tmp = tmp->next)
	{
		if (index == count)
		{
			prev->next = tmp->next;
			free(tmp);
			return (1);
		}

		prev = tmp;
		count++;
	}

	return (-1);
}
