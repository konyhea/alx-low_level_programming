#include <stdio.h>

/**
 * main - program that print all possible combination of single digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	if (i > 0)
	{
	putchar(',');
	putchar(' ');
	}
	putchar('\n');

	return (0);
}
