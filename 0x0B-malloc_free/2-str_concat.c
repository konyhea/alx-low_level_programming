#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the string to add
 * @s2: the second string
 *
 * Return: Always Success 0
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int j;
	int len1;
	int len2;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1])
	len1++;
	while (s2[len2])
	len2++;

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	ptr[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		ptr[i] = s2[j];

	ptr[i] = '\0';

	return (ptr);

}
