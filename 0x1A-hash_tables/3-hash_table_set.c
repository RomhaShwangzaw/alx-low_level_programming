#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key. key can not be an empty string.
 * @value: the value associated with the key. value must be duplicated.
 *	   value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 * Description: In case of collision, add the new node at the
 *		beginning of the list.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *new;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = new_value;
			return (1);
		}
		node = node->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new_value);
		free(new);
		return (0);
	}
	new->value = new_value;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
