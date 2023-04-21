#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints number followed by new line
 * @separator: string to be printed between numbers
 * @n: bumber of integers passed to the funnction
 *
 * Return: Always Success 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d ", num);

		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}

	va_end(args);
	putchar('\n');
}
