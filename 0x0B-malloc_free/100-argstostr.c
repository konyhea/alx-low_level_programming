#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: the number of arguments
 * @av: pointer to this arguments
 *
 * Return: Always success 0
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k;
	int l;

	if (ac == 0 || av == NULL)
	return (NULL);

	l = 0;
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		l++;
		l++;
	}

	ptr = malloc(sizeof(char *) * (l + 1));

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		ptr[k] = av[i][j];
		ptr[k + 1] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
}
