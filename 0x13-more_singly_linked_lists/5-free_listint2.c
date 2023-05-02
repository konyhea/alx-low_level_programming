#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to pointer
 *
 * Return: ...
 */

void free_listint2(listint_t **head)
{
	listint_t curr

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
