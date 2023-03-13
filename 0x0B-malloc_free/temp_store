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
	int *array_1d;
	int **array_2d;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	array_1d = malloc(width * sizeof(int));
	array_2d = malloc(height * sizeof(int));
	if (array_1d == NULL || array_2d == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			array_1d[i] = 0;
		array_2d[j] = array_1d;
	}
	return (array_2d);
}
