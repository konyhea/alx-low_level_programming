#include "search_algos.h"

/**
 *
 *
 *
 *
 *
 *
 */
int bn_search(int *array, size_t l, size_t r, int value)
{
	size_t i = l, mid;

	if (l > r)
		return (-1);

	printf("Searching in array: %d", array[i++]);
	while(i <= r)
		printf(",  %d", array[i++]);
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
 *
 *
 *
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
