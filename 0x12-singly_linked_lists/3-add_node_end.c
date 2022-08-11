#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: The address of the start of the list.
 * @str: The string to be inserted in the new node.
 * Return: The address of the new element, or NULL if it failed.
 *
 * Description: str needs to be duplicated.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL;
	list_t *tmp;
	unsigned int len;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);

	if (str)
		node->str = strdup(str);

	for (len = 0; str[len]; len++)
		;
	node->len = len;
	node->next = NULL;

	for (tmp = *head; tmp->next; tmp = tmp->next)
		;

	/* At this point, tmp is the last node */
	tmp->next = node;

	return (node);
}
