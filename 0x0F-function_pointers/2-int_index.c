#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 *
 * @array: An array of integers to pick from
 * @size: The size of the array
 * @cmp: Pointer to a comparson function
 *
 * Description: Searches for an integer using the pointer to a comparison func
 * Return: (int) The index of that number in the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
