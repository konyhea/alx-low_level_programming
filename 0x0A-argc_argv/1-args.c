#include <stdio.h>

/**
 * main - entry point
 * @argc: this counts the amount of arguments
 * @argv: the pointer that pointer to this arguments
 *
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
