#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: the size of the triangle
 *
 * Return: Always Success
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
	for (j = 0; j < size - 1; j++)
	_putchar(' ');
	for (j = 0; j < i; j++)
	_putchar('#');
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
