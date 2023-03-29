#include"main.h"
#include <string.h>

/**
 * rev_string - Write a function that reverses a string.
 * @s: string to reverse
 *
 * Return: ...
 */

void rev_string(char *s)
{
	int length, i;
	char temp;

	length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
