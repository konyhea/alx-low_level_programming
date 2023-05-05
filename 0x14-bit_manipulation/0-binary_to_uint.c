#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number to be converted
 *
 * Return: print out the converted number or 0 if it fails it condition
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int result;


	if (b == NULL)
	return  (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' &&  b[i] != '1')
		return (0);

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
