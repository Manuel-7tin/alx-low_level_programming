#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * alloc_grid - Creates a 2 dimensional array of integers
 *
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: Pointer to array (if successful) | NUll (if not)
 */

int **alloc_grid(int width, int height)
{
	int **array_2d;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	array_2d = malloc(height * sizeof(int *));
	if (array_2d == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		array_2d[j] = malloc(width * sizeof(int));
		if (array_2d[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(array_2d[j]);
			free(array_2d);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array_2d[i][j] = 0;
	}
	return (array_2d);
}
