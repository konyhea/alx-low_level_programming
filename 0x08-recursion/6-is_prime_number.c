#include "main.h"

/**
 * is_prime_number - function that returns 1
 * is_prime_helper - support the function
 * @i: is the number checker
 * @n: n is the number to be checked
 *
 * Return: Always 0
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
	return (0);
	}
	else if (i * i > n)
	{
	return (i);
	}
	else if (n % i == 0)
	{
	return (0);
	}
	else
	{
	return (is_prime_helper(n, i + 1));
	}

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
