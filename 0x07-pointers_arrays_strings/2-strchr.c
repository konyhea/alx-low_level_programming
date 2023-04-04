#include "main.h"
#include <stddef.h>

/**
 * _strchr - functio n that locates a character in a string
 * @s: the string to serach for the eoccurrence
 * @c: the character been searched
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
