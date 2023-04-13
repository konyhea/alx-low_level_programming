#include <stdlib.h>

/**
 * strtow - funnction that split strings into words
 * word_count - function that counts lines
 * @str: array to be splitted
 *
 * Return: Always Success
 */

int word_count(char *str)
{
	int i;
	int count;
	int in_words;

	count = 0;
	in_words = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != 0 && !in_words)
		{
			count++;
			in_words  = 1;
		}
		else if (str[i] == 0)
		in_words = 0;
	}
	return (count);
}

char **strtow(char *str)
{
	char **words;
	int i, j, k, l;
	int len;
	int num_words;

	len = 0;
	l = 0;

	if (str == NULL || str[0] == '\0')
	return (NULL);

	num_words = word_count(str);

	if (num_words == 0)
	return (NULL);

	words = malloc(sizeof(char *) * (num_words + 1));

	if (words == NULL)
	return (NULL);

	i = 0;

	for (j = 0; j < num_words; j++)
	{
	while (str[i] == 0)
		i++;
	while (str[i] != 0 && str[i])
	{
		len++, i++;
	}
	words[j] = malloc(sizeof(char *) * (len + 1));
	if (words[j] == NULL)
	{
		for (k = 0; k < j; k++)
		free(words[k]),  free(words);
		return (NULL);
	}
	i -= len;
	for (i = 0; i < len; l++, i++)
	words[j][l] = str[i];
	words[j][l] = '\0';
	len = 0;
	}
	words[j] = NULL;
	return (words);
}
