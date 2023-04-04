#include <stdio.h>
#include "main.h"

/**
 * *_memset - function that fills memory with constant byte
 * @s: return a pointer to the memory area
 * @b: the constant byte to be filled
 * @n: the n byes of the memory area
 *
 * Return: Always Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
