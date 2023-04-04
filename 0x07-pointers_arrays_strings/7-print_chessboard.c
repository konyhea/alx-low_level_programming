#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: the pointer to locate the memory address of the array
 *
 * Return: Always success
 */

void print_chessboard(char (*a)[8])
{
	char *p;

	p = &a[0][0];

	for (p; p <= &a[7][7]; p++)
	{
	_putchar("%c ", *p);
	}
	_putchar("\n");
}
