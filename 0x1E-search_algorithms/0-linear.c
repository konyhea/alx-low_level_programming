#include "search_algos.h"


/**
 * ln_recursion - recursion to find linear saerch
 * @array: pointer to the first element in the array
 * @size: the size of the array
 * @value: the value sought after
 * @index: position to start traversing
 *
 *
 * Return: index if value found or - 1 if array is Null/.
 */


int ln_recursion(int *array, size_t size, int value, size_t index)
{
	if (index == size)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", index, array[index]);

	if (array[index] == value)
		return (index);
	return (ln_recursion(array, size, value,  index + 1));
}
/**
 * linear_search -  return first index of element in array.
 * @array: pointer to first eleent  array.
 * @size: number of elements in array.
 * @value: the value to search for.
 * Return: index of the first element if found or -1
*/
int linear_search(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);

	return (ln_recursion(array, size, value, 0));
}
