#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: sizeof memory to allocate
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (malloc(b));
}
