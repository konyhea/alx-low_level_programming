#include "lists.h"

/**
 * list_len - returns thee number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}

	return (s);
}
