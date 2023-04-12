#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars and initializes it
 * @c: the character of arrays
 * @size: the positive number of arrays
 *
 * Return: Always Success 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;


	ptr = malloc(size * sizeof(char));

	if (size == 0)
	return (NULL);

	else if (ptr == NULL)
	return (NULL);

	else
	{
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
	}
}
