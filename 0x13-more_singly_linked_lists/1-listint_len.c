#include "lists.h"

/**
 * listint_len - function that return the number of elements in a linked list
 * @h: the root of the node
 *
 * Return: length of a linked list
 *
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *rtr;
	size_t i;

	rtr = h;
	i = 0;

	while (rtr != NULL)
	{
		rtr = rtr->next;
		i++;
	}

	return (i);
}
