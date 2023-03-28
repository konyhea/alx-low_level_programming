#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: input to swap first
 * @b: second input to swap
 *
 * Return: ...
 */

void swap_int(int *a, int *b)
{
	int monty;

	monty = *a;
	*a = *b;
	*b = monty;
}
