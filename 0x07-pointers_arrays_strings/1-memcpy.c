#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: pointer to return memory area
 * @src: memory area been copied
 * @n: the number of bytes from memory rea
 *i
 * Return: Always success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i]
	return (dest);
}
