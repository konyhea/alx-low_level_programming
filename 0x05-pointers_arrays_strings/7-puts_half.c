#include "main.h"
#include <stdio.h>

/**
 * puts_half - Write a function that prints half of a string
 * @str: string to be displayed
 *
 * Return: ...
 */

void puts_half(char *str)
{
	int lenth = strlen(str);
	int n, i;

	n = (length % 2 == 0) ? length / 2 : (length - 1) / 2;
	for (i = n; i < length; i++)

	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
