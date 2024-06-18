#include "hash_tables.h"

/**
 * hash_table_get - fn that retrieves value from a key
 * @ht: the hash table to search from
 * @key: the key to pick from
 *
 * Return: NULL if empty Value if Present
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *item;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	item = ht->array[index];
	
	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}

	return (NULL);
}
