#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: Always 0 success
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
	{
		while (i < 13)
		s[i] += 13;
		s[i] -= 13;
	}
	}
	return (s);
}
