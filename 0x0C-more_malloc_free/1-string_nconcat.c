#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenated two strings
 * @s1: the first string
 * @s2: the seccond string
 * @n: the first bytes of s2
 *
 * Return: Always Success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *ptr;

	l1 = 0;
	l2 = 0;


	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";


	while (s1 && s1[l1])
	l1++;

	while (s2 && s2[l2])
	l2++;

	if (n >= l2)
	n = l2;

	ptr = malloc(sizeof(char) * (l1 + n + 1));

	for (i = 0; i < l1; i++)
	ptr[i] = s1[i];

	for (j = 0; j < n; j++, i++)
	ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
