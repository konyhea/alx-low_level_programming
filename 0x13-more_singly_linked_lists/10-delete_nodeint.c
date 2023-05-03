#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete a node at index
 * @head: the pointer to a pointer
 * @index: index of the node that should be deleted
 *
 * Return: if success return 1 else return -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	current = *head;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL)
		return (-1);
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	return (-1);

	prev = current->next;
	current->next = prev->next;
	free(prev);

	return (1);
}
