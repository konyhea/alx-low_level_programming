#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a linked list
 * @h: the pointer to linked list
 *
 * Return: the number of nodes in the link
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str ==  NULL)
		printf("[0](nil)\n");

		else
		printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		c++;
	}

	return (c);
}
