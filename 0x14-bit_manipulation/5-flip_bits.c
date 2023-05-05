#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the parametr to flip
 * @m: number flipped to
 *
 * Return: the count is returned
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip_result;
	unsigned int count = 0;

	flip_result = n ^ m;

	while (flip_result)
	{
		count += flip_result & 1;
		flip_result >>= 1;
	}

	return (count);
}
