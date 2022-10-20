#include "hash_tables.h"
#include <string.h>

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
	hash_node_t *node, *new = NULL;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (strlen(key) == 0)
		return (0);

	node = ht->array[index];
	if (node == NULL)
	{
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		return (1);
	}
	else
	{
		/* case of collision */
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = node;
		ht->array[index] = new;
	}

	return (1);
}
