#include "search_algos.h"

/**
 * helper - recn fn that hielps the jump recursion
 * @array: the first eleement in the array
 * @size: the number of elements in the array
 * @end: the last eleemnt in the array
 * @idx: the index of a value in the array
 * @value: the coveeted vavlue
 *
 * Return: the index or -1 if not found
 */

int helper(int *array, size_t size, size_t end, size_t idx, int value)
{
	if (idx >= size || idx > end || array[idx] > value)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	if (array[idx] == value)
		return (idx);

	else
		return (helper(array, size, end, idx + 1, value));
}

/**
 * jump_recursion - helps the recursion of jump
 * @array: the first eleement in the array
 * @size: the number of elements in the array
 * @step: the distance of jump per shot
 * @idx: the index of a value in the array
 * @value: the coveeted vavlue
 *
 * Return: the index or -1 if not found
 */

int jump_recursion(int *array, size_t size, size_t step, size_t idx, int value)
{
	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	if (((idx + step < size) && array[idx + step] < value))
		return (jump_recursion(array, size, step, idx + step, value));
	printf("Value found between indexes [%lu] and [%lu]\n", idx, (idx + step));
	return (helper(array, size, idx + step, idx, value));
}

/**
 * jump_search - fn that searches for a value in a sorted array of integers
 * @array: ptr to first element in the array
 * @size: the aount of elements in the array
 * @value: the coveted value
 *
 * Return: index position of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (jump_recursion(array, size, sqrt(size), 0, value));
}
