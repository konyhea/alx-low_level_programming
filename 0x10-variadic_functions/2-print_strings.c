#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings- function that prints strings followed by new line
 * @separator: the string to be printed b\w strings
 * @n: the number oof strings passed by function
 * @...: the function that allows indefinite n of strings
 *
 * Return: ...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(args, char *);

		if (strings != NULL)
		printf("%s", strings);
		else
		printf("(nil)");

		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}

	_putchar('\n');
	va_end(args);

}
