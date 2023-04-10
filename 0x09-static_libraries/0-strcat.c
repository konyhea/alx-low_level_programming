#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: string to be added
 * @src: the string added to
 *
 * Return: a pointer to a resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;


	while (dest[i] != '\0')
	{
	i++;
	}

	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	dest[i] = '\0';

	return (dest);
}
