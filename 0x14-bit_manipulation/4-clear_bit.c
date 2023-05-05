#include "main.h"

/**
 * clear_bit - function that sets the vvalue of a bit to 0
 * @n: the pointer to the integer
 * @index: the index starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked and -1 if an error occur
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	return (-1);

	*n &= -(1UL << index);
	return (1);
}
