#include "main.h"
#include <stdio.h>

/**
 * wildcmp - function that compares two string
 * @s1: one of the string to compare
 * @s2: one of the string to compare
 *
 * Return: Always 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
	if (*(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else
	{
	return (0);
	}
}
