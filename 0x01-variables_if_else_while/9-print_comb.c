#include <stdio.h>

/**
 * main - program that print all possible combination of single digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
