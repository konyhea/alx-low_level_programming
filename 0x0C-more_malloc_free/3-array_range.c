#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the values of min in array
 * @max: the values of max in array
 *
 * Return: pointer to the new arrat
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	return (NULL);

	for (i = 0; min <= max; i++, min++)
	ptr[i] = min;

	return (ptr);
}
