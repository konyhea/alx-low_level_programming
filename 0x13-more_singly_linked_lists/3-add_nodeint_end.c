#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node at the end of a linked list
 * @head: the pointer to the pointer
 * @n: the next integer
 *
 * Return: the address of thee new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *loop;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* if it an empty list */

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	loop = *head;

	while (loop->next != NULL)
	{
		loop = loop->next;
	}

	loop->next = new_node;

	return (new_node);
}
