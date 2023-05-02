#include "lists.h"

/**
 * pop_listint - function that deletes the head node od a listint_t
 * @head: pointer to a pointer of the head of the list
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;

	*head = temp->next;

	free(temp);

	return (n);
}
