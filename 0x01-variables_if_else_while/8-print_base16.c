#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;

	for (i = 0; i < 16; i++)
	{
	if (i < 10)
	{
	putchar(i + '0');
	}
	else if
	{
	putchar(i - 10 + 'a');
	}
	}
	putchar('\n');

	return (0);
}
