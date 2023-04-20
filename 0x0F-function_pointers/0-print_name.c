#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - function that prints a name
 * @name: character to be printed
 * @f: the pointer to a function that prints name
 *
 * Return: ...
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
