#include "main.h"

/**
 * print_number - write a function that prints an integer
 * @n: integer to be printed
 *
 * Return: ...
 */
void print_number(int n)
{
	if (n < 10)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10)
	}
	_putchar(n % 10 + '0');
}
