#include "lists.h"
/**
 * print_dlistint - function that prints all elements
 * @h: header of doubly list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t numb_node = 0;

		while (ptr != NULL)
	{
			printf("%d", ptr->n);
			printf("\n");
			numb_node += 1;
			ptr = ptr->next;
	}
	return (numb_node);
}
