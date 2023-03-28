#include"main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: string to reverse
 *
 * Return: ...
 */

void rev_string(char *s)
{

	int i, length = 0;

	while (length != '\0')
	{
	length++;
	}
	for (i = 0; i < length / 2; i++)
	{
	char temp = s[i];

	s[i] = s[length - i - 1];
	s[length - i - 1] = temp;
	}
}
