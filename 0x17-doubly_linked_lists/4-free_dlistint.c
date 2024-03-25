#include "lists.h"

/**
 * free_dlistint - function that frees a dlist
 * @head: head of the dlist
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *newnode, *nextnode;

	newnode = head;

	while (newnode != NULL)
	{
		nextnode = newnode->next;
		free(newnode);

		newnode = nextnode
	}
}
