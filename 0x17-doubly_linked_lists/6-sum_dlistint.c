#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of a dlist
 * @head: head of the summed dlist
 *
 * Return: empty list return 0 else return sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	return (0);

		while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
