#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabet in lowercase
 *Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
