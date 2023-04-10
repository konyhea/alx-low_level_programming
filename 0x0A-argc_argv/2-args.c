#include <stdio.h>

/**
 * main - entry point
 * @argc: the argument counts
 * @argv: the pointer that directs it pointer
 *
 * Return: Always Success 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
