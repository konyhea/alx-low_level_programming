#include "hash_tables.h"

/**
 * hash_table_print - fn that prints a hash table
 * @ht: hash table
 *
 * Return: NULL if ht is empty, key/value pair else
 */

void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	int first = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	
	printf("{");
	for(i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
