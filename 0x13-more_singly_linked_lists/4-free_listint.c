#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: pointer to the root of the list
 *
 * Return: ...
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
