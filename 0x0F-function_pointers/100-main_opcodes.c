#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry code
 * @argc: the number of arguments
 * @argv: the pointer to arguments
 *
 * Return: Always success 0
 */

int main(int argc, char *argv[])
{
	int i, n;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx\n", ptr[i]);

		if (i < n - 1)
		printf(" ");
	}

	printf("\n");

	return (0);
}
