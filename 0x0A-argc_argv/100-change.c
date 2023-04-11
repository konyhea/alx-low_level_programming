#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: the amount of arguments
 * @argv: the pointer to those arguments
 *
 * Return: Always Success 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins;
	int size;
	int i;
	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);
	coins = 0;

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	size = sizeof(denominations) / sizeof(int);

	for (i = 0; i < size; i++)
	{
	coins += cents / denominations[i];
	cents %= denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}
