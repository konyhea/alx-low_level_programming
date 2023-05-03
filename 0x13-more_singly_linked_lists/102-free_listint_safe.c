#include "lists.h"

/**
 * free_listint_safe - free a linked list
 * @h: double pointer to the head of the link
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	listint_t *slow, *fast;
	size_t c;

	c = 0;

	if (h == NULL || *h == NULL)
	return (0);

	slow = *h;
	fast = *h;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		c++;
		temp = slow;
		slow = slow->next;
		fast = fast->next;
		free(temp);

		if (slow == fast)
		{
			free(slow);
			*h = NULL;
			return (c + 1);
		}
	}

	while (slow != NULL)
	{
		c++;
		temp = slow;
		slow = slow->next;
		free(temp);
	}

	*h = NULL;

	return (c);
}
