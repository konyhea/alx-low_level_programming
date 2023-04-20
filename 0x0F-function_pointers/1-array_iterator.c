#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: the array
 * @size: the size of the array
 * @action: the pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
