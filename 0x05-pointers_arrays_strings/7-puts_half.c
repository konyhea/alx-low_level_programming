#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Write a function that prints half of a string
 * @str: string to be displayed
 *
 * Return: ...
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int n, i;

	if (length % 2 == 0)
	i = length / 2;
	else 
	i = (length - 1) / 2;

	for (i = n; i < length; i++)

	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
