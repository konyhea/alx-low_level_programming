#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end  - adds a new node to the end of a linked list
 * @head: a double pointer to the list
 * @str: to loop through the new node
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	while (str[len])
	len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);
	}

	while (last->next != NULL)
	last = last->next;

	last->next = new_node;

	return (new_node);
}
