#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocated memory using malloc
 * @b: the size of the memory
 *
 * Return: ...
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
	{
	exit(98);
	}
	else
	return (ptr);
}
