#include "search_algos.h"

/**
 * binary_search - fnc that search for a value in a sorted array of integeers.
 * @array: pointer to the fist element in the array to search from
 * @size:  the n umber of elements in the array
 * @value: key to search for in the array
 *
 * Return: if array is NULL or value not found return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = low + (high - low) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value <= array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	return (-1);
}
