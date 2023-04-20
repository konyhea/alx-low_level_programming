#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: the second integer
 *
 * Return: The summation of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns difference bwtween a and b
 * @a: first integer
 * @b: the second integer
 *
 * Return: the difference between a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that return the product of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that return the division
 * @a: the first number
 * @b: the number used to divide
 *
 * Return: the result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that return the remainder of the division
 * @a: the first number
 * @b: the number to divide
 *
 * Return: the remainder of division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
