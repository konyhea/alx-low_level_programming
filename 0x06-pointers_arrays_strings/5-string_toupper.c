#include "main.h"

/**
 * string_toupper - function that changes lowercase letters of a string
 * @s: string to be changed
 * Return: Always success
 */

char *string_toupper(char *s)
{
	while (*s)
	{
	if (*s >= 'a' && *s <= 'z')
	{
	*s = *s - 32;
	}
	s++;
	}
	return (s);
}
