#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 *
 * @format: is a list of typrs of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *str;
	char c;

	i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
			printf("%c", va_arg(args, int));
			break;

			case 'i':
			printf("%d", va_arg(args, int));
			break;

			case 'f':
			printf("%f", va_arg(args, double));
			break;

			case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
			printf("(nil)");
			break;
			}
			printf("%s", str);
			break;
			}
		if ((c == 'c' || c == 'i' || c == 'f' || c == 's') && format[i + 1])
		printf(" , ");
		i++;
	}
		va_end(args);
		printf("\n");
}
