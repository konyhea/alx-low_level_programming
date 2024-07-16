#include "search_algos.h"

/**
 * linear_search -  return first index of element in array.
 * @array: pointer to first array.
 * @size: number of elements in array.
 * @value: the value to search for.
 * Return: index of the first element if found or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = %d\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
