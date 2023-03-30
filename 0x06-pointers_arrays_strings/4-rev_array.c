#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: the array to be reversed
 * @n: the number of elements
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - i - 1] = temp;
	}
}
