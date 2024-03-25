#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index dlist
 * @head: head of the dlist
 * @index: index of the node to be deleted
 *
 * Return: 1 if succesfully and -1 fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

		while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	return (-1);

	if (temp->prev != NULL)
	temp->prev->next = temp->next;

	if (temp->next != NULL)
	temp->next->prev = temp->prev;

	if (i == 0)
	*head = temp->next;

	free(temp);
	return (1);

}
