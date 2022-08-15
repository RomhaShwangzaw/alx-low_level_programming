#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: The address of the start of the list to be reversed.
 * Return: A pointer to the first node of the reversed list.
 *
 * Description:
 * - You are not allowed to use more than 1 loop.
 * - You are not allowed to use malloc, free or arrays.
 * - You can only declare a maximum of two variables in your function.
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
