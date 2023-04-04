#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches for any string for any set of bytes
 * @s: the parent string
 * @accept: the string to be used as a tester for comparism
 * Return: Always success
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			return (s + x);
		}
	}
	return (NULL);
}
