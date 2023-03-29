#include "main.h"
#include <stdio.h>

/**
 * print_array - unction that prints n elements of an array of integers,
 * @a: pointer to be pointed
 * @n: number of elements of the array to be printed
 *
 * Return: ...
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i <  n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
