#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: is the integer in questiom
 * @index: is the index of the bit you want to get
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);


}
