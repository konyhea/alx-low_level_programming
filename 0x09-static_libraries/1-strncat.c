#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: the string that will be joined
 * @src: the string to be added
 * @n: the number of bytes
 *
 * Return: the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
	i++;
	}

	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	j++;
	i++;
	}

	dest[i] = '\0';

	return (dest);
}
