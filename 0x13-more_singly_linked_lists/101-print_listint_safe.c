#include "lists.h"

/**
 * new_node - adds a new node at the start of a linked list.
 * @head: The address of the start of the list.
 * @add: The data to be inserted into the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */
listadd_t *new_node(listadd_t **head, listint_t *add)
{
	listadd_t *node;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);

	node->add = add;
	node->next = *head;
	*head = node;

	return (node);
}

/**
 * check_looplist - checks if a linked list has a loop.
 * @head: The start of the list.
 * @node: The node to be checked for repetition/loop.
 * Return: 1 if there is a loop, 0 otherwise.
 */
unsigned int check_looplist(listadd_t *head, listint_t *node)
{
	listadd_t *h;

	for (h = head; h; h = h->next)
	{
		if (h->add == node)
			return (1);
	}

	return (0);
}

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
	listadd_t *start = NULL, *tmp = NULL;
	listint_t *h = NULL;

	if (head == NULL)
		return (0);

	printf("[%p] %d\n", (void *)head, head->n);
	count++;

	for (h = head->next; h; h = h->next)
	{
		if ((h != head) && (check_looplist(start, h) == 0))
		{
			printf("[%p] %d\n", (void *)h, h->n);
			count++;
			tmp = new_node(&start, h);
			if (tmp == NULL)
				exit(98);
		}
		else
		{
			printf("-> [%p] %d\n", (void *)h, h->n);
			return (count);
		}
	}

	return (count);
}
