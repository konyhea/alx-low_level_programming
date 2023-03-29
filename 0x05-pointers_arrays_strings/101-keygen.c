#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always Success
 */

int main(void)
{
	int i;
	int password_length;
	char password[100];

	srand(time(NULL));
	password_length = rand() % 10 + 8;


	for (i = 0; i < password_length; i++)
	{
		password[i] = rand() % 94 + 33;
	}
	password[i] = '\0';
	printf("%s\n", password);

	return (0);

}
