#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - set or fill memory with a constant byte
 * @b: char to mirror
 * @n: number of files to copy
 * @s: memory area to be filled
 *
 * Return: Always Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i < 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);
}


/**
 * _calloc - function that allocates memory for an array using malloc
 * @size: the size of bytes in the array
 * @nmemb: the array
 *
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	
	int *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	return (NULL);

	_mmemset(ptr, 0, nmemb * size);

	return (ptr);
}
