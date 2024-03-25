#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements in a linked
 * @h: head of doubly list
 * Return: success
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numb_elements = 0;
	const dlistint_t *ptr = h;

		while (ptr != NULL)
	{
			numb_elements += 1;
			ptr = ptr->next;
	}
	return (numb_elements);
}
