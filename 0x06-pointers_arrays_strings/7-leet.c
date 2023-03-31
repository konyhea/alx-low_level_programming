#include "main.h"

/**
 * leet - function that encodes a string to 1337
 * @str: string to be encoded
 *
 * Return: Always success 1
 */

char *leet(char *str)
{
	int i;
	int j;
	char leet[] = "aAeEoOtTlL";
	char replace[] = "4433007711";


	for (i = 0; str[i]; i++)
	{
	for (i = 0; j < 10; j++)
	{
		if (str[i] == leet[j])
		{
			str[i] = replace[j];
			break;
		}
	}
	}
	return (str);
}
