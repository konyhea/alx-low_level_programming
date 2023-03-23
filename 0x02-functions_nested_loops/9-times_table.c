#include "main.h"

/**
 * times_table -  prints the 9 times table starting with 0
 * Return: empty output
 */

void times_table(void)
{
	int i, x;

	for (i = 0; i <= 10; i++)
	{
		x = 9 * i;
		_putchar(i + '0');
		_putchar(x + '0');
	}
	_putchar('\n');
}
