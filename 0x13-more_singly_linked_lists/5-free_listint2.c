#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to pointer
 *
 * Return: ...
 */

void free_listint2(listint_t **head)
{
	listint_t curr = *head;

	while (curr != NULL)
	{
		listint_t prev = curr;
		curr = curr->next;
		free(prev);
	}
	*head = NULL;
}
