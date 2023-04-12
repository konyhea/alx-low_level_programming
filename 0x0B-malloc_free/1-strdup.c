#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memo
 * @str: the string to take the space
 *
 * Return: Always success
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len;

	len = 0;

	if  (str == NULL)
	return (NULL);

	while (str[len])
	len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	ptr = str[i];

	ptr[len] = '\0';

	return (ptr);
}
