#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node @ position
 * @idx: s the index of the list where the new node should be added
 * @n: the data to be added to dlist
 * @h: head of the dlist
 *
 * Return: address of the new  list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = *h;

		if (*h != NULL)
		(*h)->prev = newnode;

		*h = newnode;
	}
	else
	{
		temp = *h;
			for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;

		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = temp->next;
		newnode->prev = temp;

		if (temp->next != NULL)
		temp->next->prev = newnode;
		temp->next = newnode;
	}

	return (newnode);

}
