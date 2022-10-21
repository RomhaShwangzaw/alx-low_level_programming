#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table.
 * @size: the size of the table.
 * Return: A pointer to the table on success, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * shash_table_set - adds an element to the hash table.
 * The key/value pair should be inserted in the sorted list at the right place.
 * we want to create a sorted linked list, by key (sorted on ASCII value),
 * that we can print by traversing it.
 *
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key. key can not be an empty string.
 * @value: the value associated with the key. value must be duplicated.
 * value can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 * In case of collision, add the new node at the beginning of the list.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *new;
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
	new = malloc(sizeof(shash_node_t));
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
	if (sorted_insert(&ht, &new) == 0)
		return (0);
	return (1);
}

/**
 * sorted_insert - insert a node into a sorted linked list.
 * @ht: the address of the hash table containing info about the head and tail
 * of the sorted linked list.
 * @node: the address of the node to be inserted.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int sorted_insert(shash_table_t **ht, shash_node_t **node)
{
	shash_node_t *head, *tail;

	head = (*ht)->shead;
	if (head == NULL)
	{
		(*node)->sprev = (*node)->snext = NULL;
		(*ht)->shead = (*ht)->stail = *node;
		return (1);
	}

	while (head)
	{
		if (strcmp((*node)->key, head->key) <= 0)
		{
			(*node)->sprev = head->sprev;
			(*node)->snext = head;
			head->sprev = *node;
			if ((*node)->sprev == NULL)
				(*ht)->shead = *node;
			else
				(*node)->sprev->snext = *node;

			return (1);
		}
		head = head->snext;
	}

	tail = (*ht)->stail;
	(*node)->snext = NULL;
	(*node)->sprev = tail;
	tail->snext = *node;
	(*ht)->stail = *node;
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 * Return: the value associated with the element,
 *	   or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the hash table using the sorted linked list.
 * @ht: the hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	while (node)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the hash tables key/value pairs
 * in reverse order using the sorted linked list.
 *
 * @ht: the hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->stail;
	while (node)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		flag = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(ht->array);
	free(ht);
}
