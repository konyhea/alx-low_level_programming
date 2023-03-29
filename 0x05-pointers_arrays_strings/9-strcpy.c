#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: copying destination
 * @src: copying source
 *
 * Return: Always 1 Success
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
