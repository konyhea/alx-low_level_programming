#include "main.h"

/**
 * print_sign  - print the sign of a number
 * @n: letter to be checked
 *
 * Return: 1 for number greater than 0, 0 if number is zero
 * and -1 when number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
