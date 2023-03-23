#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 and 5 up to 1024
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 5))
	{
	z += i
	}
	i++
	}
	printf("%d\n", z);
	return (0);
}
