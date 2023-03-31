#include "main.h"
#include <stdio.h>
#include  <ctype.h>

/**
 * print_buffer - function that prints a buffer
 * @b: the poinet is been pointed
 * @size: the function must print the content bytes
 *
 * Return: ...
 */

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{

		if (i + j < size)
		printf("%02x ", b[i + j]);
		else
		printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
		if (i + j < size)
		printf("%c", isprint(b[i + j]) ? b[i + j] : '.');
		}
		printf("\n");
	}
	if (size <= 0)
	printf("\n");
}
