#include "main.h"
#include <stddef.h>

/**
 * *_strstr - function that locate a substring
 * @haystack: the string to check for needdle string occurence
 * @needle: the string to check
 * Return: Always Success
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	for (x = 0; haystack[x]; x++)
	{
		for (y = 0; needle[y]; y++)
		{
			if (haystack[x + y] != needle[y])
			break;
		}
		if (!needle[y])
		return (haystack + x);
	}

	return (NULL);
}
