#include "search_algos.h"

/**
 * bn_search - binary search employed in expon search
 * @array: the first elem in the array
 * @l: the left boundray
 * @r: the right boundary
 * @value: the coveted value
 *
 * Return: the index of value or - 1 if NULL
 */
int bn_search(int *array, size_t l, size_t r, int value)
{
	size_t i = l, mid;

	if (l > r)
		return (-1);

	printf("Searching in array: %d", array[i++]);
	while (i <= r)
		printf(", %d", array[i++]);
	printf("\n");

	mid = l + ((r - l) / 2);

	if (array[mid] == value)
		return (mid);

	else if (array[mid] > value)
	{
		if (mid != 0)
			return (bn_search(array, l, mid - 1, value));
		else
			return (-1);
	}

	else
		return (bn_search(array, mid + 1, r, value));
}

/**
 * exponential_search - using exponentail method to find value
 * @array: the first element in the array
 * @size: the number of elements in the array
 * @value: the sought after value
 *
 *
 * Return: index of value or - 1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t r = 1, l;

	if (array == NULL)
		return (-1);

	while (r < size && array[r] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", r, array[r]);
		r *= 2;
	}

	if (array[r] == value)
		return (r);
	l = r / 2;


	if (r >= size)
		r = size - 1;
		printf("Value found between indexes [%lu] and [%lu]\n", l, r);

	return (bn_search(array, l, r, value));
}
