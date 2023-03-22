#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Takes in the address of a function and executes i
 *
 * @array: An array of numbers
 * @size: The size of the array
 * @action: The pointer that prints integers
 *
 * Description: Takes in array, int & a pointer to a function to print the arr
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
