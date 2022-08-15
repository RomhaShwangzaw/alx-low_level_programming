#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: The list whose sum of all the data of its elements is to be printed.
 * Return: The sum of all the data (n) of the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h;

	for (h = head; h; h = h->next)
		sum += h->n;

	return (sum);
}
