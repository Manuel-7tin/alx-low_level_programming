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
	array_2d = malloc(height * width *  sizeof(int));
	if (array_2d == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		i = 0;
		for ( ; i < width; i++)
		array_2d[j][i]  = 0;
	}
	return (array_2d);
}
