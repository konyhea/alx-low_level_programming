#include "lists.h"

/**
 * *add_dnodeint - function that adds a new node at the beginning of  dlt
 * @head: head of the doubly pointer
 * @n: the new data about to be inputed
 *
 * Return: the address of the new elements or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	nwnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}

	return (newnode);
}
