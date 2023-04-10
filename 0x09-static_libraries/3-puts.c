#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: value to print
 *
 * Return: ...
 */

void _puts(char *str)
{
	while (*str != 0)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
