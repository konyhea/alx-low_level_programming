#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a listint_t
 * @head: pointer of the root of the list
 *
 * Return: the sum of all the data, 0 if the linked list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curr;

	sum = 0;
	curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
