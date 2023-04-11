#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the amount of arguments passed on thee program
 * @argv: the pointer to pointer
 *
 * Return: Always Success 0
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;


	sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
