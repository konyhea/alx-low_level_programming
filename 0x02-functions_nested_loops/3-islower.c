#include "main.h"

/**
 * _islower - returns 1 if c is upercase, return 0 otherwise
 * @c: The character to be checked
 * Return: 1 for lowercase  0 for otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
