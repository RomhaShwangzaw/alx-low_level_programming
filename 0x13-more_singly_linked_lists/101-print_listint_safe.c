#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: The list to be printed.
 * Return: The number of nodes in the list.
 *
 * Description:
 * - This function can print lists with a loop.
 * - You should go through the list only once.
 * - If the function fails, exit the program with status 98.
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	printf("[%p] %d\n", (void *)head, head->n);
	count++;

	for (tmp = head->next; tmp; tmp = tmp->next)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		if (tmp <= tmp->next)
		{
			printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
			return (count);
		}
	}

	return (count);
}
