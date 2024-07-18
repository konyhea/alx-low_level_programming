#include "search_algos.h"

/**
 * adb_recursion - recursion for advanced BS
 * @array: the first elem in the array
 * @l: left boundary
 * @r: right boundary
 * @value: sough value
 * @match: the first match of value
 *
 * Return: return match when found.
 */
int adb_recursion(int *array, size_t l, size_t r, int value, ssize_t *match)
{
	size_t i = l, mid;

	if (l > r)
		return (*match);

	printf("Searching in array: %d", array[i++]);

	while (i <= r)
		printf(", %d", array[i++]);

	printf("\n");

	mid = l + ((r - l) / 2);

	if (array[mid] == value)
	{
		*match = mid;

		if (r - l > 1)
			mid++;
	}

	else if (array[mid] < value)
		return (adb_recursion(array, mid + 1, r, value, match));
	if (mid != 0)
		return (adb_recursion(array, l, mid - 1, value, match));
	else
		return (*match);

}

/**
 * advanced_binary - fn that searches for value and return first
 * @array: the first elem in the pointer
 * @size: the number of items in the array
 * @value: the sought after value
 *
 * Return: match if found else - 1
 *
 */

int advanced_binary(int *array, size_t size, int value)
{
	ssize_t match = -1;

	if (array == NULL)
		return (-1);
	return (adb_recursion(array, 0, size - 1,  value, &match));
}
