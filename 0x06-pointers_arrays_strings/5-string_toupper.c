#include "main.h"

/**
 * string_toupper - function that changes lowercase letters of a string
 * @s: string to be changed
 * Return: Always success
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
	if (*p >= 'a' && *p <= 'z')
	{
	*p = *p - 32;
	}
	p++;
	}
	return (s);
}
