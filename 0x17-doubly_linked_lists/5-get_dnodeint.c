#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlist.
 * @head: head of the dlist
 * @index: index of the new node
 * Return: if node dont exits send NULL
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

		while (temp != NULL)
	{
		if (i == index)
		return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
