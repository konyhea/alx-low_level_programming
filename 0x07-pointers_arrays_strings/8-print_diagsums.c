#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that print sum of two diagonal of a matrix
 * @a: the input array
 * @size: the size of  the input array
 *
 * Return: ...
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d ,", sum1);
	printf("%d", sum2);

}
