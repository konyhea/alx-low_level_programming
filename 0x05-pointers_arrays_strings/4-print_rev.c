#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to reverse
 *
 * Return: ...
 */

void print_rev(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
