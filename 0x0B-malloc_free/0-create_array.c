#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creates a array of inputted size containing inputed char
 *
 * @size: The inputed size (int)
 * @c: The inputted char (char)
 *
 * Return: *Pointer to array (if succesful) | NUll (if not)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr_array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ptr_array = malloc(size);
	if (ptr_array == NULL)
		return (NULL);
	while (i < size)
	{
		*(ptr_array + i) = c;
		i++;
	}
	return (ptr_array);
}
