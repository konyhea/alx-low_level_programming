#include "hash_tables.h"

/**
 * create_item - creates a new item in the table
 * @key: the key of the char
 * @value: the value of the key
 *
 * Return: your new item created
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = strdup(key);

	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);

	if (node->value == NULL)
	{
		free(node->key);
		free(node);

		return (NULL);
	}

	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - add items to a hash table
 * @ht: the hash table we are injecting items to
 * @key: the key of the value
 * @value: the value for the key pair
 *
 * Return: 1 on success 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int long index = hash_djb2((const unsigned char *)key) % ht->size;
	hash_node_t *node = create_item(key, value);
	hash_node_t *presentnode = ht->array[index];

	if (ht == NULL || key == NULL ||  strlen(key) == 0)
		return (0);

	while (presentnode != NULL)
	{
		if (strcmp(presentnode->key, key) == 0)
		{
			free(presentnode->value);
			presentnode->value = strdup(value);

			if (presentnode->value == NULL)
				return (0);
			return (1);
		}
	}

	if (node  == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
