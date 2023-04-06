#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: the number to have the effect
 * Return: Always Success
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	n * factorial(n - 1);
		}
		return (0);
}
