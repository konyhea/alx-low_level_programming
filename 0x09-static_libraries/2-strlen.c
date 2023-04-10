#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: the string poinet
 *
 * Return: Always 1 successs
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	{
	n++;
	}
	return (n);
}
