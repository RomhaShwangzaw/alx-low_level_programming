#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table.
 *
 * Description: it prints the key/value in the order that they appear
 *		in the array of hash table.
 *		*** Order: array, list
 *		*** If ht is NULL, don’t print anything.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i, flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag = 1;
		}
	}
	printf("}\n");
}
