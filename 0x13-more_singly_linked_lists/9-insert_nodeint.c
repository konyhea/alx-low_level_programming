#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the root
 * @idx: in dex of the node to be added
 * @n: the integr value of the node to be added
 *
 * Return: the address of the new node L
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *curr;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	i = 0;

	if (head == NULL)
	return (NULL);

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	curr = *head;
	while (i < idx - 1)
	{
	if (curr == NULL)
	{
			free(new_node);
			return (NULL);
	}
		curr = curr->next;
		i++;
	}

	new_node->next = curr->next;
	curr->next = new_node;

	return (new_node);
}
