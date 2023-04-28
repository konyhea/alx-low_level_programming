#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the begining of a linked list
 * @head: the double pointer to the list
 * @str: the string to be added
 *
 * Return: the address of the new elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	return (NULL);

	while (str[len])
	len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
