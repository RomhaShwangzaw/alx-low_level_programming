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
	hash_node_t *node, *new, *tmp;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	node = ht->array[index];
	if (node != NULL)
	{
		tmp = node;
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = new->value;
				free(new->key);
				free(new);
				return (1);
			}
			tmp = tmp->next;
		}

		/* case of collision */
		new->next = ht->array[index];
	}
	ht->array[index] = new;

	return (1);
}
