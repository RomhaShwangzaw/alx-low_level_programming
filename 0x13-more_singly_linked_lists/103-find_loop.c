#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: The head of the list, to be checked for a loop.
 * Return: The address of the node where the loop starts,
 *			or NULL if there is no loop.
 *
 * Description:
 * - You are not allowed to use malloc, free or arrays.
 * - You can only declare a maximum of two variables in your function.
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = NULL;

	for (tmp = head; tmp; tmp = tmp->next)
	{
		if (tmp < tmp->next)
			return (tmp->next);
	}

	return (NULL);
}
