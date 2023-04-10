#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: the number...
 * @index: the index
 *
 * Return: 1 if successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 1 << index;

	*n |= i;
	return (1);
}
