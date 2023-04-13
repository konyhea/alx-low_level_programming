#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function to return a pointer to a 2 dimensional array of intege
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: Always Success 0
 */

int **alloc_grid(int width, int height)
{
	int j;
	int i;
	int **ptr;

	if (width <= 0 || height <= 0)
	return (NULL);

	ptr = malloc(sizeof(int) * height);

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);


		if (ptr[i] == NULL)
		{
		for (j = 0; j < i; j++)
		free(ptr[j]);
		free(ptr);

		return (NULL);
		}
		for  (j = 0; j < width; j++)
		ptr[i][j] = 0;
	}
		return (ptr);
}
