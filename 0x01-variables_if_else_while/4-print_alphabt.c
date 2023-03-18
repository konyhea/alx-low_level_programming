#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all letters except q and e
 *
 * Return: Always (Success)
 */

int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != e && c != q)
	putchar(c);
	}
	putchar('\n');
	return (0);
}
