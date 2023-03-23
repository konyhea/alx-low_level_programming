#include <stdio.h>

/**
 * main - Write a program that finds and prints the first 98 Fibonacci numbe
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always Success
 */

int main(void)
{
	int i;
	unsigned int a = 1, b = 2, c;

	printf("%u, %u, ", a, b);

	for (i = 2; i < 98; i++)
	{
	c = a + b;
	printf("%u", c);
	if (i != 97)
	{
	printf(", ");
	}
	a = b;
	b = c;
	}
	printf("\n");
	return (0);
}
