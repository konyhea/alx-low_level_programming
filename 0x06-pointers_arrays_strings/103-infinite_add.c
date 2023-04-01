#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * infinite_add - function that add two numbers
 * @n1: one of the two numbers to be added
 * @n2: second number to be added
 *
 * @r: will store the buffer result
 * @size_r: the buffer size
 * Return: ALways success
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = 0;
	int num1;
	int num2;
	int sum;

	size_r--;
	r[size_r] = '\0';
	size_r--;


	while (len1 > 0 || len2 > 0 || carry > 0)
	{
		if (size_r < 0)
		return (0);

		num1 = (len1 > 0) ? n1[len1 - 1] - '0' : 0;
		num2 = (len2 > 0) ? n2[len1 - 1] - '0' : 0;
		sum = num1 + num2 + carry;

		r[size_r] = (sum % 10) + '0';
		carry = sum / 10;

		len1--;
		len2--;
		size_r--;
		i++;
	}

	return (r + size_r + 1);
}
