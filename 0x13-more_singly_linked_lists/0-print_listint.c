#include "lists.h"

/**
 * print_listint - function that print all elements of a list_int list
 * @h: struct declaration of root node
 *
 *  Return: return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;
	const struct listint_s *rtr;

	rtr = h;
	count = 0;

	while (rtr != NULL)
	{
		printf("%d\n", rtr->n);
		count++;
		rtr = rtr->next;
	}

	return (count);
}
