#include "main.h"

/**
 * get_bit - Gets the bit at a particular index
 *
 * @n: the number whose bit we'd use
 * @index: The index of the bit
 *
 * Return: The bit at the index or -1 if it fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, j = 0;

	do {
		i = n >> 1;
		i = n - (2 * i);
		if (n < 2 && index == 0)
			return (i);
		if (j++ == index)
			return (i);
		n >>= 1;
	} while (n != 0);
	return (-1);
}
