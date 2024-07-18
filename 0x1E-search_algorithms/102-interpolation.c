#include "search_algos.h"

/**
 * int_recursion - recursion for the int search
 * @array: the first element in the array
 * @low: the left bound of the array
 * @high: the right bound of the array
 * @value: the value sought after
 *
 * Return: index of the sought value or - 1
 */

int int_recursion(int *array, size_t low, size_t high, int value)
{
	 size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
			 * (value - array[low]));

	if (pos > high)
	{
		printf("value checked array[%lu] is out of range\n", pos);
		return (-1);
	}

	if (low > high)
		return (-1);

	printf("value checked array[%lu] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
		return (pos);

	else if (array[pos] > value)
		return (int_recursion(array, low, pos - 1, value));

	return (int_recursion(array, pos + 1, high, value));
}

/**
 * interpolation_search - fn to searh an array using in_recursion
 * @array: the first element in the array
 * @size: the nuber of elements  in the array
 * @value: the coveted value sought for
 *
 * Return: index of the value or -1 if empty or 404
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (int_recursion(array, 0, size - 1, value));
}
