#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s:the byte to compare
 * @accept: the bytes that cconsist of bytes from accept
 *
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			break;
		}
		if (!accept[y])
		break;
	}
	return (x);
}
